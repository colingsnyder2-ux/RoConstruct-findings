// roc 2007-08 005ab3f0  unit: RBX::World  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab3f0
//
// 005ab3f0  d944240c             fld dword ptr [esp + 0xc]
// 005ab3f4  56                   push esi
// 005ab3f5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ab3f9  57                   push edi
// 005ab3fa  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ab3fe  51                   push ecx
// 005ab3ff  8d4624               lea eax, [esi + 0x24]
// 005ab402  d91c24               fstp dword ptr [esp]
// 005ab405  50                   push eax
// 005ab406  8d4f24               lea ecx, [edi + 0x24]
// 005ab409  51                   push ecx
// 005ab40a  e811ffffff           call 0x5ab320
// 005ab40f  83c40c               add esp, 0xc
// 005ab412  84c0                 test al, al
// 005ab414  7503                 jne 0x5ab419
// 005ab416  5f                   pop edi
// 005ab417  5e                   pop esi
// 005ab418  c3                   ret 
// 005ab419  d9442418             fld dword ptr [esp + 0x18]
// 005ab41d  51                   push ecx
// 005ab41e  d91c24               fstp dword ptr [esp]
// 005ab421  56                   push esi
// 005ab422  57                   push edi
// 005ab423  e858ffffff           call 0x5ab380
// 005ab428  83c40c               add esp, 0xc
// 005ab42b  84c0                 test al, al
// 005ab42d  5f                   pop edi
// 005ab42e  0f95c0               setne al
// 005ab431  5e                   pop esi
// 005ab432  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fuzzyEq@Math@RBX@@SA_NABVCoordinateFrame@G3D@@0MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
