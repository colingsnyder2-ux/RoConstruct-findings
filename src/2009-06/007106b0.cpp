// from server: 100% by auto
// roc 2009-06 007106b0  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007106b0
//
// 007106b0  8b442404             mov eax, dword ptr [esp + 4]
// 007106b4  8a5015               mov dl, byte ptr [eax + 0x15]
// 007106b7  885104               mov byte ptr [ecx + 4], dl
// 007106ba  8b09                 mov ecx, dword ptr [ecx]
// 007106bc  8b542414             mov edx, dword ptr [esp + 0x14]
// 007106c0  c7412000000000       mov dword ptr [ecx + 0x20], 0
// 007106c7  c7412400000000       mov dword ptr [ecx + 0x24], 0
// 007106ce  895128               mov dword ptr [ecx + 0x28], edx
// 007106d1  80781400             cmp byte ptr [eax + 0x14], 0
// 007106d5  8b5008               mov edx, dword ptr [eax + 8]
// 007106d8  7402                 je 0x7106dc
// 007106da  f7da                 neg edx
// 007106dc  807c240800           cmp byte ptr [esp + 8], 0
// 007106e1  742c                 je 0x71070f
// 007106e3  56                   push esi
// 007106e4  8b7010               mov esi, dword ptr [eax + 0x10]
// 007106e7  6a38                 push 0x38
// 007106e9  68e8de8c00           push 0x8cdee8
// 007106ee  56                   push esi
// 007106ef  8b700c               mov esi, dword ptr [eax + 0xc]
// 007106f2  56                   push esi
// 007106f3  52                   push edx
// 007106f4  8b5004               mov edx, dword ptr [eax + 4]
// 007106f7  8b00                 mov eax, dword ptr [eax]
// 007106f9  52                   push edx
// 007106fa  50                   push eax
// 007106fb  51                   push ecx
// 007106fc  e87ffde7ff           call 0x590480
// 00710701  83c420               add esp, 0x20
// 00710704  5e                   pop esi
// 00710705  50                   push eax
// 00710706  e8c5fdffff           call 0x7104d0
// 0071070b  59                   pop ecx
// 0071070c  c21400               ret 0x14
// 0071070f  6a38                 push 0x38
// 00710711  68e8de8c00           push 0x8cdee8
// 00710716  52                   push edx
// 00710717  51                   push ecx
// 00710718  e8e302e8ff           call 0x590a00
// 0071071d  83c410               add esp, 0x10
// 00710720  50                   push eax
// 00710721  e8aafdffff           call 0x7104d0
// 00710726  59                   pop ecx
// 00710727  c21400               ret 0x14
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ?do_init@zlib_base@detail@iostreams@boost@@AAEXABUzlib_params@34@_NP6APAXPAXII@ZP6AX22@Z2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
