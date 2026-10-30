// roc 2009-12 008f4550  unit: CXTButtonThemeOffice2003  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4550
//
// 008f4550  56                   push esi
// 008f4551  57                   push edi
// 008f4552  8bf1                 mov esi, ecx
// 008f4554  e857fdffff           call 0x8f42b0
// 008f4559  e872b4f3ff           call 0x82f9d0
// 008f455e  8bc8                 mov ecx, eax
// 008f4560  e8cbb1f3ff           call 0x82f730
// 008f4565  8bf8                 mov edi, eax
// 008f4567  e864b4f3ff           call 0x82f9d0
// 008f456c  6a0f                 push 0xf
// 008f456e  8bc8                 mov ecx, eax
// 008f4570  e88babf3ff           call 0x82f100
// 008f4575  33c9                 xor ecx, ecx
// 008f4577  894624               mov dword ptr [esi + 0x24], eax
// 008f457a  3bf9                 cmp edi, ecx
// 008f457c  7421                 je 0x8f459f
// 008f457e  c7869c000000ffeec200 mov dword ptr [esi + 0x9c], 0xc2eeff
// 008f4588  c78690000000fe803e00 mov dword ptr [esi + 0x90], 0x3e80fe
// 008f4592  c786c0000000ffc06f00 mov dword ptr [esi + 0xc0], 0x6fc0ff
// 008f459c  894e30               mov dword ptr [esi + 0x30], ecx
// 008f459f  8d47ff               lea eax, [edi - 1]
// 008f45a2  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 008f45a8  898ea8000000         mov dword ptr [esi + 0xa8], ecx
// 008f45ae  83f804               cmp eax, 4
// 008f45b1  774a                 ja 0x8f45fd
// 008f45b3  ff24851c468f00       jmp dword ptr [eax*4 + 0x8f461c]
// 008f45ba  c74624a9c7f000       mov dword ptr [esi + 0x24], 0xf0c7a9
// 008f45c1  c746547f9db900       mov dword ptr [esi + 0x54], 0xb99d7f
// 008f45c8  c7464800008000       mov dword ptr [esi + 0x48], 0x800000
// 008f45cf  eb2c                 jmp 0x8f45fd
// 008f45d1  c74624c5d49f00       mov dword ptr [esi + 0x24], 0x9fd4c5
// 008f45d8  c74654a4b97f00       mov dword ptr [esi + 0x54], 0x7fb9a4
// 008f45df  c746483f5d3800       mov dword ptr [esi + 0x48], 0x385d3f
// 008f45e6  eb15                 jmp 0x8f45fd
// 008f45e8  c74624c0c0d300       mov dword ptr [esi + 0x24], 0xd3c0c0
// 008f45ef  c74654a5acb200       mov dword ptr [esi + 0x54], 0xb2aca5
// 008f45f6  c746484b4b0b00       mov dword ptr [esi + 0x48], 0xb4b4b
// 008f45fd  398e80000000         cmp dword ptr [esi + 0x80], ecx
// 008f4603  7511                 jne 0x8f4616
// 008f4605  e8c6b3f3ff           call 0x82f9d0
// 008f460a  6a0f                 push 0xf
// 008f460c  8bc8                 mov ecx, eax
// 008f460e  e8edaaf3ff           call 0x82f100
// 008f4613  894624               mov dword ptr [esi + 0x24], eax
// 008f4616  5f                   pop edi
// 008f4617  5e                   pop esi
// 008f4618  c3                   ret 
// 008f4619  8d4900               lea ecx, [ecx]
// 008f461c  ba458f00d1           mov edx, 0xd1008f45
// 008f4621  45                   inc ebp
// 008f4622  8f00                 pop dword ptr [eax]
// 008f4624  e8458f00ba           call 0xba8fd56e
// 008f4629  45                   inc ebp
// 008f462a  8f00                 pop dword ptr [eax]
// copied from an identical function in another client (function ?RefreshMetrics@CXTButtonThemeOffice2003@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp