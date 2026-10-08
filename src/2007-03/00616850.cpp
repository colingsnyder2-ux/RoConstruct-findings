// roc 2007-03 00616850  unit: seg_00610000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00616850
//
// 00616850  d9ee                 fldz 
// 00616852  33c0                 xor eax, eax
// 00616854  56                   push esi
// 00616855  8bf1                 mov esi, ecx
// 00616857  8906                 mov dword ptr [esi], eax
// 00616859  d95618               fst dword ptr [esi + 0x18]
// 0061685c  894604               mov dword ptr [esi + 4], eax
// 0061685f  d9561c               fst dword ptr [esi + 0x1c]
// 00616862  894608               mov dword ptr [esi + 8], eax
// 00616865  d95e20               fstp dword ptr [esi + 0x20]
// 00616868  89460c               mov dword ptr [esi + 0xc], eax
// 0061686b  894610               mov dword ptr [esi + 0x10], eax
// 0061686e  894614               mov dword ptr [esi + 0x14], eax
// 00616871  894624               mov dword ptr [esi + 0x24], eax
// 00616874  c7462806000000       mov dword ptr [esi + 0x28], 6
// 0061687b  e85011edff           call 0x4e79d0
// 00616880  d900                 fld dword ptr [eax]
// 00616882  d95e2c               fstp dword ptr [esi + 0x2c]
// 00616885  d94004               fld dword ptr [eax + 4]
// 00616888  d95e30               fstp dword ptr [esi + 0x30]
// 0061688b  d94008               fld dword ptr [eax + 8]
// 0061688e  d95e34               fstp dword ptr [esi + 0x34]
// 00616891  e83a11edff           call 0x4e79d0
// 00616896  d900                 fld dword ptr [eax]
// 00616898  8d4e44               lea ecx, [esi + 0x44]
// 0061689b  d95e38               fstp dword ptr [esi + 0x38]
// 0061689e  d94004               fld dword ptr [eax + 4]
// 006168a1  d95e3c               fstp dword ptr [esi + 0x3c]
// 006168a4  d94008               fld dword ptr [eax + 8]
// 006168a7  d95e40               fstp dword ptr [esi + 0x40]
// 006168aa  e84154eeff           call 0x4fbcf0
// 006168af  d9ee                 fldz 
// 006168b1  8bc6                 mov eax, esi
// 006168b3  d95664               fst dword ptr [esi + 0x64]
// 006168b6  d95668               fst dword ptr [esi + 0x68]
// 006168b9  d95e6c               fstp dword ptr [esi + 0x6c]
// 006168bc  5e                   pop esi
// 006168bd  c3                   ret 
// library rbxgs/tool\RunDragger.cpp (function ??0RunDragger@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
