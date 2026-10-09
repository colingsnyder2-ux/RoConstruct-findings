// roc 2008-06 004b31a0  unit: RBX::VRotateV::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b31a0
//
// 004b31a0  6aff                 push -1
// 004b31a2  68abfd7b00           push 0x7bfdab
// 004b31a7  64a100000000         mov eax, dword ptr fs:[0]
// 004b31ad  50                   push eax
// 004b31ae  64892500000000       mov dword ptr fs:[0], esp
// 004b31b5  51                   push ecx
// 004b31b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b31ba  53                   push ebx
// 004b31bb  55                   push ebp
// 004b31bc  8be9                 mov ebp, ecx
// 004b31be  56                   push esi
// 004b31bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b31c3  50                   push eax
// 004b31c4  8d5d04               lea ebx, [ebp + 4]
// 004b31c7  56                   push esi
// 004b31c8  8bcb                 mov ecx, ebx
// 004b31ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b31ce  897500               mov dword ptr [ebp], esi
// 004b31d1  e83affffff           call 0x4b3110
// 004b31d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b31de  85f6                 test esi, esi
// 004b31e0  7453                 je 0x4b3235
// 004b31e2  57                   push edi
// 004b31e3  8dbee4000000         lea edi, [esi + 0xe4]
// 004b31e9  85ff                 test edi, edi
// 004b31eb  7431                 je 0x4b321e
// 004b31ed  8937                 mov dword ptr [edi], esi
// 004b31ef  8b33                 mov esi, dword ptr [ebx]
// 004b31f1  85f6                 test esi, esi
// 004b31f3  740c                 je 0x4b3201
// 004b31f5  8d4e08               lea ecx, [esi + 8]
// 004b31f8  ba01000000           mov edx, 1
// 004b31fd  f00fc111             lock xadd dword ptr [ecx], edx
// 004b3201  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b3204  85c9                 test ecx, ecx
// 004b3206  7413                 je 0x4b321b
// 004b3208  8d4108               lea eax, [ecx + 8]
// 004b320b  83caff               or edx, 0xffffffff
// 004b320e  f00fc110             lock xadd dword ptr [eax], edx
// 004b3212  7507                 jne 0x4b321b
// 004b3214  8b01                 mov eax, dword ptr [ecx]
// 004b3216  8b5008               mov edx, dword ptr [eax + 8]
// 004b3219  ffd2                 call edx
// 004b321b  897704               mov dword ptr [edi + 4], esi
// 004b321e  5f                   pop edi
// 004b321f  5e                   pop esi
// 004b3220  8bc5                 mov eax, ebp
// 004b3222  5d                   pop ebp
// 004b3223  5b                   pop ebx
// 004b3224  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b3228  64890d00000000       mov dword ptr fs:[0], ecx
// 004b322f  83c410               add esp, 0x10
// 004b3232  c20800               ret 8
// 004b3235  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b3239  5e                   pop esi
// 004b323a  8bc5                 mov eax, ebp
// 004b323c  5d                   pop ebp
// 004b323d  5b                   pop ebx
// 004b323e  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3245  83c410               add esp, 0x10
// 004b3248  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
