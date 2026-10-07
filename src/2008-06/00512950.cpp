// roc 2008-06 00512950  unit: G3D::GCamera  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512950
//
// 00512950  6aff                 push -1
// 00512952  683af67c00           push 0x7cf63a
// 00512957  64a100000000         mov eax, dword ptr fs:[0]
// 0051295d  50                   push eax
// 0051295e  64892500000000       mov dword ptr fs:[0], esp
// 00512965  83ec08               sub esp, 8
// 00512968  53                   push ebx
// 00512969  56                   push esi
// 0051296a  33db                 xor ebx, ebx
// 0051296c  57                   push edi
// 0051296d  895c2410             mov dword ptr [esp + 0x10], ebx
// 00512971  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00512975  8bf1                 mov esi, ecx
// 00512977  8bcf                 mov ecx, edi
// 00512979  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0051297d  ff1560248000         call dword ptr [0x802460]
// 00512983  8d44240f             lea eax, [esp + 0xf]
// 00512987  83c628               add esi, 0x28
// 0051298a  50                   push eax
// 0051298b  8bce                 mov ecx, esi
// 0051298d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00512991  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00512999  885c2413             mov byte ptr [esp + 0x13], bl
// 0051299d  e8eefdffff           call 0x512790
// 005129a2  8b06                 mov eax, dword ptr [esi]
// 005129a4  50                   push eax
// 005129a5  8bcf                 mov ecx, edi
// 005129a7  ff154c248000         call dword ptr [0x80244c]
// 005129ad  8b4e04               mov ecx, dword ptr [esi + 4]
// 005129b0  49                   dec ecx
// 005129b1  53                   push ebx
// 005129b2  51                   push ecx
// 005129b3  8bce                 mov ecx, esi
// 005129b5  e8d6fcffff           call 0x512690
// 005129ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005129be  8bc7                 mov eax, edi
// 005129c0  5f                   pop edi
// 005129c1  5e                   pop esi
// 005129c2  5b                   pop ebx
// 005129c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005129ca  83c414               add esp, 0x14
// 005129cd  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?commitString@TextOutput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
