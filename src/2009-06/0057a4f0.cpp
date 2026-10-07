// roc 2009-06 0057a4f0  unit: G3D::LineSegment  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a4f0
//
// 0057a4f0  6aff                 push -1
// 0057a4f2  683c188700           push 0x87183c
// 0057a4f7  64a100000000         mov eax, dword ptr fs:[0]
// 0057a4fd  50                   push eax
// 0057a4fe  64892500000000       mov dword ptr fs:[0], esp
// 0057a505  51                   push ecx
// 0057a506  56                   push esi
// 0057a507  8bf1                 mov esi, ecx
// 0057a509  89742404             mov dword ptr [esp + 4], esi
// 0057a50d  c706f0be8c00         mov dword ptr [esi], 0x8cbef0
// 0057a513  8d4e28               lea ecx, [esi + 0x28]
// 0057a516  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057a51e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a524  8d4e04               lea ecx, [esi + 4]
// 0057a527  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057a52f  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a535  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057a539  5e                   pop esi
// 0057a53a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a541  83c410               add esp, 0x10
// 0057a544  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1TokenException@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
