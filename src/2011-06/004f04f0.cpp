// roc 2011-06 004f04f0  unit: RBX::Network::IdSerializer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f04f0
//
// 004f04f0  51                   push ecx
// 004f04f1  56                   push esi
// 004f04f2  8bf1                 mov esi, ecx
// 004f04f4  e8476dffff           call 0x4e7240
// 004f04f9  6a01                 push 1
// 004f04fb  8bce                 mov ecx, esi
// 004f04fd  6a20                 push 0x20
// 004f04ff  84c0                 test al, al
// 004f0501  7530                 jne 0x4f0533
// 004f0503  8d44240c             lea eax, [esp + 0xc]
// 004f0507  50                   push eax
// 004f0508  e8d3c4ffff           call 0x4ec9e0
// 004f050d  84c0                 test al, al
// 004f050f  741b                 je 0x4f052c
// 004f0511  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f0515  6a04                 push 4
// 004f0517  51                   push ecx
// 004f0518  8d54240c             lea edx, [esp + 0xc]
// 004f051c  52                   push edx
// 004f051d  e87ec8ffff           call 0x4ecda0
// 004f0522  83c40c               add esp, 0xc
// 004f0525  b001                 mov al, 1
// 004f0527  5e                   pop esi
// 004f0528  59                   pop ecx
// 004f0529  c20400               ret 4
// 004f052c  32c0                 xor al, al
// 004f052e  5e                   pop esi
// 004f052f  59                   pop ecx
// 004f0530  c20400               ret 4
// 004f0533  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f0537  50                   push eax
// 004f0538  e8a3c4ffff           call 0x4ec9e0
// 004f053d  5e                   pop esi
// 004f053e  59                   pop ecx
// 004f053f  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Read@I@BitStream@RakNet@@QAE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
