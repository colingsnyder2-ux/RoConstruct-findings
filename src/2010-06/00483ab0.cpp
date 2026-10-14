// roc 2010-06 00483ab0  unit: G3D::GImage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483ab0
//
// 00483ab0  6aff                 push -1
// 00483ab2  68a45b9800           push 0x985ba4
// 00483ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00483abd  50                   push eax
// 00483abe  64892500000000       mov dword ptr fs:[0], esp
// 00483ac5  51                   push ecx
// 00483ac6  56                   push esi
// 00483ac7  8bf1                 mov esi, ecx
// 00483ac9  89742404             mov dword ptr [esp + 4], esi
// 00483acd  8d4e44               lea ecx, [esi + 0x44]
// 00483ad0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00483ad8  ff1500a49e00         call dword ptr [0x9ea400]
// 00483ade  8d4e28               lea ecx, [esi + 0x28]
// 00483ae1  c644241000           mov byte ptr [esp + 0x10], 0
// 00483ae6  ff1500a49e00         call dword ptr [0x9ea400]
// 00483aec  8d4e0c               lea ecx, [esi + 0xc]
// 00483aef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00483af7  c7063009a000         mov dword ptr [esi], 0xa00930
// 00483afd  ff1500a49e00         call dword ptr [0x9ea400]
// 00483b03  8bce                 mov ecx, esi
// 00483b05  ff151ca99e00         call dword ptr [0x9ea91c]
// 00483b0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00483b0f  5e                   pop esi
// 00483b10  64890d00000000       mov dword ptr fs:[0], ecx
// 00483b17  83c410               add esp, 0x10
// 00483b1a  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??1Error@GImage@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
