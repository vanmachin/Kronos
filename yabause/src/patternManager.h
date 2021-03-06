#ifndef __PATTERN_MANAGER_H__
#define __PATTERN_MANAGER_H__

#include "core.h"
#include "vdp1.h"
#include "vdp2.h"

#define SAMPLE 24
#define PIX_SIZE (SAMPLE+16)

typedef struct sPattern {
	u32 *pix;
	int width;
	int height;
        int offset;
	int managed;
        u8 pixSample[PIX_SIZE];
} Pattern;

Pattern* getPattern(vdp1cmd_struct *cmd, u8* ram, Vdp2 * regs);
void releasePattern();
void addPattern(vdp1cmd_struct *cmd, u8* ram, u32 *pix, int offset, Vdp2 * regs);
void deinitPatternCache();
void resetPatternCache();
void initPatternCache();

#endif
