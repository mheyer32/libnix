#include "stabs.h"

/* Absolute definitions for the custom chips
 * Most of them are recommended not to use
 */

ABSDEF(custom,  0x00dff000);
ABSDEF(bltddat, 0x00dff000);
ABSDEF(dmaconr, 0x00dff002);
ABSDEF(vposr,   0x00dff004);
ABSDEF(vhposr,  0x00dff006);
ABSDEF(dskdatr, 0x00dff008);
ABSDEF(joy0dat, 0x00dff00a);
ABSDEF(joy1dat, 0x00dff00c);
ABSDEF(clxdat,  0x00dff00e);
ABSDEF(adkconr, 0x00dff010);
ABSDEF(pot0dat, 0x00dff012);
ABSDEF(pot1dat, 0x00dff014);
ABSDEF(potinp,  0x00dff016);
ABSDEF(serdatr, 0x00dff018);
ABSDEF(dskbytr, 0x00dff01a);
ABSDEF(intenar, 0x00dff01c);
ABSDEF(intreqr, 0x00dff01e);
ABSDEF(dskpt,   0x00dff020);
ABSDEF(dsklen,  0x00dff024);
ABSDEF(dskdat,  0x00dff026);
ABSDEF(refptr,  0x00dff028);
ABSDEF(vposw,   0x00dff02a);
ABSDEF(vhposw,  0x00dff02c);
ABSDEF(copcon,  0x00dff02e);
ABSDEF(serdat,  0x00dff030);
ABSDEF(serper,  0x00dff032);
ABSDEF(potgo,   0x00dff034);
ABSDEF(joytest, 0x00dff036);
ABSDEF(strequ,  0x00dff038);
ABSDEF(strvbl,  0x00dff03a);
ABSDEF(strhor,  0x00dff03c);
ABSDEF(strlong, 0x00dff03e);
ABSDEF(bltcon0, 0x00dff040);
ABSDEF(bltcon1, 0x00dff042);
ABSDEF(bltafwm, 0x00dff044);
ABSDEF(bltalwm, 0x00dff046);
ABSDEF(bltcpt,  0x00dff048);
ABSDEF(bltbpt,  0x00dff04c);
ABSDEF(bltapt,  0x00dff050);
ABSDEF(bltdpt,  0x00dff054);
ABSDEF(bltsize, 0x00dff058);
ABSDEF(bltcon0l,0x00dff05a);
ABSDEF(bltsizv, 0x00dff05c);
ABSDEF(bltsizh, 0x00dff05e);
ABSDEF(bltcmod, 0x00dff060);
ABSDEF(bltbmod, 0x00dff062);
ABSDEF(bltamod, 0x00dff064);
ABSDEF(bltdmod, 0x00dff066);
ABSDEF(bltcdat, 0x00dff070);
ABSDEF(bltbdat, 0x00dff072);
ABSDEF(bltadat, 0x00dff074);
ABSDEF(sprhdat, 0x00dff078);
ABSDEF(bplhdat, 0x00dff07a);
ABSDEF(deniseid,0x00dff07c);
ABSDEF(dsksync, 0x00dff07e);
ABSDEF(cop1lc,  0x00dff080);
ABSDEF(cop2lc,  0x00dff084);
ABSDEF(copjmp1, 0x00dff088);
ABSDEF(copjmp2, 0x00dff08a);
ABSDEF(copins,  0x00dff08c);
ABSDEF(diwstrt, 0x00dff08e);
ABSDEF(diwstop, 0x00dff090);
ABSDEF(ddfstrt, 0x00dff092);
ABSDEF(ddfstop, 0x00dff094);
ABSDEF(dmacon,  0x00dff096);
ABSDEF(clxcon,  0x00dff098);
ABSDEF(intena,  0x00dff09a);
ABSDEF(intreq,  0x00dff09c);
ABSDEF(adkcon,  0x00dff09e);
ABSDEF(aud,     0x00dff0a0);
ABSDEF(bplpt,   0x00dff0e0);
ABSDEF(bplcon0, 0x00dff100);
ABSDEF(bplcon1, 0x00dff102);
ABSDEF(bplcon2, 0x00dff104);
ABSDEF(bplcon3, 0x00dff106);
ABSDEF(bpl1mod, 0x00dff108);
ABSDEF(bpl2mod, 0x00dff10a);
ABSDEF(bplcon4, 0x00dff10c);
ABSDEF(clxcon2, 0x00dff10e);
ABSDEF(bpldat,  0x00dff110);
ABSDEF(sprpt,   0x00dff120);
ABSDEF(spr,     0x00dff140);
ABSDEF(color,   0x00dff180);
ABSDEF(htotal,  0x00dff1c0);
ABSDEF(hsstop,  0x00dff1c2);
ABSDEF(hbstrt,  0x00dff1c4);
ABSDEF(hbstop,  0x00dff1c6);
ABSDEF(vtotal,  0x00dff1c8);
ABSDEF(vsstop,  0x00dff1ca);
ABSDEF(vbstrt,  0x00dff1cc);
ABSDEF(vbstop,  0x00dff1ce);
ABSDEF(sprhstrt,0x00dff1d0);
ABSDEF(sprhstop,0x00dff1d2);
ABSDEF(bplhstrt,0x00dff1d4);
ABSDEF(bplhstop,0x00dff1d6);
ABSDEF(hhposw,  0x00dff1d8);
ABSDEF(hhposr,  0x00dff1da);
ABSDEF(beamcon0,0x00dff1dc);
ABSDEF(hsstrt,  0x00dff1de);
ABSDEF(vsstrt,  0x00dff1e0);
ABSDEF(hcenter, 0x00dff1e2);
ABSDEF(diwhigh, 0x00dff1e4);
ABSDEF(fmode,   0x00dff1fc);
