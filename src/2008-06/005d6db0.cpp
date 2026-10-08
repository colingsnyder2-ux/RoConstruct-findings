// roc 2008-06 005d6db0  unit: RBX::VTimerService::?$FactoryProduct  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6db0
//
// 005d6db0  56                   push esi
// 005d6db1  57                   push edi
// 005d6db2  8bf9                 mov edi, ecx
// 005d6db4  8b4714               mov eax, dword ptr [edi + 0x14]
// 005d6db7  8b30                 mov esi, dword ptr [eax]
// 005d6db9  8900                 mov dword ptr [eax], eax
// 005d6dbb  8b4714               mov eax, dword ptr [edi + 0x14]
// 005d6dbe  894004               mov dword ptr [eax + 4], eax
// 005d6dc1  c7471800000000       mov dword ptr [edi + 0x18], 0
// 005d6dc8  3b7714               cmp esi, dword ptr [edi + 0x14]
// 005d6dcb  7436                 je 0x5d6e03
// 005d6dcd  53                   push ebx
// 005d6dce  8bff                 mov edi, edi
// 005d6dd0  8b4610               mov eax, dword ptr [esi + 0x10]
// 005d6dd3  8b1e                 mov ebx, dword ptr [esi]
// 005d6dd5  85c0                 test eax, eax
// 005d6dd7  7419                 je 0x5d6df2
// 005d6dd9  8b00                 mov eax, dword ptr [eax]
// 005d6ddb  8d4e18               lea ecx, [esi + 0x18]
// 005d6dde  85c0                 test eax, eax
// 005d6de0  7409                 je 0x5d6deb
// 005d6de2  6a01                 push 1
// 005d6de4  51                   push ecx
// 005d6de5  51                   push ecx
// 005d6de6  ffd0                 call eax
// 005d6de8  83c40c               add esp, 0xc
// 005d6deb  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005d6df2  56                   push esi
// 005d6df3  e882980c00           call 0x6a067a
// 005d6df8  83c404               add esp, 4
// 005d6dfb  8bf3                 mov esi, ebx
// 005d6dfd  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 005d6e00  75ce                 jne 0x5d6dd0
// 005d6e02  5b                   pop ebx
// 005d6e03  5f                   pop edi
// 005d6e04  5e                   pop esi
// 005d6e05  c3                   ret 
// library rbxgs/v8datamodel\TimerService.cpp (function ?clear@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
