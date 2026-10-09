// roc 2008-06 004326e0  unit: RBX::VAccoutrement::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004326e0
//
// 004326e0  6aff                 push -1
// 004326e2  68abfd7b00           push 0x7bfdab
// 004326e7  64a100000000         mov eax, dword ptr fs:[0]
// 004326ed  50                   push eax
// 004326ee  64892500000000       mov dword ptr fs:[0], esp
// 004326f5  51                   push ecx
// 004326f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004326fa  53                   push ebx
// 004326fb  55                   push ebp
// 004326fc  8be9                 mov ebp, ecx
// 004326fe  56                   push esi
// 004326ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 00432703  50                   push eax
// 00432704  8d5d04               lea ebx, [ebp + 4]
// 00432707  56                   push esi
// 00432708  8bcb                 mov ecx, ebx
// 0043270a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0043270e  897500               mov dword ptr [ebp], esi
// 00432711  e83affffff           call 0x432650
// 00432716  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0043271e  85f6                 test esi, esi
// 00432720  7453                 je 0x432775
// 00432722  57                   push edi
// 00432723  8dbee4000000         lea edi, [esi + 0xe4]
// 00432729  85ff                 test edi, edi
// 0043272b  7431                 je 0x43275e
// 0043272d  8937                 mov dword ptr [edi], esi
// 0043272f  8b33                 mov esi, dword ptr [ebx]
// 00432731  85f6                 test esi, esi
// 00432733  740c                 je 0x432741
// 00432735  8d4e08               lea ecx, [esi + 8]
// 00432738  ba01000000           mov edx, 1
// 0043273d  f00fc111             lock xadd dword ptr [ecx], edx
// 00432741  8b4f04               mov ecx, dword ptr [edi + 4]
// 00432744  85c9                 test ecx, ecx
// 00432746  7413                 je 0x43275b
// 00432748  8d4108               lea eax, [ecx + 8]
// 0043274b  83caff               or edx, 0xffffffff
// 0043274e  f00fc110             lock xadd dword ptr [eax], edx
// 00432752  7507                 jne 0x43275b
// 00432754  8b01                 mov eax, dword ptr [ecx]
// 00432756  8b5008               mov edx, dword ptr [eax + 8]
// 00432759  ffd2                 call edx
// 0043275b  897704               mov dword ptr [edi + 4], esi
// 0043275e  5f                   pop edi
// 0043275f  5e                   pop esi
// 00432760  8bc5                 mov eax, ebp
// 00432762  5d                   pop ebp
// 00432763  5b                   pop ebx
// 00432764  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00432768  64890d00000000       mov dword ptr fs:[0], ecx
// 0043276f  83c410               add esp, 0x10
// 00432772  c20800               ret 8
// 00432775  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00432779  5e                   pop esi
// 0043277a  8bc5                 mov eax, ebp
// 0043277c  5d                   pop ebp
// 0043277d  5b                   pop ebx
// 0043277e  64890d00000000       mov dword ptr fs:[0], ecx
// 00432785  83c410               add esp, 0x10
// 00432788  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
