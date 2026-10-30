// from server: 100% by auto
// roc 2007-08 0051d670  unit: seg_00510000  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051d670
//
// 0051d670  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051d674  85c9                 test ecx, ecx
// 0051d676  53                   push ebx
// 0051d677  55                   push ebp
// 0051d678  56                   push esi
// 0051d679  57                   push edi
// 0051d67a  0f8407010000         je 0x51d787
// 0051d680  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051d684  85f6                 test esi, esi
// 0051d686  0f84fb000000         je 0x51d787
// 0051d68c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0051d690  85db                 test ebx, ebx
// 0051d692  0f84ef000000         je 0x51d787
// 0051d698  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0051d69c  85ed                 test ebp, ebp
// 0051d69e  0f84e3000000         je 0x51d787
// 0051d6a4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051d6a8  85c0                 test eax, eax
// 0051d6aa  0f84d7000000         je 0x51d787
// 0051d6b0  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0051d6b4  85ff                 test edi, edi
// 0051d6b6  0f84cb000000         je 0x51d787
// 0051d6bc  8b16                 mov edx, dword ptr [esi]
// 0051d6be  8913                 mov dword ptr [ebx], edx
// 0051d6c0  8b5604               mov edx, dword ptr [esi + 4]
// 0051d6c3  895500               mov dword ptr [ebp], edx
// 0051d6c6  0fb65618             movzx edx, byte ptr [esi + 0x18]
// 0051d6ca  8910                 mov dword ptr [eax], edx
// 0051d6cc  807e1801             cmp byte ptr [esi + 0x18], 1
// 0051d6d0  7206                 jb 0x51d6d8
// 0051d6d2  807e1810             cmp byte ptr [esi + 0x18], 0x10
// 0051d6d6  7612                 jbe 0x51d6ea
// 0051d6d8  68702e7a00           push 0x7a2e70
// 0051d6dd  51                   push ecx
// 0051d6de  e8fd110000           call 0x51e8e0
// 0051d6e3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051d6e7  83c408               add esp, 8
// 0051d6ea  0fb64619             movzx eax, byte ptr [esi + 0x19]
// 0051d6ee  8907                 mov dword ptr [edi], eax
// 0051d6f0  807e1906             cmp byte ptr [esi + 0x19], 6
// 0051d6f4  7612                 jbe 0x51d708
// 0051d6f6  685c2e7a00           push 0x7a2e5c
// 0051d6fb  51                   push ecx
// 0051d6fc  e8df110000           call 0x51e8e0
// 0051d701  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051d705  83c408               add esp, 8
// 0051d708  8b442430             mov eax, dword ptr [esp + 0x30]
// 0051d70c  85c0                 test eax, eax
// 0051d70e  7406                 je 0x51d716
// 0051d710  0fb6561a             movzx edx, byte ptr [esi + 0x1a]
// 0051d714  8910                 mov dword ptr [eax], edx
// 0051d716  8b442434             mov eax, dword ptr [esp + 0x34]
// 0051d71a  85c0                 test eax, eax
// 0051d71c  7406                 je 0x51d724
// 0051d71e  0fb6561b             movzx edx, byte ptr [esi + 0x1b]
// 0051d722  8910                 mov dword ptr [eax], edx
// 0051d724  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0051d728  85c0                 test eax, eax
// 0051d72a  7406                 je 0x51d732
// 0051d72c  0fb6561c             movzx edx, byte ptr [esi + 0x1c]
// 0051d730  8910                 mov dword ptr [eax], edx
// 0051d732  813bffffff7f         cmp dword ptr [ebx], 0x7fffffff
// 0051d738  7612                 jbe 0x51d74c
// 0051d73a  68482e7a00           push 0x7a2e48
// 0051d73f  51                   push ecx
// 0051d740  e89b110000           call 0x51e8e0
// 0051d745  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051d749  83c408               add esp, 8
// 0051d74c  817d00ffffff7f       cmp dword ptr [ebp], 0x7fffffff
// 0051d753  7612                 jbe 0x51d767
// 0051d755  68302e7a00           push 0x7a2e30
// 0051d75a  51                   push ecx
// 0051d75b  e880110000           call 0x51e8e0
// 0051d760  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051d764  83c408               add esp, 8
// 0051d767  813e7effff1f         cmp dword ptr [esi], 0x1fffff7e
// 0051d76d  760e                 jbe 0x51d77d
// 0051d76f  68fc2d7a00           push 0x7a2dfc
// 0051d774  51                   push ecx
// 0051d775  e816120000           call 0x51e990
// 0051d77a  83c408               add esp, 8
// 0051d77d  5f                   pop edi
// 0051d77e  5e                   pop esi
// 0051d77f  5d                   pop ebp
// 0051d780  b801000000           mov eax, 1
// 0051d785  5b                   pop ebx
// 0051d786  c3                   ret 
// 0051d787  5f                   pop edi
// 0051d788  5e                   pop esi
// 0051d789  5d                   pop ebp
// 0051d78a  33c0                 xor eax, eax
// 0051d78c  5b                   pop ebx
// 0051d78d  c3                   ret 
// library libpng-1.2.6/pngget.c (function _png_get_IHDR)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngget.c
