// from server: 100% by auto
// roc 2008-06 00511000  unit: G3D::GCamera  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00511000
//
// 00511000  6aff                 push -1
// 00511002  6848617d00           push 0x7d6148
// 00511007  64a100000000         mov eax, dword ptr fs:[0]
// 0051100d  50                   push eax
// 0051100e  64892500000000       mov dword ptr fs:[0], esp
// 00511015  51                   push ecx
// 00511016  56                   push esi
// 00511017  8bf1                 mov esi, ecx
// 00511019  89742404             mov dword ptr [esp + 4], esi
// 0051101d  8d4e0c               lea ecx, [esi + 0xc]
// 00511020  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00511028  e8d3fdffff           call 0x510e00
// 0051102d  8b06                 mov eax, dword ptr [esi]
// 0051102f  50                   push eax
// 00511030  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00511038  e8e36cffff           call 0x507d20
// 0051103d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00511041  83c404               add esp, 4
// 00511044  c70600000000         mov dword ptr [esi], 0
// 0051104a  c7460400000000       mov dword ptr [esi + 4], 0
// 00511051  c7460800000000       mov dword ptr [esi + 8], 0
// 00511058  5e                   pop esi
// 00511059  64890d00000000       mov dword ptr fs:[0], ecx
// 00511060  83c410               add esp, 0x10
// 00511063  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
