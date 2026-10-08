// roc 2007-03 0056f010  unit: seg_00560000  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056f010
//
// 0056f010  83ec10               sub esp, 0x10
// 0056f013  55                   push ebp
// 0056f014  56                   push esi
// 0056f015  8b742420             mov esi, dword ptr [esp + 0x20]
// 0056f019  8be9                 mov ebp, ecx
// 0056f01b  8bce                 mov ecx, esi
// 0056f01d  e84e03ffff           call 0x55f370
// 0056f022  84c0                 test al, al
// 0056f024  0f85c3000000         jne 0x56f0ed
// 0056f02a  8d442408             lea eax, [esp + 8]
// 0056f02e  50                   push eax
// 0056f02f  8d4e0c               lea ecx, [esi + 0xc]
// 0056f032  e8e900ffff           call 0x55f120
// 0056f037  84c0                 test al, al
// 0056f039  7444                 je 0x56f07f
// 0056f03b  8b442408             mov eax, dword ptr [esp + 8]
// 0056f03f  8bc8                 mov ecx, eax
// 0056f041  c1e910               shr ecx, 0x10
// 0056f044  8bd0                 mov edx, eax
// 0056f046  88442422             mov byte ptr [esp + 0x22], al
// 0056f04a  8d442420             lea eax, [esp + 0x20]
// 0056f04e  884c2420             mov byte ptr [esp + 0x20], cl
// 0056f052  c1ea08               shr edx, 8
// 0056f055  50                   push eax
// 0056f056  8d4c2410             lea ecx, [esp + 0x10]
// 0056f05a  88542425             mov byte ptr [esp + 0x25], dl
// 0056f05e  e83d1af9ff           call 0x500aa0
// 0056f063  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0056f066  8b11                 mov edx, dword ptr [ecx]
// 0056f068  8b5208               mov edx, dword ptr [edx + 8]
// 0056f06b  8d44240c             lea eax, [esp + 0xc]
// 0056f06f  50                   push eax
// 0056f070  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056f074  50                   push eax
// 0056f075  ffd2                 call edx
// 0056f077  5e                   pop esi
// 0056f078  5d                   pop ebp
// 0056f079  83c410               add esp, 0x10
// 0056f07c  c20c00               ret 0xc
// 0056f07f  a15cc68b00           mov eax, dword ptr [0x8bc65c]
// 0056f084  53                   push ebx
// 0056f085  57                   push edi
// 0056f086  50                   push eax
// 0056f087  8bce                 mov ecx, esi
// 0056f089  e802fdfeff           call 0x55ed90
// 0056f08e  8b0d28c68b00         mov ecx, dword ptr [0x8bc628]
// 0056f094  51                   push ecx
// 0056f095  8bce                 mov ecx, esi
// 0056f097  8bf8                 mov edi, eax
// 0056f099  e8f2fcfeff           call 0x55ed90
// 0056f09e  8b152cc68b00         mov edx, dword ptr [0x8bc62c]
// 0056f0a4  52                   push edx
// 0056f0a5  8bce                 mov ecx, esi
// 0056f0a7  8bd8                 mov ebx, eax
// 0056f0a9  e8e2fcfeff           call 0x55ed90
// 0056f0ae  8bf0                 mov esi, eax
// 0056f0b0  8d442414             lea eax, [esp + 0x14]
// 0056f0b4  50                   push eax
// 0056f0b5  8d4f0c               lea ecx, [edi + 0xc]
// 0056f0b8  e82301ffff           call 0x55f1e0
// 0056f0bd  8d4c2418             lea ecx, [esp + 0x18]
// 0056f0c1  51                   push ecx
// 0056f0c2  8d4b0c               lea ecx, [ebx + 0xc]
// 0056f0c5  e81601ffff           call 0x55f1e0
// 0056f0ca  8d54241c             lea edx, [esp + 0x1c]
// 0056f0ce  52                   push edx
// 0056f0cf  8d4e0c               lea ecx, [esi + 0xc]
// 0056f0d2  e80901ffff           call 0x55f1e0
// 0056f0d7  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0056f0da  8b01                 mov eax, dword ptr [ecx]
// 0056f0dc  8b4008               mov eax, dword ptr [eax + 8]
// 0056f0df  8d542414             lea edx, [esp + 0x14]
// 0056f0e3  52                   push edx
// 0056f0e4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0056f0e8  52                   push edx
// 0056f0e9  ffd0                 call eax
// 0056f0eb  5f                   pop edi
// 0056f0ec  5b                   pop ebx
// 0056f0ed  5e                   pop esi
// 0056f0ee  5d                   pop ebp
// 0056f0ef  83c410               add esp, 0x10
// 0056f0f2  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@VColor3@G3D@@@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
