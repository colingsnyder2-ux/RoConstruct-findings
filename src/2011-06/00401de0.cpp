// roc 2011-06 00401de0  unit: boost::detail::sp_counted_base  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00401de0
//
// 00401de0  56                   push esi
// 00401de1  8bf1                 mov esi, ecx
// 00401de3  8d4604               lea eax, [esi + 4]
// 00401de6  83c9ff               or ecx, 0xffffffff
// 00401de9  f00fc108             lock xadd dword ptr [eax], ecx
// 00401ded  751f                 jne 0x401e0e
// 00401def  8b16                 mov edx, dword ptr [esi]
// 00401df1  8b4204               mov eax, dword ptr [edx + 4]
// 00401df4  8bce                 mov ecx, esi
// 00401df6  ffd0                 call eax
// 00401df8  8d4e08               lea ecx, [esi + 8]
// 00401dfb  83caff               or edx, 0xffffffff
// 00401dfe  f00fc111             lock xadd dword ptr [ecx], edx
// 00401e02  750a                 jne 0x401e0e
// 00401e04  8b06                 mov eax, dword ptr [esi]
// 00401e06  8b5008               mov edx, dword ptr [eax + 8]
// 00401e09  8bce                 mov ecx, esi
// 00401e0b  5e                   pop esi
// 00401e0c  ffe2                 jmp edx
// 00401e0e  5e                   pop esi
// 00401e0f  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?release@sp_counted_base@detail@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
