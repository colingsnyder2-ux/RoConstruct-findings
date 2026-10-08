// roc 2007-08 00475470  unit: CInstanceRecord::CNameItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475470
//
// 00475470  56                   push esi
// 00475471  8bf1                 mov esi, ecx
// 00475473  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 00475479  85c9                 test ecx, ecx
// 0047547b  7416                 je 0x475493
// 0047547d  c6861101000001       mov byte ptr [esi + 0x111], 1
// 00475484  8b01                 mov eax, dword ptr [ecx]
// 00475486  8b5014               mov edx, dword ptr [eax + 0x14]
// 00475489  56                   push esi
// 0047548a  ffd2                 call edx
// 0047548c  c6861101000000       mov byte ptr [esi + 0x111], 0
// 00475493  5e                   pop esi
// 00475494  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?afterPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
