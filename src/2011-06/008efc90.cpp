// roc 2011-06 008efc90  unit: CXTShadowHook  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008efc90
//
// 008efc90  0fb6c1               movzx eax, cl
// 008efc93  2bc6                 sub eax, esi
// 008efc95  3dff000000           cmp eax, 0xff
// 008efc9a  53                   push ebx
// 008efc9b  7e07                 jle 0x8efca4
// 008efc9d  bbff000000           mov ebx, 0xff
// 008efca2  eb0a                 jmp 0x8efcae
// 008efca4  33db                 xor ebx, ebx
// 008efca6  85c0                 test eax, eax
// 008efca8  0f9cc3               setl bl
// 008efcab  4b                   dec ebx
// 008efcac  23d8                 and ebx, eax
// 008efcae  8bc1                 mov eax, ecx
// 008efcb0  c1e808               shr eax, 8
// 008efcb3  0fb6c0               movzx eax, al
// 008efcb6  2bc6                 sub eax, esi
// 008efcb8  3dff000000           cmp eax, 0xff
// 008efcbd  7e07                 jle 0x8efcc6
// 008efcbf  baff000000           mov edx, 0xff
// 008efcc4  eb0a                 jmp 0x8efcd0
// 008efcc6  33d2                 xor edx, edx
// 008efcc8  85c0                 test eax, eax
// 008efcca  0f9cc2               setl dl
// 008efccd  4a                   dec edx
// 008efcce  23d0                 and edx, eax
// 008efcd0  c1e910               shr ecx, 0x10
// 008efcd3  0fb6c1               movzx eax, cl
// 008efcd6  2bc6                 sub eax, esi
// 008efcd8  3dff000000           cmp eax, 0xff
// 008efcdd  7e07                 jle 0x8efce6
// 008efcdf  b9ff000000           mov ecx, 0xff
// 008efce4  eb0a                 jmp 0x8efcf0
// 008efce6  33c9                 xor ecx, ecx
// 008efce8  85c0                 test eax, eax
// 008efcea  0f9cc1               setl cl
// 008efced  49                   dec ecx
// 008efcee  23c8                 and ecx, eax
// 008efcf0  0fb6c1               movzx eax, cl
// 008efcf3  0fb6ca               movzx ecx, dl
// 008efcf6  c1e008               shl eax, 8
// 008efcf9  0bc1                 or eax, ecx
// 008efcfb  0fb6d3               movzx edx, bl
// 008efcfe  c1e008               shl eax, 8
// 008efd01  0bc2                 or eax, edx
// 008efd03  5b                   pop ebx
// 008efd04  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaPixel@@YAKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
