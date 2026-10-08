// roc 2008-06 00478620  unit: CInstanceRecord::CNameItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478620
//
// 00478620  56                   push esi
// 00478621  8bf1                 mov esi, ecx
// 00478623  8b8e88040000         mov ecx, dword ptr [esi + 0x488]
// 00478629  85c9                 test ecx, ecx
// 0047862b  7416                 je 0x478643
// 0047862d  c6861101000001       mov byte ptr [esi + 0x111], 1
// 00478634  8b01                 mov eax, dword ptr [ecx]
// 00478636  8b5014               mov edx, dword ptr [eax + 0x14]
// 00478639  56                   push esi
// 0047863a  ffd2                 call edx
// 0047863c  c6861101000000       mov byte ptr [esi + 0x111], 0
// 00478643  5e                   pop esi
// 00478644  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?afterPrimitive@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
