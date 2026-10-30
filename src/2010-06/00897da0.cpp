// roc 2010-06 00897da0  unit: CXTShadowHook  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897da0
//
// 00897da0  6aff                 push -1
// 00897da2  68d9bd9b00           push 0x9bbdd9
// 00897da7  64a100000000         mov eax, dword ptr fs:[0]
// 00897dad  50                   push eax
// 00897dae  83ec24               sub esp, 0x24
// 00897db1  53                   push ebx
// 00897db2  56                   push esi
// 00897db3  57                   push edi
// 00897db4  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00897db9  33c4                 xor eax, esp
// 00897dbb  50                   push eax
// 00897dbc  8d442434             lea eax, [esp + 0x34]
// 00897dc0  64a300000000         mov dword ptr fs:[0], eax
// 00897dc6  8bf1                 mov esi, ecx
// 00897dc8  e813feffff           call 0x897be0
// 00897dcd  8bc8                 mov ecx, eax
// 00897dcf  e86cf4ffff           call 0x897240
// 00897dd4  894660               mov dword ptr [esi + 0x60], eax
// 00897dd7  e804feffff           call 0x897be0
// 00897ddc  8bc8                 mov ecx, eax
// 00897dde  e86df4ffff           call 0x897250
// 00897de3  837e2000             cmp dword ptr [esi + 0x20], 0
// 00897de7  894664               mov dword ptr [esi + 0x64], eax
// 00897dea  0f85b7000000         jne 0x897ea7
// 00897df0  33ff                 xor edi, edi
// 00897df2  397e60               cmp dword ptr [esi + 0x60], edi
// 00897df5  7405                 je 0x897dfc
// 00897df7  bf00000800           mov edi, 0x80000
// 00897dfc  e85dfef0ff           call 0x7a7c5e
// 00897e01  68007f0000           push 0x7f00
// 00897e06  6a00                 push 0
// 00897e08  ff15ccbb9e00         call dword ptr [0x9ebbcc]
// 00897e0e  6a00                 push 0
// 00897e10  6a00                 push 0
// 00897e12  50                   push eax
// 00897e13  6a00                 push 0
// 00897e15  e84c05f1ff           call 0x7a8366
// 00897e1a  50                   push eax
// 00897e1b  8d4c2414             lea ecx, [esp + 0x14]
// 00897e1f  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00897e25  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00897e2d  e82403f1ff           call 0x7a8156
// 00897e32  85c0                 test eax, eax
// 00897e34  740b                 je 0x897e41
// 00897e36  8b10                 mov edx, dword ptr [eax]
// 00897e38  8bc8                 mov ecx, eax
// 00897e3a  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00897e3d  ffd0                 call eax
// 00897e3f  eb02                 jmp 0x897e43
// 00897e41  33c0                 xor eax, eax
// 00897e43  8b1e                 mov ebx, dword ptr [esi]
// 00897e45  6a00                 push 0
// 00897e47  6a00                 push 0
// 00897e49  50                   push eax
// 00897e4a  8d4c2430             lea ecx, [esp + 0x30]
// 00897e4e  e81d74f6ff           call 0x7ff270
// 00897e53  50                   push eax
// 00897e54  6800000080           push 0x80000000
// 00897e59  6a00                 push 0
// 00897e5b  8d4c2428             lea ecx, [esp + 0x28]
// 00897e5f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00897e65  8b5360               mov edx, dword ptr [ebx + 0x60]
// 00897e68  50                   push eax
// 00897e69  81cf80000000         or edi, 0x80
// 00897e6f  57                   push edi
// 00897e70  8bce                 mov ecx, esi
// 00897e72  ffd2                 call edx
// 00897e74  8d4c2410             lea ecx, [esp + 0x10]
// 00897e78  85c0                 test eax, eax
// 00897e7a  751d                 jne 0x897e99
// 00897e7c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00897e82  33c0                 xor eax, eax
// 00897e84  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00897e88  64890d00000000       mov dword ptr fs:[0], ecx
// 00897e8f  59                   pop ecx
// 00897e90  5f                   pop edi
// 00897e91  5e                   pop esi
// 00897e92  5b                   pop ebx
// 00897e93  83c430               add esp, 0x30
// 00897e96  c21400               ret 0x14
// 00897e99  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00897ea1  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00897ea7  8b4620               mov eax, dword ptr [esi + 0x20]
// 00897eaa  6a00                 push 0
// 00897eac  6a00                 push 0
// 00897eae  50                   push eax
// 00897eaf  ff150cba9e00         call dword ptr [0x9eba0c]
// 00897eb5  837e6000             cmp dword ptr [esi + 0x60], 0
// 00897eb9  750b                 jne 0x897ec6
// 00897ebb  837e6400             cmp dword ptr [esi + 0x64], 0
// 00897ebf  b802000000           mov eax, 2
// 00897ec4  7405                 je 0x897ecb
// 00897ec6  b804000000           mov eax, 4
// 00897ecb  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00897ecf  8d4c2448             lea ecx, [esp + 0x48]
// 00897ed3  51                   push ecx
// 00897ed4  894654               mov dword ptr [esi + 0x54], eax
// 00897ed7  897e5c               mov dword ptr [esi + 0x5c], edi
// 00897eda  ff1544bc9e00         call dword ptr [0x9ebc44]
// 00897ee0  85c0                 test eax, eax
// 00897ee2  740d                 je 0x897ef1
// 00897ee4  8d542414             lea edx, [esp + 0x14]
// 00897ee8  52                   push edx
// 00897ee9  ff15e4ba9e00         call dword ptr [0x9ebae4]
// 00897eef  eb41                 jmp 0x897f32
// 00897ef1  8b4654               mov eax, dword ptr [esi + 0x54]
// 00897ef4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00897ef8  85ff                 test edi, edi
// 00897efa  741a                 je 0x897f16
// 00897efc  8d1408               lea edx, [eax + ecx]
// 00897eff  52                   push edx
// 00897f00  8b542454             mov edx, dword ptr [esp + 0x54]
// 00897f04  03d0                 add edx, eax
// 00897f06  52                   push edx
// 00897f07  51                   push ecx
// 00897f08  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00897f0c  03c1                 add eax, ecx
// 00897f0e  50                   push eax
// 00897f0f  8d542424             lea edx, [esp + 0x24]
// 00897f13  52                   push edx
// 00897f14  eb16                 jmp 0x897f2c
// 00897f16  51                   push ecx
// 00897f17  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00897f1b  8d1408               lea edx, [eax + ecx]
// 00897f1e  52                   push edx
// 00897f1f  8b542454             mov edx, dword ptr [esp + 0x54]
// 00897f23  03c2                 add eax, edx
// 00897f25  50                   push eax
// 00897f26  51                   push ecx
// 00897f27  8d442424             lea eax, [esp + 0x24]
// 00897f2b  50                   push eax
// 00897f2c  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 00897f32  8b442418             mov eax, dword ptr [esp + 0x18]
// 00897f36  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00897f3a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00897f3e  6a00                 push 0
// 00897f40  2bc8                 sub ecx, eax
// 00897f42  51                   push ecx
// 00897f43  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00897f47  2bd1                 sub edx, ecx
// 00897f49  52                   push edx
// 00897f4a  50                   push eax
// 00897f4b  51                   push ecx
// 00897f4c  8bce                 mov ecx, esi
// 00897f4e  e81ffef0ff           call 0x7a7d72
// 00897f53  b801000000           mov eax, 1
// 00897f58  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00897f5c  64890d00000000       mov dword ptr fs:[0], ecx
// 00897f63  59                   pop ecx
// 00897f64  5f                   pop edi
// 00897f65  5e                   pop esi
// 00897f66  5b                   pop ebx
// 00897f67  83c430               add esp, 0x30
// 00897f6a  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTShadowWnd@@IAEHHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp