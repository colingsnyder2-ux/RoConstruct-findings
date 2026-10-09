// roc 2008-06 006016a0  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006016a0
//
// 006016a0  6aff                 push -1
// 006016a2  68abfd7b00           push 0x7bfdab
// 006016a7  64a100000000         mov eax, dword ptr fs:[0]
// 006016ad  50                   push eax
// 006016ae  64892500000000       mov dword ptr fs:[0], esp
// 006016b5  51                   push ecx
// 006016b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006016ba  53                   push ebx
// 006016bb  55                   push ebp
// 006016bc  8be9                 mov ebp, ecx
// 006016be  56                   push esi
// 006016bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 006016c3  50                   push eax
// 006016c4  8d5d04               lea ebx, [ebp + 4]
// 006016c7  56                   push esi
// 006016c8  8bcb                 mov ecx, ebx
// 006016ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 006016ce  897500               mov dword ptr [ebp], esi
// 006016d1  e82af3ffff           call 0x600a00
// 006016d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006016de  85f6                 test esi, esi
// 006016e0  7453                 je 0x601735
// 006016e2  57                   push edi
// 006016e3  8dbee4000000         lea edi, [esi + 0xe4]
// 006016e9  85ff                 test edi, edi
// 006016eb  7431                 je 0x60171e
// 006016ed  8937                 mov dword ptr [edi], esi
// 006016ef  8b33                 mov esi, dword ptr [ebx]
// 006016f1  85f6                 test esi, esi
// 006016f3  740c                 je 0x601701
// 006016f5  8d4e08               lea ecx, [esi + 8]
// 006016f8  ba01000000           mov edx, 1
// 006016fd  f00fc111             lock xadd dword ptr [ecx], edx
// 00601701  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601704  85c9                 test ecx, ecx
// 00601706  7413                 je 0x60171b
// 00601708  8d4108               lea eax, [ecx + 8]
// 0060170b  83caff               or edx, 0xffffffff
// 0060170e  f00fc110             lock xadd dword ptr [eax], edx
// 00601712  7507                 jne 0x60171b
// 00601714  8b01                 mov eax, dword ptr [ecx]
// 00601716  8b5008               mov edx, dword ptr [eax + 8]
// 00601719  ffd2                 call edx
// 0060171b  897704               mov dword ptr [edi + 4], esi
// 0060171e  5f                   pop edi
// 0060171f  5e                   pop esi
// 00601720  8bc5                 mov eax, ebp
// 00601722  5d                   pop ebp
// 00601723  5b                   pop ebx
// 00601724  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601728  64890d00000000       mov dword ptr fs:[0], ecx
// 0060172f  83c410               add esp, 0x10
// 00601732  c20800               ret 8
// 00601735  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601739  5e                   pop esi
// 0060173a  8bc5                 mov eax, ebp
// 0060173c  5d                   pop ebp
// 0060173d  5b                   pop ebx
// 0060173e  64890d00000000       mov dword ptr fs:[0], ecx
// 00601745  83c410               add esp, 0x10
// 00601748  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
