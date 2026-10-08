// roc 2007-03 0061a250  unit: seg_00610000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a250
//
// 0061a250  6aff                 push -1
// 0061a252  6879da7500           push 0x75da79
// 0061a257  64a100000000         mov eax, dword ptr fs:[0]
// 0061a25d  50                   push eax
// 0061a25e  64892500000000       mov dword ptr fs:[0], esp
// 0061a265  83ec1c               sub esp, 0x1c
// 0061a268  53                   push ebx
// 0061a269  56                   push esi
// 0061a26a  33db                 xor ebx, ebx
// 0061a26c  57                   push edi
// 0061a26d  895c240c             mov dword ptr [esp + 0xc], ebx
// 0061a271  8b442448             mov eax, dword ptr [esp + 0x48]
// 0061a275  50                   push eax
// 0061a276  83ec0c               sub esp, 0xc
// 0061a279  8d54244c             lea edx, [esp + 0x4c]
// 0061a27d  89642458             mov dword ptr [esp + 0x58], esp
// 0061a281  8bcc                 mov ecx, esp
// 0061a283  52                   push edx
// 0061a284  c744244401000000     mov dword ptr [esp + 0x44], 1
// 0061a28c  e81ff9ffff           call 0x619bb0
// 0061a291  8d4c2428             lea ecx, [esp + 0x28]
// 0061a295  e8e6fdffff           call 0x61a080
// 0061a29a  8bf0                 mov esi, eax
// 0061a29c  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0061a2a0  56                   push esi
// 0061a2a1  8bcf                 mov ecx, edi
// 0061a2a3  c644243402           mov byte ptr [esp + 0x34], 2
// 0061a2a8  e803f9ffff           call 0x619bb0
// 0061a2ad  8b460c               mov eax, dword ptr [esi + 0xc]
// 0061a2b0  89470c               mov dword ptr [edi + 0xc], eax
// 0061a2b3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061a2b7  8b10                 mov edx, dword ptr [eax]
// 0061a2b9  50                   push eax
// 0061a2ba  8d4c241c             lea ecx, [esp + 0x1c]
// 0061a2be  51                   push ecx
// 0061a2bf  8bf1                 mov esi, ecx
// 0061a2c1  52                   push edx
// 0061a2c2  56                   push esi
// 0061a2c3  8d4c2420             lea ecx, [esp + 0x20]
// 0061a2c7  51                   push ecx
// 0061a2c8  8bce                 mov ecx, esi
// 0061a2ca  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0061a2d2  c644244401           mov byte ptr [esp + 0x44], 1
// 0061a2d7  e8e4f2ffff           call 0x6195c0
// 0061a2dc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061a2e0  52                   push edx
// 0061a2e1  e80a3e0000           call 0x61e0f0
// 0061a2e6  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061a2ea  83c404               add esp, 4
// 0061a2ed  50                   push eax
// 0061a2ee  8d4c2440             lea ecx, [esp + 0x40]
// 0061a2f2  51                   push ecx
// 0061a2f3  895c2424             mov dword ptr [esp + 0x24], ebx
// 0061a2f7  895c2428             mov dword ptr [esp + 0x28], ebx
// 0061a2fb  8b10                 mov edx, dword ptr [eax]
// 0061a2fd  52                   push edx
// 0061a2fe  8bf1                 mov esi, ecx
// 0061a300  56                   push esi
// 0061a301  8d442420             lea eax, [esp + 0x20]
// 0061a305  50                   push eax
// 0061a306  885c2444             mov byte ptr [esp + 0x44], bl
// 0061a30a  e8b1f2ffff           call 0x6195c0
// 0061a30f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061a313  51                   push ecx
// 0061a314  e8d73d0000           call 0x61e0f0
// 0061a319  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061a31d  83c404               add esp, 4
// 0061a320  8bc7                 mov eax, edi
// 0061a322  5f                   pop edi
// 0061a323  5e                   pop esi
// 0061a324  64890d00000000       mov dword ptr fs:[0], ecx
// 0061a32b  5b                   pop ebx
// 0061a32c  83c428               add esp, 0x28
// 0061a32f  c3                   ret 
// library rbxgs-net/Player.cpp (function ??$token_finder@U?$is_any_ofF@D@detail@algorithm@boost@@@algorithm@boost@@YA?AU?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@01@U?$is_any_ofF@D@301@W4token_compress_mode_type@01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
