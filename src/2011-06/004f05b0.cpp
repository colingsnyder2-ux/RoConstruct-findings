// roc 2011-06 004f05b0  unit: RBX::Network::IdSerializer  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f05b0
//
// 004f05b0  51                   push ecx
// 004f05b1  56                   push esi
// 004f05b2  8bf1                 mov esi, ecx
// 004f05b4  e8876cffff           call 0x4e7240
// 004f05b9  6a01                 push 1
// 004f05bb  8bce                 mov ecx, esi
// 004f05bd  6a10                 push 0x10
// 004f05bf  84c0                 test al, al
// 004f05c1  7530                 jne 0x4f05f3
// 004f05c3  8d44240c             lea eax, [esp + 0xc]
// 004f05c7  50                   push eax
// 004f05c8  e813c4ffff           call 0x4ec9e0
// 004f05cd  84c0                 test al, al
// 004f05cf  741b                 je 0x4f05ec
// 004f05d1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f05d5  6a02                 push 2
// 004f05d7  51                   push ecx
// 004f05d8  8d54240c             lea edx, [esp + 0xc]
// 004f05dc  52                   push edx
// 004f05dd  e8bec7ffff           call 0x4ecda0
// 004f05e2  83c40c               add esp, 0xc
// 004f05e5  b001                 mov al, 1
// 004f05e7  5e                   pop esi
// 004f05e8  59                   pop ecx
// 004f05e9  c20400               ret 4
// 004f05ec  32c0                 xor al, al
// 004f05ee  5e                   pop esi
// 004f05ef  59                   pop ecx
// 004f05f0  c20400               ret 4
// 004f05f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f05f7  50                   push eax
// 004f05f8  e8e3c3ffff           call 0x4ec9e0
// 004f05fd  5e                   pop esi
// 004f05fe  59                   pop ecx
// 004f05ff  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Read@G@BitStream@RakNet@@QAE_NAAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
