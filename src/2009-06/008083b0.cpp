// roc 2009-06 008083b0  unit: CXTShadowHook  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008083b0
//
// 008083b0  0fb6c1               movzx eax, cl
// 008083b3  2bc6                 sub eax, esi
// 008083b5  3dff000000           cmp eax, 0xff
// 008083ba  53                   push ebx
// 008083bb  7e07                 jle 0x8083c4
// 008083bd  bbff000000           mov ebx, 0xff
// 008083c2  eb0a                 jmp 0x8083ce
// 008083c4  33db                 xor ebx, ebx
// 008083c6  85c0                 test eax, eax
// 008083c8  0f9cc3               setl bl
// 008083cb  4b                   dec ebx
// 008083cc  23d8                 and ebx, eax
// 008083ce  8bc1                 mov eax, ecx
// 008083d0  c1e808               shr eax, 8
// 008083d3  0fb6c0               movzx eax, al
// 008083d6  2bc6                 sub eax, esi
// 008083d8  3dff000000           cmp eax, 0xff
// 008083dd  7e07                 jle 0x8083e6
// 008083df  baff000000           mov edx, 0xff
// 008083e4  eb0a                 jmp 0x8083f0
// 008083e6  33d2                 xor edx, edx
// 008083e8  85c0                 test eax, eax
// 008083ea  0f9cc2               setl dl
// 008083ed  4a                   dec edx
// 008083ee  23d0                 and edx, eax
// 008083f0  c1e910               shr ecx, 0x10
// 008083f3  0fb6c1               movzx eax, cl
// 008083f6  2bc6                 sub eax, esi
// 008083f8  3dff000000           cmp eax, 0xff
// 008083fd  7e07                 jle 0x808406
// 008083ff  b9ff000000           mov ecx, 0xff
// 00808404  eb0a                 jmp 0x808410
// 00808406  33c9                 xor ecx, ecx
// 00808408  85c0                 test eax, eax
// 0080840a  0f9cc1               setl cl
// 0080840d  49                   dec ecx
// 0080840e  23c8                 and ecx, eax
// 00808410  0fb6c1               movzx eax, cl
// 00808413  0fb6ca               movzx ecx, dl
// 00808416  c1e008               shl eax, 8
// 00808419  0bc1                 or eax, ecx
// 0080841b  0fb6d3               movzx edx, bl
// 0080841e  c1e008               shl eax, 8
// 00808421  0bc2                 or eax, edx
// 00808423  5b                   pop ebx
// 00808424  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaPixel@@YAKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
