// roc 2007-03 00544e30  unit: seg_00540000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544e30
//
// 00544e30  8b01                 mov eax, dword ptr [ecx]
// 00544e32  85c0                 test eax, eax
// 00544e34  7410                 je 0x544e46
// 00544e36  8b08                 mov ecx, dword ptr [eax]
// 00544e38  8b5104               mov edx, dword ptr [ecx + 4]
// 00544e3b  8d0c02               lea ecx, [edx + eax]
// 00544e3e  8b01                 mov eax, dword ptr [ecx]
// 00544e40  8b10                 mov edx, dword ptr [eax]
// 00544e42  6a01                 push 1
// 00544e44  ffd2                 call edx
// 00544e46  c3                   ret 
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
