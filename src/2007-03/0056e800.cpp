// roc 2007-03 0056e800  unit: seg_00560000  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056e800
//
// 0056e800  83ec14               sub esp, 0x14
// 0056e803  53                   push ebx
// 0056e804  55                   push ebp
// 0056e805  56                   push esi
// 0056e806  8b3520c68b00         mov esi, dword ptr [0x8bc620]
// 0056e80c  57                   push edi
// 0056e80d  6a20                 push 0x20
// 0056e80f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0056e813  e8f0f80a00           call 0x61e108
// 0056e818  33db                 xor ebx, ebx
// 0056e81a  83c404               add esp, 4
// 0056e81d  3bc3                 cmp eax, ebx
// 0056e81f  741a                 je 0x56e83b
// 0056e821  8918                 mov dword ptr [eax], ebx
// 0056e823  895804               mov dword ptr [eax + 4], ebx
// 0056e826  895808               mov dword ptr [eax + 8], ebx
// 0056e829  89700c               mov dword ptr [eax + 0xc], esi
// 0056e82c  895810               mov dword ptr [eax + 0x10], ebx
// 0056e82f  895818               mov dword ptr [eax + 0x18], ebx
// 0056e832  89581c               mov dword ptr [eax + 0x1c], ebx
// 0056e835  89442410             mov dword ptr [esp + 0x10], eax
// 0056e839  eb06                 jmp 0x56e841
// 0056e83b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056e83f  8bc3                 mov eax, ebx
// 0056e841  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0056e845  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056e848  3bcb                 cmp ecx, ebx
// 0056e84a  7505                 jne 0x56e851
// 0056e84c  894604               mov dword ptr [esi + 4], eax
// 0056e84f  eb02                 jmp 0x56e853
// 0056e851  8901                 mov dword ptr [ecx], eax
// 0056e853  894608               mov dword ptr [esi + 8], eax
// 0056e856  8b3d70c68b00         mov edi, dword ptr [0x8bc670]
// 0056e85c  6a20                 push 0x20
// 0056e85e  e8a5f80a00           call 0x61e108
// 0056e863  83c404               add esp, 4
// 0056e866  3bc3                 cmp eax, ebx
// 0056e868  7418                 je 0x56e882
// 0056e86a  8918                 mov dword ptr [eax], ebx
// 0056e86c  895804               mov dword ptr [eax + 4], ebx
// 0056e86f  895808               mov dword ptr [eax + 8], ebx
// 0056e872  89780c               mov dword ptr [eax + 0xc], edi
// 0056e875  895810               mov dword ptr [eax + 0x10], ebx
// 0056e878  895818               mov dword ptr [eax + 0x18], ebx
// 0056e87b  89581c               mov dword ptr [eax + 0x1c], ebx
// 0056e87e  8be8                 mov ebp, eax
// 0056e880  eb02                 jmp 0x56e884
// 0056e882  33ed                 xor ebp, ebp
// 0056e884  8b4608               mov eax, dword ptr [esi + 8]
// 0056e887  3bc3                 cmp eax, ebx
// 0056e889  7505                 jne 0x56e890
// 0056e88b  896e04               mov dword ptr [esi + 4], ebp
// 0056e88e  eb02                 jmp 0x56e892
// 0056e890  8928                 mov dword ptr [eax], ebp
// 0056e892  896e08               mov dword ptr [esi + 8], ebp
// 0056e895  8b3d00c68b00         mov edi, dword ptr [0x8bc600]
// 0056e89b  6a20                 push 0x20
// 0056e89d  e866f80a00           call 0x61e108
// 0056e8a2  83c404               add esp, 4
// 0056e8a5  3bc3                 cmp eax, ebx
// 0056e8a7  7418                 je 0x56e8c1
// 0056e8a9  8918                 mov dword ptr [eax], ebx
// 0056e8ab  895804               mov dword ptr [eax + 4], ebx
// 0056e8ae  895808               mov dword ptr [eax + 8], ebx
// 0056e8b1  89780c               mov dword ptr [eax + 0xc], edi
// 0056e8b4  895810               mov dword ptr [eax + 0x10], ebx
// 0056e8b7  895818               mov dword ptr [eax + 0x18], ebx
// 0056e8ba  89581c               mov dword ptr [eax + 0x1c], ebx
// 0056e8bd  8bf8                 mov edi, eax
// 0056e8bf  eb02                 jmp 0x56e8c3
// 0056e8c1  33ff                 xor edi, edi
// 0056e8c3  8b4608               mov eax, dword ptr [esi + 8]
// 0056e8c6  3bc3                 cmp eax, ebx
// 0056e8c8  7505                 jne 0x56e8cf
// 0056e8ca  897e04               mov dword ptr [esi + 4], edi
// 0056e8cd  eb02                 jmp 0x56e8d1
// 0056e8cf  8938                 mov dword ptr [eax], edi
// 0056e8d1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056e8d5  897e08               mov dword ptr [esi + 8], edi
// 0056e8d8  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0056e8db  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056e8df  8b11                 mov edx, dword ptr [ecx]
// 0056e8e1  8b5204               mov edx, dword ptr [edx + 4]
// 0056e8e4  50                   push eax
// 0056e8e5  8d44241c             lea eax, [esp + 0x1c]
// 0056e8e9  50                   push eax
// 0056e8ea  ffd2                 call edx
// 0056e8ec  d9442418             fld dword ptr [esp + 0x18]
// 0056e8f0  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056e8f4  d95c242c             fstp dword ptr [esp + 0x2c]
// 0056e8f8  83c60c               add esi, 0xc
// 0056e8fb  8bce                 mov ecx, esi
// 0056e8fd  e8be05ffff           call 0x55eec0
// 0056e902  d944242c             fld dword ptr [esp + 0x2c]
// 0056e906  d95e08               fstp dword ptr [esi + 8]
// 0056e909  bb07000000           mov ebx, 7
// 0056e90e  895e04               mov dword ptr [esi + 4], ebx
// 0056e911  d944241c             fld dword ptr [esp + 0x1c]
// 0056e915  8d750c               lea esi, [ebp + 0xc]
// 0056e918  d95c242c             fstp dword ptr [esp + 0x2c]
// 0056e91c  8bce                 mov ecx, esi
// 0056e91e  e89d05ffff           call 0x55eec0
// 0056e923  d944242c             fld dword ptr [esp + 0x2c]
// 0056e927  d95e08               fstp dword ptr [esi + 8]
// 0056e92a  895e04               mov dword ptr [esi + 4], ebx
// 0056e92d  d9442420             fld dword ptr [esp + 0x20]
// 0056e931  8d770c               lea esi, [edi + 0xc]
// 0056e934  8bce                 mov ecx, esi
// 0056e936  d95c242c             fstp dword ptr [esp + 0x2c]
// 0056e93a  e88105ffff           call 0x55eec0
// 0056e93f  d944242c             fld dword ptr [esp + 0x2c]
// 0056e943  5f                   pop edi
// 0056e944  d95e08               fstp dword ptr [esi + 8]
// 0056e947  895e04               mov dword ptr [esi + 4], ebx
// 0056e94a  5e                   pop esi
// 0056e94b  5d                   pop ebp
// 0056e94c  5b                   pop ebx
// 0056e94d  83c414               add esp, 0x14
// 0056e950  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
