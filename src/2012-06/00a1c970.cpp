// roc 2012-06 00a1c970  unit: CXTPMenuBar::CControlMDIButton  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c970
//
// 00a1c970  6aff                 push -1
// 00a1c972  683841ae00           push 0xae4138
// 00a1c977  64a100000000         mov eax, dword ptr fs:[0]
// 00a1c97d  50                   push eax
// 00a1c97e  83ec08               sub esp, 8
// 00a1c981  53                   push ebx
// 00a1c982  55                   push ebp
// 00a1c983  56                   push esi
// 00a1c984  57                   push edi
// 00a1c985  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a1c98a  33c4                 xor eax, esp
// 00a1c98c  50                   push eax
// 00a1c98d  8d44241c             lea eax, [esp + 0x1c]
// 00a1c991  64a300000000         mov dword ptr fs:[0], eax
// 00a1c997  8bf9                 mov edi, ecx
// 00a1c999  33db                 xor ebx, ebx
// 00a1c99b  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a1c99f  c74424145007b600     mov dword ptr [esp + 0x14], 0xb60750
// 00a1c9a7  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00a1c9ab  8b4608               mov eax, dword ptr [esi + 8]
// 00a1c9ae  6a58                 push 0x58
// 00a1c9b0  50                   push eax
// 00a1c9b1  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00a1c9b5  ff154821b200         call dword ptr [0xb22148]
// 00a1c9bb  53                   push ebx
// 00a1c9bc  6854d2c000           push 0xc0d254
// 00a1c9c1  50                   push eax
// 00a1c9c2  6a60                 push 0x60
// 00a1c9c4  6a50                 push 0x50
// 00a1c9c6  ff150423b200         call dword ptr [0xb22304]
// 00a1c9cc  50                   push eax
// 00a1c9cd  8d4c2420             lea ecx, [esp + 0x20]
// 00a1c9d1  e8cccb0700           call 0xa995a2
// 00a1c9d6  8b16                 mov edx, dword ptr [esi]
// 00a1c9d8  8b5230               mov edx, dword ptr [edx + 0x30]
// 00a1c9db  8d442414             lea eax, [esp + 0x14]
// 00a1c9df  50                   push eax
// 00a1c9e0  8bce                 mov ecx, esi
// 00a1c9e2  ffd2                 call edx
// 00a1c9e4  8bcf                 mov ecx, edi
// 00a1c9e6  8be8                 mov ebp, eax
// 00a1c9e8  e80380f6ff           call 0x9849f0
// 00a1c9ed  8b10                 mov edx, dword ptr [eax]
// 00a1c9ef  57                   push edi
// 00a1c9f0  8bc8                 mov ecx, eax
// 00a1c9f2  8b4278               mov eax, dword ptr [edx + 0x78]
// 00a1c9f5  56                   push esi
// 00a1c9f6  ffd0                 call eax
// 00a1c9f8  8bcf                 mov ecx, edi
// 00a1c9fa  e8f17ff6ff           call 0x9849f0
// 00a1c9ff  8b10                 mov edx, dword ptr [eax]
// 00a1ca01  8b1e                 mov ebx, dword ptr [esi]
// 00a1ca03  8bc8                 mov ecx, eax
// 00a1ca05  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00a1ca08  57                   push edi
// 00a1ca09  ffd0                 call eax
// 00a1ca0b  8b5338               mov edx, dword ptr [ebx + 0x38]
// 00a1ca0e  50                   push eax
// 00a1ca0f  8bce                 mov ecx, esi
// 00a1ca11  ffd2                 call edx
// 00a1ca13  8b06                 mov eax, dword ptr [esi]
// 00a1ca15  8d9ff0000000         lea ebx, [edi + 0xf0]
// 00a1ca1b  6a25                 push 0x25
// 00a1ca1d  81c7c0000000         add edi, 0xc0
// 00a1ca23  57                   push edi
// 00a1ca24  8bcb                 mov ecx, ebx
// 00a1ca26  89442434             mov dword ptr [esp + 0x34], eax
// 00a1ca2a  ff155846b200         call dword ptr [0xb24658]
// 00a1ca30  50                   push eax
// 00a1ca31  8bcb                 mov ecx, ebx
// 00a1ca33  ff159847b200         call dword ptr [0xb24798]
// 00a1ca39  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a1ca3d  50                   push eax
// 00a1ca3e  8b4270               mov eax, dword ptr [edx + 0x70]
// 00a1ca41  8bce                 mov ecx, esi
// 00a1ca43  ffd0                 call eax
// 00a1ca45  8b16                 mov edx, dword ptr [esi]
// 00a1ca47  8b4230               mov eax, dword ptr [edx + 0x30]
// 00a1ca4a  55                   push ebp
// 00a1ca4b  8bce                 mov ecx, esi
// 00a1ca4d  ffd0                 call eax
// 00a1ca4f  8d4c2414             lea ecx, [esp + 0x14]
// 00a1ca53  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00a1ca5b  c74424145007b600     mov dword ptr [esp + 0x14], 0xb60750
// 00a1ca63  e898a19fff           call 0x416c00
// 00a1ca68  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a1ca6c  64890d00000000       mov dword ptr fs:[0], ecx
// 00a1ca73  59                   pop ecx
// 00a1ca74  5f                   pop edi
// 00a1ca75  5e                   pop esi
// 00a1ca76  5d                   pop ebp
// 00a1ca77  5b                   pop ebx
// 00a1ca78  83c414               add esp, 0x14
// 00a1ca7b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlMDIButton@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPMenuBar.cpp