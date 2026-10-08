// roc 2009-12 004d9d50  unit: G3D::Win32Window  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9d50
//
// 004d9d50  6aff                 push -1
// 004d9d52  68eba59400           push 0x94a5eb
// 004d9d57  64a100000000         mov eax, dword ptr fs:[0]
// 004d9d5d  50                   push eax
// 004d9d5e  64892500000000       mov dword ptr fs:[0], esp
// 004d9d65  51                   push ecx
// 004d9d66  56                   push esi
// 004d9d67  8bf1                 mov esi, ecx
// 004d9d69  83beb401000000       cmp dword ptr [esi + 0x1b4], 0
// 004d9d70  7532                 jne 0x4d9da4
// 004d9d72  6a14                 push 0x14
// 004d9d74  e8e79a3100           call 0x7f3860
// 004d9d79  83c404               add esp, 4
// 004d9d7c  89442404             mov dword ptr [esp + 4], eax
// 004d9d80  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d9d88  85c0                 test eax, eax
// 004d9d8a  7410                 je 0x4d9d9c
// 004d9d8c  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 004d9d92  51                   push ecx
// 004d9d93  8bc8                 mov ecx, eax
// 004d9d95  e8f6feffff           call 0x4d9c90
// 004d9d9a  eb02                 jmp 0x4d9d9e
// 004d9d9c  33c0                 xor eax, eax
// 004d9d9e  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 004d9da4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d9da8  5e                   pop esi
// 004d9da9  64890d00000000       mov dword ptr fs:[0], ecx
// 004d9db0  83c410               add esp, 0x10
// 004d9db3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enableDirectInput@Win32Window@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
