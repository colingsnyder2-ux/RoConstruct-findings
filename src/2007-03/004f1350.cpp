// roc 2007-03 004f1350  unit: seg_004f0000  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f1350
//
// 004f1350  83ec50               sub esp, 0x50
// 004f1353  53                   push ebx
// 004f1354  55                   push ebp
// 004f1355  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 004f1359  56                   push esi
// 004f135a  8b742464             mov esi, dword ptr [esp + 0x64]
// 004f135e  57                   push edi
// 004f135f  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 004f1363  57                   push edi
// 004f1364  56                   push esi
// 004f1365  ffd5                 call ebp
// 004f1367  83c408               add esp, 8
// 004f136a  84c0                 test al, al
// 004f136c  741e                 je 0x4f138c
// 004f136e  56                   push esi
// 004f136f  8d4c2414             lea ecx, [esp + 0x14]
// 004f1373  e8f836f8ff           call 0x474a70
// 004f1378  57                   push edi
// 004f1379  8bce                 mov ecx, esi
// 004f137b  e84022f8ff           call 0x4735c0
// 004f1380  8d442410             lea eax, [esp + 0x10]
// 004f1384  50                   push eax
// 004f1385  8bcf                 mov ecx, edi
// 004f1387  e83422f8ff           call 0x4735c0
// 004f138c  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 004f1390  56                   push esi
// 004f1391  53                   push ebx
// 004f1392  ffd5                 call ebp
// 004f1394  83c408               add esp, 8
// 004f1397  84c0                 test al, al
// 004f1399  741e                 je 0x4f13b9
// 004f139b  53                   push ebx
// 004f139c  8d4c2414             lea ecx, [esp + 0x14]
// 004f13a0  e8cb36f8ff           call 0x474a70
// 004f13a5  56                   push esi
// 004f13a6  8bcb                 mov ecx, ebx
// 004f13a8  e81322f8ff           call 0x4735c0
// 004f13ad  8d4c2410             lea ecx, [esp + 0x10]
// 004f13b1  51                   push ecx
// 004f13b2  8bce                 mov ecx, esi
// 004f13b4  e80722f8ff           call 0x4735c0
// 004f13b9  57                   push edi
// 004f13ba  56                   push esi
// 004f13bb  ffd5                 call ebp
// 004f13bd  83c408               add esp, 8
// 004f13c0  84c0                 test al, al
// 004f13c2  741e                 je 0x4f13e2
// 004f13c4  56                   push esi
// 004f13c5  8d4c2414             lea ecx, [esp + 0x14]
// 004f13c9  e8a236f8ff           call 0x474a70
// 004f13ce  57                   push edi
// 004f13cf  8bce                 mov ecx, esi
// 004f13d1  e8ea21f8ff           call 0x4735c0
// 004f13d6  8d542410             lea edx, [esp + 0x10]
// 004f13da  52                   push edx
// 004f13db  8bcf                 mov ecx, edi
// 004f13dd  e8de21f8ff           call 0x4735c0
// 004f13e2  5f                   pop edi
// 004f13e3  5e                   pop esi
// 004f13e4  5d                   pop ebp
// 004f13e5  5b                   pop ebx
// 004f13e6  83c450               add esp, 0x50
// 004f13e9  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Med3@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@00P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
