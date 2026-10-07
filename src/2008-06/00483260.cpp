// roc 2008-06 00483260  unit: G3D::Win32Window  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483260
//
// 00483260  6aff                 push -1
// 00483262  68db547c00           push 0x7c54db
// 00483267  64a100000000         mov eax, dword ptr fs:[0]
// 0048326d  50                   push eax
// 0048326e  64892500000000       mov dword ptr fs:[0], esp
// 00483275  51                   push ecx
// 00483276  55                   push ebp
// 00483277  56                   push esi
// 00483278  8bf1                 mov esi, ecx
// 0048327a  33ed                 xor ebp, ebp
// 0048327c  57                   push edi
// 0048327d  8974240c             mov dword ptr [esp + 0xc], esi
// 00483281  896e08               mov dword ptr [esi + 8], ebp
// 00483284  896e0c               mov dword ptr [esi + 0xc], ebp
// 00483287  896e04               mov dword ptr [esi + 4], ebp
// 0048328a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048328e  68e0f58100           push 0x81f5e0
// 00483293  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00483297  894610               mov dword ptr [esi + 0x10], eax
// 0048329a  ff15cc218000         call dword ptr [0x8021cc]
// 004832a0  8bf8                 mov edi, eax
// 004832a2  3bfd                 cmp edi, ebp
// 004832a4  745f                 je 0x483305
// 004832a6  53                   push ebx
// 004832a7  68ccf58100           push 0x81f5cc
// 004832ac  57                   push edi
// 004832ad  ff15c0218000         call dword ptr [0x8021c0]
// 004832b3  8bd8                 mov ebx, eax
// 004832b5  3bdd                 cmp ebx, ebp
// 004832b7  742e                 je 0x4832e7
// 004832b9  55                   push ebp
// 004832ba  56                   push esi
// 004832bb  6828f08100           push 0x81f028
// 004832c0  6800080000           push 0x800
// 004832c5  55                   push ebp
// 004832c6  ff15bc218000         call dword ptr [0x8021bc]
// 004832cc  50                   push eax
// 004832cd  ffd3                 call ebx
// 004832cf  85c0                 test eax, eax
// 004832d1  7514                 jne 0x4832e7
// 004832d3  8b06                 mov eax, dword ptr [esi]
// 004832d5  8b08                 mov ecx, dword ptr [eax]
// 004832d7  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004832da  6a01                 push 1
// 004832dc  56                   push esi
// 004832dd  68d0304800           push 0x4830d0
// 004832e2  6a04                 push 4
// 004832e4  50                   push eax
// 004832e5  ffd2                 call edx
// 004832e7  57                   push edi
// 004832e8  ff15a0218000         call dword ptr [0x8021a0]
// 004832ee  5b                   pop ebx
// 004832ef  5f                   pop edi
// 004832f0  8bc6                 mov eax, esi
// 004832f2  5e                   pop esi
// 004832f3  5d                   pop ebp
// 004832f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004832f8  64890d00000000       mov dword ptr fs:[0], ecx
// 004832ff  83c410               add esp, 0x10
// 00483302  c20400               ret 4
// 00483305  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00483309  5f                   pop edi
// 0048330a  8bc6                 mov eax, esi
// 0048330c  5e                   pop esi
// 0048330d  5d                   pop ebp
// 0048330e  64890d00000000       mov dword ptr fs:[0], ecx
// 00483315  83c410               add esp, 0x10
// 00483318  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0_DirectInput@_internal@G3D@@QAE@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
