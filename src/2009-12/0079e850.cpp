// roc 2009-12 0079e850  unit: seg_00790000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079e850
//
// 0079e850  51                   push ecx
// 0079e851  53                   push ebx
// 0079e852  55                   push ebp
// 0079e853  56                   push esi
// 0079e854  8b742414             mov esi, dword ptr [esp + 0x14]
// 0079e858  57                   push edi
// 0079e859  56                   push esi
// 0079e85a  e8419ffeff           call 0x7887a0
// 0079e85f  685c2b9d00           push 0x9d2b5c
// 0079e864  8bd8                 mov ebx, eax
// 0079e866  68eed8ffff           push 0xffffd8ee
// 0079e86b  56                   push esi
// 0079e86c  895c2420             mov dword ptr [esp + 0x20], ebx
// 0079e870  e87ba7feff           call 0x788ff0
// 0079e875  8b2d88b89800         mov ebp, dword ptr [0x98b888]
// 0079e87b  bf01000000           mov edi, 1
// 0079e880  83c410               add esp, 0x10
// 0079e883  3bdf                 cmp ebx, edi
// 0079e885  7c64                 jl 0x79e8eb
// 0079e887  6aff                 push -1
// 0079e889  56                   push esi
// 0079e88a  e8d1a0feff           call 0x788960
// 0079e88f  57                   push edi
// 0079e890  56                   push esi
// 0079e891  e8caa0feff           call 0x788960
// 0079e896  6a01                 push 1
// 0079e898  6a01                 push 1
// 0079e89a  56                   push esi
// 0079e89b  e820acfeff           call 0x7894c0
// 0079e8a0  6a00                 push 0
// 0079e8a2  6aff                 push -1
// 0079e8a4  56                   push esi
// 0079e8a5  e8f6a2feff           call 0x788ba0
// 0079e8aa  8bd8                 mov ebx, eax
// 0079e8ac  83c428               add esp, 0x28
// 0079e8af  85db                 test ebx, ebx
// 0079e8b1  7454                 je 0x79e907
// 0079e8b3  83ff01               cmp edi, 1
// 0079e8b6  7e14                 jle 0x79e8cc
// 0079e8b8  ff15f0b79800         call dword ptr [0x98b7f0]
// 0079e8be  83c020               add eax, 0x20
// 0079e8c1  50                   push eax
// 0079e8c2  68ccb79a00           push 0x9ab7cc
// 0079e8c7  ffd5                 call ebp
// 0079e8c9  83c408               add esp, 8
// 0079e8cc  ff15f0b79800         call dword ptr [0x98b7f0]
// 0079e8d2  83c020               add eax, 0x20
// 0079e8d5  50                   push eax
// 0079e8d6  53                   push ebx
// 0079e8d7  ffd5                 call ebp
// 0079e8d9  6afe                 push -2
// 0079e8db  56                   push esi
// 0079e8dc  e8cf9efeff           call 0x7887b0
// 0079e8e1  47                   inc edi
// 0079e8e2  83c410               add esp, 0x10
// 0079e8e5  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0079e8e9  7e9c                 jle 0x79e887
// 0079e8eb  ff15f0b79800         call dword ptr [0x98b7f0]
// 0079e8f1  83c020               add eax, 0x20
// 0079e8f4  50                   push eax
// 0079e8f5  681cd89a00           push 0x9ad81c
// 0079e8fa  ffd5                 call ebp
// 0079e8fc  83c408               add esp, 8
// 0079e8ff  5f                   pop edi
// 0079e900  5e                   pop esi
// 0079e901  5d                   pop ebp
// 0079e902  33c0                 xor eax, eax
// 0079e904  5b                   pop ebx
// 0079e905  59                   pop ecx
// 0079e906  c3                   ret 
// 0079e907  68302b9d00           push 0x9d2b30
// 0079e90c  56                   push esi
// 0079e90d  e8deb3feff           call 0x789cf0
// 0079e912  83c408               add esp, 8
// 0079e915  5f                   pop edi
// 0079e916  5e                   pop esi
// 0079e917  5d                   pop ebp
// 0079e918  5b                   pop ebx
// 0079e919  59                   pop ecx
// 0079e91a  c3                   ret 
// copied from an identical function in another client (function _luaB_print)

// roc-cl: 21022
// roc-lang: c
// roc-flags: /O2 /GS /MD
// roc-lib: lua-5.1-dll lbaselib.c