// roc 2009-12 008504b0  unit: CXTPPropExchange  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008504b0
//
// 008504b0  6aff                 push -1
// 008504b2  684bd89500           push 0x95d84b
// 008504b7  64a100000000         mov eax, dword ptr fs:[0]
// 008504bd  50                   push eax
// 008504be  51                   push ecx
// 008504bf  56                   push esi
// 008504c0  a10052b600           mov eax, dword ptr [0xb65200]
// 008504c5  33c4                 xor eax, esp
// 008504c7  50                   push eax
// 008504c8  8d44240c             lea eax, [esp + 0xc]
// 008504cc  64a300000000         mov dword ptr fs:[0], eax
// 008504d2  8bf1                 mov esi, ecx
// 008504d4  6a10                 push 0x10
// 008504d6  e88533faff           call 0x7f3860
// 008504db  83c404               add esp, 4
// 008504de  89442408             mov dword ptr [esp + 8], eax
// 008504e2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008504ea  85c0                 test eax, eax
// 008504ec  7420                 je 0x85050e
// 008504ee  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008504f2  51                   push ecx
// 008504f3  56                   push esi
// 008504f4  8bc8                 mov ecx, eax
// 008504f6  e8d5f9ffff           call 0x84fed0
// 008504fb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008504ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00850506  59                   pop ecx
// 00850507  5e                   pop esi
// 00850508  83c410               add esp, 0x10
// 0085050b  c20400               ret 4
// 0085050e  33c0                 xor eax, eax
// 00850510  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00850514  64890d00000000       mov dword ptr fs:[0], ecx
// 0085051b  59                   pop ecx
// 0085051c  5e                   pop esi
// 0085051d  83c410               add esp, 0x10
// 00850520  c20400               ret 4
// copied from an identical function in another client (function ?GetEnumerator@CXTPPropExchange@@UAEPAVCXTPPropExchangeEnumerator@@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp