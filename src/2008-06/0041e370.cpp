// roc 2008-06 0041e370  unit: VDHTMLWindow::?$SignalDesc  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e370
//
// 0041e370  6aff                 push -1
// 0041e372  68abfd7b00           push 0x7bfdab
// 0041e377  64a100000000         mov eax, dword ptr fs:[0]
// 0041e37d  50                   push eax
// 0041e37e  64892500000000       mov dword ptr fs:[0], esp
// 0041e385  51                   push ecx
// 0041e386  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041e38a  53                   push ebx
// 0041e38b  55                   push ebp
// 0041e38c  8be9                 mov ebp, ecx
// 0041e38e  56                   push esi
// 0041e38f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041e393  50                   push eax
// 0041e394  8d5d04               lea ebx, [ebp + 4]
// 0041e397  56                   push esi
// 0041e398  8bcb                 mov ecx, ebx
// 0041e39a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0041e39e  897500               mov dword ptr [ebp], esi
// 0041e3a1  e8eafdffff           call 0x41e190
// 0041e3a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041e3ae  85f6                 test esi, esi
// 0041e3b0  7453                 je 0x41e405
// 0041e3b2  57                   push edi
// 0041e3b3  8dbee4000000         lea edi, [esi + 0xe4]
// 0041e3b9  85ff                 test edi, edi
// 0041e3bb  7431                 je 0x41e3ee
// 0041e3bd  8937                 mov dword ptr [edi], esi
// 0041e3bf  8b33                 mov esi, dword ptr [ebx]
// 0041e3c1  85f6                 test esi, esi
// 0041e3c3  740c                 je 0x41e3d1
// 0041e3c5  8d4e08               lea ecx, [esi + 8]
// 0041e3c8  ba01000000           mov edx, 1
// 0041e3cd  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e3d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0041e3d4  85c9                 test ecx, ecx
// 0041e3d6  7413                 je 0x41e3eb
// 0041e3d8  8d4108               lea eax, [ecx + 8]
// 0041e3db  83caff               or edx, 0xffffffff
// 0041e3de  f00fc110             lock xadd dword ptr [eax], edx
// 0041e3e2  7507                 jne 0x41e3eb
// 0041e3e4  8b01                 mov eax, dword ptr [ecx]
// 0041e3e6  8b5008               mov edx, dword ptr [eax + 8]
// 0041e3e9  ffd2                 call edx
// 0041e3eb  897704               mov dword ptr [edi + 4], esi
// 0041e3ee  5f                   pop edi
// 0041e3ef  5e                   pop esi
// 0041e3f0  8bc5                 mov eax, ebp
// 0041e3f2  5d                   pop ebp
// 0041e3f3  5b                   pop ebx
// 0041e3f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041e3f8  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e3ff  83c410               add esp, 0x10
// 0041e402  c20800               ret 8
// 0041e405  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041e409  5e                   pop esi
// 0041e40a  8bc5                 mov eax, ebp
// 0041e40c  5d                   pop ebp
// 0041e40d  5b                   pop ebx
// 0041e40e  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e415  83c410               add esp, 0x10
// 0041e418  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
