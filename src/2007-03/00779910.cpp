// roc 2007-03 00779910  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00779910
//
// 00779910  56                   push esi
// 00779911  8b35bcbe8b00         mov esi, dword ptr [0x8bbebc]
// 00779917  85f6                 test esi, esi
// 00779919  742b                 je 0x779946
// 0077991b  8d4604               lea eax, [esi + 4]
// 0077991e  83c9ff               or ecx, 0xffffffff
// 00779921  f00fc108             lock xadd dword ptr [eax], ecx
// 00779925  751f                 jne 0x779946
// 00779927  8b16                 mov edx, dword ptr [esi]
// 00779929  8b4204               mov eax, dword ptr [edx + 4]
// 0077992c  8bce                 mov ecx, esi
// 0077992e  ffd0                 call eax
// 00779930  8d4e08               lea ecx, [esi + 8]
// 00779933  83caff               or edx, 0xffffffff
// 00779936  f00fc111             lock xadd dword ptr [ecx], edx
// 0077993a  750a                 jne 0x779946
// 0077993c  8b06                 mov eax, dword ptr [esi]
// 0077993e  8b5008               mov edx, dword ptr [eax + 8]
// 00779941  8bce                 mov ecx, esi
// 00779943  5e                   pop esi
// 00779944  ffe2                 jmp edx
// 00779946  5e                   pop esi
// 00779947  c3                   ret 
// library rbxgs/script\Script.cpp (function ??__FhelloWorld@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
