// roc 2007-08 005e5ac0  unit: RBX::BoxSelectCommand  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5ac0
//
// 005e5ac0  6aff                 push -1
// 005e5ac2  6838877500           push 0x758738
// 005e5ac7  64a100000000         mov eax, dword ptr fs:[0]
// 005e5acd  50                   push eax
// 005e5ace  64892500000000       mov dword ptr fs:[0], esp
// 005e5ad5  83ec1c               sub esp, 0x1c
// 005e5ad8  56                   push esi
// 005e5ad9  57                   push edi
// 005e5ada  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005e5ade  8b4708               mov eax, dword ptr [edi + 8]
// 005e5ae1  8bf1                 mov esi, ecx
// 005e5ae3  8d4c2418             lea ecx, [esp + 0x18]
// 005e5ae7  894632               mov dword ptr [esi + 0x32], eax
// 005e5aea  e8c138fcff           call 0x5a93b0
// 005e5aef  8944241c             mov dword ptr [esp + 0x1c], eax
// 005e5af3  c6401101             mov byte ptr [eax + 0x11], 1
// 005e5af7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e5afb  894004               mov dword ptr [eax + 4], eax
// 005e5afe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e5b02  8900                 mov dword ptr [eax], eax
// 005e5b04  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e5b08  894008               mov dword ptr [eax + 8], eax
// 005e5b0b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e5b13  0fbf4e34             movsx ecx, word ptr [esi + 0x34]
// 005e5b17  0fbf5632             movsx edx, word ptr [esi + 0x32]
// 005e5b1b  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 005e5b1f  894c2434             mov dword ptr [esp + 0x34], ecx
// 005e5b23  0fbf4e2e             movsx ecx, word ptr [esi + 0x2e]
// 005e5b27  db442434             fild dword ptr [esp + 0x34]
// 005e5b2b  83ec10               sub esp, 0x10
// 005e5b2e  89542444             mov dword ptr [esp + 0x44], edx
// 005e5b32  8d542418             lea edx, [esp + 0x18]
// 005e5b36  d95c240c             fstp dword ptr [esp + 0xc]
// 005e5b3a  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e5b42  db442444             fild dword ptr [esp + 0x44]
// 005e5b46  89442444             mov dword ptr [esp + 0x44], eax
// 005e5b4a  d95c2408             fstp dword ptr [esp + 8]
// 005e5b4e  db442444             fild dword ptr [esp + 0x44]
// 005e5b52  894c2444             mov dword ptr [esp + 0x44], ecx
// 005e5b56  d95c2404             fstp dword ptr [esp + 4]
// 005e5b5a  db442444             fild dword ptr [esp + 0x44]
// 005e5b5e  d91c24               fstp dword ptr [esp]
// 005e5b61  52                   push edx
// 005e5b62  e8a927e7ff           call 0x458310
// 005e5b67  83c414               add esp, 0x14
// 005e5b6a  50                   push eax
// 005e5b6b  57                   push edi
// 005e5b6c  8d442420             lea eax, [esp + 0x20]
// 005e5b70  50                   push eax
// 005e5b71  8bce                 mov ecx, esi
// 005e5b73  e888f1ffff           call 0x5e4d00
// 005e5b78  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 005e5b7c  740e                 je 0x5e5b8c
// 005e5b7e  8d4c2418             lea ecx, [esp + 0x18]
// 005e5b82  51                   push ecx
// 005e5b83  8bce                 mov ecx, esi
// 005e5b85  e8c6fdffff           call 0x5e5950
// 005e5b8a  eb0c                 jmp 0x5e5b98
// 005e5b8c  8d542418             lea edx, [esp + 0x18]
// 005e5b90  52                   push edx
// 005e5b91  8bce                 mov ecx, esi
// 005e5b93  e8e8fcffff           call 0x5e5880
// 005e5b98  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e5b9c  8b10                 mov edx, dword ptr [eax]
// 005e5b9e  50                   push eax
// 005e5b9f  8d4c241c             lea ecx, [esp + 0x1c]
// 005e5ba3  51                   push ecx
// 005e5ba4  52                   push edx
// 005e5ba5  8bf1                 mov esi, ecx
// 005e5ba7  56                   push esi
// 005e5ba8  8d442418             lea eax, [esp + 0x18]
// 005e5bac  50                   push eax
// 005e5bad  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 005e5bb5  e8a6defcff           call 0x5b3a60
// 005e5bba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e5bbe  51                   push ecx
// 005e5bbf  e89ea00400           call 0x62fc62
// 005e5bc4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e5bc8  83c404               add esp, 4
// 005e5bcb  5f                   pop edi
// 005e5bcc  5e                   pop esi
// 005e5bcd  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5bd4  83c428               add esp, 0x28
// 005e5bd7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?onMouseMove@BoxSelectCommand@RBX@@UAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
