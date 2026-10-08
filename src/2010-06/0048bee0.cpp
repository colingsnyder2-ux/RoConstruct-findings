// from server: 100% by auto
// roc 2010-06 0048bee0  unit: G3D::Win32Window  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048bee0
//
// 0048bee0  6aff                 push -1
// 0048bee2  684b1d9a00           push 0x9a1d4b
// 0048bee7  64a100000000         mov eax, dword ptr fs:[0]
// 0048beed  50                   push eax
// 0048beee  64892500000000       mov dword ptr fs:[0], esp
// 0048bef5  51                   push ecx
// 0048bef6  56                   push esi
// 0048bef7  8bf1                 mov esi, ecx
// 0048bef9  83beb401000000       cmp dword ptr [esi + 0x1b4], 0
// 0048bf00  7532                 jne 0x48bf34
// 0048bf02  6a14                 push 0x14
// 0048bf04  e897ba3100           call 0x7a79a0
// 0048bf09  83c404               add esp, 4
// 0048bf0c  89442404             mov dword ptr [esp + 4], eax
// 0048bf10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048bf18  85c0                 test eax, eax
// 0048bf1a  7410                 je 0x48bf2c
// 0048bf1c  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 0048bf22  51                   push ecx
// 0048bf23  8bc8                 mov ecx, eax
// 0048bf25  e8f6feffff           call 0x48be20
// 0048bf2a  eb02                 jmp 0x48bf2e
// 0048bf2c  33c0                 xor eax, eax
// 0048bf2e  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 0048bf34  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048bf38  5e                   pop esi
// 0048bf39  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bf40  83c410               add esp, 0x10
// 0048bf43  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enableDirectInput@Win32Window@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
