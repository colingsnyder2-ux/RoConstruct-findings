// roc 2009-06 0044d400  unit: CRobloxDoc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044d400
//
// 0044d400  8b01                 mov eax, dword ptr [ecx]
// 0044d402  85c0                 test eax, eax
// 0044d404  7410                 je 0x44d416
// 0044d406  8b08                 mov ecx, dword ptr [eax]
// 0044d408  8b5104               mov edx, dword ptr [ecx + 4]
// 0044d40b  8d0c02               lea ecx, [edx + eax]
// 0044d40e  8b01                 mov eax, dword ptr [ecx]
// 0044d410  8b10                 mov edx, dword ptr [eax]
// 0044d412  6a01                 push 1
// 0044d414  ffd2                 call edx
// 0044d416  c3                   ret 
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
