// from server: 100% by auto
// roc 2007-08 004b8f20  unit: RakPeer  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8f20
//
// 004b8f20  6aff                 push -1
// 004b8f22  68e6b57400           push 0x74b5e6
// 004b8f27  64a100000000         mov eax, dword ptr fs:[0]
// 004b8f2d  50                   push eax
// 004b8f2e  53                   push ebx
// 004b8f2f  56                   push esi
// 004b8f30  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b8f35  33c4                 xor eax, esp
// 004b8f37  50                   push eax
// 004b8f38  8d44240c             lea eax, [esp + 0xc]
// 004b8f3c  64a300000000         mov dword ptr fs:[0], eax
// 004b8f42  8bf1                 mov esi, ecx
// 004b8f44  8b06                 mov eax, dword ptr [esi]
// 004b8f46  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004b8f49  ffd2                 call edx
// 004b8f4b  84c0                 test al, al
// 004b8f4d  7416                 je 0x4b8f65
// 004b8f4f  32c0                 xor al, al
// 004b8f51  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b8f55  64890d00000000       mov dword ptr fs:[0], ecx
// 004b8f5c  59                   pop ecx
// 004b8f5d  5e                   pop esi
// 004b8f5e  5b                   pop ebx
// 004b8f5f  83c40c               add esp, 0xc
// 004b8f62  c20800               ret 8
// 004b8f65  8b06                 mov eax, dword ptr [esi]
// 004b8f67  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004b8f6b  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 004b8f71  53                   push ebx
// 004b8f72  8bce                 mov ecx, esi
// 004b8f74  ffd2                 call edx
// 004b8f76  6804080000           push 0x804
// 004b8f7b  e8766f1700           call 0x62fef6
// 004b8f80  83c404               add esp, 4
// 004b8f83  84db                 test bl, bl
// 004b8f85  89442420             mov dword ptr [esp + 0x20], eax
// 004b8f89  742f                 je 0x4b8fba
// 004b8f8b  85c0                 test eax, eax
// 004b8f8d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b8f95  7414                 je 0x4b8fab
// 004b8f97  8bc8                 mov ecx, eax
// 004b8f99  e8a26f0100           call 0x4cff40
// 004b8f9e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b8fa2  8986cc060000         mov dword ptr [esi + 0x6cc], eax
// 004b8fa8  51                   push ecx
// 004b8fa9  eb31                 jmp 0x4b8fdc
// 004b8fab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b8faf  33c0                 xor eax, eax
// 004b8fb1  8986cc060000         mov dword ptr [esi + 0x6cc], eax
// 004b8fb7  51                   push ecx
// 004b8fb8  eb22                 jmp 0x4b8fdc
// 004b8fba  85c0                 test eax, eax
// 004b8fbc  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004b8fc4  7409                 je 0x4b8fcf
// 004b8fc6  8bc8                 mov ecx, eax
// 004b8fc8  e8736f0100           call 0x4cff40
// 004b8fcd  eb02                 jmp 0x4b8fd1
// 004b8fcf  33c0                 xor eax, eax
// 004b8fd1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004b8fd5  8986d0060000         mov dword ptr [esi + 0x6d0], eax
// 004b8fdb  52                   push edx
// 004b8fdc  8bc8                 mov ecx, eax
// 004b8fde  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004b8fe6  e815b30000           call 0x4c4300
// 004b8feb  b001                 mov al, 1
// 004b8fed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b8ff1  64890d00000000       mov dword ptr fs:[0], ecx
// 004b8ff8  59                   pop ecx
// 004b8ff9  5e                   pop esi
// 004b8ffa  5b                   pop ebx
// 004b8ffb  83c40c               add esp, 0xc
// 004b8ffe  c20800               ret 8

// from server: 38% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp