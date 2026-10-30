// roc 2009-12 00852b50  unit: CXTPPropExchangeXMLNode  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00852b50
//
// 00852b50  6aff                 push -1
// 00852b52  6836dc9500           push 0x95dc36
// 00852b57  64a100000000         mov eax, dword ptr fs:[0]
// 00852b5d  50                   push eax
// 00852b5e  51                   push ecx
// 00852b5f  56                   push esi
// 00852b60  57                   push edi
// 00852b61  a10052b600           mov eax, dword ptr [0xb65200]
// 00852b66  33c4                 xor eax, esp
// 00852b68  50                   push eax
// 00852b69  8d442410             lea eax, [esp + 0x10]
// 00852b6d  64a300000000         mov dword ptr fs:[0], eax
// 00852b73  8bf9                 mov edi, ecx
// 00852b75  837f2800             cmp dword ptr [edi + 0x28], 0
// 00852b79  7449                 je 0x852bc4
// 00852b7b  688c7d9f00           push 0x9f7d8c
// 00852b80  e8dbfdffff           call 0x852960
// 00852b85  85c0                 test eax, eax
// 00852b87  743b                 je 0x852bc4
// 00852b89  6a10                 push 0x10
// 00852b8b  e8d00cfaff           call 0x7f3860
// 00852b90  83c404               add esp, 4
// 00852b93  8944240c             mov dword ptr [esp + 0xc], eax
// 00852b97  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00852b9f  85c0                 test eax, eax
// 00852ba1  746d                 je 0x852c10
// 00852ba3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00852ba7  51                   push ecx
// 00852ba8  57                   push edi
// 00852ba9  8bc8                 mov ecx, eax
// 00852bab  e820d3ffff           call 0x84fed0
// 00852bb0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00852bb4  64890d00000000       mov dword ptr fs:[0], ecx
// 00852bbb  59                   pop ecx
// 00852bbc  5f                   pop edi
// 00852bbd  5e                   pop esi
// 00852bbe  83c410               add esp, 0x10
// 00852bc1  c20400               ret 4
// 00852bc4  6a14                 push 0x14
// 00852bc6  e8950cfaff           call 0x7f3860
// 00852bcb  8bf0                 mov esi, eax
// 00852bcd  83c404               add esp, 4
// 00852bd0  8974240c             mov dword ptr [esp + 0xc], esi
// 00852bd4  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00852bdc  85f6                 test esi, esi
// 00852bde  7430                 je 0x852c10
// 00852be0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00852be4  52                   push edx
// 00852be5  57                   push edi
// 00852be6  8bce                 mov ecx, esi
// 00852be8  e8e3d2ffff           call 0x84fed0
// 00852bed  c70678c59f00         mov dword ptr [esi], 0x9fc578
// 00852bf3  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00852bfa  8bc6                 mov eax, esi
// 00852bfc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00852c00  64890d00000000       mov dword ptr fs:[0], ecx
// 00852c07  59                   pop ecx
// 00852c08  5f                   pop edi
// 00852c09  5e                   pop esi
// 00852c0a  83c410               add esp, 0x10
// 00852c0d  c20400               ret 4
// 00852c10  33c0                 xor eax, eax
// 00852c12  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00852c16  64890d00000000       mov dword ptr fs:[0], ecx
// 00852c1d  59                   pop ecx
// 00852c1e  5f                   pop edi
// 00852c1f  5e                   pop esi
// 00852c20  83c410               add esp, 0x10
// 00852c23  c20400               ret 4
// copied from an identical function in another client (function ?GetEnumerator@CXTPPropExchangeXMLNode@@UAEPAVCXTPPropExchangeEnumerator@@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp