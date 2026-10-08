// from server: 100% by auto
// roc 2010-06 00910030  unit: G3D::TextureManager::TextureArgs  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00910030
//
// 00910030  6aff                 push -1
// 00910032  68ac139c00           push 0x9c13ac
// 00910037  64a100000000         mov eax, dword ptr fs:[0]
// 0091003d  50                   push eax
// 0091003e  64892500000000       mov dword ptr fs:[0], esp
// 00910045  83ec54               sub esp, 0x54
// 00910048  56                   push esi
// 00910049  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0091004d  56                   push esi
// 0091004e  c744240800000000     mov dword ptr [esp + 8], 0
// 00910056  e895a1c4ff           call 0x55a1f0
// 0091005b  83c404               add esp, 4
// 0091005e  84c0                 test al, al
// 00910060  751a                 jne 0x91007c
// 00910062  8b442468             mov eax, dword ptr [esp + 0x68]
// 00910066  c70000000000         mov dword ptr [eax], 0
// 0091006c  5e                   pop esi
// 0091006d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00910071  64890d00000000       mov dword ptr fs:[0], ecx
// 00910078  83c460               add esp, 0x60
// 0091007b  c3                   ret 
// 0091007c  6a01                 push 1
// 0091007e  6a01                 push 1
// 00910080  56                   push esi
// 00910081  8d4c2418             lea ecx, [esp + 0x18]
// 00910085  e8f689c4ff           call 0x558a80
// 0091008a  6820020000           push 0x220
// 0091008f  c744246401000000     mov dword ptr [esp + 0x64], 1
// 00910097  e80479e9ff           call 0x7a79a0
// 0091009c  83c404               add esp, 4
// 0091009f  89442408             mov dword ptr [esp + 8], eax
// 009100a3  c644246002           mov byte ptr [esp + 0x60], 2
// 009100a8  85c0                 test eax, eax
// 009100aa  7411                 je 0x9100bd
// 009100ac  8d4c240c             lea ecx, [esp + 0xc]
// 009100b0  51                   push ecx
// 009100b1  56                   push esi
// 009100b2  6a00                 push 0
// 009100b4  8bc8                 mov ecx, eax
// 009100b6  e865f7ffff           call 0x90f820
// 009100bb  eb02                 jmp 0x9100bf
// 009100bd  33c0                 xor eax, eax
// 009100bf  8b742468             mov esi, dword ptr [esp + 0x68]
// 009100c3  50                   push eax
// 009100c4  8bce                 mov ecx, esi
// 009100c6  c644246401           mov byte ptr [esp + 0x64], 1
// 009100cb  c70600000000         mov dword ptr [esi], 0
// 009100d1  e84a6cb7ff           call 0x486d20
// 009100d6  8d4c240c             lea ecx, [esp + 0xc]
// 009100da  c744240401000000     mov dword ptr [esp + 4], 1
// 009100e2  c644246000           mov byte ptr [esp + 0x60], 0
// 009100e7  e8d48bc4ff           call 0x558cc0
// 009100ec  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009100f0  8bc6                 mov eax, esi
// 009100f2  5e                   pop esi
// 009100f3  64890d00000000       mov dword ptr fs:[0], ecx
// 009100fa  83c460               add esp, 0x60
// 009100fd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ?fromFile@GFont@G3D@@SA?AV?$ReferenceCountedPointer@VGFont@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
