// roc 2009-12 005fc570  unit: G3D::TextInput::WrongSymbol  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fc570
//
// 005fc570  83ec50               sub esp, 0x50
// 005fc573  56                   push esi
// 005fc574  8b742458             mov esi, dword ptr [esp + 0x58]
// 005fc578  57                   push edi
// 005fc579  56                   push esi
// 005fc57a  8bf9                 mov edi, ecx
// 005fc57c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005fc584  e867faffff           call 0x5fbff0
// 005fc589  837e2401             cmp dword ptr [esi + 0x24], 1
// 005fc58d  750a                 jne 0x5fc599
// 005fc58f  5f                   pop edi
// 005fc590  8bc6                 mov eax, esi
// 005fc592  5e                   pop esi
// 005fc593  83c450               add esp, 0x50
// 005fc596  c20400               ret 4
// 005fc599  56                   push esi
// 005fc59a  8bcf                 mov ecx, edi
// 005fc59c  e88ffdffff           call 0x5fc330
// 005fc5a1  8b4624               mov eax, dword ptr [esi + 0x24]
// 005fc5a4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005fc5a7  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005fc5aa  50                   push eax
// 005fc5ab  6a01                 push 1
// 005fc5ad  51                   push ecx
// 005fc5ae  52                   push edx
// 005fc5af  83c740               add edi, 0x40
// 005fc5b2  57                   push edi
// 005fc5b3  8d4c2420             lea ecx, [esp + 0x20]
// 005fc5b7  e8b4e6ffff           call 0x5fac70
// 005fc5bc  685832ab00           push 0xab3258
// 005fc5c1  8d442410             lea eax, [esp + 0x10]
// 005fc5c5  50                   push eax
// 005fc5c6  e8ad821f00           call 0x7f4878
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?readSymbolToken@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
