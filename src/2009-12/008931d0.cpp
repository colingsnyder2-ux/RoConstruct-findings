// roc 2009-12 008931d0  unit: CXTPMenuBar::CControlMDIButton  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008931d0
//
// 008931d0  6aff                 push -1
// 008931d2  6888149600           push 0x961488
// 008931d7  64a100000000         mov eax, dword ptr fs:[0]
// 008931dd  50                   push eax
// 008931de  83ec08               sub esp, 8
// 008931e1  53                   push ebx
// 008931e2  55                   push ebp
// 008931e3  56                   push esi
// 008931e4  57                   push edi
// 008931e5  a10052b600           mov eax, dword ptr [0xb65200]
// 008931ea  33c4                 xor eax, esp
// 008931ec  50                   push eax
// 008931ed  8d44241c             lea eax, [esp + 0x1c]
// 008931f1  64a300000000         mov dword ptr fs:[0], eax
// 008931f7  8bf9                 mov edi, ecx
// 008931f9  33db                 xor ebx, ebx
// 008931fb  895c2418             mov dword ptr [esp + 0x18], ebx
// 008931ff  c744241498019b00     mov dword ptr [esp + 0x14], 0x9b0198
// 00893207  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0089320b  8b4608               mov eax, dword ptr [esi + 8]
// 0089320e  6a58                 push 0x58
// 00893210  50                   push eax
// 00893211  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00893215  ff1564b19800         call dword ptr [0x98b164]
// 0089321b  53                   push ebx
// 0089321c  68ac2a9f00           push 0x9f2aac
// 00893221  50                   push eax
// 00893222  6a60                 push 0x60
// 00893224  6a50                 push 0x50
// 00893226  ff15a0b29800         call dword ptr [0x98b2a0]
// 0089322c  50                   push eax
// 0089322d  8d4c2420             lea ecx, [esp + 0x20]
// 00893231  e86c320900           call 0x9264a2
// 00893236  8b16                 mov edx, dword ptr [esi]
// 00893238  8b5230               mov edx, dword ptr [edx + 0x30]
// 0089323b  8d442414             lea eax, [esp + 0x14]
// 0089323f  50                   push eax
// 00893240  8bce                 mov ecx, esi
// 00893242  ffd2                 call edx
// 00893244  8bcf                 mov ecx, edi
// 00893246  8be8                 mov ebp, eax
// 00893248  e8f32cf6ff           call 0x7f5f40
// 0089324d  8b10                 mov edx, dword ptr [eax]
// 0089324f  57                   push edi
// 00893250  8bc8                 mov ecx, eax
// 00893252  8b4278               mov eax, dword ptr [edx + 0x78]
// 00893255  56                   push esi
// 00893256  ffd0                 call eax
// 00893258  8bcf                 mov ecx, edi
// 0089325a  e8e12cf6ff           call 0x7f5f40
// 0089325f  8b10                 mov edx, dword ptr [eax]
// 00893261  8b1e                 mov ebx, dword ptr [esi]
// 00893263  8bc8                 mov ecx, eax
// 00893265  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00893268  57                   push edi
// 00893269  ffd0                 call eax
// 0089326b  8b5338               mov edx, dword ptr [ebx + 0x38]
// 0089326e  50                   push eax
// 0089326f  8bce                 mov ecx, esi
// 00893271  ffd2                 call edx
// 00893273  8b06                 mov eax, dword ptr [esi]
// 00893275  8d9ff0000000         lea ebx, [edi + 0xf0]
// 0089327b  6a25                 push 0x25
// 0089327d  81c7c0000000         add edi, 0xc0
// 00893283  57                   push edi
// 00893284  8bcb                 mov ecx, ebx
// 00893286  89442434             mov dword ptr [esp + 0x34], eax
// 0089328a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00893290  50                   push eax
// 00893291  8bcb                 mov ecx, ebx
// 00893293  ff1580de9800         call dword ptr [0x98de80]
// 00893299  8b542438             mov edx, dword ptr [esp + 0x38]
// 0089329d  50                   push eax
// 0089329e  8b4270               mov eax, dword ptr [edx + 0x70]
// 008932a1  8bce                 mov ecx, esi
// 008932a3  ffd0                 call eax
// 008932a5  8b16                 mov edx, dword ptr [esi]
// 008932a7  8b4230               mov eax, dword ptr [edx + 0x30]
// 008932aa  55                   push ebp
// 008932ab  8bce                 mov ecx, esi
// 008932ad  ffd0                 call eax
// 008932af  8d4c2414             lea ecx, [esp + 0x14]
// 008932b3  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008932bb  c744241498019b00     mov dword ptr [esp + 0x14], 0x9b0198
// 008932c3  e868bfb7ff           call 0x40f230
// 008932c8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008932cc  64890d00000000       mov dword ptr fs:[0], ecx
// 008932d3  59                   pop ecx
// 008932d4  5f                   pop edi
// 008932d5  5e                   pop esi
// 008932d6  5d                   pop ebp
// 008932d7  5b                   pop ebx
// 008932d8  83c414               add esp, 0x14
// 008932db  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlMDIButton@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPMenuBar.cpp