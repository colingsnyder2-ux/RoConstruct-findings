// roc 2008-06 0040b980  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b980
//
// 0040b980  6aff                 push -1
// 0040b982  68abfd7b00           push 0x7bfdab
// 0040b987  64a100000000         mov eax, dword ptr fs:[0]
// 0040b98d  50                   push eax
// 0040b98e  64892500000000       mov dword ptr fs:[0], esp
// 0040b995  51                   push ecx
// 0040b996  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040b99a  53                   push ebx
// 0040b99b  55                   push ebp
// 0040b99c  8be9                 mov ebp, ecx
// 0040b99e  56                   push esi
// 0040b99f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040b9a3  50                   push eax
// 0040b9a4  8d5d04               lea ebx, [ebp + 4]
// 0040b9a7  56                   push esi
// 0040b9a8  8bcb                 mov ecx, ebx
// 0040b9aa  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040b9ae  897500               mov dword ptr [ebp], esi
// 0040b9b1  e85afeffff           call 0x40b810
// 0040b9b6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040b9be  85f6                 test esi, esi
// 0040b9c0  7453                 je 0x40ba15
// 0040b9c2  57                   push edi
// 0040b9c3  8dbee4000000         lea edi, [esi + 0xe4]
// 0040b9c9  85ff                 test edi, edi
// 0040b9cb  7431                 je 0x40b9fe
// 0040b9cd  8937                 mov dword ptr [edi], esi
// 0040b9cf  8b33                 mov esi, dword ptr [ebx]
// 0040b9d1  85f6                 test esi, esi
// 0040b9d3  740c                 je 0x40b9e1
// 0040b9d5  8d4e08               lea ecx, [esi + 8]
// 0040b9d8  ba01000000           mov edx, 1
// 0040b9dd  f00fc111             lock xadd dword ptr [ecx], edx
// 0040b9e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040b9e4  85c9                 test ecx, ecx
// 0040b9e6  7413                 je 0x40b9fb
// 0040b9e8  8d4108               lea eax, [ecx + 8]
// 0040b9eb  83caff               or edx, 0xffffffff
// 0040b9ee  f00fc110             lock xadd dword ptr [eax], edx
// 0040b9f2  7507                 jne 0x40b9fb
// 0040b9f4  8b01                 mov eax, dword ptr [ecx]
// 0040b9f6  8b5008               mov edx, dword ptr [eax + 8]
// 0040b9f9  ffd2                 call edx
// 0040b9fb  897704               mov dword ptr [edi + 4], esi
// 0040b9fe  5f                   pop edi
// 0040b9ff  5e                   pop esi
// 0040ba00  8bc5                 mov eax, ebp
// 0040ba02  5d                   pop ebp
// 0040ba03  5b                   pop ebx
// 0040ba04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040ba08  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ba0f  83c410               add esp, 0x10
// 0040ba12  c20800               ret 8
// 0040ba15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040ba19  5e                   pop esi
// 0040ba1a  8bc5                 mov eax, ebp
// 0040ba1c  5d                   pop ebp
// 0040ba1d  5b                   pop ebx
// 0040ba1e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ba25  83c410               add esp, 0x10
// 0040ba28  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
