// roc 2009-12 008687b0  unit: CXTPPropertyGridView  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008687b0
//
// 008687b0  83ec18               sub esp, 0x18
// 008687b3  56                   push esi
// 008687b4  8bf1                 mov esi, ecx
// 008687b6  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008687bd  7e09                 jle 0x8687c8
// 008687bf  33c0                 xor eax, eax
// 008687c1  5e                   pop esi
// 008687c2  83c418               add esp, 0x18
// 008687c5  c20800               ret 8
// 008687c8  837e2000             cmp dword ptr [esi + 0x20], 0
// 008687cc  74f1                 je 0x8687bf
// 008687ce  57                   push edi
// 008687cf  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008687d3  8bcf                 mov ecx, edi
// 008687d5  e806c1ffff           call 0x8648e0
// 008687da  85c0                 test eax, eax
// 008687dc  740a                 je 0x8687e8
// 008687de  5f                   pop edi
// 008687df  33c0                 xor eax, eax
// 008687e1  5e                   pop esi
// 008687e2  83c418               add esp, 0x18
// 008687e5  c20800               ret 8
// 008687e8  8b07                 mov eax, dword ptr [edi]
// 008687ea  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 008687f0  53                   push ebx
// 008687f1  55                   push ebp
// 008687f2  8bcf                 mov ecx, edi
// 008687f4  ffd2                 call edx
// 008687f6  8b442430             mov eax, dword ptr [esp + 0x30]
// 008687fa  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008687fd  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 00868803  57                   push edi
// 00868804  50                   push eax
// 00868805  6881010000           push 0x181
// 0086880a  51                   push ecx
// 0086880b  ffd5                 call ebp
// 0086880d  8b5620               mov edx, dword ptr [esi + 0x20]
// 00868810  57                   push edi
// 00868811  8bd8                 mov ebx, eax
// 00868813  53                   push ebx
// 00868814  689a010000           push 0x19a
// 00868819  52                   push edx
// 0086881a  ffd5                 call ebp
// 0086881c  8bce                 mov ecx, esi
// 0086881e  e84fdc0b00           call 0x926472
// 00868823  a820                 test al, 0x20
// 00868825  7447                 je 0x86886e
// 00868827  8b16                 mov edx, dword ptr [esi]
// 00868829  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0086882f  33c0                 xor eax, eax
// 00868831  89442414             mov dword ptr [esp + 0x14], eax
// 00868835  8944241c             mov dword ptr [esp + 0x1c], eax
// 00868839  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0086883f  89442420             mov dword ptr [esp + 0x20], eax
// 00868843  8d442410             lea eax, [esp + 0x10]
// 00868847  50                   push eax
// 00868848  8bce                 mov ecx, esi
// 0086884a  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00868852  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00868856  897c2428             mov dword ptr [esp + 0x28], edi
// 0086885a  ffd2                 call edx
// 0086885c  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00868861  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00868864  50                   push eax
// 00868865  53                   push ebx
// 00868866  68a0010000           push 0x1a0
// 0086886b  51                   push ecx
// 0086886c  ffd5                 call ebp
// 0086886e  8b17                 mov edx, dword ptr [edi]
// 00868870  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 00868876  6a01                 push 1
// 00868878  8bcf                 mov ecx, edi
// 0086887a  ffd0                 call eax
// 0086887c  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00868883  b801000000           mov eax, 1
// 00868888  740a                 je 0x868894
// 0086888a  53                   push ebx
// 0086888b  57                   push edi
// 0086888c  8bce                 mov ecx, esi
// 0086888e  e80d000000           call 0x8688a0
// 00868893  40                   inc eax
// 00868894  5d                   pop ebp
// 00868895  5b                   pop ebx
// 00868896  5f                   pop edi
// 00868897  5e                   pop esi
// 00868898  83c418               add esp, 0x18
// 0086889b  c20800               ret 8
// copied from an identical function in another client (function ?InsertItem@CXTPPropertyGridView@@AAEHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp