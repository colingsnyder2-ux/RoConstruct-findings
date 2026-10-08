// roc 2007-03 005cb1d0  unit: seg_005c0000  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cb1d0
//
// 005cb1d0  6aff                 push -1
// 005cb1d2  68d8997500           push 0x7599d8
// 005cb1d7  64a100000000         mov eax, dword ptr fs:[0]
// 005cb1dd  50                   push eax
// 005cb1de  64892500000000       mov dword ptr fs:[0], esp
// 005cb1e5  83ec1c               sub esp, 0x1c
// 005cb1e8  56                   push esi
// 005cb1e9  57                   push edi
// 005cb1ea  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005cb1ee  8b4708               mov eax, dword ptr [edi + 8]
// 005cb1f1  8bf1                 mov esi, ecx
// 005cb1f3  8d4c2418             lea ecx, [esp + 0x18]
// 005cb1f7  894632               mov dword ptr [esi + 0x32], eax
// 005cb1fa  e83122feff           call 0x5ad430
// 005cb1ff  8944241c             mov dword ptr [esp + 0x1c], eax
// 005cb203  c6401101             mov byte ptr [eax + 0x11], 1
// 005cb207  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cb20b  894004               mov dword ptr [eax + 4], eax
// 005cb20e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cb212  8900                 mov dword ptr [eax], eax
// 005cb214  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cb218  894008               mov dword ptr [eax + 8], eax
// 005cb21b  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005cb223  0fbf4e34             movsx ecx, word ptr [esi + 0x34]
// 005cb227  0fbf5632             movsx edx, word ptr [esi + 0x32]
// 005cb22b  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 005cb22f  894c2434             mov dword ptr [esp + 0x34], ecx
// 005cb233  0fbf4e2e             movsx ecx, word ptr [esi + 0x2e]
// 005cb237  db442434             fild dword ptr [esp + 0x34]
// 005cb23b  83ec10               sub esp, 0x10
// 005cb23e  89542444             mov dword ptr [esp + 0x44], edx
// 005cb242  8d542418             lea edx, [esp + 0x18]
// 005cb246  d95c240c             fstp dword ptr [esp + 0xc]
// 005cb24a  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005cb252  db442444             fild dword ptr [esp + 0x44]
// 005cb256  89442444             mov dword ptr [esp + 0x44], eax
// 005cb25a  d95c2408             fstp dword ptr [esp + 8]
// 005cb25e  db442444             fild dword ptr [esp + 0x44]
// 005cb262  894c2444             mov dword ptr [esp + 0x44], ecx
// 005cb266  d95c2404             fstp dword ptr [esp + 4]
// 005cb26a  db442444             fild dword ptr [esp + 0x44]
// 005cb26e  d91c24               fstp dword ptr [esp]
// 005cb271  52                   push edx
// 005cb272  e809abe8ff           call 0x455d80
// 005cb277  83c414               add esp, 0x14
// 005cb27a  50                   push eax
// 005cb27b  57                   push edi
// 005cb27c  8d442420             lea eax, [esp + 0x20]
// 005cb280  50                   push eax
// 005cb281  8bce                 mov ecx, esi
// 005cb283  e888f1ffff           call 0x5ca410
// 005cb288  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 005cb28c  740e                 je 0x5cb29c
// 005cb28e  8d4c2418             lea ecx, [esp + 0x18]
// 005cb292  51                   push ecx
// 005cb293  8bce                 mov ecx, esi
// 005cb295  e8c6fdffff           call 0x5cb060
// 005cb29a  eb0c                 jmp 0x5cb2a8
// 005cb29c  8d542418             lea edx, [esp + 0x18]
// 005cb2a0  52                   push edx
// 005cb2a1  8bce                 mov ecx, esi
// 005cb2a3  e8e8fcffff           call 0x5caf90
// 005cb2a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005cb2ac  8b10                 mov edx, dword ptr [eax]
// 005cb2ae  50                   push eax
// 005cb2af  8d4c241c             lea ecx, [esp + 0x1c]
// 005cb2b3  51                   push ecx
// 005cb2b4  52                   push edx
// 005cb2b5  8bf1                 mov esi, ecx
// 005cb2b7  56                   push esi
// 005cb2b8  8d442418             lea eax, [esp + 0x18]
// 005cb2bc  50                   push eax
// 005cb2bd  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 005cb2c5  e8f625feff           call 0x5ad8c0
// 005cb2ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005cb2ce  51                   push ecx
// 005cb2cf  e81c2e0500           call 0x61e0f0
// 005cb2d4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb2d8  83c404               add esp, 4
// 005cb2db  5f                   pop edi
// 005cb2dc  5e                   pop esi
// 005cb2dd  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb2e4  83c428               add esp, 0x28
// 005cb2e7  c20400               ret 4
// library rbxgs/tool\ToolsArrow.cpp (function ?onMouseMove@BoxSelectCommand@RBX@@UAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
