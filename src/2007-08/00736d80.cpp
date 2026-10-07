// roc 2007-08 00736d80  unit: G3D::Sky  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00736d80
//
// 00736d80  6aff                 push -1
// 00736d82  68ccc47600           push 0x76c4cc
// 00736d87  64a100000000         mov eax, dword ptr fs:[0]
// 00736d8d  50                   push eax
// 00736d8e  83ec5c               sub esp, 0x5c
// 00736d91  a188518b00           mov eax, dword ptr [0x8b5188]
// 00736d96  33c4                 xor eax, esp
// 00736d98  89442458             mov dword ptr [esp + 0x58], eax
// 00736d9c  56                   push esi
// 00736d9d  57                   push edi
// 00736d9e  a188518b00           mov eax, dword ptr [0x8b5188]
// 00736da3  33c4                 xor eax, esp
// 00736da5  50                   push eax
// 00736da6  8d442468             lea eax, [esp + 0x68]
// 00736daa  64a300000000         mov dword ptr fs:[0], eax
// 00736db0  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00736db4  8b742478             mov esi, dword ptr [esp + 0x78]
// 00736db8  57                   push edi
// 00736db9  89742414             mov dword ptr [esp + 0x14], esi
// 00736dbd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00736dc5  e8a647ddff           call 0x50b570
// 00736dca  83c404               add esp, 4
// 00736dcd  84c0                 test al, al
// 00736dcf  7508                 jne 0x736dd9
// 00736dd1  c70600000000         mov dword ptr [esi], 0
// 00736dd7  eb6c                 jmp 0x736e45
// 00736dd9  6a01                 push 1
// 00736ddb  6a01                 push 1
// 00736ddd  57                   push edi
// 00736dde  8d4c2424             lea ecx, [esp + 0x24]
// 00736de2  e8a953ddff           call 0x50c190
// 00736de7  6820020000           push 0x220
// 00736dec  c744247401000000     mov dword ptr [esp + 0x74], 1
// 00736df4  e8fd90efff           call 0x62fef6
// 00736df9  83c404               add esp, 4
// 00736dfc  89442414             mov dword ptr [esp + 0x14], eax
// 00736e00  85c0                 test eax, eax
// 00736e02  c644247002           mov byte ptr [esp + 0x70], 2
// 00736e07  7411                 je 0x736e1a
// 00736e09  8d4c2418             lea ecx, [esp + 0x18]
// 00736e0d  51                   push ecx
// 00736e0e  57                   push edi
// 00736e0f  6a00                 push 0
// 00736e11  8bc8                 mov ecx, eax
// 00736e13  e868f6ffff           call 0x736480
// 00736e18  eb02                 jmp 0x736e1c
// 00736e1a  33c0                 xor eax, eax
// 00736e1c  50                   push eax
// 00736e1d  8bce                 mov ecx, esi
// 00736e1f  c644247401           mov byte ptr [esp + 0x74], 1
// 00736e24  c70600000000         mov dword ptr [esi], 0
// 00736e2a  e841e1d3ff           call 0x474f70
// 00736e2f  8d4c2418             lea ecx, [esp + 0x18]
// 00736e33  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00736e3b  c644247000           mov byte ptr [esp + 0x70], 0
// 00736e40  e89b50ddff           call 0x50bee0
// 00736e45  8bc6                 mov eax, esi
// 00736e47  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00736e4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00736e52  59                   pop ecx
// 00736e53  5f                   pop edi
// 00736e54  5e                   pop esi
// 00736e55  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00736e59  33cc                 xor ecx, esp
// 00736e5b  e8be9befff           call 0x630a1e
// 00736e60  83c468               add esp, 0x68
// 00736e63  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ?fromFile@GFont@G3D@@SA?AV?$ReferenceCountedPointer@VGFont@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
