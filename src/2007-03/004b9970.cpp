// roc 2007-03 004b9970  unit: seg_004b0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9970
//
// 004b9970  51                   push ecx
// 004b9971  832d2414890001       sub dword ptr [0x891424], 1
// 004b9978  7907                 jns 0x4b9981
// 004b997a  e881feffff           call 0x4b9800
// 004b997f  eb36                 jmp 0x4b99b7
// 004b9981  a16c9e8b00           mov eax, dword ptr [0x8b9e6c]
// 004b9986  8b08                 mov ecx, dword ptr [eax]
// 004b9988  83c004               add eax, 4
// 004b998b  a36c9e8b00           mov dword ptr [0x8b9e6c], eax
// 004b9990  8bc1                 mov eax, ecx
// 004b9992  c1e80b               shr eax, 0xb
// 004b9995  33c8                 xor ecx, eax
// 004b9997  8bd1                 mov edx, ecx
// 004b9999  81e2ad583aff         and edx, 0xff3a58ad
// 004b999f  c1e207               shl edx, 7
// 004b99a2  33ca                 xor ecx, edx
// 004b99a4  8bc1                 mov eax, ecx
// 004b99a6  258cdfffff           and eax, 0xffffdf8c
// 004b99ab  c1e00f               shl eax, 0xf
// 004b99ae  33c8                 xor ecx, eax
// 004b99b0  8bc1                 mov eax, ecx
// 004b99b2  c1e812               shr eax, 0x12
// 004b99b5  33c1                 xor eax, ecx
// 004b99b7  85c0                 test eax, eax
// 004b99b9  890424               mov dword ptr [esp], eax
// 004b99bc  db0424               fild dword ptr [esp]
// 004b99bf  7d06                 jge 0x4b99c7
// 004b99c1  dc05a89b7800         fadd qword ptr [0x789ba8]
// 004b99c7  dc0de8e47900         fmul qword ptr [0x79e4e8]
// 004b99cd  d91c24               fstp dword ptr [esp]
// 004b99d0  d90424               fld dword ptr [esp]
// 004b99d3  59                   pop ecx
// 004b99d4  c3                   ret 
// library rbxgs-raknet/Rand.cpp (function ?frandomMT@@YAMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet Rand.cpp
