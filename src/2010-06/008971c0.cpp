// roc 2010-06 008971c0  unit: CXTShadowHook  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008971c0
//
// 008971c0  0fb6c1               movzx eax, cl
// 008971c3  2bc6                 sub eax, esi
// 008971c5  3dff000000           cmp eax, 0xff
// 008971ca  53                   push ebx
// 008971cb  7e07                 jle 0x8971d4
// 008971cd  bbff000000           mov ebx, 0xff
// 008971d2  eb0a                 jmp 0x8971de
// 008971d4  33db                 xor ebx, ebx
// 008971d6  85c0                 test eax, eax
// 008971d8  0f9cc3               setl bl
// 008971db  4b                   dec ebx
// 008971dc  23d8                 and ebx, eax
// 008971de  8bc1                 mov eax, ecx
// 008971e0  c1e808               shr eax, 8
// 008971e3  0fb6c0               movzx eax, al
// 008971e6  2bc6                 sub eax, esi
// 008971e8  3dff000000           cmp eax, 0xff
// 008971ed  7e07                 jle 0x8971f6
// 008971ef  baff000000           mov edx, 0xff
// 008971f4  eb0a                 jmp 0x897200
// 008971f6  33d2                 xor edx, edx
// 008971f8  85c0                 test eax, eax
// 008971fa  0f9cc2               setl dl
// 008971fd  4a                   dec edx
// 008971fe  23d0                 and edx, eax
// 00897200  c1e910               shr ecx, 0x10
// 00897203  0fb6c1               movzx eax, cl
// 00897206  2bc6                 sub eax, esi
// 00897208  3dff000000           cmp eax, 0xff
// 0089720d  7e07                 jle 0x897216
// 0089720f  b9ff000000           mov ecx, 0xff
// 00897214  eb0a                 jmp 0x897220
// 00897216  33c9                 xor ecx, ecx
// 00897218  85c0                 test eax, eax
// 0089721a  0f9cc1               setl cl
// 0089721d  49                   dec ecx
// 0089721e  23c8                 and ecx, eax
// 00897220  0fb6c1               movzx eax, cl
// 00897223  0fb6ca               movzx ecx, dl
// 00897226  c1e008               shl eax, 8
// 00897229  0bc1                 or eax, ecx
// 0089722b  0fb6d3               movzx edx, bl
// 0089722e  c1e008               shl eax, 8
// 00897231  0bc2                 or eax, edx
// 00897233  5b                   pop ebx
// 00897234  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaPixel@@YAKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
