// from server: 100% by auto
// roc 2008-06 0045adc0  unit: G3D::GImage  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045adc0
//
// 0045adc0  6aff                 push -1
// 0045adc2  68482a7c00           push 0x7c2a48
// 0045adc7  64a100000000         mov eax, dword ptr fs:[0]
// 0045adcd  50                   push eax
// 0045adce  64892500000000       mov dword ptr fs:[0], esp
// 0045add5  51                   push ecx
// 0045add6  56                   push esi
// 0045add7  8bf1                 mov esi, ecx
// 0045add9  89742404             mov dword ptr [esp + 4], esi
// 0045addd  c70670978100         mov dword ptr [esi], 0x819770
// 0045ade3  8d4e04               lea ecx, [esi + 4]
// 0045ade6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045adee  ff1568248000         call dword ptr [0x802468]
// 0045adf4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045adf8  c70650978100         mov dword ptr [esi], 0x819750
// 0045adfe  5e                   pop esi
// 0045adff  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ae06  83c410               add esp, 0x10
// 0045ae09  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1TextureArgs@TextureManager@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
