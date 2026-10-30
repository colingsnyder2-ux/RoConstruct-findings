// roc 2009-12 008c0eb0  unit: CXTPShadowsManager::CShadowWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0eb0
//
// 008c0eb0  83ec10               sub esp, 0x10
// 008c0eb3  53                   push ebx
// 008c0eb4  56                   push esi
// 008c0eb5  57                   push edi
// 008c0eb6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008c0eba  8bd9                 mov ebx, ecx
// 008c0ebc  8bcf                 mov ecx, edi
// 008c0ebe  e83d36f4ff           call 0x804500
// 008c0ec3  85c0                 test eax, eax
// 008c0ec5  0f85dd000000         jne 0x8c0fa8
// 008c0ecb  8bcf                 mov ecx, edi
// 008c0ecd  e8be36f4ff           call 0x804590
// 008c0ed2  f6802801000001       test byte ptr [eax + 0x128], 1
// 008c0ed9  7531                 jne 0x8c0f0c
// 008c0edb  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008c0edf  0f84c3000000         je 0x8c0fa8
// 008c0ee5  6a00                 push 0
// 008c0ee7  8d442424             lea eax, [esp + 0x24]
// 008c0eeb  50                   push eax
// 008c0eec  6a00                 push 0
// 008c0eee  6824100000           push 0x1024
// 008c0ef3  c744243000000000     mov dword ptr [esp + 0x30], 0
// 008c0efb  ff1500cc9800         call dword ptr [0x98cc00]
// 008c0f01  837c242000           cmp dword ptr [esp + 0x20], 0
// 008c0f06  0f849c000000         je 0x8c0fa8
// 008c0f0c  57                   push edi
// 008c0f0d  8d4c2410             lea ecx, [esp + 0x10]
// 008c0f11  e85aa3f8ff           call 0x84b270
// 008c0f16  8b742424             mov esi, dword ptr [esp + 0x24]
// 008c0f1a  8b0e                 mov ecx, dword ptr [esi]
// 008c0f1c  8b5604               mov edx, dword ptr [esi + 4]
// 008c0f1f  6a00                 push 0
// 008c0f21  57                   push edi
// 008c0f22  83ec10               sub esp, 0x10
// 008c0f25  8bc4                 mov eax, esp
// 008c0f27  8908                 mov dword ptr [eax], ecx
// 008c0f29  8b4e08               mov ecx, dword ptr [esi + 8]
// 008c0f2c  895004               mov dword ptr [eax + 4], edx
// 008c0f2f  8b560c               mov edx, dword ptr [esi + 0xc]
// 008c0f32  894808               mov dword ptr [eax + 8], ecx
// 008c0f35  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c0f39  89500c               mov dword ptr [eax + 0xc], edx
// 008c0f3c  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c0f40  83ec10               sub esp, 0x10
// 008c0f43  8bc4                 mov eax, esp
// 008c0f45  8908                 mov dword ptr [eax], ecx
// 008c0f47  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008c0f4b  895004               mov dword ptr [eax + 4], edx
// 008c0f4e  8b542440             mov edx, dword ptr [esp + 0x40]
// 008c0f52  894808               mov dword ptr [eax + 8], ecx
// 008c0f55  6a01                 push 1
// 008c0f57  8bcb                 mov ecx, ebx
// 008c0f59  89500c               mov dword ptr [eax + 0xc], edx
// 008c0f5c  e8bffdffff           call 0x8c0d20
// 008c0f61  8b0e                 mov ecx, dword ptr [esi]
// 008c0f63  8b5604               mov edx, dword ptr [esi + 4]
// 008c0f66  6a00                 push 0
// 008c0f68  57                   push edi
// 008c0f69  83ec10               sub esp, 0x10
// 008c0f6c  8bc4                 mov eax, esp
// 008c0f6e  8908                 mov dword ptr [eax], ecx
// 008c0f70  8b4e08               mov ecx, dword ptr [esi + 8]
// 008c0f73  895004               mov dword ptr [eax + 4], edx
// 008c0f76  8b560c               mov edx, dword ptr [esi + 0xc]
// 008c0f79  894808               mov dword ptr [eax + 8], ecx
// 008c0f7c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c0f80  89500c               mov dword ptr [eax + 0xc], edx
// 008c0f83  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c0f87  83ec10               sub esp, 0x10
// 008c0f8a  8bc4                 mov eax, esp
// 008c0f8c  8908                 mov dword ptr [eax], ecx
// 008c0f8e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008c0f92  895004               mov dword ptr [eax + 4], edx
// 008c0f95  8b542440             mov edx, dword ptr [esp + 0x40]
// 008c0f99  894808               mov dword ptr [eax + 8], ecx
// 008c0f9c  6a00                 push 0
// 008c0f9e  8bcb                 mov ecx, ebx
// 008c0fa0  89500c               mov dword ptr [eax + 0xc], edx
// 008c0fa3  e878fdffff           call 0x8c0d20
// 008c0fa8  5f                   pop edi
// 008c0fa9  5e                   pop esi
// 008c0faa  5b                   pop ebx
// 008c0fab  83c410               add esp, 0x10
// 008c0fae  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?SetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@ABVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
