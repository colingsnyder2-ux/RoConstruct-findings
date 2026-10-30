// roc 2009-12 00857cd0  unit: CXTPTabClientWnd  size: 331 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00857cd0
//
// 00857cd0  83ec28               sub esp, 0x28
// 00857cd3  53                   push ebx
// 00857cd4  55                   push ebp
// 00857cd5  56                   push esi
// 00857cd6  57                   push edi
// 00857cd7  8bf9                 mov edi, ecx
// 00857cd9  e872e9ffff           call 0x856650
// 00857cde  85c0                 test eax, eax
// 00857ce0  0f84fa000000         je 0x857de0
// 00857ce6  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 00857ced  0f84ed000000         je 0x857de0
// 00857cf3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00857cf7  8b01                 mov eax, dword ptr [ecx]
// 00857cf9  8b4058               mov eax, dword ptr [eax + 0x58]
// 00857cfc  8d542418             lea edx, [esp + 0x18]
// 00857d00  52                   push edx
// 00857d01  ffd0                 call eax
// 00857d03  8bcf                 mov ecx, edi
// 00857d05  e846e9ffff           call 0x856650
// 00857d0a  8be8                 mov ebp, eax
// 00857d0c  83ed01               sub ebp, 1
// 00857d0f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00857d13  0f88f8000000         js 0x857e11
// 00857d19  8da42400000000       lea esp, [esp]
// 00857d20  55                   push ebp
// 00857d21  8bcf                 mov ecx, edi
// 00857d23  e818f8ffff           call 0x857540
// 00857d28  8bd8                 mov ebx, eax
// 00857d2a  8d7334               lea esi, [ebx + 0x34]
// 00857d2d  56                   push esi
// 00857d2e  8d4c241c             lea ecx, [esp + 0x1c]
// 00857d32  51                   push ecx
// 00857d33  8d542430             lea edx, [esp + 0x30]
// 00857d37  52                   push edx
// 00857d38  895c2420             mov dword ptr [esp + 0x20], ebx
// 00857d3c  ff15dcca9800         call dword ptr [0x98cadc]
// 00857d42  85c0                 test eax, eax
// 00857d44  744a                 je 0x857d90
// 00857d46  8bcf                 mov ecx, edi
// 00857d48  e873d4ffff           call 0x8551c0
// 00857d4d  8b0e                 mov ecx, dword ptr [esi]
// 00857d4f  8b5604               mov edx, dword ptr [esi + 4]
// 00857d52  83ec10               sub esp, 0x10
// 00857d55  8be8                 mov ebp, eax
// 00857d57  8b5d00               mov ebx, dword ptr [ebp]
// 00857d5a  8bc4                 mov eax, esp
// 00857d5c  8908                 mov dword ptr [eax], ecx
// 00857d5e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00857d61  895004               mov dword ptr [eax + 4], edx
// 00857d64  8b560c               mov edx, dword ptr [esi + 0xc]
// 00857d67  894808               mov dword ptr [eax + 8], ecx
// 00857d6a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00857d6e  89500c               mov dword ptr [eax + 0xc], edx
// 00857d71  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00857d75  50                   push eax
// 00857d76  51                   push ecx
// 00857d77  8bcf                 mov ecx, edi
// 00857d79  83c358               add ebx, 0x58
// 00857d7c  e8bff7ffff           call 0x857540
// 00857d81  8b13                 mov edx, dword ptr [ebx]
// 00857d83  50                   push eax
// 00857d84  8bcd                 mov ecx, ebp
// 00857d86  ffd2                 call edx
// 00857d88  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00857d8c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00857d90  8db3a0000000         lea esi, [ebx + 0xa0]
// 00857d96  56                   push esi
// 00857d97  ff1568cc9800         call dword ptr [0x98cc68]
// 00857d9d  85c0                 test eax, eax
// 00857d9f  7528                 jne 0x857dc9
// 00857da1  8b878c000000         mov eax, dword ptr [edi + 0x8c]
// 00857da7  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00857dad  8b11                 mov edx, dword ptr [ecx]
// 00857daf  8b5238               mov edx, dword ptr [edx + 0x38]
// 00857db2  33c0                 xor eax, eax
// 00857db4  39879c000000         cmp dword ptr [edi + 0x9c], eax
// 00857dba  0f95c0               setne al
// 00857dbd  83c002               add eax, 2
// 00857dc0  50                   push eax
// 00857dc1  8b442440             mov eax, dword ptr [esp + 0x40]
// 00857dc5  56                   push esi
// 00857dc6  50                   push eax
// 00857dc7  ffd2                 call edx
// 00857dc9  83ed01               sub ebp, 1
// 00857dcc  896c2410             mov dword ptr [esp + 0x10], ebp
// 00857dd0  0f894affffff         jns 0x857d20
// 00857dd6  5f                   pop edi
// 00857dd7  5e                   pop esi
// 00857dd8  5d                   pop ebp
// 00857dd9  5b                   pop ebx
// 00857dda  83c428               add esp, 0x28
// 00857ddd  c21400               ret 0x14
// 00857de0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00857de4  8b17                 mov edx, dword ptr [edi]
// 00857de6  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 00857dec  83ec10               sub esp, 0x10
// 00857def  8bc4                 mov eax, esp
// 00857df1  8908                 mov dword ptr [eax], ecx
// 00857df3  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00857df7  894804               mov dword ptr [eax + 4], ecx
// 00857dfa  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00857dfe  894808               mov dword ptr [eax + 8], ecx
// 00857e01  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00857e05  89480c               mov dword ptr [eax + 0xc], ecx
// 00857e08  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00857e0c  50                   push eax
// 00857e0d  8bcf                 mov ecx, edi
// 00857e0f  ffd2                 call edx
// 00857e11  5f                   pop edi
// 00857e12  5e                   pop esi
// 00857e13  5d                   pop ebp
// 00857e14  5b                   pop ebx
// 00857e15  83c428               add esp, 0x28
// 00857e18  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDraw@CXTPTabClientWnd@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp