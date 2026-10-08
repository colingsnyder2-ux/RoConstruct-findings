// roc 2007-03 004b9920  unit: seg_004b0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9920
//
// 004b9920  832d2414890001       sub dword ptr [0x891424], 1
// 004b9927  7905                 jns 0x4b992e
// 004b9929  e9d2feffff           jmp 0x4b9800
// 004b992e  a16c9e8b00           mov eax, dword ptr [0x8b9e6c]
// 004b9933  8b08                 mov ecx, dword ptr [eax]
// 004b9935  83c004               add eax, 4
// 004b9938  a36c9e8b00           mov dword ptr [0x8b9e6c], eax
// 004b993d  8bc1                 mov eax, ecx
// 004b993f  c1e80b               shr eax, 0xb
// 004b9942  33c8                 xor ecx, eax
// 004b9944  8bd1                 mov edx, ecx
// 004b9946  81e2ad583aff         and edx, 0xff3a58ad
// 004b994c  c1e207               shl edx, 7
// 004b994f  33ca                 xor ecx, edx
// 004b9951  8bc1                 mov eax, ecx
// 004b9953  258cdfffff           and eax, 0xffffdf8c
// 004b9958  c1e00f               shl eax, 0xf
// 004b995b  33c8                 xor ecx, eax
// 004b995d  8bc1                 mov eax, ecx
// 004b995f  c1e812               shr eax, 0x12
// 004b9962  33c1                 xor eax, ecx
// 004b9964  c3                   ret 
// library rbxgs-raknet/Rand.cpp (function ?randomMT@@YAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet Rand.cpp
