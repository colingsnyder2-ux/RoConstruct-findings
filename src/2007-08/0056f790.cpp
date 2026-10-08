// roc 2007-08 0056f790  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056f790
//
// 0056f790  83ec10               sub esp, 0x10
// 0056f793  55                   push ebp
// 0056f794  56                   push esi
// 0056f795  8b742420             mov esi, dword ptr [esp + 0x20]
// 0056f799  8be9                 mov ebp, ecx
// 0056f79b  8bce                 mov ecx, esi
// 0056f79d  e8fee0feff           call 0x55d8a0
// 0056f7a2  84c0                 test al, al
// 0056f7a4  0f85c3000000         jne 0x56f86d
// 0056f7aa  8d442408             lea eax, [esp + 8]
// 0056f7ae  50                   push eax
// 0056f7af  8d4e0c               lea ecx, [esi + 0xc]
// 0056f7b2  e899defeff           call 0x55d650
// 0056f7b7  84c0                 test al, al
// 0056f7b9  7444                 je 0x56f7ff
// 0056f7bb  8b442408             mov eax, dword ptr [esp + 8]
// 0056f7bf  8bc8                 mov ecx, eax
// 0056f7c1  c1e910               shr ecx, 0x10
// 0056f7c4  8bd0                 mov edx, eax
// 0056f7c6  88442422             mov byte ptr [esp + 0x22], al
// 0056f7ca  8d442420             lea eax, [esp + 0x20]
// 0056f7ce  884c2420             mov byte ptr [esp + 0x20], cl
// 0056f7d2  c1ea08               shr edx, 8
// 0056f7d5  50                   push eax
// 0056f7d6  8d4c2410             lea ecx, [esp + 0x10]
// 0056f7da  88542425             mov byte ptr [esp + 0x25], dl
// 0056f7de  e8bdbbf9ff           call 0x50b3a0
// 0056f7e3  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0056f7e6  8b11                 mov edx, dword ptr [ecx]
// 0056f7e8  8b5208               mov edx, dword ptr [edx + 8]
// 0056f7eb  8d44240c             lea eax, [esp + 0xc]
// 0056f7ef  50                   push eax
// 0056f7f0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056f7f4  50                   push eax
// 0056f7f5  ffd2                 call edx
// 0056f7f7  5e                   pop esi
// 0056f7f8  5d                   pop ebp
// 0056f7f9  83c410               add esp, 0x10
// 0056f7fc  c20c00               ret 0xc
// 0056f7ff  a1d0228c00           mov eax, dword ptr [0x8c22d0]
// 0056f804  53                   push ebx
// 0056f805  57                   push edi
// 0056f806  50                   push eax
// 0056f807  8bce                 mov ecx, esi
// 0056f809  e822dbfeff           call 0x55d330
// 0056f80e  8b0d9c228c00         mov ecx, dword ptr [0x8c229c]
// 0056f814  51                   push ecx
// 0056f815  8bce                 mov ecx, esi
// 0056f817  8bf8                 mov edi, eax
// 0056f819  e812dbfeff           call 0x55d330
// 0056f81e  8b15a0228c00         mov edx, dword ptr [0x8c22a0]
// 0056f824  52                   push edx
// 0056f825  8bce                 mov ecx, esi
// 0056f827  8bd8                 mov ebx, eax
// 0056f829  e802dbfeff           call 0x55d330
// 0056f82e  8bf0                 mov esi, eax
// 0056f830  8d442414             lea eax, [esp + 0x14]
// 0056f834  50                   push eax
// 0056f835  8d4f0c               lea ecx, [edi + 0xc]
// 0056f838  e8d3defeff           call 0x55d710
// 0056f83d  8d4c2418             lea ecx, [esp + 0x18]
// 0056f841  51                   push ecx
// 0056f842  8d4b0c               lea ecx, [ebx + 0xc]
// 0056f845  e8c6defeff           call 0x55d710
// 0056f84a  8d54241c             lea edx, [esp + 0x1c]
// 0056f84e  52                   push edx
// 0056f84f  8d4e0c               lea ecx, [esi + 0xc]
// 0056f852  e8b9defeff           call 0x55d710
// 0056f857  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0056f85a  8b01                 mov eax, dword ptr [ecx]
// 0056f85c  8b4008               mov eax, dword ptr [eax + 8]
// 0056f85f  8d542414             lea edx, [esp + 0x14]
// 0056f863  52                   push edx
// 0056f864  8b542428             mov edx, dword ptr [esp + 0x28]
// 0056f868  52                   push edx
// 0056f869  ffd0                 call eax
// 0056f86b  5f                   pop edi
// 0056f86c  5b                   pop ebx
// 0056f86d  5e                   pop esi
// 0056f86e  5d                   pop ebp
// 0056f86f  83c410               add esp, 0x10
// 0056f872  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@VColor3@G3D@@@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
