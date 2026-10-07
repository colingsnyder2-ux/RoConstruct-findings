// roc 2008-06 00642c90  unit: RBX::VWidget::?$NonFactoryProduct  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00642c90
//
// 00642c90  6aff                 push -1
// 00642c92  68c8c77d00           push 0x7dc7c8
// 00642c97  64a100000000         mov eax, dword ptr fs:[0]
// 00642c9d  50                   push eax
// 00642c9e  64892500000000       mov dword ptr fs:[0], esp
// 00642ca5  83ec20               sub esp, 0x20
// 00642ca8  53                   push ebx
// 00642ca9  56                   push esi
// 00642caa  57                   push edi
// 00642cab  8bf9                 mov edi, ecx
// 00642cad  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00642cb1  8d4308               lea eax, [ebx + 8]
// 00642cb4  50                   push eax
// 00642cb5  8d4c2420             lea ecx, [esp + 0x20]
// 00642cb9  53                   push ebx
// 00642cba  51                   push ecx
// 00642cbb  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00642cc3  e80809ebff           call 0x4f35d0
// 00642cc8  83c40c               add esp, 0xc
// 00642ccb  837c244000           cmp dword ptr [esp + 0x40], 0
// 00642cd0  7465                 je 0x642d37
// 00642cd2  51                   push ecx
// 00642cd3  8bcc                 mov ecx, esp
// 00642cd5  c70100000000         mov dword ptr [ecx], 0
// 00642cdb  8b542444             mov edx, dword ptr [esp + 0x44]
// 00642cdf  89642448             mov dword ptr [esp + 0x48], esp
// 00642ce3  52                   push edx
// 00642ce4  e8b762f5ff           call 0x598fa0
// 00642ce9  8b742440             mov esi, dword ptr [esp + 0x40]
// 00642ced  8b06                 mov eax, dword ptr [esi]
// 00642cef  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00642cf2  6a00                 push 0
// 00642cf4  8bce                 mov ecx, esi
// 00642cf6  ffd2                 call edx
// 00642cf8  d9e8                 fld1 
// 00642cfa  8b06                 mov eax, dword ptr [esi]
// 00642cfc  d954240c             fst dword ptr [esp + 0xc]
// 00642d00  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00642d03  d9542410             fst dword ptr [esp + 0x10]
// 00642d07  8d4c240c             lea ecx, [esp + 0xc]
// 00642d0b  d9542414             fst dword ptr [esp + 0x14]
// 00642d0f  51                   push ecx
// 00642d10  d95c241c             fstp dword ptr [esp + 0x1c]
// 00642d14  8d542420             lea edx, [esp + 0x20]
// 00642d18  52                   push edx
// 00642d19  8bce                 mov ecx, esi
// 00642d1b  ffd0                 call eax
// 00642d1d  51                   push ecx
// 00642d1e  8bc4                 mov eax, esp
// 00642d20  c70000000000         mov dword ptr [eax], 0
// 00642d26  8b16                 mov edx, dword ptr [esi]
// 00642d28  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00642d2b  89642440             mov dword ptr [esp + 0x40], esp
// 00642d2f  6a00                 push 0
// 00642d31  8bce                 mov ecx, esi
// 00642d33  ffd0                 call eax
// 00642d35  eb5b                 jmp 0x642d92
// 00642d37  837f2000             cmp dword ptr [edi + 0x20], 0
// 00642d3b  7455                 je 0x642d92
// 00642d3d  8b442448             mov eax, dword ptr [esp + 0x48]
// 00642d41  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00642d45  8b16                 mov edx, dword ptr [esi]
// 00642d47  8b522c               mov edx, dword ptr [edx + 0x2c]
// 00642d4a  50                   push eax
// 00642d4b  8d4c2420             lea ecx, [esp + 0x20]
// 00642d4f  51                   push ecx
// 00642d50  8bce                 mov ecx, esi
// 00642d52  ffd2                 call edx
// 00642d54  e8b7811700           call 0x7baf10
// 00642d59  50                   push eax
// 00642d5a  e8b1811700           call 0x7baf10
// 00642d5f  50                   push eax
// 00642d60  53                   push ebx
// 00642d61  51                   push ecx
// 00642d62  8bcc                 mov ecx, esp
// 00642d64  c70100000000         mov dword ptr [ecx], 0
// 00642d6a  8b4720               mov eax, dword ptr [edi + 0x20]
// 00642d6d  8964244c             mov dword ptr [esp + 0x4c], esp
// 00642d71  50                   push eax
// 00642d72  e82962f5ff           call 0x598fa0
// 00642d77  56                   push esi
// 00642d78  8bcf                 mov ecx, edi
// 00642d7a  e811ffffff           call 0x642c90
// 00642d7f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00642d83  8b16                 mov edx, dword ptr [esi]
// 00642d85  8b522c               mov edx, dword ptr [edx + 0x2c]
// 00642d88  50                   push eax
// 00642d89  8d4c2420             lea ecx, [esp + 0x20]
// 00642d8d  51                   push ecx
// 00642d8e  8bce                 mov ecx, esi
// 00642d90  ffd2                 call edx
// 00642d92  8b442440             mov eax, dword ptr [esp + 0x40]
// 00642d96  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00642d9e  85c0                 test eax, eax
// 00642da0  7427                 je 0x642dc9
// 00642da2  83c004               add eax, 4
// 00642da5  50                   push eax
// 00642da6  ff15ac218000         call dword ptr [0x8021ac]
// 00642dac  85c0                 test eax, eax
// 00642dae  7519                 jne 0x642dc9
// 00642db0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00642db4  e8d77fe1ff           call 0x45ad90
// 00642db9  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00642dbd  85c9                 test ecx, ecx
// 00642dbf  7408                 je 0x642dc9
// 00642dc1  8b01                 mov eax, dword ptr [ecx]
// 00642dc3  8b10                 mov edx, dword ptr [eax]
// 00642dc5  6a01                 push 1
// 00642dc7  ffd2                 call edx
// 00642dc9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00642dcd  5f                   pop edi
// 00642dce  5e                   pop esi
// 00642dcf  64890d00000000       mov dword ptr fs:[0], ecx
// 00642dd6  5b                   pop ebx
// 00642dd7  83c42c               add esp, 0x2c
// 00642dda  c21400               ret 0x14
// library rbxgs/gui\GuiDraw.cpp (function ?draw@GuiDrawImage@RBX@@AAEXPAVAdorn@2@V?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@ABVRect@2@ABVColor4@5@3@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
