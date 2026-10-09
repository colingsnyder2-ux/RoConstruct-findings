// roc 2008-06 0049e760  unit: RBX::Network::AbuseReporter::Udata::?$sp_counted_impl_p  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049e760
//
// 0049e760  6aff                 push -1
// 0049e762  68abfd7b00           push 0x7bfdab
// 0049e767  64a100000000         mov eax, dword ptr fs:[0]
// 0049e76d  50                   push eax
// 0049e76e  64892500000000       mov dword ptr fs:[0], esp
// 0049e775  51                   push ecx
// 0049e776  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049e77a  53                   push ebx
// 0049e77b  55                   push ebp
// 0049e77c  8be9                 mov ebp, ecx
// 0049e77e  56                   push esi
// 0049e77f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049e783  50                   push eax
// 0049e784  8d5d04               lea ebx, [ebp + 4]
// 0049e787  56                   push esi
// 0049e788  8bcb                 mov ecx, ebx
// 0049e78a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0049e78e  897500               mov dword ptr [ebp], esi
// 0049e791  e88afeffff           call 0x49e620
// 0049e796  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049e79e  85f6                 test esi, esi
// 0049e7a0  7453                 je 0x49e7f5
// 0049e7a2  57                   push edi
// 0049e7a3  8dbee4000000         lea edi, [esi + 0xe4]
// 0049e7a9  85ff                 test edi, edi
// 0049e7ab  7431                 je 0x49e7de
// 0049e7ad  8937                 mov dword ptr [edi], esi
// 0049e7af  8b33                 mov esi, dword ptr [ebx]
// 0049e7b1  85f6                 test esi, esi
// 0049e7b3  740c                 je 0x49e7c1
// 0049e7b5  8d4e08               lea ecx, [esi + 8]
// 0049e7b8  ba01000000           mov edx, 1
// 0049e7bd  f00fc111             lock xadd dword ptr [ecx], edx
// 0049e7c1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0049e7c4  85c9                 test ecx, ecx
// 0049e7c6  7413                 je 0x49e7db
// 0049e7c8  8d4108               lea eax, [ecx + 8]
// 0049e7cb  83caff               or edx, 0xffffffff
// 0049e7ce  f00fc110             lock xadd dword ptr [eax], edx
// 0049e7d2  7507                 jne 0x49e7db
// 0049e7d4  8b01                 mov eax, dword ptr [ecx]
// 0049e7d6  8b5008               mov edx, dword ptr [eax + 8]
// 0049e7d9  ffd2                 call edx
// 0049e7db  897704               mov dword ptr [edi + 4], esi
// 0049e7de  5f                   pop edi
// 0049e7df  5e                   pop esi
// 0049e7e0  8bc5                 mov eax, ebp
// 0049e7e2  5d                   pop ebp
// 0049e7e3  5b                   pop ebx
// 0049e7e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049e7e8  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e7ef  83c410               add esp, 0x10
// 0049e7f2  c20800               ret 8
// 0049e7f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049e7f9  5e                   pop esi
// 0049e7fa  8bc5                 mov eax, ebp
// 0049e7fc  5d                   pop ebp
// 0049e7fd  5b                   pop ebx
// 0049e7fe  64890d00000000       mov dword ptr fs:[0], ecx
// 0049e805  83c410               add esp, 0x10
// 0049e808  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
