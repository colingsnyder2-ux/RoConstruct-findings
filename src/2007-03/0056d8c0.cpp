// roc 2007-03 0056d8c0  unit: seg_00560000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056d8c0
//
// 0056d8c0  56                   push esi
// 0056d8c1  6a08                 push 8
// 0056d8c3  8bf1                 mov esi, ecx
// 0056d8c5  e83e080b00           call 0x61e108
// 0056d8ca  83c404               add esp, 4
// 0056d8cd  85c0                 test eax, eax
// 0056d8cf  7411                 je 0x56d8e2
// 0056d8d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d8d5  c7005c627800         mov dword ptr [eax], 0x78625c
// 0056d8db  8b11                 mov edx, dword ptr [ecx]
// 0056d8dd  895004               mov dword ptr [eax + 4], edx
// 0056d8e0  eb02                 jmp 0x56d8e4
// 0056d8e2  33c0                 xor eax, eax
// 0056d8e4  8b0e                 mov ecx, dword ptr [esi]
// 0056d8e6  85c9                 test ecx, ecx
// 0056d8e8  8906                 mov dword ptr [esi], eax
// 0056d8ea  7408                 je 0x56d8f4
// 0056d8ec  8b01                 mov eax, dword ptr [ecx]
// 0056d8ee  8b10                 mov edx, dword ptr [eax]
// 0056d8f0  6a01                 push 1
// 0056d8f2  ffd2                 call edx
// 0056d8f4  8bc6                 mov eax, esi
// 0056d8f6  5e                   pop esi
// 0056d8f7  c20400               ret 4
// library rbxgs-net/Server.cpp (function ??$?4H@any@boost@@QAEAAV01@ABH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
