// roc 2012-06 0056c080  unit: RBX::Network::IdSerializer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056c080
//
// 0056c080  83ec08               sub esp, 8
// 0056c083  56                   push esi
// 0056c084  8bf1                 mov esi, ecx
// 0056c086  e845bbffff           call 0x567bd0
// 0056c08b  6a01                 push 1
// 0056c08d  8bce                 mov ecx, esi
// 0056c08f  6a40                 push 0x40
// 0056c091  84c0                 test al, al
// 0056c093  7534                 jne 0x56c0c9
// 0056c095  8d44240c             lea eax, [esp + 0xc]
// 0056c099  50                   push eax
// 0056c09a  e8e1b6ffff           call 0x567780
// 0056c09f  84c0                 test al, al
// 0056c0a1  741d                 je 0x56c0c0
// 0056c0a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056c0a7  6a08                 push 8
// 0056c0a9  51                   push ecx
// 0056c0aa  8d54240c             lea edx, [esp + 0xc]
// 0056c0ae  52                   push edx
// 0056c0af  e88cbaffff           call 0x567b40
// 0056c0b4  83c40c               add esp, 0xc
// 0056c0b7  b001                 mov al, 1
// 0056c0b9  5e                   pop esi
// 0056c0ba  83c408               add esp, 8
// 0056c0bd  c20400               ret 4
// 0056c0c0  32c0                 xor al, al
// 0056c0c2  5e                   pop esi
// 0056c0c3  83c408               add esp, 8
// 0056c0c6  c20400               ret 4
// 0056c0c9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056c0cd  50                   push eax
// 0056c0ce  e8adb6ffff           call 0x567780
// 0056c0d3  5e                   pop esi
// 0056c0d4  83c408               add esp, 8
// 0056c0d7  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Read@_K@BitStream@RakNet@@QAE_NAA_K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
