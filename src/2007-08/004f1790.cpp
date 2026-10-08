// roc 2007-08 004f1790  unit: RBX::Render::AggregatingSceneManager::Bucket  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f1790
//
// 004f1790  83ec08               sub esp, 8
// 004f1793  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004f1796  53                   push ebx
// 004f1797  55                   push ebp
// 004f1798  8d5908               lea ebx, [ecx + 8]
// 004f179b  56                   push esi
// 004f179c  57                   push edi
// 004f179d  8b38                 mov edi, dword ptr [eax]
// 004f179f  8bf3                 mov esi, ebx
// 004f17a1  897c2414             mov dword ptr [esp + 0x14], edi
// 004f17a5  89742410             mov dword ptr [esp + 0x10], esi
// 004f17a9  8be8                 mov ebp, eax
// 004f17ab  eb03                 jmp 0x4f17b0
// 004f17ad  8d4900               lea ecx, [ecx]
// 004f17b0  85f6                 test esi, esi
// 004f17b2  7404                 je 0x4f17b8
// 004f17b4  3bf3                 cmp esi, ebx
// 004f17b6  7406                 je 0x4f17be
// 004f17b8  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f17be  3bfd                 cmp edi, ebp
// 004f17c0  7439                 je 0x4f17fb
// 004f17c2  85f6                 test esi, esi
// 004f17c4  7506                 jne 0x4f17cc
// 004f17c6  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f17cc  3b7e04               cmp edi, dword ptr [esi + 4]
// 004f17cf  7506                 jne 0x4f17d7
// 004f17d1  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f17d7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004f17db  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004f17de  52                   push edx
// 004f17df  e87cf8ffff           call 0x4f1060
// 004f17e4  84c0                 test al, al
// 004f17e6  7513                 jne 0x4f17fb
// 004f17e8  8d4c2410             lea ecx, [esp + 0x10]
// 004f17ec  e88fb51100           call 0x60cd80
// 004f17f1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f17f5  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f17f9  ebb5                 jmp 0x4f17b0
// 004f17fb  5f                   pop edi
// 004f17fc  5e                   pop esi
// 004f17fd  5d                   pop ebp
// 004f17fe  5b                   pop ebx
// 004f17ff  83c408               add esp, 8
// 004f1802  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?dequeueSleepingChunk@AggregatingSceneManager@Render@RBX@@AAEXABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
