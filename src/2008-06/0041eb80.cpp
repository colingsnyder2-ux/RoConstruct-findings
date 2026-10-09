// roc 2008-06 0041eb80  unit: RBX::VPartInstance::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041eb80
//
// 0041eb80  6aff                 push -1
// 0041eb82  68abfd7b00           push 0x7bfdab
// 0041eb87  64a100000000         mov eax, dword ptr fs:[0]
// 0041eb8d  50                   push eax
// 0041eb8e  64892500000000       mov dword ptr fs:[0], esp
// 0041eb95  51                   push ecx
// 0041eb96  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041eb9a  53                   push ebx
// 0041eb9b  55                   push ebp
// 0041eb9c  8be9                 mov ebp, ecx
// 0041eb9e  56                   push esi
// 0041eb9f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041eba3  50                   push eax
// 0041eba4  8d5d04               lea ebx, [ebp + 4]
// 0041eba7  56                   push esi
// 0041eba8  8bcb                 mov ecx, ebx
// 0041ebaa  896c2414             mov dword ptr [esp + 0x14], ebp
// 0041ebae  897500               mov dword ptr [ebp], esi
// 0041ebb1  e83affffff           call 0x41eaf0
// 0041ebb6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041ebbe  85f6                 test esi, esi
// 0041ebc0  7453                 je 0x41ec15
// 0041ebc2  57                   push edi
// 0041ebc3  8dbee4000000         lea edi, [esi + 0xe4]
// 0041ebc9  85ff                 test edi, edi
// 0041ebcb  7431                 je 0x41ebfe
// 0041ebcd  8937                 mov dword ptr [edi], esi
// 0041ebcf  8b33                 mov esi, dword ptr [ebx]
// 0041ebd1  85f6                 test esi, esi
// 0041ebd3  740c                 je 0x41ebe1
// 0041ebd5  8d4e08               lea ecx, [esi + 8]
// 0041ebd8  ba01000000           mov edx, 1
// 0041ebdd  f00fc111             lock xadd dword ptr [ecx], edx
// 0041ebe1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0041ebe4  85c9                 test ecx, ecx
// 0041ebe6  7413                 je 0x41ebfb
// 0041ebe8  8d4108               lea eax, [ecx + 8]
// 0041ebeb  83caff               or edx, 0xffffffff
// 0041ebee  f00fc110             lock xadd dword ptr [eax], edx
// 0041ebf2  7507                 jne 0x41ebfb
// 0041ebf4  8b01                 mov eax, dword ptr [ecx]
// 0041ebf6  8b5008               mov edx, dword ptr [eax + 8]
// 0041ebf9  ffd2                 call edx
// 0041ebfb  897704               mov dword ptr [edi + 4], esi
// 0041ebfe  5f                   pop edi
// 0041ebff  5e                   pop esi
// 0041ec00  8bc5                 mov eax, ebp
// 0041ec02  5d                   pop ebp
// 0041ec03  5b                   pop ebx
// 0041ec04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041ec08  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ec0f  83c410               add esp, 0x10
// 0041ec12  c20800               ret 8
// 0041ec15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041ec19  5e                   pop esi
// 0041ec1a  8bc5                 mov eax, ebp
// 0041ec1c  5d                   pop ebp
// 0041ec1d  5b                   pop ebx
// 0041ec1e  64890d00000000       mov dword ptr fs:[0], ecx
// 0041ec25  83c410               add esp, 0x10
// 0041ec28  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
