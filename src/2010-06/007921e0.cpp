// from server: 100% by auto
// roc 2010-06 007921e0  unit: RBX::ContactStage  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007921e0
//
// 007921e0  8b442404             mov eax, dword ptr [esp + 4]
// 007921e4  8a5015               mov dl, byte ptr [eax + 0x15]
// 007921e7  885104               mov byte ptr [ecx + 4], dl
// 007921ea  8b09                 mov ecx, dword ptr [ecx]
// 007921ec  8b542414             mov edx, dword ptr [esp + 0x14]
// 007921f0  c7412000000000       mov dword ptr [ecx + 0x20], 0
// 007921f7  c7412400000000       mov dword ptr [ecx + 0x24], 0
// 007921fe  895128               mov dword ptr [ecx + 0x28], edx
// 00792201  80781400             cmp byte ptr [eax + 0x14], 0
// 00792205  8b5008               mov edx, dword ptr [eax + 8]
// 00792208  7402                 je 0x79220c
// 0079220a  f7da                 neg edx
// 0079220c  807c240800           cmp byte ptr [esp + 8], 0
// 00792211  742c                 je 0x79223f
// 00792213  56                   push esi
// 00792214  8b7010               mov esi, dword ptr [eax + 0x10]
// 00792217  6a38                 push 0x38
// 00792219  68e82aa200           push 0xa22ae8
// 0079221e  56                   push esi
// 0079221f  8b700c               mov esi, dword ptr [eax + 0xc]
// 00792222  56                   push esi
// 00792223  52                   push edx
// 00792224  8b5004               mov edx, dword ptr [eax + 4]
// 00792227  8b00                 mov eax, dword ptr [eax]
// 00792229  52                   push edx
// 0079222a  50                   push eax
// 0079222b  51                   push ecx
// 0079222c  e88f1bdeff           call 0x573dc0
// 00792231  83c420               add esp, 0x20
// 00792234  5e                   pop esi
// 00792235  50                   push eax
// 00792236  e8c5fdffff           call 0x792000
// 0079223b  59                   pop ecx
// 0079223c  c21400               ret 0x14
// 0079223f  6a38                 push 0x38
// 00792241  68e82aa200           push 0xa22ae8
// 00792246  52                   push edx
// 00792247  51                   push ecx
// 00792248  e8f320deff           call 0x574340
// 0079224d  83c410               add esp, 0x10
// 00792250  50                   push eax
// 00792251  e8aafdffff           call 0x792000
// 00792256  59                   pop ecx
// 00792257  c21400               ret 0x14
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?do_init@zlib_base@detail@iostreams@boost@@AAEXABUzlib_params@34@_NP6APAXPAXII@ZP6AX22@Z2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
