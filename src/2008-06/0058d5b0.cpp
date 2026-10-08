// roc 2008-06 0058d5b0  unit: RBX::ChangeHistoryService  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d5b0
//
// 0058d5b0  56                   push esi
// 0058d5b1  8bf1                 mov esi, ecx
// 0058d5b3  8b06                 mov eax, dword ptr [esi]
// 0058d5b5  57                   push edi
// 0058d5b6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0058d5ba  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0058d5c2  3bf8                 cmp edi, eax
// 0058d5c4  7414                 je 0x58d5da
// 0058d5c6  85c0                 test eax, eax
// 0058d5c8  7410                 je 0x58d5da
// 0058d5ca  8b08                 mov ecx, dword ptr [eax]
// 0058d5cc  8b5104               mov edx, dword ptr [ecx + 4]
// 0058d5cf  8d0c02               lea ecx, [edx + eax]
// 0058d5d2  8b01                 mov eax, dword ptr [ecx]
// 0058d5d4  8b10                 mov edx, dword ptr [eax]
// 0058d5d6  6a01                 push 1
// 0058d5d8  ffd2                 call edx
// 0058d5da  893e                 mov dword ptr [esi], edi
// 0058d5dc  5f                   pop edi
// 0058d5dd  8bc6                 mov eax, esi
// 0058d5df  5e                   pop esi
// 0058d5e0  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??4?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAEAAV01@U?$auto_ptr_ref@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
