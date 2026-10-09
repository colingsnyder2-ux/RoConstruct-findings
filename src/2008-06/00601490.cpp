// roc 2008-06 00601490  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601490
//
// 00601490  6aff                 push -1
// 00601492  68abfd7b00           push 0x7bfdab
// 00601497  64a100000000         mov eax, dword ptr fs:[0]
// 0060149d  50                   push eax
// 0060149e  64892500000000       mov dword ptr fs:[0], esp
// 006014a5  51                   push ecx
// 006014a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006014aa  53                   push ebx
// 006014ab  55                   push ebp
// 006014ac  8be9                 mov ebp, ecx
// 006014ae  56                   push esi
// 006014af  8b742420             mov esi, dword ptr [esp + 0x20]
// 006014b3  50                   push eax
// 006014b4  8d5d04               lea ebx, [ebp + 4]
// 006014b7  56                   push esi
// 006014b8  8bcb                 mov ecx, ebx
// 006014ba  896c2414             mov dword ptr [esp + 0x14], ebp
// 006014be  897500               mov dword ptr [ebp], esi
// 006014c1  e88af3ffff           call 0x600850
// 006014c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006014ce  85f6                 test esi, esi
// 006014d0  7453                 je 0x601525
// 006014d2  57                   push edi
// 006014d3  8dbee4000000         lea edi, [esi + 0xe4]
// 006014d9  85ff                 test edi, edi
// 006014db  7431                 je 0x60150e
// 006014dd  8937                 mov dword ptr [edi], esi
// 006014df  8b33                 mov esi, dword ptr [ebx]
// 006014e1  85f6                 test esi, esi
// 006014e3  740c                 je 0x6014f1
// 006014e5  8d4e08               lea ecx, [esi + 8]
// 006014e8  ba01000000           mov edx, 1
// 006014ed  f00fc111             lock xadd dword ptr [ecx], edx
// 006014f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006014f4  85c9                 test ecx, ecx
// 006014f6  7413                 je 0x60150b
// 006014f8  8d4108               lea eax, [ecx + 8]
// 006014fb  83caff               or edx, 0xffffffff
// 006014fe  f00fc110             lock xadd dword ptr [eax], edx
// 00601502  7507                 jne 0x60150b
// 00601504  8b01                 mov eax, dword ptr [ecx]
// 00601506  8b5008               mov edx, dword ptr [eax + 8]
// 00601509  ffd2                 call edx
// 0060150b  897704               mov dword ptr [edi + 4], esi
// 0060150e  5f                   pop edi
// 0060150f  5e                   pop esi
// 00601510  8bc5                 mov eax, ebp
// 00601512  5d                   pop ebp
// 00601513  5b                   pop ebx
// 00601514  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601518  64890d00000000       mov dword ptr fs:[0], ecx
// 0060151f  83c410               add esp, 0x10
// 00601522  c20800               ret 8
// 00601525  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601529  5e                   pop esi
// 0060152a  8bc5                 mov eax, ebp
// 0060152c  5d                   pop ebp
// 0060152d  5b                   pop ebx
// 0060152e  64890d00000000       mov dword ptr fs:[0], ecx
// 00601535  83c410               add esp, 0x10
// 00601538  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
