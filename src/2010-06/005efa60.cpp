// roc 2010-06 005efa60  unit: RBX::ChangeHistoryService  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005efa60
//
// 005efa60  56                   push esi
// 005efa61  8bf1                 mov esi, ecx
// 005efa63  8b06                 mov eax, dword ptr [esi]
// 005efa65  57                   push edi
// 005efa66  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005efa6a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005efa72  3bf8                 cmp edi, eax
// 005efa74  7414                 je 0x5efa8a
// 005efa76  85c0                 test eax, eax
// 005efa78  7410                 je 0x5efa8a
// 005efa7a  8b08                 mov ecx, dword ptr [eax]
// 005efa7c  8b5104               mov edx, dword ptr [ecx + 4]
// 005efa7f  8d0c02               lea ecx, [edx + eax]
// 005efa82  8b01                 mov eax, dword ptr [ecx]
// 005efa84  8b10                 mov edx, dword ptr [eax]
// 005efa86  6a01                 push 1
// 005efa88  ffd2                 call edx
// 005efa8a  893e                 mov dword ptr [esi], edi
// 005efa8c  5f                   pop edi
// 005efa8d  8bc6                 mov eax, esi
// 005efa8f  5e                   pop esi
// 005efa90  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??4?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAEAAV01@U?$auto_ptr_ref@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
