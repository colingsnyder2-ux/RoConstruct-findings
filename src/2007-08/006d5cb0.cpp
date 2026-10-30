// roc 2007-08 006d5cb0  unit: CXTPReportTip  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d5cb0
//
// 006d5cb0  6aff                 push -1
// 006d5cb2  68c06f7600           push 0x766fc0
// 006d5cb7  64a100000000         mov eax, dword ptr fs:[0]
// 006d5cbd  50                   push eax
// 006d5cbe  81ec88000000         sub esp, 0x88
// 006d5cc4  a188518b00           mov eax, dword ptr [0x8b5188]
// 006d5cc9  33c4                 xor eax, esp
// 006d5ccb  89842484000000       mov dword ptr [esp + 0x84], eax
// 006d5cd2  56                   push esi
// 006d5cd3  57                   push edi
// 006d5cd4  a188518b00           mov eax, dword ptr [0x8b5188]
// 006d5cd9  33c4                 xor eax, esp
// 006d5cdb  50                   push eax
// 006d5cdc  8d842494000000       lea eax, [esp + 0x94]
// 006d5ce3  64a300000000         mov dword ptr fs:[0], eax
// 006d5ce9  8bf1                 mov esi, ecx
// 006d5ceb  56                   push esi
// 006d5cec  8d4c2440             lea ecx, [esp + 0x40]
// 006d5cf0  e89ba7f5ff           call 0x630490
// 006d5cf5  56                   push esi
// 006d5cf6  8d4c2410             lea ecx, [esp + 0x10]
// 006d5cfa  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 006d5d05  e8f6a2faff           call 0x680000
// 006d5d0a  e86132f9ff           call 0x668f70
// 006d5d0f  6a17                 push 0x17
// 006d5d11  8bc8                 mov ecx, eax
// 006d5d13  e8582af9ff           call 0x668770
// 006d5d18  8bf8                 mov edi, eax
// 006d5d1a  e85132f9ff           call 0x668f70
// 006d5d1f  6a18                 push 0x18
// 006d5d21  8bc8                 mov ecx, eax
// 006d5d23  e8482af9ff           call 0x668770
// 006d5d28  50                   push eax
// 006d5d29  8d442410             lea eax, [esp + 0x10]
// 006d5d2d  50                   push eax
// 006d5d2e  8d4c2444             lea ecx, [esp + 0x44]
// 006d5d32  e879abf5ff           call 0x6308b0
// 006d5d37  57                   push edi
// 006d5d38  57                   push edi
// 006d5d39  8d4c2414             lea ecx, [esp + 0x14]
// 006d5d3d  51                   push ecx
// 006d5d3e  8d4c2448             lea ecx, [esp + 0x48]
// 006d5d42  e863abf5ff           call 0x6308aa
// 006d5d47  57                   push edi
// 006d5d48  8d4c2440             lea ecx, [esp + 0x40]
// 006d5d4c  e837290600           call 0x738688
// 006d5d51  6a01                 push 1
// 006d5d53  8d4c2440             lea ecx, [esp + 0x40]
// 006d5d57  e88c260600           call 0x7383e8
// 006d5d5c  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006d5d5f  e8be250600           call 0x738322
// 006d5d64  a900200000           test eax, 0x2000
// 006d5d69  750f                 jne 0x6d5d7a
// 006d5d6b  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006d5d6e  e8af250600           call 0x738322
// 006d5d73  a900004000           test eax, 0x400000
// 006d5d78  740e                 je 0x6d5d88
// 006d5d7a  6800010000           push 0x100
// 006d5d7f  8d4c2440             lea ecx, [esp + 0x40]
// 006d5d83  e8faabf5ff           call 0x630982
// 006d5d88  8d5674               lea edx, [esi + 0x74]
// 006d5d8b  52                   push edx
// 006d5d8c  8d442440             lea eax, [esp + 0x40]
// 006d5d90  50                   push eax
// 006d5d91  8d4c2434             lea ecx, [esp + 0x34]
// 006d5d95  e8b6a7faff           call 0x680550
// 006d5d9a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d5d9e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d5da2  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d5da6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 006d5daa  8944241c             mov dword ptr [esp + 0x1c], eax
// 006d5dae  83c003               add eax, 3
// 006d5db1  83e902               sub ecx, 2
// 006d5db4  8944241c             mov dword ptr [esp + 0x1c], eax
// 006d5db8  89542424             mov dword ptr [esp + 0x24], edx
// 006d5dbc  8b542418             mov edx, dword ptr [esp + 0x18]
// 006d5dc0  6824080000           push 0x824
// 006d5dc5  8d442420             lea eax, [esp + 0x20]
// 006d5dc9  894c2424             mov dword ptr [esp + 0x24], ecx
// 006d5dcd  83c668               add esi, 0x68
// 006d5dd0  50                   push eax
// 006d5dd1  8bce                 mov ecx, esi
// 006d5dd3  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 006d5ddb  89542430             mov dword ptr [esp + 0x30], edx
// 006d5ddf  83c770               add edi, 0x70
// 006d5de2  ff15c8dc7700         call dword ptr [0x77dcc8]
// 006d5de8  50                   push eax
// 006d5de9  8bce                 mov ecx, esi
// 006d5deb  ff1598dd7700         call dword ptr [0x77dd98]
// 006d5df1  8b17                 mov edx, dword ptr [edi]
// 006d5df3  50                   push eax
// 006d5df4  8d4c244c             lea ecx, [esp + 0x4c]
// 006d5df8  ffd2                 call edx
// 006d5dfa  8d4c242c             lea ecx, [esp + 0x2c]
// 006d5dfe  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 006d5e06  e8c5a7faff           call 0x6805d0
// 006d5e0b  8d4c243c             lea ecx, [esp + 0x3c]
// 006d5e0f  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 006d5e1a  e86ba6f5ff           call 0x63048a
// 006d5e1f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 006d5e26  64890d00000000       mov dword ptr fs:[0], ecx
// 006d5e2d  59                   pop ecx
// 006d5e2e  5f                   pop edi
// 006d5e2f  5e                   pop esi
// 006d5e30  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 006d5e37  33cc                 xor ecx, esp
// 006d5e39  e8e0abf5ff           call 0x630a1e
// 006d5e3e  81c494000000         add esp, 0x94
// 006d5e44  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp