// roc 2007-03 00566e00  unit: seg_00560000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00566e00
//
// 00566e00  8b442404             mov eax, dword ptr [esp + 4]
// 00566e04  56                   push esi
// 00566e05  57                   push edi
// 00566e06  8b38                 mov edi, dword ptr [eax]
// 00566e08  8bf1                 mov esi, ecx
// 00566e0a  c70000000000         mov dword ptr [eax], 0
// 00566e10  8b06                 mov eax, dword ptr [esi]
// 00566e12  3bf8                 cmp edi, eax
// 00566e14  7414                 je 0x566e2a
// 00566e16  85c0                 test eax, eax
// 00566e18  7410                 je 0x566e2a
// 00566e1a  8b08                 mov ecx, dword ptr [eax]
// 00566e1c  8b5104               mov edx, dword ptr [ecx + 4]
// 00566e1f  8d0c02               lea ecx, [edx + eax]
// 00566e22  8b01                 mov eax, dword ptr [ecx]
// 00566e24  8b10                 mov edx, dword ptr [eax]
// 00566e26  6a01                 push 1
// 00566e28  ffd2                 call edx
// 00566e2a  893e                 mov dword ptr [esi], edi
// 00566e2c  5f                   pop edi
// 00566e2d  8bc6                 mov eax, esi
// 00566e2f  5e                   pop esi
// 00566e30  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??4?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAEAAV01@U?$auto_ptr_ref@V?$basic_istream@DU?$char_traits@D@std@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
