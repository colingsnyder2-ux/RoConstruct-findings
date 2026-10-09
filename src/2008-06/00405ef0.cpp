// roc 2008-06 00405ef0  unit: boost::detail::sp_counted_base  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405ef0
//
// 00405ef0  6aff                 push -1
// 00405ef2  68abfd7b00           push 0x7bfdab
// 00405ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00405efd  50                   push eax
// 00405efe  64892500000000       mov dword ptr fs:[0], esp
// 00405f05  51                   push ecx
// 00405f06  8b442418             mov eax, dword ptr [esp + 0x18]
// 00405f0a  53                   push ebx
// 00405f0b  55                   push ebp
// 00405f0c  8be9                 mov ebp, ecx
// 00405f0e  56                   push esi
// 00405f0f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00405f13  50                   push eax
// 00405f14  8d5d04               lea ebx, [ebp + 4]
// 00405f17  56                   push esi
// 00405f18  8bcb                 mov ecx, ebx
// 00405f1a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00405f1e  897500               mov dword ptr [ebp], esi
// 00405f21  e83affffff           call 0x405e60
// 00405f26  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00405f2e  85f6                 test esi, esi
// 00405f30  7453                 je 0x405f85
// 00405f32  57                   push edi
// 00405f33  8dbee4000000         lea edi, [esi + 0xe4]
// 00405f39  85ff                 test edi, edi
// 00405f3b  7431                 je 0x405f6e
// 00405f3d  8937                 mov dword ptr [edi], esi
// 00405f3f  8b33                 mov esi, dword ptr [ebx]
// 00405f41  85f6                 test esi, esi
// 00405f43  740c                 je 0x405f51
// 00405f45  8d4e08               lea ecx, [esi + 8]
// 00405f48  ba01000000           mov edx, 1
// 00405f4d  f00fc111             lock xadd dword ptr [ecx], edx
// 00405f51  8b4f04               mov ecx, dword ptr [edi + 4]
// 00405f54  85c9                 test ecx, ecx
// 00405f56  7413                 je 0x405f6b
// 00405f58  8d4108               lea eax, [ecx + 8]
// 00405f5b  83caff               or edx, 0xffffffff
// 00405f5e  f00fc110             lock xadd dword ptr [eax], edx
// 00405f62  7507                 jne 0x405f6b
// 00405f64  8b01                 mov eax, dword ptr [ecx]
// 00405f66  8b5008               mov edx, dword ptr [eax + 8]
// 00405f69  ffd2                 call edx
// 00405f6b  897704               mov dword ptr [edi + 4], esi
// 00405f6e  5f                   pop edi
// 00405f6f  5e                   pop esi
// 00405f70  8bc5                 mov eax, ebp
// 00405f72  5d                   pop ebp
// 00405f73  5b                   pop ebx
// 00405f74  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00405f78  64890d00000000       mov dword ptr fs:[0], ecx
// 00405f7f  83c410               add esp, 0x10
// 00405f82  c20800               ret 8
// 00405f85  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405f89  5e                   pop esi
// 00405f8a  8bc5                 mov eax, ebp
// 00405f8c  5d                   pop ebp
// 00405f8d  5b                   pop ebx
// 00405f8e  64890d00000000       mov dword ptr fs:[0], ecx
// 00405f95  83c410               add esp, 0x10
// 00405f98  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
