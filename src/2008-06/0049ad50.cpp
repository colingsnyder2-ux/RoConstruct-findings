// roc 2008-06 0049ad50  unit: RBX::Network::VPlayers::?$SignalDesc  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ad50
//
// 0049ad50  6aff                 push -1
// 0049ad52  683bf47b00           push 0x7bf43b
// 0049ad57  64a100000000         mov eax, dword ptr fs:[0]
// 0049ad5d  50                   push eax
// 0049ad5e  64892500000000       mov dword ptr fs:[0], esp
// 0049ad65  51                   push ecx
// 0049ad66  53                   push ebx
// 0049ad67  56                   push esi
// 0049ad68  57                   push edi
// 0049ad69  6a18                 push 0x18
// 0049ad6b  8bf9                 mov edi, ecx
// 0049ad6d  e8ae5b2000           call 0x6a0920
// 0049ad72  83c404               add esp, 4
// 0049ad75  8944240c             mov dword ptr [esp + 0xc], eax
// 0049ad79  33f6                 xor esi, esi
// 0049ad7b  89742418             mov dword ptr [esp + 0x18], esi
// 0049ad7f  3bc6                 cmp eax, esi
// 0049ad81  740e                 je 0x49ad91
// 0049ad83  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049ad87  51                   push ecx
// 0049ad88  8bc8                 mov ecx, eax
// 0049ad8a  e8711d1100           call 0x5acb00
// 0049ad8f  8bf0                 mov esi, eax
// 0049ad91  8d5f04               lea ebx, [edi + 4]
// 0049ad94  56                   push esi
// 0049ad95  8bcb                 mov ecx, ebx
// 0049ad97  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0049ad9f  8937                 mov dword ptr [edi], esi
// 0049ada1  e81af9ffff           call 0x49a6c0
// 0049ada6  56                   push esi
// 0049ada7  56                   push esi
// 0049ada8  53                   push ebx
// 0049ada9  e86226feff           call 0x47d410
// 0049adae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049adb2  83c40c               add esp, 0xc
// 0049adb5  8bc7                 mov eax, edi
// 0049adb7  5f                   pop edi
// 0049adb8  5e                   pop esi
// 0049adb9  5b                   pop ebx
// 0049adba  64890d00000000       mov dword ptr fs:[0], ecx
// 0049adc1  83c410               add esp, 0x10
// 0049adc4  c20400               ret 4
// library rbxgs/v8datamodel\Selection.cpp (function ??0?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QAE@ABV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
