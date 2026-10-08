// roc 2007-08 0056eda0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056eda0
//
// 0056eda0  83ec0c               sub esp, 0xc
// 0056eda3  55                   push ebp
// 0056eda4  56                   push esi
// 0056eda5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0056eda9  8be9                 mov ebp, ecx
// 0056edab  8bce                 mov ecx, esi
// 0056edad  e8eeeafeff           call 0x55d8a0
// 0056edb2  84c0                 test al, al
// 0056edb4  0f8580000000         jne 0x56ee3a
// 0056edba  a194228c00           mov eax, dword ptr [0x8c2294]
// 0056edbf  53                   push ebx
// 0056edc0  50                   push eax
// 0056edc1  8bce                 mov ecx, esi
// 0056edc3  e868e5feff           call 0x55d330
// 0056edc8  8bd8                 mov ebx, eax
// 0056edca  85db                 test ebx, ebx
// 0056edcc  746b                 je 0x56ee39
// 0056edce  8b0de4228c00         mov ecx, dword ptr [0x8c22e4]
// 0056edd4  57                   push edi
// 0056edd5  51                   push ecx
// 0056edd6  8bce                 mov ecx, esi
// 0056edd8  e853e5feff           call 0x55d330
// 0056eddd  8b1574228c00         mov edx, dword ptr [0x8c2274]
// 0056ede3  52                   push edx
// 0056ede4  8bce                 mov ecx, esi
// 0056ede6  8bf8                 mov edi, eax
// 0056ede8  e843e5feff           call 0x55d330
// 0056eded  d9ee                 fldz 
// 0056edef  8bf0                 mov esi, eax
// 0056edf1  d9542410             fst dword ptr [esp + 0x10]
// 0056edf5  8d442410             lea eax, [esp + 0x10]
// 0056edf9  d9542414             fst dword ptr [esp + 0x14]
// 0056edfd  50                   push eax
// 0056edfe  d95c241c             fstp dword ptr [esp + 0x1c]
// 0056ee02  8d4b0c               lea ecx, [ebx + 0xc]
// 0056ee05  e806e9feff           call 0x55d710
// 0056ee0a  8d4c2414             lea ecx, [esp + 0x14]
// 0056ee0e  51                   push ecx
// 0056ee0f  8d4f0c               lea ecx, [edi + 0xc]
// 0056ee12  e8f9e8feff           call 0x55d710
// 0056ee17  8d542418             lea edx, [esp + 0x18]
// 0056ee1b  52                   push edx
// 0056ee1c  8d4e0c               lea ecx, [esi + 0xc]
// 0056ee1f  e8ece8feff           call 0x55d710
// 0056ee24  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0056ee27  8b01                 mov eax, dword ptr [ecx]
// 0056ee29  8b4008               mov eax, dword ptr [eax + 8]
// 0056ee2c  8d542410             lea edx, [esp + 0x10]
// 0056ee30  52                   push edx
// 0056ee31  8b542424             mov edx, dword ptr [esp + 0x24]
// 0056ee35  52                   push edx
// 0056ee36  ffd0                 call eax
// 0056ee38  5f                   pop edi
// 0056ee39  5b                   pop ebx
// 0056ee3a  5e                   pop esi
// 0056ee3b  5d                   pop ebp
// 0056ee3c  83c40c               add esp, 0xc
// 0056ee3f  c20c00               ret 0xc
// library rbxgs/v8tree\EnumProperty.cpp (function ?readValue@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@EBEXPAVDescribedBase@23@PBVXmlElement@@AAVIReferenceBinder@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
