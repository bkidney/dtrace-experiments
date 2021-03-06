/*
 * Generated by dtrace(1M).
 */

#ifndef	_USDT_PROVIDER_H
#define	_USDT_PROVIDER_H

#include <unistd.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define USDT_STABILITY "___dtrace_stability$usdt$v1$1_1_0_1_1_0_1_1_0_1_1_0_1_1_0"

#define USDT_TYPEDEFS "___dtrace_typedefs$usdt$v2$636c6f636b696e666f5f74"

#if !defined(DTRACE_PROBES_DISABLED) || !DTRACE_PROBES_DISABLED

#define	USDT_CLOCK_TICK(arg0) \
do { \
	__asm__ volatile(".reference " USDT_TYPEDEFS); \
	__dtrace_probe$usdt$clock__tick$v1$636c6f636b696e666f5f74202a(arg0); \
	__asm__ volatile(".reference " USDT_STABILITY); \
} while (0)
#define	USDT_CLOCK_TICK_ENABLED() \
	({ int _r = __dtrace_isenabled$usdt$clock__tick$v1(); \
		__asm__ volatile(""); \
		_r; })


extern void __dtrace_probe$usdt$clock__tick$v1$636c6f636b696e666f5f74202a(const clockinfo_t *);
extern int __dtrace_isenabled$usdt$clock__tick$v1(void);

#else

#define	USDT_CLOCK_TICK(arg0) \
do { \
	} while (0)
#define	USDT_CLOCK_TICK_ENABLED() (0)

#endif /* !defined(DTRACE_PROBES_DISABLED) || !DTRACE_PROBES_DISABLED */


#ifdef	__cplusplus
}
#endif

#endif	/* _USDT_PROVIDER_H */
