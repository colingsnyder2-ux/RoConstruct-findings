// roc 2008-06 00794740  unit: CXTPRibbonGroup  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794740
//
// 00794740  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00794746  83ec10               sub esp, 0x10
// 00794749  53                   push ebx
// 0079474a  55                   push ebp
// 0079474b  8b28                 mov ebp, dword ptr [eax]
// 0079474d  56                   push esi
// 0079474e  8b7004               mov esi, dword ptr [eax + 4]
// 00794751  83ee01               sub esi, 1
// 00794754  57                   push edi
// 00794755  7842                 js 0x794799
// 00794757  8bc6                 mov eax, esi
// 00794759  c1e004               shl eax, 4
// 0079475c  03c6                 add eax, esi
// 0079475e  8d5c853c             lea ebx, [ebp + eax*4 + 0x3c]
// 00794762  8b3b                 mov edi, dword ptr [ebx]
// 00794764  83bffc0000000a       cmp dword ptr [edi + 0xfc], 0xa
// 0079476b  7524                 jne 0x794791
// 0079476d  8bcf                 mov ecx, edi
// 0079476f  e83c96f9ff           call 0x72ddb0
// 00794774  85c0                 test eax, eax
// 00794776  7513                 jne 0x79478b
// 00794778  8bcf                 mov ecx, edi
// 0079477a  e8c195f9ff           call 0x72dd40
// 0079477f  85c0                 test eax, eax
// 00794781  7408                 je 0x79478b
// 00794783  8b8748020000         mov eax, dword ptr [edi + 0x248]
// 00794789  eb02                 jmp 0x79478d
// 0079478b  33c0                 xor eax, eax
// 0079478d  a801                 test al, 1
// 0079478f  7514                 jne 0x7947a5
// 00794791  4e                   dec esi
// 00794792  83eb44               sub ebx, 0x44
// 00794795  85f6                 test esi, esi
// 00794797  7dc9                 jge 0x794762
// 00794799  5f                   pop edi
// 0079479a  5e                   pop esi
// 0079479b  5d                   pop ebp
// 0079479c  33c0                 xor eax, eax
// 0079479e  5b                   pop ebx
// 0079479f  83c410               add esp, 0x10
// 007947a2  c20400               ret 4
// 007947a5  8bce                 mov ecx, esi
// 007947a7  c1e104               shl ecx, 4
// 007947aa  03ce                 add ecx, esi
// 007947ac  8b7c8d3c             mov edi, dword ptr [ebp + ecx*4 + 0x3c]
// 007947b0  8d6c8d00             lea ebp, [ebp + ecx*4]
// 007947b4  8bcf                 mov ecx, edi
// 007947b6  e88595f9ff           call 0x72dd40
// 007947bb  85c0                 test eax, eax
// 007947bd  74da                 je 0x794799
// 007947bf  8bcf                 mov ecx, edi
// 007947c1  e87a95f9ff           call 0x72dd40
// 007947c6  8b7020               mov esi, dword ptr [eax + 0x20]
// 007947c9  8b5024               mov edx, dword ptr [eax + 0x24]
// 007947cc  89542414             mov dword ptr [esp + 0x14], edx
// 007947d0  85f6                 test esi, esi
// 007947d2  7ec5                 jle 0x794799
// 007947d4  3b742424             cmp esi, dword ptr [esp + 0x24]
// 007947d8  7fbf                 jg 0x794799
// 007947da  8bcf                 mov ecx, edi
// 007947dc  e85f95f9ff           call 0x72dd40
// 007947e1  8bc8                 mov ecx, eax
// 007947e3  e888bf0000           call 0x7a0770
// 007947e8  8bd8                 mov ebx, eax
// 007947ea  8b07                 mov eax, dword ptr [edi]
// 007947ec  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007947f2  8d4c2410             lea ecx, [esp + 0x10]
// 007947f6  51                   push ecx
// 007947f7  8bcf                 mov ecx, edi
// 007947f9  ffd2                 call edx
// 007947fb  8b7d20               mov edi, dword ptr [ebp + 0x20]
// 007947fe  8bce                 mov ecx, esi
// 00794800  0fafcb               imul ecx, ebx
// 00794803  034c2418             add ecx, dword ptr [esp + 0x18]
// 00794807  8d0437               lea eax, [edi + esi]
// 0079480a  034c2410             add ecx, dword ptr [esp + 0x10]
// 0079480e  3bc1                 cmp eax, ecx
// 00794810  7f87                 jg 0x794799
// 00794812  8b442424             mov eax, dword ptr [esp + 0x24]
// 00794816  99                   cdq 
// 00794817  f7fe                 idiv esi
// 00794819  0fafc6               imul eax, esi
// 0079481c  03c7                 add eax, edi
// 0079481e  3bc8                 cmp ecx, eax
// 00794820  7d02                 jge 0x794824
// 00794822  8bc1                 mov eax, ecx
// 00794824  5f                   pop edi
// 00794825  5e                   pop esi
// 00794826  894520               mov dword ptr [ebp + 0x20], eax
// 00794829  5d                   pop ebp
// 0079482a  b801000000           mov eax, 1
// 0079482f  5b                   pop ebx
// 00794830  83c410               add esp, 0x10
// 00794833  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonGroups.cpp (function ?OnExtendSize@CXTPRibbonGroup@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonGroups.cpp
