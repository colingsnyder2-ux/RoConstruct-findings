// roc 2007-08 005658a0  unit: RBX::Verb  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005658a0
//
// 005658a0  8b442404             mov eax, dword ptr [esp + 4]
// 005658a4  56                   push esi
// 005658a5  57                   push edi
// 005658a6  8b38                 mov edi, dword ptr [eax]
// 005658a8  8bf1                 mov esi, ecx
// 005658aa  c70000000000         mov dword ptr [eax], 0
// 005658b0  8b06                 mov eax, dword ptr [esi]
// 005658b2  3bf8                 cmp edi, eax
// 005658b4  7414                 je 0x5658ca
// 005658b6  85c0                 test eax, eax
// 005658b8  7410                 je 0x5658ca
// 005658ba  8b08                 mov ecx, dword ptr [eax]
// 005658bc  8b5104               mov edx, dword ptr [ecx + 4]
// 005658bf  8d0c02               lea ecx, [edx + eax]
// 005658c2  8b01                 mov eax, dword ptr [ecx]
// 005658c4  8b10                 mov edx, dword ptr [eax]
// 005658c6  6a01                 push 1
// 005658c8  ffd2                 call edx
// 005658ca  893e                 mov dword ptr [esi], edi
// 005658cc  5f                   pop edi
// 005658cd  8bc6                 mov eax, esi
// 005658cf  5e                   pop esi
// 005658d0  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??4?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAEAAV01@U?$auto_ptr_ref@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
