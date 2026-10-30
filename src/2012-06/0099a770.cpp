// roc 2012-06 0099a770  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099a770
//
// 0099a770  6aff                 push -1
// 0099a772  68e8cdad00           push 0xadcde8
// 0099a777  64a100000000         mov eax, dword ptr fs:[0]
// 0099a77d  50                   push eax
// 0099a77e  51                   push ecx
// 0099a77f  53                   push ebx
// 0099a780  56                   push esi
// 0099a781  57                   push edi
// 0099a782  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0099a787  33c4                 xor eax, esp
// 0099a789  50                   push eax
// 0099a78a  8d442414             lea eax, [esp + 0x14]
// 0099a78e  64a300000000         mov dword ptr fs:[0], eax
// 0099a794  8bf1                 mov esi, ecx
// 0099a796  8d4658               lea eax, [esi + 0x58]
// 0099a799  50                   push eax
// 0099a79a  8d4c2414             lea ecx, [esp + 0x14]
// 0099a79e  e8cdfa0200           call 0x9ca270
// 0099a7a3  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 0099a7a6  33c0                 xor eax, eax
// 0099a7a8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0099a7b0  85db                 test ebx, ebx
// 0099a7b2  7e25                 jle 0x99a7d9
// 0099a7b4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0099a7b8  8d4e30               lea ecx, [esi + 0x30]
// 0099a7bb  eb03                 jmp 0x99a7c0
// 0099a7bd  8d4900               lea ecx, [ecx]
// 0099a7c0  85c0                 test eax, eax
// 0099a7c2  7c67                 jl 0x99a82b
// 0099a7c4  3b4108               cmp eax, dword ptr [ecx + 8]
// 0099a7c7  7d62                 jge 0x99a82b
// 0099a7c9  8b5104               mov edx, dword ptr [ecx + 4]
// 0099a7cc  393c82               cmp dword ptr [edx + eax*4], edi
// 0099a7cf  8d1482               lea edx, [edx + eax*4]
// 0099a7d2  742b                 je 0x99a7ff
// 0099a7d4  40                   inc eax
// 0099a7d5  3bc3                 cmp eax, ebx
// 0099a7d7  7ce7                 jl 0x99a7c0
// 0099a7d9  8d4c2410             lea ecx, [esp + 0x10]
// 0099a7dd  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0099a7e5  e8a6fa0200           call 0x9ca290
// 0099a7ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0099a7ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0099a7f5  59                   pop ecx
// 0099a7f6  5f                   pop edi
// 0099a7f7  5e                   pop esi
// 0099a7f8  5b                   pop ebx
// 0099a7f9  83c410               add esp, 0x10
// 0099a7fc  c20400               ret 4
// 0099a7ff  6a01                 push 1
// 0099a801  50                   push eax
// 0099a802  e86989ffff           call 0x993170
// 0099a807  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0099a80a  8d4e44               lea ecx, [esi + 0x44]
// 0099a80d  57                   push edi
// 0099a80e  50                   push eax
// 0099a80f  e8bc760d00           call 0xa71ed0
// 0099a814  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0099a817  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0099a81a  0fafc8               imul ecx, eax
// 0099a81d  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 0099a820  75b7                 jne 0x99a7d9
// 0099a822  8bce                 mov ecx, esi
// 0099a824  e867fcffff           call 0x99a490
// 0099a829  ebae                 jmp 0x99a7d9
// 0099a82b  e8907bfeff           call 0x9823c0
// copied from an identical function in another client (function ?Clear@CXTPImageManagerResource@@QAEXPAUXTP_IMAGERESOURCE_INFO@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp