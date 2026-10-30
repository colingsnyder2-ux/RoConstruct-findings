// roc 2009-12 008e2eb0  unit: CXTShadowHook  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2eb0
//
// 008e2eb0  0fb6c1               movzx eax, cl
// 008e2eb3  2bc6                 sub eax, esi
// 008e2eb5  3dff000000           cmp eax, 0xff
// 008e2eba  53                   push ebx
// 008e2ebb  7e07                 jle 0x8e2ec4
// 008e2ebd  bbff000000           mov ebx, 0xff
// 008e2ec2  eb0a                 jmp 0x8e2ece
// 008e2ec4  33db                 xor ebx, ebx
// 008e2ec6  85c0                 test eax, eax
// 008e2ec8  0f9cc3               setl bl
// 008e2ecb  4b                   dec ebx
// 008e2ecc  23d8                 and ebx, eax
// 008e2ece  8bc1                 mov eax, ecx
// 008e2ed0  c1e808               shr eax, 8
// 008e2ed3  0fb6c0               movzx eax, al
// 008e2ed6  2bc6                 sub eax, esi
// 008e2ed8  3dff000000           cmp eax, 0xff
// 008e2edd  7e07                 jle 0x8e2ee6
// 008e2edf  baff000000           mov edx, 0xff
// 008e2ee4  eb0a                 jmp 0x8e2ef0
// 008e2ee6  33d2                 xor edx, edx
// 008e2ee8  85c0                 test eax, eax
// 008e2eea  0f9cc2               setl dl
// 008e2eed  4a                   dec edx
// 008e2eee  23d0                 and edx, eax
// 008e2ef0  c1e910               shr ecx, 0x10
// 008e2ef3  0fb6c1               movzx eax, cl
// 008e2ef6  2bc6                 sub eax, esi
// 008e2ef8  3dff000000           cmp eax, 0xff
// 008e2efd  7e07                 jle 0x8e2f06
// 008e2eff  b9ff000000           mov ecx, 0xff
// 008e2f04  eb0a                 jmp 0x8e2f10
// 008e2f06  33c9                 xor ecx, ecx
// 008e2f08  85c0                 test eax, eax
// 008e2f0a  0f9cc1               setl cl
// 008e2f0d  49                   dec ecx
// 008e2f0e  23c8                 and ecx, eax
// 008e2f10  0fb6c1               movzx eax, cl
// 008e2f13  0fb6ca               movzx ecx, dl
// 008e2f16  c1e008               shl eax, 8
// 008e2f19  0bc1                 or eax, ecx
// 008e2f1b  0fb6d3               movzx edx, bl
// 008e2f1e  c1e008               shl eax, 8
// 008e2f21  0bc2                 or eax, edx
// 008e2f23  5b                   pop ebx
// 008e2f24  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTWndShadow.cpp (function ?AlphaPixel@@YAKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTWndShadow.cpp
