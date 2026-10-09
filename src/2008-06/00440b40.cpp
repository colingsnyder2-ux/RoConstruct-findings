// roc 2008-06 00440b40  unit: RBX::Soundscape::VSoundService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00440b40
//
// 00440b40  6aff                 push -1
// 00440b42  68abfd7b00           push 0x7bfdab
// 00440b47  64a100000000         mov eax, dword ptr fs:[0]
// 00440b4d  50                   push eax
// 00440b4e  64892500000000       mov dword ptr fs:[0], esp
// 00440b55  51                   push ecx
// 00440b56  8b442418             mov eax, dword ptr [esp + 0x18]
// 00440b5a  53                   push ebx
// 00440b5b  55                   push ebp
// 00440b5c  8be9                 mov ebp, ecx
// 00440b5e  56                   push esi
// 00440b5f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00440b63  50                   push eax
// 00440b64  8d5d04               lea ebx, [ebp + 4]
// 00440b67  56                   push esi
// 00440b68  8bcb                 mov ecx, ebx
// 00440b6a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00440b6e  897500               mov dword ptr [ebp], esi
// 00440b71  e83affffff           call 0x440ab0
// 00440b76  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00440b7e  85f6                 test esi, esi
// 00440b80  7453                 je 0x440bd5
// 00440b82  57                   push edi
// 00440b83  8dbee4000000         lea edi, [esi + 0xe4]
// 00440b89  85ff                 test edi, edi
// 00440b8b  7431                 je 0x440bbe
// 00440b8d  8937                 mov dword ptr [edi], esi
// 00440b8f  8b33                 mov esi, dword ptr [ebx]
// 00440b91  85f6                 test esi, esi
// 00440b93  740c                 je 0x440ba1
// 00440b95  8d4e08               lea ecx, [esi + 8]
// 00440b98  ba01000000           mov edx, 1
// 00440b9d  f00fc111             lock xadd dword ptr [ecx], edx
// 00440ba1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00440ba4  85c9                 test ecx, ecx
// 00440ba6  7413                 je 0x440bbb
// 00440ba8  8d4108               lea eax, [ecx + 8]
// 00440bab  83caff               or edx, 0xffffffff
// 00440bae  f00fc110             lock xadd dword ptr [eax], edx
// 00440bb2  7507                 jne 0x440bbb
// 00440bb4  8b01                 mov eax, dword ptr [ecx]
// 00440bb6  8b5008               mov edx, dword ptr [eax + 8]
// 00440bb9  ffd2                 call edx
// 00440bbb  897704               mov dword ptr [edi + 4], esi
// 00440bbe  5f                   pop edi
// 00440bbf  5e                   pop esi
// 00440bc0  8bc5                 mov eax, ebp
// 00440bc2  5d                   pop ebp
// 00440bc3  5b                   pop ebx
// 00440bc4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00440bc8  64890d00000000       mov dword ptr fs:[0], ecx
// 00440bcf  83c410               add esp, 0x10
// 00440bd2  c20800               ret 8
// 00440bd5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00440bd9  5e                   pop esi
// 00440bda  8bc5                 mov eax, ebp
// 00440bdc  5d                   pop ebp
// 00440bdd  5b                   pop ebx
// 00440bde  64890d00000000       mov dword ptr fs:[0], ecx
// 00440be5  83c410               add esp, 0x10
// 00440be8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
