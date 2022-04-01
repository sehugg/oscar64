#ifndef SIDFX_H
#define SIDFX_H

#include <c64/sid.h>

struct SIDFX
{
	unsigned	freq, pwm;
	byte		ctrl, attdec, susrel;
	sbyte		dfreq, dpwm;
	byte		time1, time0;
};

void sidfx_init(void);

inline void sidfx_play(byte chn, SIDFX * fx, byte cnt);

void sidfx_stop(byte chn);

void sidfx_loop(void);

void sidfx_loop_2(void);

#pragma compile("sidfx.c")

#endif
