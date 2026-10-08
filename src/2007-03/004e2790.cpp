// roc 2007-03 004e2790  unit: seg_004e0000  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e2790
//
// 004e2790  51                   push ecx
// 004e2791  56                   push esi
// 004e2792  8bf1                 mov esi, ecx
// 004e2794  8b4614               mov eax, dword ptr [esi + 0x14]
// 004e2797  8b4018               mov eax, dword ptr [eax + 0x18]
// 004e279a  83e802               sub eax, 2
// 004e279d  746e                 je 0x4e280d
// 004e279f  83e803               sub eax, 3
// 004e27a2  0f85b2000000         jne 0x4e285a
// 004e27a8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e27ac  57                   push edi
// 004e27ad  6a01                 push 1
// 004e27af  51                   push ecx
// 004e27b0  e89b520000           call 0x4e7a50
// 004e27b5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004e27b9  6a01                 push 1
// 004e27bb  52                   push edx
// 004e27bc  89442428             mov dword ptr [esp + 0x28], eax
// 004e27c0  e88b520000           call 0x4e7a50
// 004e27c5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004e27c9  6a01                 push 1
// 004e27cb  57                   push edi
// 004e27cc  8944242c             mov dword ptr [esp + 0x2c], eax
// 004e27d0  e87b520000           call 0x4e7a50
// 004e27d5  6a01                 push 1
// 004e27d7  57                   push edi
// 004e27d8  89442430             mov dword ptr [esp + 0x30], eax
// 004e27dc  e86f520000           call 0x4e7a50
// 004e27e1  83c420               add esp, 0x20
// 004e27e4  89442408             mov dword ptr [esp + 8], eax
// 004e27e8  8d442418             lea eax, [esp + 0x18]
// 004e27ec  50                   push eax
// 004e27ed  8d4c2418             lea ecx, [esp + 0x18]
// 004e27f1  51                   push ecx
// 004e27f2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004e27f5  8d542418             lea edx, [esp + 0x18]
// 004e27f9  52                   push edx
// 004e27fa  8d442414             lea eax, [esp + 0x14]
// 004e27fe  50                   push eax
// 004e27ff  83c10c               add ecx, 0xc
// 004e2802  e8b9aefeff           call 0x4cd6c0
// 004e2807  5f                   pop edi
// 004e2808  5e                   pop esi
// 004e2809  59                   pop ecx
// 004e280a  c20c00               ret 0xc
// 004e280d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e2811  6a01                 push 1
// 004e2813  51                   push ecx
// 004e2814  e837520000           call 0x4e7a50
// 004e2819  8b542418             mov edx, dword ptr [esp + 0x18]
// 004e281d  6a01                 push 1
// 004e281f  52                   push edx
// 004e2820  89442424             mov dword ptr [esp + 0x24], eax
// 004e2824  e827520000           call 0x4e7a50
// 004e2829  89442420             mov dword ptr [esp + 0x20], eax
// 004e282d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e2831  6a01                 push 1
// 004e2833  50                   push eax
// 004e2834  e817520000           call 0x4e7a50
// 004e2839  83c418               add esp, 0x18
// 004e283c  8d4c2414             lea ecx, [esp + 0x14]
// 004e2840  51                   push ecx
// 004e2841  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004e2844  8d542414             lea edx, [esp + 0x14]
// 004e2848  89442410             mov dword ptr [esp + 0x10], eax
// 004e284c  52                   push edx
// 004e284d  8d442414             lea eax, [esp + 0x14]
// 004e2851  50                   push eax
// 004e2852  83c10c               add ecx, 0xc
// 004e2855  e8a6affeff           call 0x4cd800
// 004e285a  5e                   pop esi
// 004e285b  59                   pop ecx
// 004e285c  c20c00               ret 0xc
// library rbxgs-view/QuadVolume.cpp (function ?appendQuadFromVertexIndices@LevelBuilder@View@RBX@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
