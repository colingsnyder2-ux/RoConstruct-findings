// roc 2008-06 00576a70  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576a70
//
// 00576a70  6aff                 push -1
// 00576a72  68abfd7b00           push 0x7bfdab
// 00576a77  64a100000000         mov eax, dword ptr fs:[0]
// 00576a7d  50                   push eax
// 00576a7e  64892500000000       mov dword ptr fs:[0], esp
// 00576a85  51                   push ecx
// 00576a86  8b442418             mov eax, dword ptr [esp + 0x18]
// 00576a8a  53                   push ebx
// 00576a8b  55                   push ebp
// 00576a8c  8be9                 mov ebp, ecx
// 00576a8e  56                   push esi
// 00576a8f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00576a93  50                   push eax
// 00576a94  8d5d04               lea ebx, [ebp + 4]
// 00576a97  56                   push esi
// 00576a98  8bcb                 mov ecx, ebx
// 00576a9a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00576a9e  897500               mov dword ptr [ebp], esi
// 00576aa1  e88afbffff           call 0x576630
// 00576aa6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00576aae  85f6                 test esi, esi
// 00576ab0  7453                 je 0x576b05
// 00576ab2  57                   push edi
// 00576ab3  8dbee4000000         lea edi, [esi + 0xe4]
// 00576ab9  85ff                 test edi, edi
// 00576abb  7431                 je 0x576aee
// 00576abd  8937                 mov dword ptr [edi], esi
// 00576abf  8b33                 mov esi, dword ptr [ebx]
// 00576ac1  85f6                 test esi, esi
// 00576ac3  740c                 je 0x576ad1
// 00576ac5  8d4e08               lea ecx, [esi + 8]
// 00576ac8  ba01000000           mov edx, 1
// 00576acd  f00fc111             lock xadd dword ptr [ecx], edx
// 00576ad1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00576ad4  85c9                 test ecx, ecx
// 00576ad6  7413                 je 0x576aeb
// 00576ad8  8d4108               lea eax, [ecx + 8]
// 00576adb  83caff               or edx, 0xffffffff
// 00576ade  f00fc110             lock xadd dword ptr [eax], edx
// 00576ae2  7507                 jne 0x576aeb
// 00576ae4  8b01                 mov eax, dword ptr [ecx]
// 00576ae6  8b5008               mov edx, dword ptr [eax + 8]
// 00576ae9  ffd2                 call edx
// 00576aeb  897704               mov dword ptr [edi + 4], esi
// 00576aee  5f                   pop edi
// 00576aef  5e                   pop esi
// 00576af0  8bc5                 mov eax, ebp
// 00576af2  5d                   pop ebp
// 00576af3  5b                   pop ebx
// 00576af4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00576af8  64890d00000000       mov dword ptr fs:[0], ecx
// 00576aff  83c410               add esp, 0x10
// 00576b02  c20800               ret 8
// 00576b05  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00576b09  5e                   pop esi
// 00576b0a  8bc5                 mov eax, ebp
// 00576b0c  5d                   pop ebp
// 00576b0d  5b                   pop ebx
// 00576b0e  64890d00000000       mov dword ptr fs:[0], ecx
// 00576b15  83c410               add esp, 0x10
// 00576b18  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
