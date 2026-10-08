// from server: 100% by auto
// roc 2009-06 004ad170  unit: G3D::Win32Window  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad170
//
// 004ad170  6aff                 push -1
// 004ad172  686b7f8500           push 0x857f6b
// 004ad177  64a100000000         mov eax, dword ptr fs:[0]
// 004ad17d  50                   push eax
// 004ad17e  64892500000000       mov dword ptr fs:[0], esp
// 004ad185  51                   push ecx
// 004ad186  55                   push ebp
// 004ad187  56                   push esi
// 004ad188  8bf1                 mov esi, ecx
// 004ad18a  33ed                 xor ebp, ebp
// 004ad18c  57                   push edi
// 004ad18d  8974240c             mov dword ptr [esp + 0xc], esi
// 004ad191  896e08               mov dword ptr [esi + 8], ebp
// 004ad194  896e0c               mov dword ptr [esi + 0xc], ebp
// 004ad197  896e04               mov dword ptr [esi + 4], ebp
// 004ad19a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004ad19e  6880258c00           push 0x8c2580
// 004ad1a3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004ad1a7  894610               mov dword ptr [esi + 0x10], eax
// 004ad1aa  ff15d4e18900         call dword ptr [0x89e1d4]
// 004ad1b0  8bf8                 mov edi, eax
// 004ad1b2  3bfd                 cmp edi, ebp
// 004ad1b4  745f                 je 0x4ad215
// 004ad1b6  53                   push ebx
// 004ad1b7  686c258c00           push 0x8c256c
// 004ad1bc  57                   push edi
// 004ad1bd  ff15e8e18900         call dword ptr [0x89e1e8]
// 004ad1c3  8bd8                 mov ebx, eax
// 004ad1c5  3bdd                 cmp ebx, ebp
// 004ad1c7  742e                 je 0x4ad1f7
// 004ad1c9  55                   push ebp
// 004ad1ca  56                   push esi
// 004ad1cb  68d81f8c00           push 0x8c1fd8
// 004ad1d0  6800080000           push 0x800
// 004ad1d5  55                   push ebp
// 004ad1d6  ff15e4e18900         call dword ptr [0x89e1e4]
// 004ad1dc  50                   push eax
// 004ad1dd  ffd3                 call ebx
// 004ad1df  85c0                 test eax, eax
// 004ad1e1  7514                 jne 0x4ad1f7
// 004ad1e3  8b06                 mov eax, dword ptr [esi]
// 004ad1e5  8b08                 mov ecx, dword ptr [eax]
// 004ad1e7  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004ad1ea  6a01                 push 1
// 004ad1ec  56                   push esi
// 004ad1ed  68e0cf4a00           push 0x4acfe0
// 004ad1f2  6a04                 push 4
// 004ad1f4  50                   push eax
// 004ad1f5  ffd2                 call edx
// 004ad1f7  57                   push edi
// 004ad1f8  ff15b4e18900         call dword ptr [0x89e1b4]
// 004ad1fe  5b                   pop ebx
// 004ad1ff  5f                   pop edi
// 004ad200  8bc6                 mov eax, esi
// 004ad202  5e                   pop esi
// 004ad203  5d                   pop ebp
// 004ad204  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ad208  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad20f  83c410               add esp, 0x10
// 004ad212  c20400               ret 4
// 004ad215  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ad219  5f                   pop edi
// 004ad21a  8bc6                 mov eax, esi
// 004ad21c  5e                   pop esi
// 004ad21d  5d                   pop ebp
// 004ad21e  64890d00000000       mov dword ptr fs:[0], ecx
// 004ad225  83c410               add esp, 0x10
// 004ad228  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??0_DirectInput@_internal@G3D@@QAE@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
