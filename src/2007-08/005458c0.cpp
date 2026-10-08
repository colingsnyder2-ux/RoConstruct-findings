// roc 2007-08 005458c0  unit: RBX::MD5HasherImpl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005458c0
//
// 005458c0  8b01                 mov eax, dword ptr [ecx]
// 005458c2  85c0                 test eax, eax
// 005458c4  7410                 je 0x5458d6
// 005458c6  8b08                 mov ecx, dword ptr [eax]
// 005458c8  8b5104               mov edx, dword ptr [ecx + 4]
// 005458cb  8d0c02               lea ecx, [edx + eax]
// 005458ce  8b01                 mov eax, dword ptr [ecx]
// 005458d0  8b10                 mov edx, dword ptr [eax]
// 005458d2  6a01                 push 1
// 005458d4  ffd2                 call edx
// 005458d6  c3                   ret 
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
