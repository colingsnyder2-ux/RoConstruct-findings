// roc 2008-06 0041e910  unit: RBX::VTexture::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e910
//
// 0041e910  6aff                 push -1
// 0041e912  68abfd7b00           push 0x7bfdab
// 0041e917  64a100000000         mov eax, dword ptr fs:[0]
// 0041e91d  50                   push eax
// 0041e91e  64892500000000       mov dword ptr fs:[0], esp
// 0041e925  51                   push ecx
// 0041e926  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041e92a  53                   push ebx
// 0041e92b  55                   push ebp
// 0041e92c  8be9                 mov ebp, ecx
// 0041e92e  56                   push esi
// 0041e92f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041e933  50                   push eax
// 0041e934  8d5d04               lea ebx, [ebp + 4]
// 0041e937  56                   push esi
// 0041e938  8bcb                 mov ecx, ebx
// 0041e93a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0041e93e  897500               mov dword ptr [ebp], esi
// 0041e941  e83affffff           call 0x41e880
// 0041e946  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041e94e  85f6                 test esi, esi
// 0041e950  7453                 je 0x41e9a5
// 0041e952  57                   push edi
// 0041e953  8dbee4000000         lea edi, [esi + 0xe4]
// 0041e959  85ff                 test edi, edi
// 0041e95b  7431                 je 0x41e98e
// 0041e95d  8937                 mov dword ptr [edi], esi
// 0041e95f  8b33                 mov esi, dword ptr [ebx]
// 0041e961  85f6                 test esi, esi
// 0041e963  740c                 je 0x41e971
// 0041e965  8d4e08               lea ecx, [esi + 8]
// 0041e968  ba01000000           mov edx, 1
// 0041e96d  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e971  8b4f04               mov ecx, dword ptr [edi + 4]
// 0041e974  85c9                 test ecx, ecx
// 0041e976  7413                 je 0x41e98b
// 0041e978  8d4108               lea eax, [ecx + 8]
// 0041e97b  83caff               or edx, 0xffffffff
// 0041e97e  f00fc110             lock xadd dword ptr [eax], edx
// 0041e982  7507                 jne 0x41e98b
// 0041e984  8b01                 mov eax, dword ptr [ecx]
// 0041e986  8b5008               mov edx, dword ptr [eax + 8]
// 0041e989  ffd2                 call edx
// 0041e98b  897704               mov dword ptr [edi + 4], esi
// 0041e98e  5f                   pop edi
// 0041e98f  5e                   pop esi
// 0041e990  8bc5                 mov eax, ebp
// 0041e992  5d                   pop ebp
// 0041e993  5b                   pop ebx
// 0041e994  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041e998  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e99f  83c410               add esp, 0x10
// 0041e9a2  c20800               ret 8
// 0041e9a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041e9a9  5e                   pop esi
// 0041e9aa  8bc5                 mov eax, ebp
// 0041e9ac  5d                   pop ebp
// 0041e9ad  5b                   pop ebx
// 0041e9ae  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e9b5  83c410               add esp, 0x10
// 0041e9b8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
