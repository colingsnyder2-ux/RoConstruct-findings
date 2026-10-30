// roc 2009-06 007b5ff0  unit: CXTPMenuBar::CControlMDIButton  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b5ff0
//
// 007b5ff0  6aff                 push -1
// 007b5ff2  68a8288800           push 0x8828a8
// 007b5ff7  64a100000000         mov eax, dword ptr fs:[0]
// 007b5ffd  50                   push eax
// 007b5ffe  83ec08               sub esp, 8
// 007b6001  53                   push ebx
// 007b6002  55                   push ebp
// 007b6003  56                   push esi
// 007b6004  57                   push edi
// 007b6005  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007b600a  33c4                 xor eax, esp
// 007b600c  50                   push eax
// 007b600d  8d44241c             lea eax, [esp + 0x1c]
// 007b6011  64a300000000         mov dword ptr fs:[0], eax
// 007b6017  8bf9                 mov edi, ecx
// 007b6019  33db                 xor ebx, ebx
// 007b601b  895c2418             mov dword ptr [esp + 0x18], ebx
// 007b601f  c7442414e8bb8b00     mov dword ptr [esp + 0x14], 0x8bbbe8
// 007b6027  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007b602b  8b4608               mov eax, dword ptr [esi + 8]
// 007b602e  6a58                 push 0x58
// 007b6030  50                   push eax
// 007b6031  895c242c             mov dword ptr [esp + 0x2c], ebx
// 007b6035  ff1558e18900         call dword ptr [0x89e158]
// 007b603b  53                   push ebx
// 007b603c  68cc258f00           push 0x8f25cc
// 007b6041  50                   push eax
// 007b6042  6a60                 push 0x60
// 007b6044  6a50                 push 0x50
// 007b6046  ff1574e28900         call dword ptr [0x89e274]
// 007b604c  50                   push eax
// 007b604d  8d4c2420             lea ecx, [esp + 0x20]
// 007b6051  e8e65e0900           call 0x84bf3c
// 007b6056  8b16                 mov edx, dword ptr [esi]
// 007b6058  8b5230               mov edx, dword ptr [edx + 0x30]
// 007b605b  8d442414             lea eax, [esp + 0x14]
// 007b605f  50                   push eax
// 007b6060  8bce                 mov ecx, esi
// 007b6062  ffd2                 call edx
// 007b6064  8bcf                 mov ecx, edi
// 007b6066  8be8                 mov ebp, eax
// 007b6068  e8b398f6ff           call 0x71f920
// 007b606d  8b10                 mov edx, dword ptr [eax]
// 007b606f  57                   push edi
// 007b6070  8bc8                 mov ecx, eax
// 007b6072  8b4278               mov eax, dword ptr [edx + 0x78]
// 007b6075  56                   push esi
// 007b6076  ffd0                 call eax
// 007b6078  8bcf                 mov ecx, edi
// 007b607a  e8a198f6ff           call 0x71f920
// 007b607f  8b10                 mov edx, dword ptr [eax]
// 007b6081  8b1e                 mov ebx, dword ptr [esi]
// 007b6083  8bc8                 mov ecx, eax
// 007b6085  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007b6088  57                   push edi
// 007b6089  ffd0                 call eax
// 007b608b  8b5338               mov edx, dword ptr [ebx + 0x38]
// 007b608e  50                   push eax
// 007b608f  8bce                 mov ecx, esi
// 007b6091  ffd2                 call edx
// 007b6093  8b06                 mov eax, dword ptr [esi]
// 007b6095  8d9ff0000000         lea ebx, [edi + 0xf0]
// 007b609b  6a25                 push 0x25
// 007b609d  81c7c0000000         add edi, 0xc0
// 007b60a3  57                   push edi
// 007b60a4  8bcb                 mov ecx, ebx
// 007b60a6  89442434             mov dword ptr [esp + 0x34], eax
// 007b60aa  ff1554fb8900         call dword ptr [0x89fb54]
// 007b60b0  50                   push eax
// 007b60b1  8bcb                 mov ecx, ebx
// 007b60b3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007b60b9  8b542438             mov edx, dword ptr [esp + 0x38]
// 007b60bd  50                   push eax
// 007b60be  8b4270               mov eax, dword ptr [edx + 0x70]
// 007b60c1  8bce                 mov ecx, esi
// 007b60c3  ffd0                 call eax
// 007b60c5  8b16                 mov edx, dword ptr [esi]
// 007b60c7  8b4230               mov eax, dword ptr [edx + 0x30]
// 007b60ca  55                   push ebp
// 007b60cb  8bce                 mov ecx, esi
// 007b60cd  ffd0                 call eax
// 007b60cf  8d4c2414             lea ecx, [esp + 0x14]
// 007b60d3  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 007b60db  c7442414e8bb8b00     mov dword ptr [esp + 0x14], 0x8bbbe8
// 007b60e3  e8e893c5ff           call 0x40f4d0
// 007b60e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b60ec  64890d00000000       mov dword ptr fs:[0], ecx
// 007b60f3  59                   pop ecx
// 007b60f4  5f                   pop edi
// 007b60f5  5e                   pop esi
// 007b60f6  5d                   pop ebp
// 007b60f7  5b                   pop ebx
// 007b60f8  83c414               add esp, 0x14
// 007b60fb  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlMDIButton@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPMenuBar.cpp