// roc 2011-06 0080e1c0  unit: PAVCXTPControlAction::?$CArray  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e1c0
//
// 0080e1c0  56                   push esi
// 0080e1c1  8b742408             mov esi, dword ptr [esp + 8]
// 0080e1c5  57                   push edi
// 0080e1c6  8bf9                 mov edi, ecx
// 0080e1c8  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 0080e1cb  33c0                 xor eax, eax
// 0080e1cd  85c9                 test ecx, ecx
// 0080e1cf  7e19                 jle 0x80e1ea
// 0080e1d1  85c0                 test eax, eax
// 0080e1d3  0f8c83000000         jl 0x80e25c
// 0080e1d9  3bc1                 cmp eax, ecx
// 0080e1db  7d7f                 jge 0x80e25c
// 0080e1dd  8b5760               mov edx, dword ptr [edi + 0x60]
// 0080e1e0  393482               cmp dword ptr [edx + eax*4], esi
// 0080e1e3  7472                 je 0x80e257
// 0080e1e5  40                   inc eax
// 0080e1e6  3bc1                 cmp eax, ecx
// 0080e1e8  7ce7                 jl 0x80e1d1
// 0080e1ea  8b4764               mov eax, dword ptr [edi + 0x64]
// 0080e1ed  8d4f5c               lea ecx, [edi + 0x5c]
// 0080e1f0  56                   push esi
// 0080e1f1  50                   push eax
// 0080e1f2  e8990a0300           call 0x83ec90
// 0080e1f7  83c8ff               or eax, 0xffffffff
// 0080e1fa  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0080e200  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0080e206  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0080e209  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0080e20f  8d8ed8000000         lea ecx, [esi + 0xd8]
// 0080e215  ff155c27a400         call dword ptr [0xa4275c]
// 0080e21b  8d8ee8000000         lea ecx, [esi + 0xe8]
// 0080e221  ff155c27a400         call dword ptr [0xa4275c]
// 0080e227  8d8eec000000         lea ecx, [esi + 0xec]
// 0080e22d  ff155c27a400         call dword ptr [0xa4275c]
// 0080e233  8d8e08010000         lea ecx, [esi + 0x108]
// 0080e239  ff155c27a400         call dword ptr [0xa4275c]
// 0080e23f  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0080e245  ff155c27a400         call dword ptr [0xa4275c]
// 0080e24b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 0080e251  ff155c27a400         call dword ptr [0xa4275c]
// 0080e257  5f                   pop edi
// 0080e258  5e                   pop esi
// 0080e259  c20400               ret 4
// 0080e25c  e8a9c0ffff           call 0x80a30a
// copied from an identical function in another client (function ?AddControl@CXTPControlAction@@IAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControl.cpp