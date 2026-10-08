// roc 2007-08 0062f970  unit: RBX::IndexBox  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062f970
//
// 0062f970  83ec0c               sub esp, 0xc
// 0062f973  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062f977  d901                 fld dword ptr [ecx]
// 0062f979  56                   push esi
// 0062f97a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0062f97e  8d86a8040000         lea eax, [esi + 0x4a8]
// 0062f984  d918                 fstp dword ptr [eax]
// 0062f986  50                   push eax
// 0062f987  d94104               fld dword ptr [ecx + 4]
// 0062f98a  d95804               fstp dword ptr [eax + 4]
// 0062f98d  d94108               fld dword ptr [ecx + 8]
// 0062f990  d95808               fstp dword ptr [eax + 8]
// 0062f993  d9410c               fld dword ptr [ecx + 0xc]
// 0062f996  d9580c               fstp dword ptr [eax + 0xc]
// 0062f999  ff150ceb7700         call dword ptr [0x77eb0c]
// 0062f99f  d9e8                 fld1 
// 0062f9a1  83ec08               sub esp, 8
// 0062f9a4  8bce                 mov ecx, esi
// 0062f9a6  dd1c24               fstp qword ptr [esp]
// 0062f9a9  e82249e4ff           call 0x4742d0
// 0062f9ae  6a00                 push 0
// 0062f9b0  8bce                 mov ecx, esi
// 0062f9b2  e88984e4ff           call 0x477e40
// 0062f9b7  d9ee                 fldz 
// 0062f9b9  d9542404             fst dword ptr [esp + 4]
// 0062f9bd  8d442404             lea eax, [esp + 4]
// 0062f9c1  d95c2408             fstp dword ptr [esp + 8]
// 0062f9c5  50                   push eax
// 0062f9c6  d9e8                 fld1 
// 0062f9c8  8bce                 mov ecx, esi
// 0062f9ca  d95c2410             fstp dword ptr [esp + 0x10]
// 0062f9ce  e80d51e4ff           call 0x474ae0
// 0062f9d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0062f9d7  51                   push ecx
// 0062f9d8  8bce                 mov ecx, esi
// 0062f9da  e8f151e4ff           call 0x474bd0
// 0062f9df  8b542418             mov edx, dword ptr [esp + 0x18]
// 0062f9e3  52                   push edx
// 0062f9e4  8bce                 mov ecx, esi
// 0062f9e6  e8e551e4ff           call 0x474bd0
// 0062f9eb  8bce                 mov ecx, esi
// 0062f9ed  5e                   pop esi
// 0062f9ee  83c40c               add esp, 0xc
// 0062f9f1  e9fa5de4ff           jmp 0x4757f0
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?line2d@DrawPrimitives@RBX@@SAXABVVector2@G3D@@0PAVRenderDevice@4@ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
