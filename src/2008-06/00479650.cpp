// roc 2008-06 00479650  unit: CInstanceRecord::CNameItem  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479650
//
// 00479650  51                   push ecx
// 00479651  8b81e8030000         mov eax, dword ptr [ecx + 0x3e8]
// 00479657  85c0                 test eax, eax
// 00479659  750b                 jne 0x479666
// 0047965b  8b09                 mov ecx, dword ptr [ecx]
// 0047965d  8b01                 mov eax, dword ptr [ecx]
// 0047965f  8b5008               mov edx, dword ptr [eax + 8]
// 00479662  ffd2                 call edx
// 00479664  eb03                 jmp 0x479669
// 00479666  8b4040               mov eax, dword ptr [eax + 0x40]
// 00479669  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0047966d  8b542408             mov edx, dword ptr [esp + 8]
// 00479671  8d0c24               lea ecx, [esp]
// 00479674  51                   push ecx
// 00479675  6806140000           push 0x1406
// 0047967a  6802190000           push 0x1902
// 0047967f  6a01                 push 1
// 00479681  6a01                 push 1
// 00479683  48                   dec eax
// 00479684  50                   push eax
// 00479685  52                   push edx
// 00479686  ff15b8298000         call dword ptr [0x8029b8]
// 0047968c  d90424               fld dword ptr [esp]
// 0047968f  59                   pop ecx
// 00479690  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getDepthBufferValue@RenderDevice@G3D@@QBENHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
