// roc 2009-12 005faa80  unit: G3D::LineSegment  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005faa80
//
// 005faa80  6aff                 push -1
// 005faa82  687c3c9300           push 0x933c7c
// 005faa87  64a100000000         mov eax, dword ptr fs:[0]
// 005faa8d  50                   push eax
// 005faa8e  64892500000000       mov dword ptr fs:[0], esp
// 005faa95  51                   push ecx
// 005faa96  56                   push esi
// 005faa97  8bf1                 mov esi, ecx
// 005faa99  89742404             mov dword ptr [esp + 4], esi
// 005faa9d  c706602d9c00         mov dword ptr [esi], 0x9c2d60
// 005faaa3  8d4e28               lea ecx, [esi + 0x28]
// 005faaa6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005faaae  ff15e4b69800         call dword ptr [0x98b6e4]
// 005faab4  8d4e04               lea ecx, [esi + 4]
// 005faab7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005faabf  ff15e4b69800         call dword ptr [0x98b6e4]
// 005faac5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005faac9  5e                   pop esi
// 005faaca  64890d00000000       mov dword ptr fs:[0], ecx
// 005faad1  83c410               add esp, 0x10
// 005faad4  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1TokenException@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
