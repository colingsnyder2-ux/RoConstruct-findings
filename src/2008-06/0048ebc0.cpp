// roc 2008-06 0048ebc0  unit: RBX::VStarterPackService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ebc0
//
// 0048ebc0  6aff                 push -1
// 0048ebc2  68abfd7b00           push 0x7bfdab
// 0048ebc7  64a100000000         mov eax, dword ptr fs:[0]
// 0048ebcd  50                   push eax
// 0048ebce  64892500000000       mov dword ptr fs:[0], esp
// 0048ebd5  51                   push ecx
// 0048ebd6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048ebda  53                   push ebx
// 0048ebdb  55                   push ebp
// 0048ebdc  8be9                 mov ebp, ecx
// 0048ebde  56                   push esi
// 0048ebdf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048ebe3  50                   push eax
// 0048ebe4  8d5d04               lea ebx, [ebp + 4]
// 0048ebe7  56                   push esi
// 0048ebe8  8bcb                 mov ecx, ebx
// 0048ebea  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048ebee  897500               mov dword ptr [ebp], esi
// 0048ebf1  e83affffff           call 0x48eb30
// 0048ebf6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048ebfe  85f6                 test esi, esi
// 0048ec00  7453                 je 0x48ec55
// 0048ec02  57                   push edi
// 0048ec03  8dbee4000000         lea edi, [esi + 0xe4]
// 0048ec09  85ff                 test edi, edi
// 0048ec0b  7431                 je 0x48ec3e
// 0048ec0d  8937                 mov dword ptr [edi], esi
// 0048ec0f  8b33                 mov esi, dword ptr [ebx]
// 0048ec11  85f6                 test esi, esi
// 0048ec13  740c                 je 0x48ec21
// 0048ec15  8d4e08               lea ecx, [esi + 8]
// 0048ec18  ba01000000           mov edx, 1
// 0048ec1d  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ec21  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048ec24  85c9                 test ecx, ecx
// 0048ec26  7413                 je 0x48ec3b
// 0048ec28  8d4108               lea eax, [ecx + 8]
// 0048ec2b  83caff               or edx, 0xffffffff
// 0048ec2e  f00fc110             lock xadd dword ptr [eax], edx
// 0048ec32  7507                 jne 0x48ec3b
// 0048ec34  8b01                 mov eax, dword ptr [ecx]
// 0048ec36  8b5008               mov edx, dword ptr [eax + 8]
// 0048ec39  ffd2                 call edx
// 0048ec3b  897704               mov dword ptr [edi + 4], esi
// 0048ec3e  5f                   pop edi
// 0048ec3f  5e                   pop esi
// 0048ec40  8bc5                 mov eax, ebp
// 0048ec42  5d                   pop ebp
// 0048ec43  5b                   pop ebx
// 0048ec44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048ec48  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ec4f  83c410               add esp, 0x10
// 0048ec52  c20800               ret 8
// 0048ec55  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ec59  5e                   pop esi
// 0048ec5a  8bc5                 mov eax, ebp
// 0048ec5c  5d                   pop ebp
// 0048ec5d  5b                   pop ebx
// 0048ec5e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ec65  83c410               add esp, 0x10
// 0048ec68  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
