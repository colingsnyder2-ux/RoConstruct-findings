// roc 2007-03 0061a080  unit: seg_00610000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a080
//
// 0061a080  6aff                 push -1
// 0061a082  6848db7500           push 0x75db48
// 0061a087  64a100000000         mov eax, dword ptr fs:[0]
// 0061a08d  50                   push eax
// 0061a08e  64892500000000       mov dword ptr fs:[0], esp
// 0061a095  83ec08               sub esp, 8
// 0061a098  56                   push esi
// 0061a099  57                   push edi
// 0061a09a  8bf1                 mov esi, ecx
// 0061a09c  8d442420             lea eax, [esp + 0x20]
// 0061a0a0  50                   push eax
// 0061a0a1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0061a0a9  e802fbffff           call 0x619bb0
// 0061a0ae  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061a0b2  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061a0b6  50                   push eax
// 0061a0b7  894e0c               mov dword ptr [esi + 0xc], ecx
// 0061a0ba  8b10                 mov edx, dword ptr [eax]
// 0061a0bc  8d4c2424             lea ecx, [esp + 0x24]
// 0061a0c0  51                   push ecx
// 0061a0c1  52                   push edx
// 0061a0c2  8bf9                 mov edi, ecx
// 0061a0c4  57                   push edi
// 0061a0c5  8d542418             lea edx, [esp + 0x18]
// 0061a0c9  52                   push edx
// 0061a0ca  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0061a0d2  e8e9f4ffff           call 0x6195c0
// 0061a0d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061a0db  50                   push eax
// 0061a0dc  e80f400000           call 0x61e0f0
// 0061a0e1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061a0e5  83c404               add esp, 4
// 0061a0e8  5f                   pop edi
// 0061a0e9  8bc6                 mov eax, esi
// 0061a0eb  5e                   pop esi
// 0061a0ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0061a0f3  83c414               add esp, 0x14
// 0061a0f6  c21000               ret 0x10
// library rbxgs-net/Player.cpp (function ??0?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@QAE@U?$is_any_ofF@D@123@W4token_compress_mode_type@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
