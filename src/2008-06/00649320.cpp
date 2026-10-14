// roc 2008-06 00649320  unit: RBX::Ball  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649320
//
// 00649320  d90530c48100         fld dword ptr [0x81c430]
// 00649326  d9442404             fld dword ptr [esp + 4]
// 0064932a  d8d1                 fcom st(1)
// 0064932c  dfe0                 fnstsw ax
// 0064932e  ddd9                 fstp st(1)
// 00649330  f6c405               test ah, 5
// 00649333  7a09                 jp 0x64933e
// 00649335  ddd8                 fstp st(0)
// 00649337  d905ecaf8400         fld dword ptr [0x84afec]
// 0064933d  c3                   ret 
// 0064933e  d905e8af8400         fld dword ptr [0x84afe8]
// 00649344  d8d9                 fcomp st(1)
// 00649346  dfe0                 fnstsw ax
// 00649348  f6c441               test ah, 0x41
// 0064934b  7509                 jne 0x649356
// 0064934d  ddd8                 fstp st(0)
// 0064934f  d905e4af8400         fld dword ptr [0x84afe4]
// 00649355  c3                   ret 
// 00649356  d90568378400         fld dword ptr [0x843768]
// 0064935c  d8d9                 fcomp st(1)
// 0064935e  dfe0                 fnstsw ax
// 00649360  f6c441               test ah, 0x41
// 00649363  7509                 jne 0x64936e
// 00649365  ddd8                 fstp st(0)
// 00649367  d905e0af8400         fld dword ptr [0x84afe0]
// 0064936d  c3                   ret 
// 0064936e  d81ddcaf8400         fcomp dword ptr [0x84afdc]
// 00649374  dfe0                 fnstsw ax
// 00649376  f6c405               test ah, 5
// 00649379  7a07                 jp 0x649382
// 0064937b  d905489b8100         fld dword ptr [0x819b48]
// 00649381  c3                   ret 
// 00649382  d9e8                 fld1 
// 00649384  c3                   ret 
// library rbxgs-dll/v8kernel\Constants.cpp (function ?getElasticMultiplier@Constants@RBX@@SA?BMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8kernel/Constants.cpp
