// roc 2009-06 00704ec0  unit: RBX::AdornG3D  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00704ec0
//
// 00704ec0  83ec0c               sub esp, 0xc
// 00704ec3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00704ec7  d901                 fld dword ptr [ecx]
// 00704ec9  56                   push esi
// 00704eca  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00704ece  8d86a8040000         lea eax, [esi + 0x4a8]
// 00704ed4  d918                 fstp dword ptr [eax]
// 00704ed6  50                   push eax
// 00704ed7  d94104               fld dword ptr [ecx + 4]
// 00704eda  d95804               fstp dword ptr [eax + 4]
// 00704edd  d94108               fld dword ptr [ecx + 8]
// 00704ee0  d95808               fstp dword ptr [eax + 8]
// 00704ee3  d9410c               fld dword ptr [ecx + 0xc]
// 00704ee6  d9580c               fstp dword ptr [eax + 0xc]
// 00704ee9  ff1594eb8900         call dword ptr [0x89eb94]
// 00704eef  d9e8                 fld1 
// 00704ef1  83ec08               sub esp, 8
// 00704ef4  8bce                 mov ecx, esi
// 00704ef6  dd1c24               fstp qword ptr [esp]
// 00704ef9  e8b29dd9ff           call 0x49ecb0
// 00704efe  6a00                 push 0
// 00704f00  8bce                 mov ecx, esi
// 00704f02  e819dad9ff           call 0x4a2920
// 00704f07  d9ee                 fldz 
// 00704f09  d9542404             fst dword ptr [esp + 4]
// 00704f0d  8d442404             lea eax, [esp + 4]
// 00704f11  d95c2408             fstp dword ptr [esp + 8]
// 00704f15  50                   push eax
// 00704f16  d9e8                 fld1 
// 00704f18  8bce                 mov ecx, esi
// 00704f1a  d95c2410             fstp dword ptr [esp + 0x10]
// 00704f1e  e8fda4d9ff           call 0x49f420
// 00704f23  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00704f27  51                   push ecx
// 00704f28  8bce                 mov ecx, esi
// 00704f2a  e8e1a5d9ff           call 0x49f510
// 00704f2f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00704f33  52                   push edx
// 00704f34  8bce                 mov ecx, esi
// 00704f36  e8d5a5d9ff           call 0x49f510
// 00704f3b  8bce                 mov ecx, esi
// 00704f3d  5e                   pop esi
// 00704f3e  83c40c               add esp, 0xc
// 00704f41  e92ab0d9ff           jmp 0x49ff70
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?line2d@DrawPrimitives@RBX@@SAXABVVector2@G3D@@0PAVRenderDevice@4@ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
