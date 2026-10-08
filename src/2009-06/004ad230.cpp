// from server: 100% by auto
// roc 2009-06 004ad230  unit: G3D::Win32Window  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad230
//
// 004ad230  6aff                 push -1
// 004ad232  687b9c8600           push 0x869c7b
// 004ad237  64a100000000         mov eax, dword ptr fs:[0]
// 004ad23d  50                   push eax
// 004ad23e  64892500000000       mov dword ptr fs:[0], esp
// 004ad245  51                   push ecx
// 004ad246  56                   push esi
// 004ad247  8bf1                 mov esi, ecx
// 004ad249  83beb401000000       cmp dword ptr [esi + 0x1b4], 0
// 004ad250  7532                 jne 0x4ad284
// 004ad252  6a14                 push 0x14
// 004ad254  e8dfb72600           call 0x718a38
// 004ad259  83c404               add esp, 4
// 004ad25c  89442404             mov dword ptr [esp + 4], eax
// 004ad260  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004ad268  85c0                 test eax, eax
// 004ad26a  7410                 je 0x4ad27c
// 004ad26c  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 004ad272  51                   push ecx
// 004ad273  8bc8                 mov ecx, eax
// 004ad275  e8f6feffff           call 0x4ad170
// 004ad27a  eb02                 jmp 0x4ad27e
// 004ad27c  33c0                 xor eax, eax
// 004ad27e  8986b4010000         mov dword ptr [esi + 0x1b4], eax
// 004ad284  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ad288  5e                   pop esi
// 004ad289  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad290  83c410               add esp, 0x10
// 004ad293  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?enableDirectInput@Win32Window@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
