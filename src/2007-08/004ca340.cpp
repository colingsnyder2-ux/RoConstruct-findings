// roc 2007-08 004ca340  unit: seg_004c0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca340
//
// 004ca340  832dc02f890001       sub dword ptr [0x892fc0], 1
// 004ca347  7905                 jns 0x4ca34e
// 004ca349  e9d2feffff           jmp 0x4ca220
// 004ca34e  a1b4f98b00           mov eax, dword ptr [0x8bf9b4]
// 004ca353  8b08                 mov ecx, dword ptr [eax]
// 004ca355  83c004               add eax, 4
// 004ca358  a3b4f98b00           mov dword ptr [0x8bf9b4], eax
// 004ca35d  8bc1                 mov eax, ecx
// 004ca35f  c1e80b               shr eax, 0xb
// 004ca362  33c8                 xor ecx, eax
// 004ca364  8bd1                 mov edx, ecx
// 004ca366  81e2ad583aff         and edx, 0xff3a58ad
// 004ca36c  c1e207               shl edx, 7
// 004ca36f  33ca                 xor ecx, edx
// 004ca371  8bc1                 mov eax, ecx
// 004ca373  258cdfffff           and eax, 0xffffdf8c
// 004ca378  c1e00f               shl eax, 0xf
// 004ca37b  33c8                 xor ecx, eax
// 004ca37d  8bc1                 mov eax, ecx
// 004ca37f  c1e812               shr eax, 0x12
// 004ca382  33c1                 xor eax, ecx
// 004ca384  c3                   ret 
// library rbxgs-raknet/Rand.cpp (function ?randomMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet Rand.cpp
