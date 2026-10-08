// roc 2007-08 0056ee50  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056ee50
//
// 0056ee50  83ec14               sub esp, 0x14
// 0056ee53  53                   push ebx
// 0056ee54  55                   push ebp
// 0056ee55  56                   push esi
// 0056ee56  8b3594228c00         mov esi, dword ptr [0x8c2294]
// 0056ee5c  57                   push edi
// 0056ee5d  6a20                 push 0x20
// 0056ee5f  894c2418             mov dword ptr [esp + 0x18], ecx
// 0056ee63  e88e100c00           call 0x62fef6
// 0056ee68  33db                 xor ebx, ebx
// 0056ee6a  83c404               add esp, 4
// 0056ee6d  3bc3                 cmp eax, ebx
// 0056ee6f  741a                 je 0x56ee8b
// 0056ee71  8918                 mov dword ptr [eax], ebx
// 0056ee73  895804               mov dword ptr [eax + 4], ebx
// 0056ee76  895808               mov dword ptr [eax + 8], ebx
// 0056ee79  89700c               mov dword ptr [eax + 0xc], esi
// 0056ee7c  895810               mov dword ptr [eax + 0x10], ebx
// 0056ee7f  895818               mov dword ptr [eax + 0x18], ebx
// 0056ee82  89581c               mov dword ptr [eax + 0x1c], ebx
// 0056ee85  89442410             mov dword ptr [esp + 0x10], eax
// 0056ee89  eb06                 jmp 0x56ee91
// 0056ee8b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056ee8f  8bc3                 mov eax, ebx
// 0056ee91  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0056ee95  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056ee98  3bcb                 cmp ecx, ebx
// 0056ee9a  7505                 jne 0x56eea1
// 0056ee9c  894604               mov dword ptr [esi + 4], eax
// 0056ee9f  eb02                 jmp 0x56eea3
// 0056eea1  8901                 mov dword ptr [ecx], eax
// 0056eea3  894608               mov dword ptr [esi + 8], eax
// 0056eea6  8b3de4228c00         mov edi, dword ptr [0x8c22e4]
// 0056eeac  6a20                 push 0x20
// 0056eeae  e843100c00           call 0x62fef6
// 0056eeb3  83c404               add esp, 4
// 0056eeb6  3bc3                 cmp eax, ebx
// 0056eeb8  7418                 je 0x56eed2
// 0056eeba  8918                 mov dword ptr [eax], ebx
// 0056eebc  895804               mov dword ptr [eax + 4], ebx
// 0056eebf  895808               mov dword ptr [eax + 8], ebx
// 0056eec2  89780c               mov dword ptr [eax + 0xc], edi
// 0056eec5  895810               mov dword ptr [eax + 0x10], ebx
// 0056eec8  895818               mov dword ptr [eax + 0x18], ebx
// 0056eecb  89581c               mov dword ptr [eax + 0x1c], ebx
// 0056eece  8be8                 mov ebp, eax
// 0056eed0  eb02                 jmp 0x56eed4
// 0056eed2  33ed                 xor ebp, ebp
// 0056eed4  8b4608               mov eax, dword ptr [esi + 8]
// 0056eed7  3bc3                 cmp eax, ebx
// 0056eed9  7505                 jne 0x56eee0
// 0056eedb  896e04               mov dword ptr [esi + 4], ebp
// 0056eede  eb02                 jmp 0x56eee2
// 0056eee0  8928                 mov dword ptr [eax], ebp
// 0056eee2  896e08               mov dword ptr [esi + 8], ebp
// 0056eee5  8b3d74228c00         mov edi, dword ptr [0x8c2274]
// 0056eeeb  6a20                 push 0x20
// 0056eeed  e804100c00           call 0x62fef6
// 0056eef2  83c404               add esp, 4
// 0056eef5  3bc3                 cmp eax, ebx
// 0056eef7  7418                 je 0x56ef11
// 0056eef9  8918                 mov dword ptr [eax], ebx
// 0056eefb  895804               mov dword ptr [eax + 4], ebx
// 0056eefe  895808               mov dword ptr [eax + 8], ebx
// 0056ef01  89780c               mov dword ptr [eax + 0xc], edi
// 0056ef04  895810               mov dword ptr [eax + 0x10], ebx
// 0056ef07  895818               mov dword ptr [eax + 0x18], ebx
// 0056ef0a  89581c               mov dword ptr [eax + 0x1c], ebx
// 0056ef0d  8bf8                 mov edi, eax
// 0056ef0f  eb02                 jmp 0x56ef13
// 0056ef11  33ff                 xor edi, edi
// 0056ef13  8b4608               mov eax, dword ptr [esi + 8]
// 0056ef16  3bc3                 cmp eax, ebx
// 0056ef18  7505                 jne 0x56ef1f
// 0056ef1a  897e04               mov dword ptr [esi + 4], edi
// 0056ef1d  eb02                 jmp 0x56ef21
// 0056ef1f  8938                 mov dword ptr [eax], edi
// 0056ef21  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056ef25  897e08               mov dword ptr [esi + 8], edi
// 0056ef28  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0056ef2b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056ef2f  8b11                 mov edx, dword ptr [ecx]
// 0056ef31  8b5204               mov edx, dword ptr [edx + 4]
// 0056ef34  50                   push eax
// 0056ef35  8d44241c             lea eax, [esp + 0x1c]
// 0056ef39  50                   push eax
// 0056ef3a  ffd2                 call edx
// 0056ef3c  d9442418             fld dword ptr [esp + 0x18]
// 0056ef40  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056ef44  d95c242c             fstp dword ptr [esp + 0x2c]
// 0056ef48  83c60c               add esi, 0xc
// 0056ef4b  8bce                 mov ecx, esi
// 0056ef4d  e87ee4feff           call 0x55d3d0
// 0056ef52  d944242c             fld dword ptr [esp + 0x2c]
// 0056ef56  d95e08               fstp dword ptr [esi + 8]
// 0056ef59  bb07000000           mov ebx, 7
// 0056ef5e  895e04               mov dword ptr [esi + 4], ebx
// 0056ef61  d944241c             fld dword ptr [esp + 0x1c]
// 0056ef65  8d750c               lea esi, [ebp + 0xc]
// 0056ef68  d95c242c             fstp dword ptr [esp + 0x2c]
// 0056ef6c  8bce                 mov ecx, esi
// 0056ef6e  e85de4feff           call 0x55d3d0
// 0056ef73  d944242c             fld dword ptr [esp + 0x2c]
// 0056ef77  d95e08               fstp dword ptr [esi + 8]
// 0056ef7a  895e04               mov dword ptr [esi + 4], ebx
// 0056ef7d  d9442420             fld dword ptr [esp + 0x20]
// 0056ef81  8d770c               lea esi, [edi + 0xc]
// 0056ef84  8bce                 mov ecx, esi
// 0056ef86  d95c242c             fstp dword ptr [esp + 0x2c]
// 0056ef8a  e841e4feff           call 0x55d3d0
// 0056ef8f  d944242c             fld dword ptr [esp + 0x2c]
// 0056ef93  5f                   pop edi
// 0056ef94  d95e08               fstp dword ptr [esi + 8]
// 0056ef97  895e04               mov dword ptr [esi + 4], ebx
// 0056ef9a  5e                   pop esi
// 0056ef9b  5d                   pop ebp
// 0056ef9c  5b                   pop ebx
// 0056ef9d  83c414               add esp, 0x14
// 0056efa0  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?writeValue@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@EBEXPBVDescribedBase@23@PAVXmlElement@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
