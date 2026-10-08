// from server: 100% by auto
// roc 2008-06 005168b0  unit: G3D::TextInput::TokenException  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005168b0
//
// 005168b0  6aff                 push -1
// 005168b2  68e9c67c00           push 0x7cc6e9
// 005168b7  64a100000000         mov eax, dword ptr fs:[0]
// 005168bd  50                   push eax
// 005168be  64892500000000       mov dword ptr fs:[0], esp
// 005168c5  83ec20               sub esp, 0x20
// 005168c8  8b442438             mov eax, dword ptr [esp + 0x38]
// 005168cc  8b542430             mov edx, dword ptr [esp + 0x30]
// 005168d0  55                   push ebp
// 005168d1  56                   push esi
// 005168d2  57                   push edi
// 005168d3  8bf1                 mov esi, ecx
// 005168d5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005168d9  50                   push eax
// 005168da  51                   push ecx
// 005168db  52                   push edx
// 005168dc  8bce                 mov ecx, esi
// 005168de  89742418             mov dword ptr [esp + 0x18], esi
// 005168e2  e889fdffff           call 0x516670
// 005168e7  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005168eb  55                   push ebp
// 005168ec  8d4e44               lea ecx, [esi + 0x44]
// 005168ef  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005168f7  c706b88a8200         mov dword ptr [esi], 0x828ab8
// 005168fd  ff155c248000         call dword ptr [0x80245c]
// 00516903  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00516907  57                   push edi
// 00516908  8d4e60               lea ecx, [esi + 0x60]
// 0051690b  c644243801           mov byte ptr [esp + 0x38], 1
// 00516910  ff155c248000         call dword ptr [0x80245c]
// 00516916  b810000000           mov eax, 0x10
// 0051691b  c644243402           mov byte ptr [esp + 0x34], 2
// 00516920  394718               cmp dword ptr [edi + 0x18], eax
// 00516923  7205                 jb 0x51692a
// 00516925  8b7f04               mov edi, dword ptr [edi + 4]
// 00516928  eb03                 jmp 0x51692d
// 0051692a  83c704               add edi, 4
// 0051692d  394518               cmp dword ptr [ebp + 0x18], eax
// 00516930  7205                 jb 0x516937
// 00516932  8b4504               mov eax, dword ptr [ebp + 4]
// 00516935  eb03                 jmp 0x51693a
// 00516937  8d4504               lea eax, [ebp + 4]
// 0051693a  57                   push edi
// 0051693b  50                   push eax
// 0051693c  8d442418             lea eax, [esp + 0x18]
// 00516940  68888a8200           push 0x828a88
// 00516945  50                   push eax
// 00516946  e8c531ffff           call 0x509b10
// 0051694b  83c410               add esp, 0x10
// 0051694e  50                   push eax
// 0051694f  8d4e28               lea ecx, [esi + 0x28]
// 00516952  c644243803           mov byte ptr [esp + 0x38], 3
// 00516957  ff1550248000         call dword ptr [0x802450]
// 0051695d  8d4c2410             lea ecx, [esp + 0x10]
// 00516961  c644243402           mov byte ptr [esp + 0x34], 2
// 00516966  ff1568248000         call dword ptr [0x802468]
// 0051696c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00516970  5f                   pop edi
// 00516971  8bc6                 mov eax, esi
// 00516973  5e                   pop esi
// 00516974  5d                   pop ebp
// 00516975  64890d00000000       mov dword ptr fs:[0], ecx
// 0051697c  83c42c               add esp, 0x2c
// 0051697f  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongSymbol@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
