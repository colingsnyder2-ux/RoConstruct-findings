// roc 2009-12 0080c0f0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080c0f0
//
// 0080c0f0  6aff                 push -1
// 0080c0f2  68c8999500           push 0x9599c8
// 0080c0f7  64a100000000         mov eax, dword ptr fs:[0]
// 0080c0fd  50                   push eax
// 0080c0fe  51                   push ecx
// 0080c0ff  53                   push ebx
// 0080c100  56                   push esi
// 0080c101  57                   push edi
// 0080c102  a10052b600           mov eax, dword ptr [0xb65200]
// 0080c107  33c4                 xor eax, esp
// 0080c109  50                   push eax
// 0080c10a  8d442414             lea eax, [esp + 0x14]
// 0080c10e  64a300000000         mov dword ptr fs:[0], eax
// 0080c114  8bf1                 mov esi, ecx
// 0080c116  8d4658               lea eax, [esi + 0x58]
// 0080c119  50                   push eax
// 0080c11a  8d4c2414             lea ecx, [esp + 0x14]
// 0080c11e  e8ed020300           call 0x83c410
// 0080c123  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 0080c126  33c0                 xor eax, eax
// 0080c128  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0080c130  85db                 test ebx, ebx
// 0080c132  7e25                 jle 0x80c159
// 0080c134  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0080c138  8d4e30               lea ecx, [esi + 0x30]
// 0080c13b  eb03                 jmp 0x80c140
// 0080c13d  8d4900               lea ecx, [ecx]
// 0080c140  85c0                 test eax, eax
// 0080c142  7c67                 jl 0x80c1ab
// 0080c144  3b4108               cmp eax, dword ptr [ecx + 8]
// 0080c147  7d62                 jge 0x80c1ab
// 0080c149  8b5104               mov edx, dword ptr [ecx + 4]
// 0080c14c  393c82               cmp dword ptr [edx + eax*4], edi
// 0080c14f  8d1482               lea edx, [edx + eax*4]
// 0080c152  742b                 je 0x80c17f
// 0080c154  40                   inc eax
// 0080c155  3bc3                 cmp eax, ebx
// 0080c157  7ce7                 jl 0x80c140
// 0080c159  8d4c2410             lea ecx, [esp + 0x10]
// 0080c15d  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0080c165  e8c6020300           call 0x83c430
// 0080c16a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080c16e  64890d00000000       mov dword ptr fs:[0], ecx
// 0080c175  59                   pop ecx
// 0080c176  5f                   pop edi
// 0080c177  5e                   pop esi
// 0080c178  5b                   pop ebx
// 0080c179  83c410               add esp, 0x10
// 0080c17c  c20400               ret 4
// 0080c17f  6a01                 push 1
// 0080c181  50                   push eax
// 0080c182  e8f9100200           call 0x82d280
// 0080c187  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080c18a  8d4e44               lea ecx, [esi + 0x44]
// 0080c18d  57                   push edi
// 0080c18e  50                   push eax
// 0080c18f  e8dcea0500           call 0x86ac70
// 0080c194  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080c197  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0080c19a  0fafc8               imul ecx, eax
// 0080c19d  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 0080c1a0  75b7                 jne 0x80c159
// 0080c1a2  8bce                 mov ecx, esi
// 0080c1a4  e867fcffff           call 0x80be10
// 0080c1a9  ebae                 jmp 0x80c159
// 0080c1ab  e85c79feff           call 0x7f3b0c
// copied from an identical function in another client (function ?Clear@CXTPImageManagerResource@@QAEXPAUXTP_IMAGERESOURCE_INFO@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp