// from server: 100% by auto
// roc 2007-08 00402a20  unit: VCWorkspace::?$CComObject  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402a20
//
// 00402a20  56                   push esi
// 00402a21  8b31                 mov esi, dword ptr [ecx]
// 00402a23  85f6                 test esi, esi
// 00402a25  742b                 je 0x402a52
// 00402a27  8d4604               lea eax, [esi + 4]
// 00402a2a  83c9ff               or ecx, 0xffffffff
// 00402a2d  f00fc108             lock xadd dword ptr [eax], ecx
// 00402a31  751f                 jne 0x402a52
// 00402a33  8b16                 mov edx, dword ptr [esi]
// 00402a35  8b4204               mov eax, dword ptr [edx + 4]
// 00402a38  8bce                 mov ecx, esi
// 00402a3a  ffd0                 call eax
// 00402a3c  8d4e08               lea ecx, [esi + 8]
// 00402a3f  83caff               or edx, 0xffffffff
// 00402a42  f00fc111             lock xadd dword ptr [ecx], edx
// 00402a46  750a                 jne 0x402a52
// 00402a48  8b06                 mov eax, dword ptr [esi]
// 00402a4a  8b5008               mov edx, dword ptr [eax + 8]
// 00402a4d  8bce                 mov ecx, esi
// 00402a4f  5e                   pop esi
// 00402a50  ffe2                 jmp edx
// 00402a52  5e                   pop esi
// 00402a53  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??1shared_count@detail@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
