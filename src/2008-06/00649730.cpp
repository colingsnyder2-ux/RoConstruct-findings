// roc 2008-06 00649730  unit: RBX::Ball  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649730
//
// 00649730  83ec24               sub esp, 0x24
// 00649733  8b442428             mov eax, dword ptr [esp + 0x28]
// 00649737  50                   push eax
// 00649738  8d4c2404             lea ecx, [esp + 4]
// 0064973c  51                   push ecx
// 0064973d  e86e5af9ff           call 0x5df1b0
// 00649742  d9e8                 fld1 
// 00649744  d9542414             fst dword ptr [esp + 0x14]
// 00649748  83c408               add esp, 8
// 0064974b  d9542410             fst dword ptr [esp + 0x10]
// 0064974f  d9542414             fst dword ptr [esp + 0x14]
// 00649753  d9442408             fld dword ptr [esp + 8]
// 00649757  d8d9                 fcomp st(1)
// 00649759  dfe0                 fnstsw ax
// 0064975b  f6c441               test ah, 0x41
// 0064975e  8d442408             lea eax, [esp + 8]
// 00649762  7404                 je 0x649768
// 00649764  8d442414             lea eax, [esp + 0x14]
// 00649768  d900                 fld dword ptr [eax]
// 0064976a  d9442404             fld dword ptr [esp + 4]
// 0064976e  d8da                 fcomp st(2)
// 00649770  dfe0                 fnstsw ax
// 00649772  f6c441               test ah, 0x41
// 00649775  8d442404             lea eax, [esp + 4]
// 00649779  7404                 je 0x64977f
// 0064977b  8d442410             lea eax, [esp + 0x10]
// 0064977f  d900                 fld dword ptr [eax]
// 00649781  d90424               fld dword ptr [esp]
// 00649784  d8db                 fcomp st(3)
// 00649786  dfe0                 fnstsw ax
// 00649788  ddda                 fstp st(2)
// 0064978a  f6c441               test ah, 0x41
// 0064978d  8d0424               lea eax, [esp]
// 00649790  7404                 je 0x649796
// 00649792  8d44240c             lea eax, [esp + 0xc]
// 00649796  d900                 fld dword ptr [eax]
// 00649798  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0064979c  d95c2418             fstp dword ptr [esp + 0x18]
// 006497a0  52                   push edx
// 006497a1  d9c9                 fxch st(1)
// 006497a3  8d44241c             lea eax, [esp + 0x1c]
// 006497a7  d95c2420             fstp dword ptr [esp + 0x20]
// 006497ab  50                   push eax
// 006497ac  d95c2428             fstp dword ptr [esp + 0x28]
// 006497b0  e8dbfbffff           call 0x649390
// 006497b5  d9e8                 fld1 
// 006497b7  83c408               add esp, 8
// 006497ba  d90424               fld dword ptr [esp]
// 006497bd  d8d1                 fcom st(1)
// 006497bf  dfe0                 fnstsw ax
// 006497c1  ddd9                 fstp st(1)
// 006497c3  f6c405               test ah, 5
// 006497c6  7a0c                 jp 0x6497d4
// 006497c8  dec9                 fmulp st(1)
// 006497ca  d80d38b08400         fmul dword ptr [0x84b038]
// 006497d0  83c424               add esp, 0x24
// 006497d3  c3                   ret 
// 006497d4  ddd8                 fstp st(0)
// 006497d6  d80d38b08400         fmul dword ptr [0x84b038]
// 006497dc  83c424               add esp, 0x24
// 006497df  c3                   ret 
// library rbxgs-dll/v8kernel\Constants.cpp (function ?getJointK@Constants@RBX@@SA?BMABVVector3@G3D@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8kernel/Constants.cpp
