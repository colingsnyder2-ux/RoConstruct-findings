// roc 2012-06 009f99e0  unit: CXTPDockingPaneAutoHidePanel  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f99e0
//
// 009f99e0  51                   push ecx
// 009f99e1  56                   push esi
// 009f99e2  8bf1                 mov esi, ecx
// 009f99e4  8b4608               mov eax, dword ptr [esi + 8]
// 009f99e7  57                   push edi
// 009f99e8  33ff                 xor edi, edi
// 009f99ea  3bc7                 cmp eax, edi
// 009f99ec  746a                 je 0x9f9a58
// 009f99ee  53                   push ebx
// 009f99ef  8b1d7423b200         mov ebx, dword ptr [0xb22374]
// 009f99f5  8d4c240c             lea ecx, [esp + 0xc]
// 009f99f9  51                   push ecx
// 009f99fa  50                   push eax
// 009f99fb  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 009f9a02  897c2414             mov dword ptr [esp + 0x14], edi
// 009f9a06  ffd3                 call ebx
// 009f9a08  85c0                 test eax, eax
// 009f9a0a  743a                 je 0x9f9a46
// 009f9a0c  55                   push ebp
// 009f9a0d  8b2de421b200         mov ebp, dword ptr [0xb221e4]
// 009f9a13  817c241003010000     cmp dword ptr [esp + 0x10], 0x103
// 009f9a1b  7528                 jne 0x9f9a45
// 009f9a1d  8b5608               mov edx, dword ptr [esi + 8]
// 009f9a20  47                   inc edi
// 009f9a21  83ff0a               cmp edi, 0xa
// 009f9a24  7716                 ja 0x9f9a3c
// 009f9a26  6a64                 push 0x64
// 009f9a28  52                   push edx
// 009f9a29  ffd5                 call ebp
// 009f9a2b  8b4e08               mov ecx, dword ptr [esi + 8]
// 009f9a2e  8d442410             lea eax, [esp + 0x10]
// 009f9a32  50                   push eax
// 009f9a33  51                   push ecx
// 009f9a34  ffd3                 call ebx
// 009f9a36  85c0                 test eax, eax
// 009f9a38  75d9                 jne 0x9f9a13
// 009f9a3a  eb09                 jmp 0x9f9a45
// 009f9a3c  6a00                 push 0
// 009f9a3e  52                   push edx
// 009f9a3f  ff157023b200         call dword ptr [0xb22370]
// 009f9a45  5d                   pop ebp
// 009f9a46  8b4608               mov eax, dword ptr [esi + 8]
// 009f9a49  50                   push eax
// 009f9a4a  ff15e821b200         call dword ptr [0xb221e8]
// 009f9a50  c7460800000000       mov dword ptr [esi + 8], 0
// 009f9a57  5b                   pop ebx
// 009f9a58  5f                   pop edi
// 009f9a59  5e                   pop esi
// 009f9a5a  59                   pop ecx
// 009f9a5b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StopThread@CXTPSoundManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
