// roc 2011-06 00401e10  unit: boost::detail::sp_counted_base  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00401e10
//
// 00401e10  56                   push esi
// 00401e11  8b31                 mov esi, dword ptr [ecx]
// 00401e13  85f6                 test esi, esi
// 00401e15  742b                 je 0x401e42
// 00401e17  8d4604               lea eax, [esi + 4]
// 00401e1a  83c9ff               or ecx, 0xffffffff
// 00401e1d  f00fc108             lock xadd dword ptr [eax], ecx
// 00401e21  751f                 jne 0x401e42
// 00401e23  8b16                 mov edx, dword ptr [esi]
// 00401e25  8b4204               mov eax, dword ptr [edx + 4]
// 00401e28  8bce                 mov ecx, esi
// 00401e2a  ffd0                 call eax
// 00401e2c  8d4e08               lea ecx, [esi + 8]
// 00401e2f  83caff               or edx, 0xffffffff
// 00401e32  f00fc111             lock xadd dword ptr [ecx], edx
// 00401e36  750a                 jne 0x401e42
// 00401e38  8b06                 mov eax, dword ptr [esi]
// 00401e3a  8b5008               mov edx, dword ptr [eax + 8]
// 00401e3d  8bce                 mov ecx, esi
// 00401e3f  5e                   pop esi
// 00401e40  ffe2                 jmp edx
// 00401e42  5e                   pop esi
// 00401e43  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1shared_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
