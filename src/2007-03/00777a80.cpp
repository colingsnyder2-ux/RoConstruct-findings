// roc 2007-03 00777a80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777a80
//
// 00777a80  56                   push esi
// 00777a81  8b35205f8b00         mov esi, dword ptr [0x8b5f20]
// 00777a87  85f6                 test esi, esi
// 00777a89  742b                 je 0x777ab6
// 00777a8b  8d4604               lea eax, [esi + 4]
// 00777a8e  83c9ff               or ecx, 0xffffffff
// 00777a91  f00fc108             lock xadd dword ptr [eax], ecx
// 00777a95  751f                 jne 0x777ab6
// 00777a97  8b16                 mov edx, dword ptr [esi]
// 00777a99  8b4204               mov eax, dword ptr [edx + 4]
// 00777a9c  8bce                 mov ecx, esi
// 00777a9e  ffd0                 call eax
// 00777aa0  8d4e08               lea ecx, [esi + 8]
// 00777aa3  83caff               or edx, 0xffffffff
// 00777aa6  f00fc111             lock xadd dword ptr [ecx], edx
// 00777aaa  750a                 jne 0x777ab6
// 00777aac  8b06                 mov eax, dword ptr [esi]
// 00777aae  8b5008               mov edx, dword ptr [eax + 8]
// 00777ab1  8bce                 mov ecx, esi
// 00777ab3  5e                   pop esi
// 00777ab4  ffe2                 jmp edx
// 00777ab6  5e                   pop esi
// 00777ab7  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__FhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
