// roc 2009-06 00401ef0  unit: boost::detail::sp_counted_base  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00401ef0
//
// 00401ef0  56                   push esi
// 00401ef1  8b31                 mov esi, dword ptr [ecx]
// 00401ef3  85f6                 test esi, esi
// 00401ef5  742b                 je 0x401f22
// 00401ef7  8d4604               lea eax, [esi + 4]
// 00401efa  83c9ff               or ecx, 0xffffffff
// 00401efd  f00fc108             lock xadd dword ptr [eax], ecx
// 00401f01  751f                 jne 0x401f22
// 00401f03  8b16                 mov edx, dword ptr [esi]
// 00401f05  8b4204               mov eax, dword ptr [edx + 4]
// 00401f08  8bce                 mov ecx, esi
// 00401f0a  ffd0                 call eax
// 00401f0c  8d4e08               lea ecx, [esi + 8]
// 00401f0f  83caff               or edx, 0xffffffff
// 00401f12  f00fc111             lock xadd dword ptr [ecx], edx
// 00401f16  750a                 jne 0x401f22
// 00401f18  8b06                 mov eax, dword ptr [esi]
// 00401f1a  8b5008               mov edx, dword ptr [eax + 8]
// 00401f1d  8bce                 mov ecx, esi
// 00401f1f  5e                   pop esi
// 00401f20  ffe2                 jmp edx
// 00401f22  5e                   pop esi
// 00401f23  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1shared_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
