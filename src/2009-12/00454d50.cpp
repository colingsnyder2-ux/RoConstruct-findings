// roc 2009-12 00454d50  unit: CRobloxDoc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00454d50
//
// 00454d50  8b01                 mov eax, dword ptr [ecx]
// 00454d52  85c0                 test eax, eax
// 00454d54  7410                 je 0x454d66
// 00454d56  8b08                 mov ecx, dword ptr [eax]
// 00454d58  8b5104               mov edx, dword ptr [ecx + 4]
// 00454d5b  8d0c02               lea ecx, [edx + eax]
// 00454d5e  8b01                 mov eax, dword ptr [ecx]
// 00454d60  8b10                 mov edx, dword ptr [eax]
// 00454d62  6a01                 push 1
// 00454d64  ffd2                 call edx
// 00454d66  c3                   ret 
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
