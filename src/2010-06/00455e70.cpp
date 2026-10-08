// roc 2010-06 00455e70  unit: CRobloxDoc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00455e70
//
// 00455e70  8b01                 mov eax, dword ptr [ecx]
// 00455e72  85c0                 test eax, eax
// 00455e74  7410                 je 0x455e86
// 00455e76  8b08                 mov ecx, dword ptr [eax]
// 00455e78  8b5104               mov edx, dword ptr [ecx + 4]
// 00455e7b  8d0c02               lea ecx, [edx + eax]
// 00455e7e  8b01                 mov eax, dword ptr [ecx]
// 00455e80  8b10                 mov edx, dword ptr [eax]
// 00455e82  6a01                 push 1
// 00455e84  ffd2                 call edx
// 00455e86  c3                   ret 
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
