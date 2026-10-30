// roc 2009-12 008541c0  unit: CXTPPropExchangeXMLNode  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008541c0
//
// 008541c0  51                   push ecx
// 008541c1  56                   push esi
// 008541c2  8bf1                 mov esi, ecx
// 008541c4  837e3800             cmp dword ptr [esi + 0x38], 0
// 008541c8  57                   push edi
// 008541c9  0f858c000000         jne 0x85425b
// 008541cf  837e4400             cmp dword ptr [esi + 0x44], 0
// 008541d3  8d7e44               lea edi, [esi + 0x44]
// 008541d6  c7463801000000       mov dword ptr [esi + 0x38], 1
// 008541dd  7526                 jne 0x854205
// 008541df  837e3000             cmp dword ptr [esi + 0x30], 0
// 008541e3  751b                 jne 0x854200
// 008541e5  e836f7ffff           call 0x853920
// 008541ea  85c0                 test eax, eax
// 008541ec  0f8481000000         je 0x854273
// 008541f2  833f00               cmp dword ptr [edi], 0
// 008541f5  747c                 je 0x854273
// 008541f7  57                   push edi
// 008541f8  8d4e48               lea ecx, [esi + 0x48]
// 008541fb  e850feffff           call 0x854050
// 00854200  833f00               cmp dword ptr [edi], 0
// 00854203  746e                 je 0x854273
// 00854205  837e4800             cmp dword ptr [esi + 0x48], 0
// 00854209  7468                 je 0x854273
// 0085420b  8d4e50               lea ecx, [esi + 0x50]
// 0085420e  ff1580de9800         call dword ptr [0x98de80]
// 00854214  50                   push eax
// 00854215  8d44240c             lea eax, [esp + 0xc]
// 00854219  50                   push eax
// 0085421a  8bce                 mov ecx, esi
// 0085421c  e8afe1ffff           call 0x8523d0
// 00854221  8d7e4c               lea edi, [esi + 0x4c]
// 00854224  50                   push eax
// 00854225  8bcf                 mov ecx, edi
// 00854227  e8a4eaffff           call 0x852cd0
// 0085422c  8b442408             mov eax, dword ptr [esp + 8]
// 00854230  85c0                 test eax, eax
// 00854232  7408                 je 0x85423c
// 00854234  8b08                 mov ecx, dword ptr [eax]
// 00854236  8b5108               mov edx, dword ptr [ecx + 8]
// 00854239  50                   push eax
// 0085423a  ffd2                 call edx
// 0085423c  833f00               cmp dword ptr [edi], 0
// 0085423f  741a                 je 0x85425b
// 00854241  837e3000             cmp dword ptr [esi + 0x30], 0
// 00854245  7514                 jne 0x85425b
// 00854247  6a00                 push 0
// 00854249  8d4658               lea eax, [esi + 0x58]
// 0085424c  50                   push eax
// 0085424d  6868c69f00           push 0x9fc668
// 00854252  56                   push esi
// 00854253  e808c8ffff           call 0x850a60
// 00854258  83c410               add esp, 0x10
// 0085425b  837e4400             cmp dword ptr [esi + 0x44], 0
// 0085425f  7412                 je 0x854273
// 00854261  837e4800             cmp dword ptr [esi + 0x48], 0
// 00854265  740c                 je 0x854273
// 00854267  33c0                 xor eax, eax
// 00854269  39464c               cmp dword ptr [esi + 0x4c], eax
// 0085426c  5f                   pop edi
// 0085426d  0f95c0               setne al
// 00854270  5e                   pop esi
// 00854271  59                   pop ecx
// 00854272  c3                   ret 
// 00854273  5f                   pop edi
// 00854274  33c0                 xor eax, eax
// 00854276  5e                   pop esi
// 00854277  59                   pop ecx
// 00854278  c3                   ret 
// copied from an identical function in another client (function ?OnBeforeExchange@CXTPPropExchangeXMLNode@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp