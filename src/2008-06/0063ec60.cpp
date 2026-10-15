// roc 2008-06 0063ec60  unit: RBX::ResizeTool  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ec60
//
// 0063ec60  6aff                 push -1
// 0063ec62  68fea87d00           push 0x7da8fe
// 0063ec67  64a100000000         mov eax, dword ptr fs:[0]
// 0063ec6d  50                   push eax
// 0063ec6e  64892500000000       mov dword ptr fs:[0], esp
// 0063ec75  83ec3c               sub esp, 0x3c
// 0063ec78  53                   push ebx
// 0063ec79  c744240400000000     mov dword ptr [esp + 4], 0
// 0063ec81  80792800             cmp byte ptr [ecx + 0x28], 0
// 0063ec85  56                   push esi
// 0063ec86  7416                 je 0x63ec9e
// 0063ec88  68e8a38400           push 0x84a3e8
// 0063ec8d  8d4c242c             lea ecx, [esp + 0x2c]
// 0063ec91  ff1558248000         call dword ptr [0x802458]
// 0063ec97  bb01000000           mov ebx, 1
// 0063ec9c  eb0f                 jmp 0x63ecad
// 0063ec9e  8d44240c             lea eax, [esp + 0xc]
// 0063eca2  50                   push eax
// 0063eca3  e8f874fdff           call 0x6161a0
// 0063eca8  bb02000000           mov ebx, 2
// 0063ecad  8b742454             mov esi, dword ptr [esp + 0x54]
// 0063ecb1  50                   push eax
// 0063ecb2  8bce                 mov ecx, esi
// 0063ecb4  895c240c             mov dword ptr [esp + 0xc], ebx
// 0063ecb8  895c2450             mov dword ptr [esp + 0x50], ebx
// 0063ecbc  ff155c248000         call dword ptr [0x80245c]
// 0063ecc2  83cb04               or ebx, 4
// 0063ecc5  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 0063eccd  f6c302               test bl, 2
// 0063ecd0  7411                 je 0x63ece3
// 0063ecd2  83e3fd               and ebx, 0xfffffffd
// 0063ecd5  8d4c240c             lea ecx, [esp + 0xc]
// 0063ecd9  895c2408             mov dword ptr [esp + 8], ebx
// 0063ecdd  ff1568248000         call dword ptr [0x802468]
// 0063ece3  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0063eceb  f6c301               test bl, 1
// 0063ecee  7411                 je 0x63ed01
// 0063ecf0  83e3fe               and ebx, 0xfffffffe
// 0063ecf3  8d4c2428             lea ecx, [esp + 0x28]
// 0063ecf7  895c2408             mov dword ptr [esp + 8], ebx
// 0063ecfb  ff1568248000         call dword ptr [0x802468]
// 0063ed01  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0063ed05  8bc6                 mov eax, esi
// 0063ed07  5e                   pop esi
// 0063ed08  5b                   pop ebx
// 0063ed09  64890d00000000       mov dword ptr fs:[0], ecx
// 0063ed10  83c448               add esp, 0x48
// 0063ed13  c20400               ret 4
// library rbxgs/roc_unit_4329760619cd676f.cpp (function ?getCursorName@ResizeTool@RBX@@MBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4329760619cd676f.cpp
