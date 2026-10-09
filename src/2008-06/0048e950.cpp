// roc 2008-06 0048e950  unit: RBX::VHopperBin::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e950
//
// 0048e950  6aff                 push -1
// 0048e952  68abfd7b00           push 0x7bfdab
// 0048e957  64a100000000         mov eax, dword ptr fs:[0]
// 0048e95d  50                   push eax
// 0048e95e  64892500000000       mov dword ptr fs:[0], esp
// 0048e965  51                   push ecx
// 0048e966  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048e96a  53                   push ebx
// 0048e96b  55                   push ebp
// 0048e96c  8be9                 mov ebp, ecx
// 0048e96e  56                   push esi
// 0048e96f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048e973  50                   push eax
// 0048e974  8d5d04               lea ebx, [ebp + 4]
// 0048e977  56                   push esi
// 0048e978  8bcb                 mov ecx, ebx
// 0048e97a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048e97e  897500               mov dword ptr [ebp], esi
// 0048e981  e83affffff           call 0x48e8c0
// 0048e986  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048e98e  85f6                 test esi, esi
// 0048e990  7453                 je 0x48e9e5
// 0048e992  57                   push edi
// 0048e993  8dbee4000000         lea edi, [esi + 0xe4]
// 0048e999  85ff                 test edi, edi
// 0048e99b  7431                 je 0x48e9ce
// 0048e99d  8937                 mov dword ptr [edi], esi
// 0048e99f  8b33                 mov esi, dword ptr [ebx]
// 0048e9a1  85f6                 test esi, esi
// 0048e9a3  740c                 je 0x48e9b1
// 0048e9a5  8d4e08               lea ecx, [esi + 8]
// 0048e9a8  ba01000000           mov edx, 1
// 0048e9ad  f00fc111             lock xadd dword ptr [ecx], edx
// 0048e9b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048e9b4  85c9                 test ecx, ecx
// 0048e9b6  7413                 je 0x48e9cb
// 0048e9b8  8d4108               lea eax, [ecx + 8]
// 0048e9bb  83caff               or edx, 0xffffffff
// 0048e9be  f00fc110             lock xadd dword ptr [eax], edx
// 0048e9c2  7507                 jne 0x48e9cb
// 0048e9c4  8b01                 mov eax, dword ptr [ecx]
// 0048e9c6  8b5008               mov edx, dword ptr [eax + 8]
// 0048e9c9  ffd2                 call edx
// 0048e9cb  897704               mov dword ptr [edi + 4], esi
// 0048e9ce  5f                   pop edi
// 0048e9cf  5e                   pop esi
// 0048e9d0  8bc5                 mov eax, ebp
// 0048e9d2  5d                   pop ebp
// 0048e9d3  5b                   pop ebx
// 0048e9d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048e9d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e9df  83c410               add esp, 0x10
// 0048e9e2  c20800               ret 8
// 0048e9e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048e9e9  5e                   pop esi
// 0048e9ea  8bc5                 mov eax, ebp
// 0048e9ec  5d                   pop ebp
// 0048e9ed  5b                   pop ebx
// 0048e9ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e9f5  83c410               add esp, 0x10
// 0048e9f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
