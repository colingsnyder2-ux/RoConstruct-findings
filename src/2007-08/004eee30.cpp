// roc 2007-08 004eee30  unit: PBBBuilder  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eee30
//
// 004eee30  56                   push esi
// 004eee31  8bf1                 mov esi, ecx
// 004eee33  8b4614               mov eax, dword ptr [esi + 0x14]
// 004eee36  8b4018               mov eax, dword ptr [eax + 0x18]
// 004eee39  83e802               sub eax, 2
// 004eee3c  746f                 je 0x4eeead
// 004eee3e  83e803               sub eax, 3
// 004eee41  0f85fc000000         jne 0x4eef43
// 004eee47  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004eee4b  6a01                 push 1
// 004eee4d  51                   push ecx
// 004eee4e  e87d520000           call 0x4f40d0
// 004eee53  8b542418             mov edx, dword ptr [esp + 0x18]
// 004eee57  6a01                 push 1
// 004eee59  52                   push edx
// 004eee5a  89442424             mov dword ptr [esp + 0x24], eax
// 004eee5e  e86d520000           call 0x4f40d0
// 004eee63  89442420             mov dword ptr [esp + 0x20], eax
// 004eee67  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004eee6b  6a01                 push 1
// 004eee6d  50                   push eax
// 004eee6e  e85d520000           call 0x4f40d0
// 004eee73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004eee77  6a01                 push 1
// 004eee79  51                   push ecx
// 004eee7a  8944242c             mov dword ptr [esp + 0x2c], eax
// 004eee7e  e84d520000           call 0x4f40d0
// 004eee83  83c420               add esp, 0x20
// 004eee86  8d542414             lea edx, [esp + 0x14]
// 004eee8a  52                   push edx
// 004eee8b  8944240c             mov dword ptr [esp + 0xc], eax
// 004eee8f  8d442414             lea eax, [esp + 0x14]
// 004eee93  50                   push eax
// 004eee94  8d4c2414             lea ecx, [esp + 0x14]
// 004eee98  51                   push ecx
// 004eee99  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004eee9c  8d542414             lea edx, [esp + 0x14]
// 004eeea0  52                   push edx
// 004eeea1  83c10c               add ecx, 0xc
// 004eeea4  e837a9feff           call 0x4d97e0
// 004eeea9  5e                   pop esi
// 004eeeaa  c21000               ret 0x10
// 004eeead  53                   push ebx
// 004eeeae  57                   push edi
// 004eeeaf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004eeeb3  6a01                 push 1
// 004eeeb5  57                   push edi
// 004eeeb6  e815520000           call 0x4f40d0
// 004eeebb  89442420             mov dword ptr [esp + 0x20], eax
// 004eeebf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004eeec3  6a01                 push 1
// 004eeec5  50                   push eax
// 004eeec6  e805520000           call 0x4f40d0
// 004eeecb  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004eeecf  6a01                 push 1
// 004eeed1  53                   push ebx
// 004eeed2  8944242c             mov dword ptr [esp + 0x2c], eax
// 004eeed6  e8f5510000           call 0x4f40d0
// 004eeedb  83c418               add esp, 0x18
// 004eeede  8d4c2418             lea ecx, [esp + 0x18]
// 004eeee2  51                   push ecx
// 004eeee3  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004eeee6  8d542418             lea edx, [esp + 0x18]
// 004eeeea  89442414             mov dword ptr [esp + 0x14], eax
// 004eeeee  52                   push edx
// 004eeeef  8d442418             lea eax, [esp + 0x18]
// 004eeef3  50                   push eax
// 004eeef4  83c10c               add ecx, 0xc
// 004eeef7  e824aafeff           call 0x4d9920
// 004eeefc  6a01                 push 1
// 004eeefe  53                   push ebx
// 004eeeff  e8cc510000           call 0x4f40d0
// 004eef04  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004eef08  6a01                 push 1
// 004eef0a  51                   push ecx
// 004eef0b  89442428             mov dword ptr [esp + 0x28], eax
// 004eef0f  e8bc510000           call 0x4f40d0
// 004eef14  6a01                 push 1
// 004eef16  57                   push edi
// 004eef17  8944242c             mov dword ptr [esp + 0x2c], eax
// 004eef1b  e8b0510000           call 0x4f40d0
// 004eef20  83c418               add esp, 0x18
// 004eef23  8d542418             lea edx, [esp + 0x18]
// 004eef27  89442410             mov dword ptr [esp + 0x10], eax
// 004eef2b  52                   push edx
// 004eef2c  8d442418             lea eax, [esp + 0x18]
// 004eef30  50                   push eax
// 004eef31  8d4c2418             lea ecx, [esp + 0x18]
// 004eef35  51                   push ecx
// 004eef36  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004eef39  83c10c               add ecx, 0xc
// 004eef3c  e8dfa9feff           call 0x4d9920
// 004eef41  5f                   pop edi
// 004eef42  5b                   pop ebx
// 004eef43  5e                   pop esi
// 004eef44  c21000               ret 0x10
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromVertexIndices@LevelBuilder@View@RBX@@IAEXIIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
