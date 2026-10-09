// roc 2008-06 005c9390  unit: RBX::LaserTool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9390
//
// 005c9390  6aff                 push -1
// 005c9392  68abfd7b00           push 0x7bfdab
// 005c9397  64a100000000         mov eax, dword ptr fs:[0]
// 005c939d  50                   push eax
// 005c939e  64892500000000       mov dword ptr fs:[0], esp
// 005c93a5  51                   push ecx
// 005c93a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c93aa  53                   push ebx
// 005c93ab  55                   push ebp
// 005c93ac  8be9                 mov ebp, ecx
// 005c93ae  56                   push esi
// 005c93af  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c93b3  50                   push eax
// 005c93b4  8d5d04               lea ebx, [ebp + 4]
// 005c93b7  56                   push esi
// 005c93b8  8bcb                 mov ecx, ebx
// 005c93ba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c93be  897500               mov dword ptr [ebp], esi
// 005c93c1  e87afeffff           call 0x5c9240
// 005c93c6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c93ce  85f6                 test esi, esi
// 005c93d0  7453                 je 0x5c9425
// 005c93d2  57                   push edi
// 005c93d3  8dbee4000000         lea edi, [esi + 0xe4]
// 005c93d9  85ff                 test edi, edi
// 005c93db  7431                 je 0x5c940e
// 005c93dd  8937                 mov dword ptr [edi], esi
// 005c93df  8b33                 mov esi, dword ptr [ebx]
// 005c93e1  85f6                 test esi, esi
// 005c93e3  740c                 je 0x5c93f1
// 005c93e5  8d4e08               lea ecx, [esi + 8]
// 005c93e8  ba01000000           mov edx, 1
// 005c93ed  f00fc111             lock xadd dword ptr [ecx], edx
// 005c93f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c93f4  85c9                 test ecx, ecx
// 005c93f6  7413                 je 0x5c940b
// 005c93f8  8d4108               lea eax, [ecx + 8]
// 005c93fb  83caff               or edx, 0xffffffff
// 005c93fe  f00fc110             lock xadd dword ptr [eax], edx
// 005c9402  7507                 jne 0x5c940b
// 005c9404  8b01                 mov eax, dword ptr [ecx]
// 005c9406  8b5008               mov edx, dword ptr [eax + 8]
// 005c9409  ffd2                 call edx
// 005c940b  897704               mov dword ptr [edi + 4], esi
// 005c940e  5f                   pop edi
// 005c940f  5e                   pop esi
// 005c9410  8bc5                 mov eax, ebp
// 005c9412  5d                   pop ebp
// 005c9413  5b                   pop ebx
// 005c9414  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c9418  64890d00000000       mov dword ptr fs:[0], ecx
// 005c941f  83c410               add esp, 0x10
// 005c9422  c20800               ret 8
// 005c9425  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c9429  5e                   pop esi
// 005c942a  8bc5                 mov eax, ebp
// 005c942c  5d                   pop ebp
// 005c942d  5b                   pop ebx
// 005c942e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9435  83c410               add esp, 0x10
// 005c9438  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
