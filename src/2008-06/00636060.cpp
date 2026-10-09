// roc 2008-06 00636060  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636060
//
// 00636060  6aff                 push -1
// 00636062  68abfd7b00           push 0x7bfdab
// 00636067  64a100000000         mov eax, dword ptr fs:[0]
// 0063606d  50                   push eax
// 0063606e  64892500000000       mov dword ptr fs:[0], esp
// 00636075  51                   push ecx
// 00636076  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063607a  53                   push ebx
// 0063607b  55                   push ebp
// 0063607c  8be9                 mov ebp, ecx
// 0063607e  56                   push esi
// 0063607f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00636083  50                   push eax
// 00636084  8d5d04               lea ebx, [ebp + 4]
// 00636087  56                   push esi
// 00636088  8bcb                 mov ecx, ebx
// 0063608a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0063608e  897500               mov dword ptr [ebp], esi
// 00636091  e83affffff           call 0x635fd0
// 00636096  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063609e  85f6                 test esi, esi
// 006360a0  7453                 je 0x6360f5
// 006360a2  57                   push edi
// 006360a3  8dbee4000000         lea edi, [esi + 0xe4]
// 006360a9  85ff                 test edi, edi
// 006360ab  7431                 je 0x6360de
// 006360ad  8937                 mov dword ptr [edi], esi
// 006360af  8b33                 mov esi, dword ptr [ebx]
// 006360b1  85f6                 test esi, esi
// 006360b3  740c                 je 0x6360c1
// 006360b5  8d4e08               lea ecx, [esi + 8]
// 006360b8  ba01000000           mov edx, 1
// 006360bd  f00fc111             lock xadd dword ptr [ecx], edx
// 006360c1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006360c4  85c9                 test ecx, ecx
// 006360c6  7413                 je 0x6360db
// 006360c8  8d4108               lea eax, [ecx + 8]
// 006360cb  83caff               or edx, 0xffffffff
// 006360ce  f00fc110             lock xadd dword ptr [eax], edx
// 006360d2  7507                 jne 0x6360db
// 006360d4  8b01                 mov eax, dword ptr [ecx]
// 006360d6  8b5008               mov edx, dword ptr [eax + 8]
// 006360d9  ffd2                 call edx
// 006360db  897704               mov dword ptr [edi + 4], esi
// 006360de  5f                   pop edi
// 006360df  5e                   pop esi
// 006360e0  8bc5                 mov eax, ebp
// 006360e2  5d                   pop ebp
// 006360e3  5b                   pop ebx
// 006360e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006360e8  64890d00000000       mov dword ptr fs:[0], ecx
// 006360ef  83c410               add esp, 0x10
// 006360f2  c20800               ret 8
// 006360f5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006360f9  5e                   pop esi
// 006360fa  8bc5                 mov eax, ebp
// 006360fc  5d                   pop ebp
// 006360fd  5b                   pop ebx
// 006360fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00636105  83c410               add esp, 0x10
// 00636108  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
