// roc 2012-06 00a68080  unit: CXTShadowHook  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68080
//
// 00a68080  0fb6c1               movzx eax, cl
// 00a68083  2bc6                 sub eax, esi
// 00a68085  3dff000000           cmp eax, 0xff
// 00a6808a  53                   push ebx
// 00a6808b  7e07                 jle 0xa68094
// 00a6808d  bbff000000           mov ebx, 0xff
// 00a68092  eb0a                 jmp 0xa6809e
// 00a68094  33db                 xor ebx, ebx
// 00a68096  85c0                 test eax, eax
// 00a68098  0f9cc3               setl bl
// 00a6809b  4b                   dec ebx
// 00a6809c  23d8                 and ebx, eax
// 00a6809e  8bc1                 mov eax, ecx
// 00a680a0  c1e808               shr eax, 8
// 00a680a3  0fb6c0               movzx eax, al
// 00a680a6  2bc6                 sub eax, esi
// 00a680a8  3dff000000           cmp eax, 0xff
// 00a680ad  7e07                 jle 0xa680b6
// 00a680af  baff000000           mov edx, 0xff
// 00a680b4  eb0a                 jmp 0xa680c0
// 00a680b6  33d2                 xor edx, edx
// 00a680b8  85c0                 test eax, eax
// 00a680ba  0f9cc2               setl dl
// 00a680bd  4a                   dec edx
// 00a680be  23d0                 and edx, eax
// 00a680c0  c1e910               shr ecx, 0x10
// 00a680c3  0fb6c1               movzx eax, cl
// 00a680c6  2bc6                 sub eax, esi
// 00a680c8  3dff000000           cmp eax, 0xff
// 00a680cd  7e07                 jle 0xa680d6
// 00a680cf  b9ff000000           mov ecx, 0xff
// 00a680d4  eb0a                 jmp 0xa680e0
// 00a680d6  33c9                 xor ecx, ecx
// 00a680d8  85c0                 test eax, eax
// 00a680da  0f9cc1               setl cl
// 00a680dd  49                   dec ecx
// 00a680de  23c8                 and ecx, eax
// 00a680e0  0fb6c1               movzx eax, cl
// 00a680e3  0fb6ca               movzx ecx, dl
// 00a680e6  c1e008               shl eax, 8
// 00a680e9  0bc1                 or eax, ecx
// 00a680eb  0fb6d3               movzx edx, bl
// 00a680ee  c1e008               shl eax, 8
// 00a680f1  0bc2                 or eax, edx
// 00a680f3  5b                   pop ebx
// 00a680f4  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaPixel@@YAKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
