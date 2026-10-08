// roc 2007-03 00501630  unit: seg_00500000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501630
//
// 00501630  56                   push esi
// 00501631  8bf1                 mov esi, ecx
// 00501633  8b4644               mov eax, dword ptr [esi + 0x44]
// 00501636  57                   push edi
// 00501637  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050163b  8d0c38               lea ecx, [eax + edi]
// 0050163e  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00501641  7e0e                 jle 0x501651
// 00501643  8b5634               mov edx, dword ptr [esi + 0x34]
// 00501646  57                   push edi
// 00501647  03d0                 add edx, eax
// 00501649  52                   push edx
// 0050164a  8bce                 mov ecx, esi
// 0050164c  e81ffdffff           call 0x501370
// 00501651  8b4640               mov eax, dword ptr [esi + 0x40]
// 00501654  034644               add eax, dword ptr [esi + 0x44]
// 00501657  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050165b  57                   push edi
// 0050165c  50                   push eax
// 0050165d  51                   push ecx
// 0050165e  e87fdb1100           call 0x61f1e2
// 00501663  017e44               add dword ptr [esi + 0x44], edi
// 00501666  83c40c               add esp, 0xc
// 00501669  5f                   pop edi
// 0050166a  5e                   pop esi
// 0050166b  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readBytes@BinaryInput@G3D@@QAEXHPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
