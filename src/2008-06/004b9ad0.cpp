// roc 2008-06 004b9ad0  unit: RBX::Network::Replicator  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b9ad0
//
// 004b9ad0  6aff                 push -1
// 004b9ad2  68588f7c00           push 0x7c8f58
// 004b9ad7  64a100000000         mov eax, dword ptr fs:[0]
// 004b9add  50                   push eax
// 004b9ade  64892500000000       mov dword ptr fs:[0], esp
// 004b9ae5  51                   push ecx
// 004b9ae6  56                   push esi
// 004b9ae7  8bf1                 mov esi, ecx
// 004b9ae9  89742404             mov dword ptr [esp + 4], esi
// 004b9aed  e87efaffff           call 0x4b9570
// 004b9af2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b9afa  e8019dffff           call 0x4b3800
// 004b9aff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b9b03  89461c               mov dword ptr [esi + 0x1c], eax
// 004b9b06  c706d4558200         mov dword ptr [esi], 0x8255d4
// 004b9b0c  c74610c8558200       mov dword ptr [esi + 0x10], 0x8255c8
// 004b9b13  c74614c0558200       mov dword ptr [esi + 0x14], 0x8255c0
// 004b9b1a  c74620b8558200       mov dword ptr [esi + 0x20], 0x8255b8
// 004b9b21  c74624a8558200       mov dword ptr [esi + 0x24], 0x8255a8
// 004b9b28  c7464498558200       mov dword ptr [esi + 0x44], 0x825598
// 004b9b2f  c7466488558200       mov dword ptr [esi + 0x64], 0x825588
// 004b9b36  c7868400000078558200 mov dword ptr [esi + 0x84], 0x825578
// 004b9b40  c786a400000068558200 mov dword ptr [esi + 0xa4], 0x825568
// 004b9b4a  c786c400000058558200 mov dword ptr [esi + 0xc4], 0x825558
// 004b9b54  8bc6                 mov eax, esi
// 004b9b56  5e                   pop esi
// 004b9b57  64890d00000000       mov dword ptr fs:[0], ecx
// 004b9b5e  83c410               add esp, 0x10
// 004b9b61  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
