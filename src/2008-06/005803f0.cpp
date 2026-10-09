// roc 2008-06 005803f0  unit: RBX::VHole::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005803f0
//
// 005803f0  6aff                 push -1
// 005803f2  68abfd7b00           push 0x7bfdab
// 005803f7  64a100000000         mov eax, dword ptr fs:[0]
// 005803fd  50                   push eax
// 005803fe  64892500000000       mov dword ptr fs:[0], esp
// 00580405  51                   push ecx
// 00580406  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058040a  53                   push ebx
// 0058040b  55                   push ebp
// 0058040c  8be9                 mov ebp, ecx
// 0058040e  56                   push esi
// 0058040f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00580413  50                   push eax
// 00580414  8d5d04               lea ebx, [ebp + 4]
// 00580417  56                   push esi
// 00580418  8bcb                 mov ecx, ebx
// 0058041a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058041e  897500               mov dword ptr [ebp], esi
// 00580421  e83affffff           call 0x580360
// 00580426  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058042e  85f6                 test esi, esi
// 00580430  7453                 je 0x580485
// 00580432  57                   push edi
// 00580433  8dbee4000000         lea edi, [esi + 0xe4]
// 00580439  85ff                 test edi, edi
// 0058043b  7431                 je 0x58046e
// 0058043d  8937                 mov dword ptr [edi], esi
// 0058043f  8b33                 mov esi, dword ptr [ebx]
// 00580441  85f6                 test esi, esi
// 00580443  740c                 je 0x580451
// 00580445  8d4e08               lea ecx, [esi + 8]
// 00580448  ba01000000           mov edx, 1
// 0058044d  f00fc111             lock xadd dword ptr [ecx], edx
// 00580451  8b4f04               mov ecx, dword ptr [edi + 4]
// 00580454  85c9                 test ecx, ecx
// 00580456  7413                 je 0x58046b
// 00580458  8d4108               lea eax, [ecx + 8]
// 0058045b  83caff               or edx, 0xffffffff
// 0058045e  f00fc110             lock xadd dword ptr [eax], edx
// 00580462  7507                 jne 0x58046b
// 00580464  8b01                 mov eax, dword ptr [ecx]
// 00580466  8b5008               mov edx, dword ptr [eax + 8]
// 00580469  ffd2                 call edx
// 0058046b  897704               mov dword ptr [edi + 4], esi
// 0058046e  5f                   pop edi
// 0058046f  5e                   pop esi
// 00580470  8bc5                 mov eax, ebp
// 00580472  5d                   pop ebp
// 00580473  5b                   pop ebx
// 00580474  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00580478  64890d00000000       mov dword ptr fs:[0], ecx
// 0058047f  83c410               add esp, 0x10
// 00580482  c20800               ret 8
// 00580485  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580489  5e                   pop esi
// 0058048a  8bc5                 mov eax, ebp
// 0058048c  5d                   pop ebp
// 0058048d  5b                   pop ebx
// 0058048e  64890d00000000       mov dword ptr fs:[0], ecx
// 00580495  83c410               add esp, 0x10
// 00580498  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
