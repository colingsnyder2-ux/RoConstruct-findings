// roc 2009-12 00853970  unit: CXTPPropExchangeXMLNode  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853970
//
// 00853970  6aff                 push -1
// 00853972  680aee9500           push 0x95ee0a
// 00853977  64a100000000         mov eax, dword ptr fs:[0]
// 0085397d  50                   push eax
// 0085397e  51                   push ecx
// 0085397f  56                   push esi
// 00853980  57                   push edi
// 00853981  a10052b600           mov eax, dword ptr [0xb65200]
// 00853986  33c4                 xor eax, esp
// 00853988  50                   push eax
// 00853989  8d442410             lea eax, [esp + 0x10]
// 0085398d  64a300000000         mov dword ptr fs:[0], eax
// 00853993  8bf1                 mov esi, ecx
// 00853995  8b06                 mov eax, dword ptr [esi]
// 00853997  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0085399d  ffd2                 call edx
// 0085399f  6a5c                 push 0x5c
// 008539a1  e8bafef9ff           call 0x7f3860
// 008539a6  8bf8                 mov edi, eax
// 008539a8  83c404               add esp, 4
// 008539ab  897c240c             mov dword ptr [esp + 0xc], edi
// 008539af  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008539b7  85ff                 test edi, edi
// 008539b9  742c                 je 0x8539e7
// 008539bb  8b442420             mov eax, dword ptr [esp + 0x20]
// 008539bf  50                   push eax
// 008539c0  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008539c3  51                   push ecx
// 008539c4  8bcc                 mov ecx, esp
// 008539c6  89642428             mov dword ptr [esp + 0x28], esp
// 008539ca  8901                 mov dword ptr [ecx], eax
// 008539cc  85c0                 test eax, eax
// 008539ce  7408                 je 0x8539d8
// 008539d0  8b08                 mov ecx, dword ptr [eax]
// 008539d2  8b5104               mov edx, dword ptr [ecx + 4]
// 008539d5  50                   push eax
// 008539d6  ffd2                 call edx
// 008539d8  8b4628               mov eax, dword ptr [esi + 0x28]
// 008539db  50                   push eax
// 008539dc  8bcf                 mov ecx, edi
// 008539de  e84dfdffff           call 0x853730
// 008539e3  8bc8                 mov ecx, eax
// 008539e5  eb02                 jmp 0x8539e9
// 008539e7  33c9                 xor ecx, ecx
// 008539e9  8b4658               mov eax, dword ptr [esi + 0x58]
// 008539ec  56                   push esi
// 008539ed  894158               mov dword ptr [ecx + 0x58], eax
// 008539f0  e88bc6ffff           call 0x850080
// 008539f5  8bc1                 mov eax, ecx
// 008539f7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008539fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00853a02  59                   pop ecx
// 00853a03  5f                   pop edi
// 00853a04  5e                   pop esi
// 00853a05  83c410               add esp, 0x10
// 00853a08  c20400               ret 4
// copied from an identical function in another client (function ?GetSection@CXTPPropExchangeXMLNode@@UAEPAVCXTPPropExchange@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp