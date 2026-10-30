// roc 2009-12 0080d890  unit: CXTPImageManagerIconSet  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d890
//
// 0080d890  83ec0c               sub esp, 0xc
// 0080d893  53                   push ebx
// 0080d894  56                   push esi
// 0080d895  8bf1                 mov esi, ecx
// 0080d897  8b4634               mov eax, dword ptr [esi + 0x34]
// 0080d89a  f7d8                 neg eax
// 0080d89c  1bc0                 sbb eax, eax
// 0080d89e  57                   push edi
// 0080d89f  8944240c             mov dword ptr [esp + 0xc], eax
// 0080d8a3  743a                 je 0x80d8df
// 0080d8a5  8d5e28               lea ebx, [esi + 0x28]
// 0080d8a8  eb06                 jmp 0x80d8b0
// 0080d8aa  8d9b00000000         lea ebx, [ebx]
// 0080d8b0  8d442410             lea eax, [esp + 0x10]
// 0080d8b4  50                   push eax
// 0080d8b5  8d4c2418             lea ecx, [esp + 0x18]
// 0080d8b9  51                   push ecx
// 0080d8ba  8d542414             lea edx, [esp + 0x14]
// 0080d8be  52                   push edx
// 0080d8bf  8bcb                 mov ecx, ebx
// 0080d8c1  e85abfffff           call 0x809820
// 0080d8c6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0080d8ca  8bcf                 mov ecx, edi
// 0080d8cc  e8afeeffff           call 0x80c780
// 0080d8d1  8bcf                 mov ecx, edi
// 0080d8d3  e80465feff           call 0x7f3ddc
// 0080d8d8  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0080d8dd  75d1                 jne 0x80d8b0
// 0080d8df  8d4e28               lea ecx, [esi + 0x28]
// 0080d8e2  e8398cfeff           call 0x7f6520
// 0080d8e7  8b4664               mov eax, dword ptr [esi + 0x64]
// 0080d8ea  f7d8                 neg eax
// 0080d8ec  1bc0                 sbb eax, eax
// 0080d8ee  8944240c             mov dword ptr [esp + 0xc], eax
// 0080d8f2  7438                 je 0x80d92c
// 0080d8f4  8d5e58               lea ebx, [esi + 0x58]
// 0080d8f7  8d442410             lea eax, [esp + 0x10]
// 0080d8fb  50                   push eax
// 0080d8fc  8d4c2418             lea ecx, [esp + 0x18]
// 0080d900  51                   push ecx
// 0080d901  8d542414             lea edx, [esp + 0x14]
// 0080d905  52                   push edx
// 0080d906  8bcb                 mov ecx, ebx
// 0080d908  e813bfffff           call 0x809820
// 0080d90d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0080d911  85ff                 test edi, edi
// 0080d913  7410                 je 0x80d925
// 0080d915  8bcf                 mov ecx, edi
// 0080d917  e814f1ffff           call 0x80ca30
// 0080d91c  57                   push edi
// 0080d91d  e8385ffeff           call 0x7f385a
// 0080d922  83c404               add esp, 4
// 0080d925  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0080d92a  75cb                 jne 0x80d8f7
// 0080d92c  8d4e58               lea ecx, [esi + 0x58]
// 0080d92f  e8ec8bfeff           call 0x7f6520
// 0080d934  33ff                 xor edi, edi
// 0080d936  397e4c               cmp dword ptr [esi + 0x4c], edi
// 0080d939  7e2e                 jle 0x80d969
// 0080d93b  eb03                 jmp 0x80d940
// 0080d93d  8d4900               lea ecx, [ecx]
// 0080d940  85ff                 test edi, edi
// 0080d942  7c38                 jl 0x80d97c
// 0080d944  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0080d947  7d33                 jge 0x80d97c
// 0080d949  8b4648               mov eax, dword ptr [esi + 0x48]
// 0080d94c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 0080d94f  85db                 test ebx, ebx
// 0080d951  7410                 je 0x80d963
// 0080d953  8bcb                 mov ecx, ebx
// 0080d955  e8b6dfffff           call 0x80b910
// 0080d95a  53                   push ebx
// 0080d95b  e8fa5efeff           call 0x7f385a
// 0080d960  83c404               add esp, 4
// 0080d963  47                   inc edi
// 0080d964  3b7e4c               cmp edi, dword ptr [esi + 0x4c]
// 0080d967  7cd7                 jl 0x80d940
// 0080d969  6aff                 push -1
// 0080d96b  6a00                 push 0
// 0080d96d  8d4e44               lea ecx, [esi + 0x44]
// 0080d970  e82b7a0400           call 0x8553a0
// 0080d975  5f                   pop edi
// 0080d976  5e                   pop esi
// 0080d977  5b                   pop ebx
// 0080d978  83c40c               add esp, 0xc
// 0080d97b  c3                   ret 
// 0080d97c  e88b61feff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPImageManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp