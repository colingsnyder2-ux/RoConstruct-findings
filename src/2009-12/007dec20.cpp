// roc 2009-12 007dec20  unit: RBX::ContactStage  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007dec20
//
// 007dec20  8b442404             mov eax, dword ptr [esp + 4]
// 007dec24  8a5015               mov dl, byte ptr [eax + 0x15]
// 007dec27  885104               mov byte ptr [ecx + 4], dl
// 007dec2a  8b09                 mov ecx, dword ptr [ecx]
// 007dec2c  8b542414             mov edx, dword ptr [esp + 0x14]
// 007dec30  c7412000000000       mov dword ptr [ecx + 0x20], 0
// 007dec37  c7412400000000       mov dword ptr [ecx + 0x24], 0
// 007dec3e  895128               mov dword ptr [ecx + 0x28], edx
// 007dec41  80781400             cmp byte ptr [eax + 0x14], 0
// 007dec45  8b5008               mov edx, dword ptr [eax + 8]
// 007dec48  7402                 je 0x7dec4c
// 007dec4a  f7da                 neg edx
// 007dec4c  807c240800           cmp byte ptr [esp + 8], 0
// 007dec51  742c                 je 0x7dec7f
// 007dec53  56                   push esi
// 007dec54  8b7010               mov esi, dword ptr [eax + 0x10]
// 007dec57  6a38                 push 0x38
// 007dec59  68884d9c00           push 0x9c4d88
// 007dec5e  56                   push esi
// 007dec5f  8b700c               mov esi, dword ptr [eax + 0xc]
// 007dec62  56                   push esi
// 007dec63  52                   push edx
// 007dec64  8b5004               mov edx, dword ptr [eax + 4]
// 007dec67  8b00                 mov eax, dword ptr [eax]
// 007dec69  52                   push edx
// 007dec6a  50                   push eax
// 007dec6b  51                   push ecx
// 007dec6c  e82f38e3ff           call 0x6124a0
// 007dec71  83c420               add esp, 0x20
// 007dec74  5e                   pop esi
// 007dec75  50                   push eax
// 007dec76  e8c5fdffff           call 0x7dea40
// 007dec7b  59                   pop ecx
// 007dec7c  c21400               ret 0x14
// 007dec7f  6a38                 push 0x38
// 007dec81  68884d9c00           push 0x9c4d88
// 007dec86  52                   push edx
// 007dec87  51                   push ecx
// 007dec88  e8933de3ff           call 0x612a20
// 007dec8d  83c410               add esp, 0x10
// 007dec90  50                   push eax
// 007dec91  e8aafdffff           call 0x7dea40
// 007dec96  59                   pop ecx
// 007dec97  c21400               ret 0x14
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?do_init@zlib_base@detail@iostreams@boost@@AAEXABUzlib_params@34@_NP6APAXPAXII@ZP6AX22@Z2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
