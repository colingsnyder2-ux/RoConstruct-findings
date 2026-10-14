// roc 2009-06 0057a6e0  unit: G3D::LineSegment  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a6e0
//
// 0057a6e0  6aff                 push -1
// 0057a6e2  68a1098600           push 0x8609a1
// 0057a6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0057a6ed  50                   push eax
// 0057a6ee  64892500000000       mov dword ptr fs:[0], esp
// 0057a6f5  83ec20               sub esp, 0x20
// 0057a6f8  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057a6fc  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057a700  56                   push esi
// 0057a701  8bf1                 mov esi, ecx
// 0057a703  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0057a707  50                   push eax
// 0057a708  51                   push ecx
// 0057a709  52                   push edx
// 0057a70a  8bce                 mov ecx, esi
// 0057a70c  89742410             mov dword ptr [esp + 0x10], esi
// 0057a710  e80bffffff           call 0x57a620
// 0057a715  8b442444             mov eax, dword ptr [esp + 0x44]
// 0057a719  8b542440             mov edx, dword ptr [esp + 0x40]
// 0057a71d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0057a725  c7066cbf8c00         mov dword ptr [esi], 0x8cbf6c
// 0057a72b  895644               mov dword ptr [esi + 0x44], edx
// 0057a72e  894648               mov dword ptr [esi + 0x48], eax
// 0057a731  83f803               cmp eax, 3
// 0057a734  7723                 ja 0x57a759
// 0057a736  ff2485d4a75700       jmp dword ptr [eax*4 + 0x57a7d4]
// 0057a73d  b92cbf8c00           mov ecx, 0x8cbf2c
// 0057a742  eb1a                 jmp 0x57a75e
// 0057a744  b91cbf8c00           mov ecx, 0x8cbf1c
// 0057a749  eb13                 jmp 0x57a75e
// 0057a74b  b90cbf8c00           mov ecx, 0x8cbf0c
// 0057a750  eb0c                 jmp 0x57a75e
// 0057a752  b900bf8c00           mov ecx, 0x8cbf00
// 0057a757  eb05                 jmp 0x57a75e
// 0057a759  b900758c00           mov ecx, 0x8c7500
// 0057a75e  83fa03               cmp edx, 3
// 0057a761  7723                 ja 0x57a786
// 0057a763  ff2495e4a75700       jmp dword ptr [edx*4 + 0x57a7e4]
// 0057a76a  b82cbf8c00           mov eax, 0x8cbf2c
// 0057a76f  eb1a                 jmp 0x57a78b
// 0057a771  b81cbf8c00           mov eax, 0x8cbf1c
// 0057a776  eb13                 jmp 0x57a78b
// 0057a778  b80cbf8c00           mov eax, 0x8cbf0c
// 0057a77d  eb0c                 jmp 0x57a78b
// 0057a77f  b800bf8c00           mov eax, 0x8cbf00
// 0057a784  eb05                 jmp 0x57a78b
// 0057a786  b800758c00           mov eax, 0x8c7500
// 0057a78b  51                   push ecx
// 0057a78c  50                   push eax
// 0057a78d  8d442410             lea eax, [esp + 0x10]
// 0057a791  683cbf8c00           push 0x8cbf3c
// 0057a796  50                   push eax
// 0057a797  e8e4ebffff           call 0x579380
// 0057a79c  83c410               add esp, 0x10
// 0057a79f  50                   push eax
// 0057a7a0  8d4e28               lea ecx, [esi + 0x28]
// 0057a7a3  c644243001           mov byte ptr [esp + 0x30], 1
// 0057a7a8  ff15ace48900         call dword ptr [0x89e4ac]
// 0057a7ae  8d4c2408             lea ecx, [esp + 8]
// 0057a7b2  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0057a7b7  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a7bd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057a7c1  8bc6                 mov eax, esi
// 0057a7c3  5e                   pop esi
// 0057a7c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a7cb  83c42c               add esp, 0x2c
// 0057a7ce  c21400               ret 0x14
// 0057a7d1  8d4900               lea ecx, [ecx]
// 0057a7d4  44                   inc esp
// 0057a7d5  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0057a7d6  57                   push edi
// 0057a7d7  003da757004b         add byte ptr [0x4b0057a7], bh
// 0057a7dd  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0057a7de  57                   push edi
// 0057a7df  0052a7               add byte ptr [edx - 0x59], dl
// 0057a7e2  57                   push edi
// 0057a7e3  0071a7               add byte ptr [ecx - 0x59], dh
// 0057a7e6  57                   push edi
// 0057a7e7  006aa7               add byte ptr [edx - 0x59], ch
// 0057a7ea  57                   push edi
// 0057a7eb  0078a7               add byte ptr [eax - 0x59], bh
// 0057a7ee  57                   push edi
// 0057a7ef  007fa7               add byte ptr [edi - 0x59], bh
// 0057a7f2  57                   push edi
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHW4Type@Token@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
