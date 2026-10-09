// roc 2009-12 00688810  unit: RBX::ChangeHistoryService  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00688810
//
// 00688810  56                   push esi
// 00688811  8bf1                 mov esi, ecx
// 00688813  8b06                 mov eax, dword ptr [esi]
// 00688815  57                   push edi
// 00688816  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0068881a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00688822  3bf8                 cmp edi, eax
// 00688824  7414                 je 0x68883a
// 00688826  85c0                 test eax, eax
// 00688828  7410                 je 0x68883a
// 0068882a  8b08                 mov ecx, dword ptr [eax]
// 0068882c  8b5104               mov edx, dword ptr [ecx + 4]
// 0068882f  8d0c02               lea ecx, [edx + eax]
// 00688832  8b01                 mov eax, dword ptr [ecx]
// 00688834  8b10                 mov edx, dword ptr [eax]
// 00688836  6a01                 push 1
// 00688838  ffd2                 call edx
// 0068883a  893e                 mov dword ptr [esi], edi
// 0068883c  5f                   pop edi
// 0068883d  8bc6                 mov eax, esi
// 0068883f  5e                   pop esi
// 00688840  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??4?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAEAAV01@U?$auto_ptr_ref@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
