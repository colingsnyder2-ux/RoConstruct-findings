// roc 2012-06 0047a960  unit: CRobloxDoc  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047a960
//
// 0047a960  8b01                 mov eax, dword ptr [ecx]
// 0047a962  85c0                 test eax, eax
// 0047a964  7410                 je 0x47a976
// 0047a966  8b08                 mov ecx, dword ptr [eax]
// 0047a968  8b5104               mov edx, dword ptr [ecx + 4]
// 0047a96b  8d0c02               lea ecx, [edx + eax]
// 0047a96e  8b01                 mov eax, dword ptr [ecx]
// 0047a970  8b10                 mov edx, dword ptr [eax]
// 0047a972  6a01                 push 1
// 0047a974  ffd2                 call edx
// 0047a976  c3                   ret 
// library rbxgs/v8xml\XmlSerializer.cpp (function ??1?$auto_ptr@V?$basic_istream@DU?$char_traits@D@std@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
