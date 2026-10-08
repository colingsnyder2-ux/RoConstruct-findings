// roc 2008-06 00500de0  unit: RBX::ViewNew::PBBBuilder  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500de0
//
// 00500de0  51                   push ecx
// 00500de1  56                   push esi
// 00500de2  8bf1                 mov esi, ecx
// 00500de4  8b4614               mov eax, dword ptr [esi + 0x14]
// 00500de7  8b4018               mov eax, dword ptr [eax + 0x18]
// 00500dea  83e802               sub eax, 2
// 00500ded  746e                 je 0x500e5d
// 00500def  83e803               sub eax, 3
// 00500df2  0f85b2000000         jne 0x500eaa
// 00500df8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00500dfc  57                   push edi
// 00500dfd  6a01                 push 1
// 00500dff  51                   push ecx
// 00500e00  e8bb710400           call 0x547fc0
// 00500e05  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00500e09  6a01                 push 1
// 00500e0b  52                   push edx
// 00500e0c  89442428             mov dword ptr [esp + 0x28], eax
// 00500e10  e8ab710400           call 0x547fc0
// 00500e15  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00500e19  6a01                 push 1
// 00500e1b  57                   push edi
// 00500e1c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00500e20  e89b710400           call 0x547fc0
// 00500e25  6a01                 push 1
// 00500e27  57                   push edi
// 00500e28  89442430             mov dword ptr [esp + 0x30], eax
// 00500e2c  e88f710400           call 0x547fc0
// 00500e31  83c420               add esp, 0x20
// 00500e34  89442408             mov dword ptr [esp + 8], eax
// 00500e38  8d442418             lea eax, [esp + 0x18]
// 00500e3c  50                   push eax
// 00500e3d  8d4c2418             lea ecx, [esp + 0x18]
// 00500e41  51                   push ecx
// 00500e42  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00500e45  8d542418             lea edx, [esp + 0x18]
// 00500e49  52                   push edx
// 00500e4a  8d442414             lea eax, [esp + 0x14]
// 00500e4e  50                   push eax
// 00500e4f  83c10c               add ecx, 0xc
// 00500e52  e849b8fdff           call 0x4dc6a0
// 00500e57  5f                   pop edi
// 00500e58  5e                   pop esi
// 00500e59  59                   pop ecx
// 00500e5a  c20c00               ret 0xc
// 00500e5d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00500e61  6a01                 push 1
// 00500e63  51                   push ecx
// 00500e64  e857710400           call 0x547fc0
// 00500e69  8b542418             mov edx, dword ptr [esp + 0x18]
// 00500e6d  6a01                 push 1
// 00500e6f  52                   push edx
// 00500e70  89442424             mov dword ptr [esp + 0x24], eax
// 00500e74  e847710400           call 0x547fc0
// 00500e79  89442420             mov dword ptr [esp + 0x20], eax
// 00500e7d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00500e81  6a01                 push 1
// 00500e83  50                   push eax
// 00500e84  e837710400           call 0x547fc0
// 00500e89  83c418               add esp, 0x18
// 00500e8c  8d4c2414             lea ecx, [esp + 0x14]
// 00500e90  51                   push ecx
// 00500e91  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00500e94  8d542414             lea edx, [esp + 0x14]
// 00500e98  89442410             mov dword ptr [esp + 0x10], eax
// 00500e9c  52                   push edx
// 00500e9d  8d442414             lea eax, [esp + 0x14]
// 00500ea1  50                   push eax
// 00500ea2  83c10c               add ecx, 0xc
// 00500ea5  e8e6f7ffff           call 0x500690
// 00500eaa  5e                   pop esi
// 00500eab  59                   pop ecx
// 00500eac  c20c00               ret 0xc
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromVertexIndices@LevelBuilder@View@RBX@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
