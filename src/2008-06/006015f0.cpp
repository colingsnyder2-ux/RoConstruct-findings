// roc 2008-06 006015f0  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006015f0
//
// 006015f0  6aff                 push -1
// 006015f2  68abfd7b00           push 0x7bfdab
// 006015f7  64a100000000         mov eax, dword ptr fs:[0]
// 006015fd  50                   push eax
// 006015fe  64892500000000       mov dword ptr fs:[0], esp
// 00601605  51                   push ecx
// 00601606  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060160a  53                   push ebx
// 0060160b  55                   push ebp
// 0060160c  8be9                 mov ebp, ecx
// 0060160e  56                   push esi
// 0060160f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601613  50                   push eax
// 00601614  8d5d04               lea ebx, [ebp + 4]
// 00601617  56                   push esi
// 00601618  8bcb                 mov ecx, ebx
// 0060161a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060161e  897500               mov dword ptr [ebp], esi
// 00601621  e84af3ffff           call 0x600970
// 00601626  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060162e  85f6                 test esi, esi
// 00601630  7453                 je 0x601685
// 00601632  57                   push edi
// 00601633  8dbee4000000         lea edi, [esi + 0xe4]
// 00601639  85ff                 test edi, edi
// 0060163b  7431                 je 0x60166e
// 0060163d  8937                 mov dword ptr [edi], esi
// 0060163f  8b33                 mov esi, dword ptr [ebx]
// 00601641  85f6                 test esi, esi
// 00601643  740c                 je 0x601651
// 00601645  8d4e08               lea ecx, [esi + 8]
// 00601648  ba01000000           mov edx, 1
// 0060164d  f00fc111             lock xadd dword ptr [ecx], edx
// 00601651  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601654  85c9                 test ecx, ecx
// 00601656  7413                 je 0x60166b
// 00601658  8d4108               lea eax, [ecx + 8]
// 0060165b  83caff               or edx, 0xffffffff
// 0060165e  f00fc110             lock xadd dword ptr [eax], edx
// 00601662  7507                 jne 0x60166b
// 00601664  8b01                 mov eax, dword ptr [ecx]
// 00601666  8b5008               mov edx, dword ptr [eax + 8]
// 00601669  ffd2                 call edx
// 0060166b  897704               mov dword ptr [edi + 4], esi
// 0060166e  5f                   pop edi
// 0060166f  5e                   pop esi
// 00601670  8bc5                 mov eax, ebp
// 00601672  5d                   pop ebp
// 00601673  5b                   pop ebx
// 00601674  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601678  64890d00000000       mov dword ptr fs:[0], ecx
// 0060167f  83c410               add esp, 0x10
// 00601682  c20800               ret 8
// 00601685  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601689  5e                   pop esi
// 0060168a  8bc5                 mov eax, ebp
// 0060168c  5d                   pop ebp
// 0060168d  5b                   pop ebx
// 0060168e  64890d00000000       mov dword ptr fs:[0], ecx
// 00601695  83c410               add esp, 0x10
// 00601698  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
