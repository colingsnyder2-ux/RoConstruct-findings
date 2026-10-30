// roc 2009-12 00854090  unit: CXTPPropExchangeXMLNode::CXMLEnumerator  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854090
//
// 00854090  6aff                 push -1
// 00854092  68c8bb9500           push 0x95bbc8
// 00854097  64a100000000         mov eax, dword ptr fs:[0]
// 0085409d  50                   push eax
// 0085409e  83ec10               sub esp, 0x10
// 008540a1  53                   push ebx
// 008540a2  56                   push esi
// 008540a3  57                   push edi
// 008540a4  a10052b600           mov eax, dword ptr [0xb65200]
// 008540a9  33c4                 xor eax, esp
// 008540ab  50                   push eax
// 008540ac  8d442420             lea eax, [esp + 0x20]
// 008540b0  64a300000000         mov dword ptr fs:[0], eax
// 008540b6  8bf1                 mov esi, ecx
// 008540b8  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008540bc  57                   push edi
// 008540bd  ff159cb29800         call dword ptr [0x98b29c]
// 008540c3  83f8ff               cmp eax, -1
// 008540c6  0f84d5000000         je 0x8541a1
// 008540cc  a810                 test al, 0x10
// 008540ce  0f85cd000000         jne 0x8541a1
// 008540d4  8bce                 mov ecx, esi
// 008540d6  e845f8ffff           call 0x853920
// 008540db  85c0                 test eax, eax
// 008540dd  0f84be000000         je 0x8541a1
// 008540e3  33c0                 xor eax, eax
// 008540e5  57                   push edi
// 008540e6  8d4c2414             lea ecx, [esp + 0x14]
// 008540ea  6689442414           mov word ptr [esp + 0x14], ax
// 008540ef  e8a0250d00           call 0x926694
// 008540f4  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008540f7  8d7e44               lea edi, [esi + 0x44]
// 008540fa  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00854102  85c9                 test ecx, ecx
// 00854104  750a                 jne 0x854110
// 00854106  6803400080           push 0x80004003
// 0085410b  e8f017faff           call 0x7f5900
// 00854110  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00854114  8b11                 mov edx, dword ptr [ecx]
// 00854116  8d442430             lea eax, [esp + 0x30]
// 0085411a  50                   push eax
// 0085411b  83ec10               sub esp, 0x10
// 0085411e  8bc4                 mov eax, esp
// 00854120  8918                 mov dword ptr [eax], ebx
// 00854122  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00854126  895804               mov dword ptr [eax + 4], ebx
// 00854129  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0085412d  895808               mov dword ptr [eax + 8], ebx
// 00854130  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00854134  51                   push ecx
// 00854135  8b8ae8000000         mov ecx, dword ptr [edx + 0xe8]
// 0085413b  89580c               mov dword ptr [eax + 0xc], ebx
// 0085413e  ffd1                 call ecx
// 00854140  8d542410             lea edx, [esp + 0x10]
// 00854144  52                   push edx
// 00854145  8bd8                 mov ebx, eax
// 00854147  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0085414f  ff1534ba9800         call dword ptr [0x98ba34]
// 00854155  85db                 test ebx, ebx
// 00854157  7c48                 jl 0x8541a1
// 00854159  66837c243000         cmp word ptr [esp + 0x30], 0
// 0085415f  7440                 je 0x8541a1
// 00854161  57                   push edi
// 00854162  8d4e48               lea ecx, [esi + 0x48]
// 00854165  e8e6feffff           call 0x854050
// 0085416a  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0085416d  85c0                 test eax, eax
// 0085416f  740f                 je 0x854180
// 00854171  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 00854178  8b08                 mov ecx, dword ptr [eax]
// 0085417a  8b5108               mov edx, dword ptr [ecx + 8]
// 0085417d  50                   push eax
// 0085417e  ffd2                 call edx
// 00854180  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00854187  b801000000           mov eax, 1
// 0085418c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00854190  64890d00000000       mov dword ptr fs:[0], ecx
// 00854197  59                   pop ecx
// 00854198  5f                   pop edi
// 00854199  5e                   pop esi
// 0085419a  5b                   pop ebx
// 0085419b  83c41c               add esp, 0x1c
// 0085419e  c20400               ret 4
// 008541a1  33c0                 xor eax, eax
// 008541a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008541a7  64890d00000000       mov dword ptr fs:[0], ecx
// 008541ae  59                   pop ecx
// 008541af  5f                   pop edi
// 008541b0  5e                   pop esi
// 008541b1  5b                   pop ebx
// 008541b2  83c41c               add esp, 0x1c
// 008541b5  c20400               ret 4
// copied from an identical function in another client (function ?LoadFromFile@CXTPPropExchangeXMLNode@@QAEHPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp