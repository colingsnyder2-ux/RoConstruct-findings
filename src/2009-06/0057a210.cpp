// roc 2009-06 0057a210  unit: G3D::LineSegment  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a210
//
// 0057a210  8b442404             mov eax, dword ptr [esp + 4]
// 0057a214  83781400             cmp dword ptr [eax + 0x14], 0
// 0057a218  56                   push esi
// 0057a219  57                   push edi
// 0057a21a  8bf1                 mov esi, ecx
// 0057a21c  bf10000000           mov edi, 0x10
// 0057a221  761c                 jbe 0x57a23f
// 0057a223  397818               cmp dword ptr [eax + 0x18], edi
// 0057a226  7205                 jb 0x57a22d
// 0057a228  8b4004               mov eax, dword ptr [eax + 4]
// 0057a22b  eb03                 jmp 0x57a230
// 0057a22d  83c004               add eax, 4
// 0057a230  50                   push eax
// 0057a231  6890ba8c00           push 0x8cba90
// 0057a236  56                   push esi
// 0057a237  e814ffffff           call 0x57a150
// 0057a23c  83c40c               add esp, 0xc
// 0057a23f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057a243  83781400             cmp dword ptr [eax + 0x14], 0
// 0057a247  761c                 jbe 0x57a265
// 0057a249  397818               cmp dword ptr [eax + 0x18], edi
// 0057a24c  7205                 jb 0x57a253
// 0057a24e  8b4004               mov eax, dword ptr [eax + 4]
// 0057a251  eb03                 jmp 0x57a256
// 0057a253  83c004               add eax, 4
// 0057a256  50                   push eax
// 0057a257  6890ba8c00           push 0x8cba90
// 0057a25c  56                   push esi
// 0057a25d  e8eefeffff           call 0x57a150
// 0057a262  83c40c               add esp, 0xc
// 0057a265  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057a269  83781400             cmp dword ptr [eax + 0x14], 0
// 0057a26d  761c                 jbe 0x57a28b
// 0057a26f  397818               cmp dword ptr [eax + 0x18], edi
// 0057a272  7205                 jb 0x57a279
// 0057a274  8b4004               mov eax, dword ptr [eax + 4]
// 0057a277  eb03                 jmp 0x57a27c
// 0057a279  83c004               add eax, 4
// 0057a27c  50                   push eax
// 0057a27d  6890ba8c00           push 0x8cba90
// 0057a282  56                   push esi
// 0057a283  e8c8feffff           call 0x57a150
// 0057a288  83c40c               add esp, 0xc
// 0057a28b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057a28f  83781400             cmp dword ptr [eax + 0x14], 0
// 0057a293  761c                 jbe 0x57a2b1
// 0057a295  397818               cmp dword ptr [eax + 0x18], edi
// 0057a298  7205                 jb 0x57a29f
// 0057a29a  8b4004               mov eax, dword ptr [eax + 4]
// 0057a29d  eb03                 jmp 0x57a2a2
// 0057a29f  83c004               add eax, 4
// 0057a2a2  50                   push eax
// 0057a2a3  6890ba8c00           push 0x8cba90
// 0057a2a8  56                   push esi
// 0057a2a9  e8a2feffff           call 0x57a150
// 0057a2ae  83c40c               add esp, 0xc
// 0057a2b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057a2b5  83781400             cmp dword ptr [eax + 0x14], 0
// 0057a2b9  761c                 jbe 0x57a2d7
// 0057a2bb  397818               cmp dword ptr [eax + 0x18], edi
// 0057a2be  7205                 jb 0x57a2c5
// 0057a2c0  8b4004               mov eax, dword ptr [eax + 4]
// 0057a2c3  eb03                 jmp 0x57a2c8
// 0057a2c5  83c004               add eax, 4
// 0057a2c8  50                   push eax
// 0057a2c9  6890ba8c00           push 0x8cba90
// 0057a2ce  56                   push esi
// 0057a2cf  e87cfeffff           call 0x57a150
// 0057a2d4  83c40c               add esp, 0xc
// 0057a2d7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057a2db  83781400             cmp dword ptr [eax + 0x14], 0
// 0057a2df  762e                 jbe 0x57a30f
// 0057a2e1  397818               cmp dword ptr [eax + 0x18], edi
// 0057a2e4  7217                 jb 0x57a2fd
// 0057a2e6  8b4004               mov eax, dword ptr [eax + 4]
// 0057a2e9  50                   push eax
// 0057a2ea  6890ba8c00           push 0x8cba90
// 0057a2ef  56                   push esi
// 0057a2f0  e85bfeffff           call 0x57a150
// 0057a2f5  83c40c               add esp, 0xc
// 0057a2f8  5f                   pop edi
// 0057a2f9  5e                   pop esi
// 0057a2fa  c21800               ret 0x18
// 0057a2fd  83c004               add eax, 4
// 0057a300  50                   push eax
// 0057a301  6890ba8c00           push 0x8cba90
// 0057a306  56                   push esi
// 0057a307  e844feffff           call 0x57a150
// 0057a30c  83c40c               add esp, 0xc
// 0057a30f  5f                   pop edi
// 0057a310  5e                   pop esi
// 0057a311  c21800               ret 0x18
// library g3d-6.09/G3Dcpp\TextOutput.cpp (function ?writeSymbols@TextOutput@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextOutput.cpp
