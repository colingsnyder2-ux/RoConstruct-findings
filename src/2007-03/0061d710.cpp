// roc 2007-03 0061d710  unit: seg_00610000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061d710
//
// 0061d710  83ec0c               sub esp, 0xc
// 0061d713  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061d717  d901                 fld dword ptr [ecx]
// 0061d719  56                   push esi
// 0061d71a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0061d71e  8d86a8040000         lea eax, [esi + 0x4a8]
// 0061d724  d918                 fstp dword ptr [eax]
// 0061d726  50                   push eax
// 0061d727  d94104               fld dword ptr [ecx + 4]
// 0061d72a  d95804               fstp dword ptr [eax + 4]
// 0061d72d  d94108               fld dword ptr [ecx + 8]
// 0061d730  d95808               fstp dword ptr [eax + 8]
// 0061d733  d9410c               fld dword ptr [ecx + 0xc]
// 0061d736  d9580c               fstp dword ptr [eax + 0xc]
// 0061d739  ff15b0eb7700         call dword ptr [0x77ebb0]
// 0061d73f  d9e8                 fld1 
// 0061d741  83ec08               sub esp, 8
// 0061d744  8bce                 mov ecx, esi
// 0061d746  dd1c24               fstp qword ptr [esp]
// 0061d749  e8826ce5ff           call 0x4743d0
// 0061d74e  6a00                 push 0
// 0061d750  8bce                 mov ecx, esi
// 0061d752  e849a8e5ff           call 0x477fa0
// 0061d757  d9ee                 fldz 
// 0061d759  d9542404             fst dword ptr [esp + 4]
// 0061d75d  8d442404             lea eax, [esp + 4]
// 0061d761  d95c2408             fstp dword ptr [esp + 8]
// 0061d765  50                   push eax
// 0061d766  d9e8                 fld1 
// 0061d768  8bce                 mov ecx, esi
// 0061d76a  d95c2410             fstp dword ptr [esp + 0x10]
// 0061d76e  e86d74e5ff           call 0x474be0
// 0061d773  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061d777  51                   push ecx
// 0061d778  8bce                 mov ecx, esi
// 0061d77a  e85175e5ff           call 0x474cd0
// 0061d77f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061d783  52                   push edx
// 0061d784  8bce                 mov ecx, esi
// 0061d786  e84575e5ff           call 0x474cd0
// 0061d78b  8bce                 mov ecx, esi
// 0061d78d  5e                   pop esi
// 0061d78e  83c40c               add esp, 0xc
// 0061d791  e97a81e5ff           jmp 0x475910
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?line2d@DrawPrimitives@RBX@@SAXABVVector2@G3D@@0PAVRenderDevice@4@ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
