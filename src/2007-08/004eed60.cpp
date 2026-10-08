// roc 2007-08 004eed60  unit: PBBBuilder  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eed60
//
// 004eed60  51                   push ecx
// 004eed61  56                   push esi
// 004eed62  8bf1                 mov esi, ecx
// 004eed64  8b4614               mov eax, dword ptr [esi + 0x14]
// 004eed67  8b4018               mov eax, dword ptr [eax + 0x18]
// 004eed6a  83e802               sub eax, 2
// 004eed6d  746e                 je 0x4eeddd
// 004eed6f  83e803               sub eax, 3
// 004eed72  0f85b2000000         jne 0x4eee2a
// 004eed78  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004eed7c  57                   push edi
// 004eed7d  6a01                 push 1
// 004eed7f  51                   push ecx
// 004eed80  e84b530000           call 0x4f40d0
// 004eed85  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004eed89  6a01                 push 1
// 004eed8b  52                   push edx
// 004eed8c  89442428             mov dword ptr [esp + 0x28], eax
// 004eed90  e83b530000           call 0x4f40d0
// 004eed95  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004eed99  6a01                 push 1
// 004eed9b  57                   push edi
// 004eed9c  8944242c             mov dword ptr [esp + 0x2c], eax
// 004eeda0  e82b530000           call 0x4f40d0
// 004eeda5  6a01                 push 1
// 004eeda7  57                   push edi
// 004eeda8  89442430             mov dword ptr [esp + 0x30], eax
// 004eedac  e81f530000           call 0x4f40d0
// 004eedb1  83c420               add esp, 0x20
// 004eedb4  89442408             mov dword ptr [esp + 8], eax
// 004eedb8  8d442418             lea eax, [esp + 0x18]
// 004eedbc  50                   push eax
// 004eedbd  8d4c2418             lea ecx, [esp + 0x18]
// 004eedc1  51                   push ecx
// 004eedc2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004eedc5  8d542418             lea edx, [esp + 0x18]
// 004eedc9  52                   push edx
// 004eedca  8d442414             lea eax, [esp + 0x14]
// 004eedce  50                   push eax
// 004eedcf  83c10c               add ecx, 0xc
// 004eedd2  e809aafeff           call 0x4d97e0
// 004eedd7  5f                   pop edi
// 004eedd8  5e                   pop esi
// 004eedd9  59                   pop ecx
// 004eedda  c20c00               ret 0xc
// 004eeddd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004eede1  6a01                 push 1
// 004eede3  51                   push ecx
// 004eede4  e8e7520000           call 0x4f40d0
// 004eede9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004eeded  6a01                 push 1
// 004eedef  52                   push edx
// 004eedf0  89442424             mov dword ptr [esp + 0x24], eax
// 004eedf4  e8d7520000           call 0x4f40d0
// 004eedf9  89442420             mov dword ptr [esp + 0x20], eax
// 004eedfd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004eee01  6a01                 push 1
// 004eee03  50                   push eax
// 004eee04  e8c7520000           call 0x4f40d0
// 004eee09  83c418               add esp, 0x18
// 004eee0c  8d4c2414             lea ecx, [esp + 0x14]
// 004eee10  51                   push ecx
// 004eee11  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004eee14  8d542414             lea edx, [esp + 0x14]
// 004eee18  89442410             mov dword ptr [esp + 0x10], eax
// 004eee1c  52                   push edx
// 004eee1d  8d442414             lea eax, [esp + 0x14]
// 004eee21  50                   push eax
// 004eee22  83c10c               add ecx, 0xc
// 004eee25  e8f6aafeff           call 0x4d9920
// 004eee2a  5e                   pop esi
// 004eee2b  59                   pop ecx
// 004eee2c  c20c00               ret 0xc
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromVertexIndices@LevelBuilder@View@RBX@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
