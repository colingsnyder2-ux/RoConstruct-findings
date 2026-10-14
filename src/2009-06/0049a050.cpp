// roc 2009-06 0049a050  unit: G3D::GImage  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049a050
//
// 0049a050  6aff                 push -1
// 0049a052  68946b8500           push 0x856b94
// 0049a057  64a100000000         mov eax, dword ptr fs:[0]
// 0049a05d  50                   push eax
// 0049a05e  64892500000000       mov dword ptr fs:[0], esp
// 0049a065  51                   push ecx
// 0049a066  56                   push esi
// 0049a067  8bf1                 mov esi, ecx
// 0049a069  89742404             mov dword ptr [esp + 4], esi
// 0049a06d  8d4e44               lea ecx, [esi + 0x44]
// 0049a070  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0049a078  ff15c4e48900         call dword ptr [0x89e4c4]
// 0049a07e  8d4e28               lea ecx, [esi + 0x28]
// 0049a081  c644241000           mov byte ptr [esp + 0x10], 0
// 0049a086  ff15c4e48900         call dword ptr [0x89e4c4]
// 0049a08c  8d4e0c               lea ecx, [esi + 0xc]
// 0049a08f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0049a097  c7065cd28a00         mov dword ptr [esi], 0x8ad25c
// 0049a09d  ff15c4e48900         call dword ptr [0x89e4c4]
// 0049a0a3  8bce                 mov ecx, esi
// 0049a0a5  ff15bce98900         call dword ptr [0x89e9bc]
// 0049a0ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049a0af  5e                   pop esi
// 0049a0b0  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a0b7  83c410               add esp, 0x10
// 0049a0ba  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??1Error@GImage@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
