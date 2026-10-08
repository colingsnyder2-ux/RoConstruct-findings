// roc 2008-06 006781f0  unit: RBX::AdornG3D  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006781f0
//
// 006781f0  83ec0c               sub esp, 0xc
// 006781f3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006781f7  d901                 fld dword ptr [ecx]
// 006781f9  56                   push esi
// 006781fa  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006781fe  8d86a8040000         lea eax, [esi + 0x4a8]
// 00678204  d918                 fstp dword ptr [eax]
// 00678206  50                   push eax
// 00678207  d94104               fld dword ptr [ecx + 4]
// 0067820a  d95804               fstp dword ptr [eax + 4]
// 0067820d  d94108               fld dword ptr [ecx + 8]
// 00678210  d95808               fstp dword ptr [eax + 8]
// 00678213  d9410c               fld dword ptr [ecx + 0xc]
// 00678216  d9580c               fstp dword ptr [eax + 0xc]
// 00678219  ff15f4298000         call dword ptr [0x8029f4]
// 0067821f  d9e8                 fld1 
// 00678221  83ec08               sub esp, 8
// 00678224  8bce                 mov ecx, esi
// 00678226  dd1c24               fstp qword ptr [esp]
// 00678229  e812f4dfff           call 0x477640
// 0067822e  6a00                 push 0
// 00678230  8bce                 mov ecx, esi
// 00678232  e8d931e0ff           call 0x47b410
// 00678237  d9ee                 fldz 
// 00678239  d9542404             fst dword ptr [esp + 4]
// 0067823d  8d442404             lea eax, [esp + 4]
// 00678241  d95c2408             fstp dword ptr [esp + 8]
// 00678245  50                   push eax
// 00678246  d9e8                 fld1 
// 00678248  8bce                 mov ecx, esi
// 0067824a  d95c2410             fstp dword ptr [esp + 0x10]
// 0067824e  e85dfbdfff           call 0x477db0
// 00678253  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00678257  51                   push ecx
// 00678258  8bce                 mov ecx, esi
// 0067825a  e841fcdfff           call 0x477ea0
// 0067825f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00678263  52                   push edx
// 00678264  8bce                 mov ecx, esi
// 00678266  e835fcdfff           call 0x477ea0
// 0067826b  8bce                 mov ecx, esi
// 0067826d  5e                   pop esi
// 0067826e  83c40c               add esp, 0xc
// 00678271  e91a07e0ff           jmp 0x478990
// library rbxgs-appdraw/DrawPrimitives.cpp (function ?line2d@DrawPrimitives@RBX@@SAXABVVector2@G3D@@0PAVRenderDevice@4@ABVColor4@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw DrawPrimitives.cpp
