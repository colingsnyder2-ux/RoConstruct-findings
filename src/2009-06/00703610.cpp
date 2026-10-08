// roc 2009-06 00703610  unit: RBX::AdornG3D  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00703610
//
// 00703610  6aff                 push -1
// 00703612  6808dd8500           push 0x85dd08
// 00703617  64a100000000         mov eax, dword ptr fs:[0]
// 0070361d  50                   push eax
// 0070361e  64892500000000       mov dword ptr fs:[0], esp
// 00703625  51                   push ecx
// 00703626  56                   push esi
// 00703627  8d442404             lea eax, [esp + 4]
// 0070362b  50                   push eax
// 0070362c  8bf1                 mov esi, ecx
// 0070362e  e8ad190000           call 0x704fe0
// 00703633  83c404               add esp, 4
// 00703636  dd442424             fld qword ptr [esp + 0x24]
// 0070363a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0070363e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00703642  8b442434             mov eax, dword ptr [esp + 0x34]
// 00703646  51                   push ecx
// 00703647  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0070364b  52                   push edx
// 0070364c  8b542434             mov edx, dword ptr [esp + 0x34]
// 00703650  50                   push eax
// 00703651  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00703655  51                   push ecx
// 00703656  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0070365a  52                   push edx
// 0070365b  8b5604               mov edx, dword ptr [esi + 4]
// 0070365e  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00703662  83ec08               sub esp, 8
// 00703665  dd1c24               fstp qword ptr [esp]
// 00703668  50                   push eax
// 00703669  51                   push ecx
// 0070366a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0070366e  52                   push edx
// 0070366f  56                   push esi
// 00703670  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00703678  e823421400           call 0x8478a0
// 0070367d  8b442404             mov eax, dword ptr [esp + 4]
// 00703681  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00703689  85c0                 test eax, eax
// 0070368b  7427                 je 0x7036b4
// 0070368d  83c004               add eax, 4
// 00703690  50                   push eax
// 00703691  ff15a4e18900         call dword ptr [0x89e1a4]
// 00703697  85c0                 test eax, eax
// 00703699  7519                 jne 0x7036b4
// 0070369b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070369f  e8dc16d4ff           call 0x444d80
// 007036a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007036a8  85c9                 test ecx, ecx
// 007036aa  7408                 je 0x7036b4
// 007036ac  8b01                 mov eax, dword ptr [ecx]
// 007036ae  8b10                 mov edx, dword ptr [eax]
// 007036b0  6a01                 push 1
// 007036b2  ffd2                 call edx
// 007036b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007036b8  8bc6                 mov eax, esi
// 007036ba  5e                   pop esi
// 007036bb  64890d00000000       mov dword ptr fs:[0], ecx
// 007036c2  83c410               add esp, 0x10
// 007036c5  c22800               ret 0x28
// library rbxgs-appdraw/AdornG3D.cpp (function ?drawFont2D@AdornG3D@RBX@@UBE?AVVector2@G3D@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV34@NABVColor4@4@2W4XAlign@Adorn@2@W4YAlign@92@W4Spacing@92@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
