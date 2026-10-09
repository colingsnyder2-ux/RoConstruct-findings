// roc 2008-06 00601280  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601280
//
// 00601280  6aff                 push -1
// 00601282  68abfd7b00           push 0x7bfdab
// 00601287  64a100000000         mov eax, dword ptr fs:[0]
// 0060128d  50                   push eax
// 0060128e  64892500000000       mov dword ptr fs:[0], esp
// 00601295  51                   push ecx
// 00601296  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060129a  53                   push ebx
// 0060129b  55                   push ebp
// 0060129c  8be9                 mov ebp, ecx
// 0060129e  56                   push esi
// 0060129f  8b742420             mov esi, dword ptr [esp + 0x20]
// 006012a3  50                   push eax
// 006012a4  8d5d04               lea ebx, [ebp + 4]
// 006012a7  56                   push esi
// 006012a8  8bcb                 mov ecx, ebx
// 006012aa  896c2414             mov dword ptr [esp + 0x14], ebp
// 006012ae  897500               mov dword ptr [ebp], esi
// 006012b1  e8eaf3ffff           call 0x6006a0
// 006012b6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006012be  85f6                 test esi, esi
// 006012c0  7453                 je 0x601315
// 006012c2  57                   push edi
// 006012c3  8dbee4000000         lea edi, [esi + 0xe4]
// 006012c9  85ff                 test edi, edi
// 006012cb  7431                 je 0x6012fe
// 006012cd  8937                 mov dword ptr [edi], esi
// 006012cf  8b33                 mov esi, dword ptr [ebx]
// 006012d1  85f6                 test esi, esi
// 006012d3  740c                 je 0x6012e1
// 006012d5  8d4e08               lea ecx, [esi + 8]
// 006012d8  ba01000000           mov edx, 1
// 006012dd  f00fc111             lock xadd dword ptr [ecx], edx
// 006012e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006012e4  85c9                 test ecx, ecx
// 006012e6  7413                 je 0x6012fb
// 006012e8  8d4108               lea eax, [ecx + 8]
// 006012eb  83caff               or edx, 0xffffffff
// 006012ee  f00fc110             lock xadd dword ptr [eax], edx
// 006012f2  7507                 jne 0x6012fb
// 006012f4  8b01                 mov eax, dword ptr [ecx]
// 006012f6  8b5008               mov edx, dword ptr [eax + 8]
// 006012f9  ffd2                 call edx
// 006012fb  897704               mov dword ptr [edi + 4], esi
// 006012fe  5f                   pop edi
// 006012ff  5e                   pop esi
// 00601300  8bc5                 mov eax, ebp
// 00601302  5d                   pop ebp
// 00601303  5b                   pop ebx
// 00601304  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601308  64890d00000000       mov dword ptr fs:[0], ecx
// 0060130f  83c410               add esp, 0x10
// 00601312  c20800               ret 8
// 00601315  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601319  5e                   pop esi
// 0060131a  8bc5                 mov eax, ebp
// 0060131c  5d                   pop ebp
// 0060131d  5b                   pop ebx
// 0060131e  64890d00000000       mov dword ptr fs:[0], ecx
// 00601325  83c410               add esp, 0x10
// 00601328  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
