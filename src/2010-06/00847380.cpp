// roc 2010-06 00847380  unit: CXTPMenuBar::CControlMDIButton  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00847380
//
// 00847380  6aff                 push -1
// 00847382  6808749b00           push 0x9b7408
// 00847387  64a100000000         mov eax, dword ptr fs:[0]
// 0084738d  50                   push eax
// 0084738e  83ec08               sub esp, 8
// 00847391  53                   push ebx
// 00847392  55                   push ebp
// 00847393  56                   push esi
// 00847394  57                   push edi
// 00847395  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0084739a  33c4                 xor eax, esp
// 0084739c  50                   push eax
// 0084739d  8d44241c             lea eax, [esp + 0x1c]
// 008473a1  64a300000000         mov dword ptr fs:[0], eax
// 008473a7  8bf9                 mov edi, ecx
// 008473a9  33db                 xor ebx, ebx
// 008473ab  895c2418             mov dword ptr [esp + 0x18], ebx
// 008473af  c7442414080ea100     mov dword ptr [esp + 0x14], 0xa10e08
// 008473b7  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008473bb  8b4608               mov eax, dword ptr [esi + 8]
// 008473be  6a58                 push 0x58
// 008473c0  50                   push eax
// 008473c1  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008473c5  ff15b4a09e00         call dword ptr [0x9ea0b4]
// 008473cb  53                   push ebx
// 008473cc  680c5fa500           push 0xa55f0c
// 008473d1  50                   push eax
// 008473d2  6a60                 push 0x60
// 008473d4  6a50                 push 0x50
// 008473d6  ff15c8a29e00         call dword ptr [0x9ea2c8]
// 008473dc  50                   push eax
// 008473dd  8d4c2420             lea ecx, [esp + 0x20]
// 008473e1  e8bc591300           call 0x97cda2
// 008473e6  8b16                 mov edx, dword ptr [esi]
// 008473e8  8b5230               mov edx, dword ptr [edx + 0x30]
// 008473eb  8d442414             lea eax, [esp + 0x14]
// 008473ef  50                   push eax
// 008473f0  8bce                 mov ecx, esi
// 008473f2  ffd2                 call edx
// 008473f4  8bcf                 mov ecx, edi
// 008473f6  8be8                 mov ebp, eax
// 008473f8  e8832cf6ff           call 0x7aa080
// 008473fd  8b10                 mov edx, dword ptr [eax]
// 008473ff  57                   push edi
// 00847400  8bc8                 mov ecx, eax
// 00847402  8b4278               mov eax, dword ptr [edx + 0x78]
// 00847405  56                   push esi
// 00847406  ffd0                 call eax
// 00847408  8bcf                 mov ecx, edi
// 0084740a  e8712cf6ff           call 0x7aa080
// 0084740f  8b10                 mov edx, dword ptr [eax]
// 00847411  8b1e                 mov ebx, dword ptr [esi]
// 00847413  8bc8                 mov ecx, eax
// 00847415  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00847418  57                   push edi
// 00847419  ffd0                 call eax
// 0084741b  8b5338               mov edx, dword ptr [ebx + 0x38]
// 0084741e  50                   push eax
// 0084741f  8bce                 mov ecx, esi
// 00847421  ffd2                 call edx
// 00847423  8b06                 mov eax, dword ptr [esi]
// 00847425  8d9ff0000000         lea ebx, [edi + 0xf0]
// 0084742b  6a25                 push 0x25
// 0084742d  81c7c0000000         add edi, 0xc0
// 00847433  57                   push edi
// 00847434  8bcb                 mov ecx, ebx
// 00847436  89442434             mov dword ptr [esp + 0x34], eax
// 0084743a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00847440  50                   push eax
// 00847441  8bcb                 mov ecx, ebx
// 00847443  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00847449  8b542438             mov edx, dword ptr [esp + 0x38]
// 0084744d  50                   push eax
// 0084744e  8b4270               mov eax, dword ptr [edx + 0x70]
// 00847451  8bce                 mov ecx, esi
// 00847453  ffd0                 call eax
// 00847455  8b16                 mov edx, dword ptr [esi]
// 00847457  8b4230               mov eax, dword ptr [edx + 0x30]
// 0084745a  55                   push ebp
// 0084745b  8bce                 mov ecx, esi
// 0084745d  ffd0                 call eax
// 0084745f  8d4c2414             lea ecx, [esp + 0x14]
// 00847463  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0084746b  c7442414080ea100     mov dword ptr [esp + 0x14], 0xa10e08
// 00847473  e8e881bcff           call 0x40f660
// 00847478  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084747c  64890d00000000       mov dword ptr fs:[0], ecx
// 00847483  59                   pop ecx
// 00847484  5f                   pop edi
// 00847485  5e                   pop esi
// 00847486  5d                   pop ebp
// 00847487  5b                   pop ebx
// 00847488  83c414               add esp, 0x14
// 0084748b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlMDIButton@CXTPMenuBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPMenuBar.cpp