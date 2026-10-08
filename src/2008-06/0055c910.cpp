// roc 2008-06 0055c910  unit: RBX::MD5HasherImpl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055c910
//
// 0055c910  8b01                 mov eax, dword ptr [ecx]
// 0055c912  85c0                 test eax, eax
// 0055c914  7410                 je 0x55c926
// 0055c916  8b08                 mov ecx, dword ptr [eax]
// 0055c918  8b5104               mov edx, dword ptr [ecx + 4]
// 0055c91b  8d0c02               lea ecx, [edx + eax]
// 0055c91e  8b01                 mov eax, dword ptr [ecx]
// 0055c920  8b10                 mov edx, dword ptr [eax]
// 0055c922  6a01                 push 1
// 0055c924  ffd2                 call edx
// 0055c926  c3                   ret 
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
