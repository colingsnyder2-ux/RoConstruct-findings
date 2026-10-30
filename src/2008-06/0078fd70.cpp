// from server: 100% by auto
// roc 2008-06 0078fd70  unit: CXTShadowHook  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078fd70
//
// 0078fd70  0fb6c1               movzx eax, cl
// 0078fd73  2bc6                 sub eax, esi
// 0078fd75  3dff000000           cmp eax, 0xff
// 0078fd7a  53                   push ebx
// 0078fd7b  7e07                 jle 0x78fd84
// 0078fd7d  bbff000000           mov ebx, 0xff
// 0078fd82  eb0a                 jmp 0x78fd8e
// 0078fd84  33db                 xor ebx, ebx
// 0078fd86  85c0                 test eax, eax
// 0078fd88  0f9cc3               setl bl
// 0078fd8b  4b                   dec ebx
// 0078fd8c  23d8                 and ebx, eax
// 0078fd8e  8bc1                 mov eax, ecx
// 0078fd90  c1e808               shr eax, 8
// 0078fd93  0fb6c0               movzx eax, al
// 0078fd96  2bc6                 sub eax, esi
// 0078fd98  3dff000000           cmp eax, 0xff
// 0078fd9d  7e07                 jle 0x78fda6
// 0078fd9f  baff000000           mov edx, 0xff
// 0078fda4  eb0a                 jmp 0x78fdb0
// 0078fda6  33d2                 xor edx, edx
// 0078fda8  85c0                 test eax, eax
// 0078fdaa  0f9cc2               setl dl
// 0078fdad  4a                   dec edx
// 0078fdae  23d0                 and edx, eax
// 0078fdb0  c1e910               shr ecx, 0x10
// 0078fdb3  0fb6c1               movzx eax, cl
// 0078fdb6  2bc6                 sub eax, esi
// 0078fdb8  3dff000000           cmp eax, 0xff
// 0078fdbd  7e07                 jle 0x78fdc6
// 0078fdbf  b9ff000000           mov ecx, 0xff
// 0078fdc4  eb0a                 jmp 0x78fdd0
// 0078fdc6  33c9                 xor ecx, ecx
// 0078fdc8  85c0                 test eax, eax
// 0078fdca  0f9cc1               setl cl
// 0078fdcd  49                   dec ecx
// 0078fdce  23c8                 and ecx, eax
// 0078fdd0  0fb6c1               movzx eax, cl
// 0078fdd3  0fb6ca               movzx ecx, dl
// 0078fdd6  c1e008               shl eax, 8
// 0078fdd9  0bc1                 or eax, ecx
// 0078fddb  0fb6d3               movzx edx, bl
// 0078fdde  c1e008               shl eax, 8
// 0078fde1  0bc2                 or eax, edx
// 0078fde3  5b                   pop ebx
// 0078fde4  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaPixel@@YAKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
