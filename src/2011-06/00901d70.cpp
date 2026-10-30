// roc 2011-06 00901d70  unit: CXTButtonThemeOffice2003  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901d70
//
// 00901d70  56                   push esi
// 00901d71  57                   push edi
// 00901d72  8bf1                 mov esi, ecx
// 00901d74  e847fdffff           call 0x901ac0
// 00901d79  e86236f4ff           call 0x8453e0
// 00901d7e  8bc8                 mov ecx, eax
// 00901d80  e85b34f4ff           call 0x8451e0
// 00901d85  8bf8                 mov edi, eax
// 00901d87  e85436f4ff           call 0x8453e0
// 00901d8c  6a0f                 push 0xf
// 00901d8e  8bc8                 mov ecx, eax
// 00901d90  e81b2ef4ff           call 0x844bb0
// 00901d95  33c9                 xor ecx, ecx
// 00901d97  894624               mov dword ptr [esi + 0x24], eax
// 00901d9a  3bf9                 cmp edi, ecx
// 00901d9c  7421                 je 0x901dbf
// 00901d9e  c7869c000000ffeec200 mov dword ptr [esi + 0x9c], 0xc2eeff
// 00901da8  c78690000000fe803e00 mov dword ptr [esi + 0x90], 0x3e80fe
// 00901db2  c786c0000000ffc06f00 mov dword ptr [esi + 0xc0], 0x6fc0ff
// 00901dbc  894e30               mov dword ptr [esi + 0x30], ecx
// 00901dbf  8d47ff               lea eax, [edi - 1]
// 00901dc2  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 00901dc8  898ea8000000         mov dword ptr [esi + 0xa8], ecx
// 00901dce  83f804               cmp eax, 4
// 00901dd1  774a                 ja 0x901e1d
// 00901dd3  ff24853c1e9000       jmp dword ptr [eax*4 + 0x901e3c]
// 00901dda  c74624a9c7f000       mov dword ptr [esi + 0x24], 0xf0c7a9
// 00901de1  c746547f9db900       mov dword ptr [esi + 0x54], 0xb99d7f
// 00901de8  c7464800008000       mov dword ptr [esi + 0x48], 0x800000
// 00901def  eb2c                 jmp 0x901e1d
// 00901df1  c74624c5d49f00       mov dword ptr [esi + 0x24], 0x9fd4c5
// 00901df8  c74654a4b97f00       mov dword ptr [esi + 0x54], 0x7fb9a4
// 00901dff  c746483f5d3800       mov dword ptr [esi + 0x48], 0x385d3f
// 00901e06  eb15                 jmp 0x901e1d
// 00901e08  c74624c0c0d300       mov dword ptr [esi + 0x24], 0xd3c0c0
// 00901e0f  c74654a5acb200       mov dword ptr [esi + 0x54], 0xb2aca5
// 00901e16  c746484b4b0b00       mov dword ptr [esi + 0x48], 0xb4b4b
// 00901e1d  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 00901e23  7511                 jne 0x901e36
// 00901e25  e8b635f4ff           call 0x8453e0
// 00901e2a  6a0f                 push 0xf
// 00901e2c  8bc8                 mov ecx, eax
// 00901e2e  e87d2df4ff           call 0x844bb0
// 00901e33  894624               mov dword ptr [esi + 0x24], eax
// 00901e36  5f                   pop edi
// 00901e37  5e                   pop esi
// 00901e38  c3                   ret 
// 00901e39  8d4900               lea ecx, [ecx]
// 00901e3c  da1d9000f11d         ficomp dword ptr [0x1df10090]
// 00901e42  90                   nop 
// 00901e43  0008                 add byte ptr [eax], cl
// 00901e45  1e                   push ds
// 00901e46  90                   nop 
// 00901e47  00da                 add dl, bl
// 00901e49  1d9000da1d           sbb eax, 0x1dda0090
// 00901e4e  90                   nop 
// copied from an identical function in another client (function ?RefreshMetrics@CXTButtonThemeOffice2003@@UAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Controls/XTButtonTheme.cpp