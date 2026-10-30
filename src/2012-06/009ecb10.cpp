// roc 2012-06 009ecb10  unit: CXTPToolTipContext  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ecb10
//
// 009ecb10  6aff                 push -1
// 009ecb12  684916ae00           push 0xae1649
// 009ecb17  64a100000000         mov eax, dword ptr fs:[0]
// 009ecb1d  50                   push eax
// 009ecb1e  51                   push ecx
// 009ecb1f  53                   push ebx
// 009ecb20  56                   push esi
// 009ecb21  57                   push edi
// 009ecb22  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ecb27  33c4                 xor eax, esp
// 009ecb29  50                   push eax
// 009ecb2a  8d442414             lea eax, [esp + 0x14]
// 009ecb2e  64a300000000         mov dword ptr fs:[0], eax
// 009ecb34  8bf1                 mov esi, ecx
// 009ecb36  89742410             mov dword ptr [esp + 0x10], esi
// 009ecb3a  c706b482c100         mov dword ptr [esi], 0xc182b4
// 009ecb40  33ff                 xor edi, edi
// 009ecb42  397e5c               cmp dword ptr [esi + 0x5c], edi
// 009ecb45  c744241c05000000     mov dword ptr [esp + 0x1c], 5
// 009ecb4d  7e36                 jle 0x9ecb85
// 009ecb4f  90                   nop 
// 009ecb50  85ff                 test edi, edi
// 009ecb52  0f8c9f000000         jl 0x9ecbf7
// 009ecb58  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 009ecb5b  0f8d96000000         jge 0x9ecbf7
// 009ecb61  8b4658               mov eax, dword ptr [esi + 0x58]
// 009ecb64  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 009ecb67  8d04b8               lea eax, [eax + edi*4]
// 009ecb6a  85db                 test ebx, ebx
// 009ecb6c  7411                 je 0x9ecb7f
// 009ecb6e  8bcb                 mov ecx, ebx
// 009ecb70  ff15d047b200         call dword ptr [0xb247d0]
// 009ecb76  53                   push ebx
// 009ecb77  e89855f9ff           call 0x982114
// 009ecb7c  83c404               add esp, 4
// 009ecb7f  47                   inc edi
// 009ecb80  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 009ecb83  7ccb                 jl 0x9ecb50
// 009ecb85  6aff                 push -1
// 009ecb87  8d7e54               lea edi, [esi + 0x54]
// 009ecb8a  6a00                 push 0
// 009ecb8c  8bcf                 mov ecx, edi
// 009ecb8e  e8cdb6faff           call 0x998260
// 009ecb93  6a00                 push 0
// 009ecb95  8bce                 mov ecx, esi
// 009ecb97  e8d4feffff           call 0x9eca70
// 009ecb9c  8d8e28010000         lea ecx, [esi + 0x128]
// 009ecba2  ff15d047b200         call dword ptr [0xb247d0]
// 009ecba8  8d8ee0000000         lea ecx, [esi + 0xe0]
// 009ecbae  ff15d047b200         call dword ptr [0xb247d0]
// 009ecbb4  8d8ea8000000         lea ecx, [esi + 0xa8]
// 009ecbba  ff15d047b200         call dword ptr [0xb247d0]
// 009ecbc0  8d4e70               lea ecx, [esi + 0x70]
// 009ecbc3  ff15d047b200         call dword ptr [0xb247d0]
// 009ecbc9  8bcf                 mov ecx, edi
// 009ecbcb  c644241c00           mov byte ptr [esp + 0x1c], 0
// 009ecbd0  e84befffff           call 0x9ebb20
// 009ecbd5  8bce                 mov ecx, esi
// 009ecbd7  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 009ecbdf  e8bc5ff9ff           call 0x982ba0
// 009ecbe4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009ecbe8  64890d00000000       mov dword ptr fs:[0], ecx
// 009ecbef  59                   pop ecx
// 009ecbf0  5f                   pop edi
// 009ecbf1  5e                   pop esi
// 009ecbf2  5b                   pop ebx
// 009ecbf3  83c410               add esp, 0x10
// 009ecbf6  c3                   ret 
// 009ecbf7  e8c457f9ff           call 0x9823c0
// copied from an identical function in another client (function ??1CXTPToolTipContextToolTip@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp