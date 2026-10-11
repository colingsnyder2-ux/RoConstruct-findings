// roc 2008-06 005a6bc0  unit: RBX::Workspace  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6bc0
//
// 005a6bc0  83ec44               sub esp, 0x44
// 005a6bc3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005a6bc7  c7042400000000       mov dword ptr [esp], 0
// 005a6bce  81f9e8030000         cmp ecx, 0x3e8
// 005a6bd4  7308                 jae 0x5a6bde
// 005a6bd6  51                   push ecx
// 005a6bd7  6868418300           push 0x834168
// 005a6bdc  eb54                 jmp 0x5a6c32
// 005a6bde  81f940420f00         cmp ecx, 0xf4240
// 005a6be4  7317                 jae 0x5a6bfd
// 005a6be6  b8d34d6210           mov eax, 0x10624dd3
// 005a6beb  f7e1                 mul ecx
// 005a6bed  c1ea06               shr edx, 6
// 005a6bf0  52                   push edx
// 005a6bf1  6860418300           push 0x834160
// 005a6bf6  8d4c240c             lea ecx, [esp + 0xc]
// 005a6bfa  51                   push ecx
// 005a6bfb  eb3a                 jmp 0x5a6c37
// 005a6bfd  81f900ca9a3b         cmp ecx, 0x3b9aca00
// 005a6c03  7317                 jae 0x5a6c1c
// 005a6c05  b883de1b43           mov eax, 0x431bde83
// 005a6c0a  f7e1                 mul ecx
// 005a6c0c  c1ea12               shr edx, 0x12
// 005a6c0f  52                   push edx
// 005a6c10  6858418300           push 0x834158
// 005a6c15  8d54240c             lea edx, [esp + 0xc]
// 005a6c19  52                   push edx
// 005a6c1a  eb1b                 jmp 0x5a6c37
// 005a6c1c  b883bee012           mov eax, 0x12e0be83
// 005a6c21  f7e1                 mul ecx
// 005a6c23  2bca                 sub ecx, edx
// 005a6c25  d1e9                 shr ecx, 1
// 005a6c27  03ca                 add ecx, edx
// 005a6c29  c1e91d               shr ecx, 0x1d
// 005a6c2c  51                   push ecx
// 005a6c2d  6850418300           push 0x834150
// 005a6c32  8d44240c             lea eax, [esp + 0xc]
// 005a6c36  50                   push eax
// 005a6c37  ff1530288000         call dword ptr [0x802830]
// 005a6c3d  83c40c               add esp, 0xc
// 005a6c40  56                   push esi
// 005a6c41  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005a6c45  8d4c2408             lea ecx, [esp + 8]
// 005a6c49  51                   push ecx
// 005a6c4a  8bce                 mov ecx, esi
// 005a6c4c  ff1558248000         call dword ptr [0x802458]
// 005a6c52  8bc6                 mov eax, esi
// 005a6c54  5e                   pop esi
// 005a6c55  83c444               add esp, 0x44
// 005a6c58  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ?formatMem@Log@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Log.cpp
