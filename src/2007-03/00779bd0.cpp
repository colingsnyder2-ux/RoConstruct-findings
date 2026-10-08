// roc 2007-03 00779bd0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779bd0
//
// 00779bd0  56                   push esi
// 00779bd1  8b35b4c68b00         mov esi, dword ptr [0x8bc6b4]
// 00779bd7  85f6                 test esi, esi
// 00779bd9  742b                 je 0x779c06
// 00779bdb  8d4604               lea eax, [esi + 4]
// 00779bde  83c9ff               or ecx, 0xffffffff
// 00779be1  f00fc108             lock xadd dword ptr [eax], ecx
// 00779be5  751f                 jne 0x779c06
// 00779be7  8b16                 mov edx, dword ptr [esi]
// 00779be9  8b4204               mov eax, dword ptr [edx + 4]
// 00779bec  8bce                 mov ecx, esi
// 00779bee  ffd0                 call eax
// 00779bf0  8d4e08               lea ecx, [esi + 8]
// 00779bf3  83caff               or edx, 0xffffffff
// 00779bf6  f00fc111             lock xadd dword ptr [ecx], edx
// 00779bfa  750a                 jne 0x779c06
// 00779bfc  8b06                 mov eax, dword ptr [esi]
// 00779bfe  8b5008               mov edx, dword ptr [eax + 8]
// 00779c01  8bce                 mov ecx, esi
// 00779c03  5e                   pop esi
// 00779c04  ffe2                 jmp edx
// 00779c06  5e                   pop esi
// 00779c07  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__FhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
