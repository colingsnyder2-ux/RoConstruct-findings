// roc 2009-06 00735040  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00735040
//
// 00735040  6aff                 push -1
// 00735042  68c85a8700           push 0x875ac8
// 00735047  64a100000000         mov eax, dword ptr fs:[0]
// 0073504d  50                   push eax
// 0073504e  51                   push ecx
// 0073504f  53                   push ebx
// 00735050  56                   push esi
// 00735051  57                   push edi
// 00735052  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00735057  33c4                 xor eax, esp
// 00735059  50                   push eax
// 0073505a  8d442414             lea eax, [esp + 0x14]
// 0073505e  64a300000000         mov dword ptr fs:[0], eax
// 00735064  8bf1                 mov esi, ecx
// 00735066  8d4658               lea eax, [esi + 0x58]
// 00735069  50                   push eax
// 0073506a  8d4c2414             lea ecx, [esp + 0x14]
// 0073506e  e8cdc50200           call 0x761640
// 00735073  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 00735076  33c0                 xor eax, eax
// 00735078  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00735080  85db                 test ebx, ebx
// 00735082  7e25                 jle 0x7350a9
// 00735084  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00735088  8d4e30               lea ecx, [esi + 0x30]
// 0073508b  eb03                 jmp 0x735090
// 0073508d  8d4900               lea ecx, [ecx]
// 00735090  85c0                 test eax, eax
// 00735092  7c67                 jl 0x7350fb
// 00735094  3b4108               cmp eax, dword ptr [ecx + 8]
// 00735097  7d62                 jge 0x7350fb
// 00735099  8b5104               mov edx, dword ptr [ecx + 4]
// 0073509c  393c82               cmp dword ptr [edx + eax*4], edi
// 0073509f  8d1482               lea edx, [edx + eax*4]
// 007350a2  742b                 je 0x7350cf
// 007350a4  40                   inc eax
// 007350a5  3bc3                 cmp eax, ebx
// 007350a7  7ce7                 jl 0x735090
// 007350a9  8d4c2410             lea ecx, [esp + 0x10]
// 007350ad  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007350b5  e8a6c50200           call 0x761660
// 007350ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007350be  64890d00000000       mov dword ptr fs:[0], ecx
// 007350c5  59                   pop ecx
// 007350c6  5f                   pop edi
// 007350c7  5e                   pop esi
// 007350c8  5b                   pop ebx
// 007350c9  83c410               add esp, 0x10
// 007350cc  c20400               ret 4
// 007350cf  6a01                 push 1
// 007350d1  50                   push eax
// 007350d2  e889d50100           call 0x752660
// 007350d7  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007350da  8d4e44               lea ecx, [esi + 0x44]
// 007350dd  57                   push edi
// 007350de  50                   push eax
// 007350df  e83cd60100           call 0x752720
// 007350e4  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007350e7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007350ea  0fafc8               imul ecx, eax
// 007350ed  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 007350f0  75b7                 jne 0x7350a9
// 007350f2  8bce                 mov ecx, esi
// 007350f4  e867fcffff           call 0x734d60
// 007350f9  ebae                 jmp 0x7350a9
// 007350fb  e8e43bfeff           call 0x718ce4
// copied from an identical function in another client (function ?Clear@CXTPImageManagerResource@@QAEXPAUXTP_IMAGERESOURCE_INFO@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp