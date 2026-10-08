// roc 2011-06 00462870  unit: CRobloxApp  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00462870
//
// 00462870  8b01                 mov eax, dword ptr [ecx]
// 00462872  85c0                 test eax, eax
// 00462874  7410                 je 0x462886
// 00462876  8b08                 mov ecx, dword ptr [eax]
// 00462878  8b5104               mov edx, dword ptr [ecx + 4]
// 0046287b  8d0c02               lea ecx, [edx + eax]
// 0046287e  8b01                 mov eax, dword ptr [ecx]
// 00462880  8b10                 mov edx, dword ptr [eax]
// 00462882  6a01                 push 1
// 00462884  ffd2                 call edx
// 00462886  c3                   ret 
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
