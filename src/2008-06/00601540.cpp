// roc 2008-06 00601540  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601540
//
// 00601540  6aff                 push -1
// 00601542  68abfd7b00           push 0x7bfdab
// 00601547  64a100000000         mov eax, dword ptr fs:[0]
// 0060154d  50                   push eax
// 0060154e  64892500000000       mov dword ptr fs:[0], esp
// 00601555  51                   push ecx
// 00601556  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060155a  53                   push ebx
// 0060155b  55                   push ebp
// 0060155c  8be9                 mov ebp, ecx
// 0060155e  56                   push esi
// 0060155f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601563  50                   push eax
// 00601564  8d5d04               lea ebx, [ebp + 4]
// 00601567  56                   push esi
// 00601568  8bcb                 mov ecx, ebx
// 0060156a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060156e  897500               mov dword ptr [ebp], esi
// 00601571  e86af3ffff           call 0x6008e0
// 00601576  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060157e  85f6                 test esi, esi
// 00601580  7453                 je 0x6015d5
// 00601582  57                   push edi
// 00601583  8dbee4000000         lea edi, [esi + 0xe4]
// 00601589  85ff                 test edi, edi
// 0060158b  7431                 je 0x6015be
// 0060158d  8937                 mov dword ptr [edi], esi
// 0060158f  8b33                 mov esi, dword ptr [ebx]
// 00601591  85f6                 test esi, esi
// 00601593  740c                 je 0x6015a1
// 00601595  8d4e08               lea ecx, [esi + 8]
// 00601598  ba01000000           mov edx, 1
// 0060159d  f00fc111             lock xadd dword ptr [ecx], edx
// 006015a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006015a4  85c9                 test ecx, ecx
// 006015a6  7413                 je 0x6015bb
// 006015a8  8d4108               lea eax, [ecx + 8]
// 006015ab  83caff               or edx, 0xffffffff
// 006015ae  f00fc110             lock xadd dword ptr [eax], edx
// 006015b2  7507                 jne 0x6015bb
// 006015b4  8b01                 mov eax, dword ptr [ecx]
// 006015b6  8b5008               mov edx, dword ptr [eax + 8]
// 006015b9  ffd2                 call edx
// 006015bb  897704               mov dword ptr [edi + 4], esi
// 006015be  5f                   pop edi
// 006015bf  5e                   pop esi
// 006015c0  8bc5                 mov eax, ebp
// 006015c2  5d                   pop ebp
// 006015c3  5b                   pop ebx
// 006015c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006015c8  64890d00000000       mov dword ptr fs:[0], ecx
// 006015cf  83c410               add esp, 0x10
// 006015d2  c20800               ret 8
// 006015d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006015d9  5e                   pop esi
// 006015da  8bc5                 mov eax, ebp
// 006015dc  5d                   pop ebp
// 006015dd  5b                   pop ebx
// 006015de  64890d00000000       mov dword ptr fs:[0], ecx
// 006015e5  83c410               add esp, 0x10
// 006015e8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
