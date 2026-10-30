// roc 2009-12 008619f0  unit: CXTPToolTipContext::CHTMLToolTip  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008619f0
//
// 008619f0  6aff                 push -1
// 008619f2  687de99500           push 0x95e97d
// 008619f7  64a100000000         mov eax, dword ptr fs:[0]
// 008619fd  50                   push eax
// 008619fe  81ec5c010000         sub esp, 0x15c
// 00861a04  a10052b600           mov eax, dword ptr [0xb65200]
// 00861a09  33c4                 xor eax, esp
// 00861a0b  89842458010000       mov dword ptr [esp + 0x158], eax
// 00861a12  53                   push ebx
// 00861a13  55                   push ebp
// 00861a14  56                   push esi
// 00861a15  57                   push edi
// 00861a16  a10052b600           mov eax, dword ptr [0xb65200]
// 00861a1b  33c4                 xor eax, esp
// 00861a1d  50                   push eax
// 00861a1e  8d842470010000       lea eax, [esp + 0x170]
// 00861a25  64a300000000         mov dword ptr fs:[0], eax
// 00861a2b  8bf1                 mov esi, ecx
// 00861a2d  89742414             mov dword ptr [esp + 0x14], esi
// 00861a31  e80c4a0c00           call 0x926442
// 00861a36  33db                 xor ebx, ebx
// 00861a38  8dbe98000000         lea edi, [esi + 0x98]
// 00861a3e  c706acdf9f00         mov dword ptr [esi], 0x9fdfac
// 00861a44  899c2478010000       mov dword ptr [esp + 0x178], ebx
// 00861a4b  895f04               mov dword ptr [edi + 4], ebx
// 00861a4e  c70798019b00         mov dword ptr [edi], 0x9b0198
// 00861a54  8daea0000000         lea ebp, [esi + 0xa0]
// 00861a5a  895d04               mov dword ptr [ebp + 4], ebx
// 00861a5d  c7450098019b00       mov dword ptr [ebp], 0x9b0198
// 00861a64  53                   push ebx
// 00861a65  c684247c01000002     mov byte ptr [esp + 0x17c], 2
// 00861a6d  895e60               mov dword ptr [esi + 0x60], ebx
// 00861a70  895e20               mov dword ptr [esi + 0x20], ebx
// 00861a73  895e24               mov dword ptr [esi + 0x24], ebx
// 00861a76  c7462801000000       mov dword ptr [esi + 0x28], 1
// 00861a7d  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00861a80  895e30               mov dword ptr [esi + 0x30], ebx
// 00861a83  ff15dccb9800         call dword ptr [0x98cbdc]
// 00861a89  99                   cdq 
// 00861a8a  2bc2                 sub eax, edx
// 00861a8c  d1f8                 sar eax, 1
// 00861a8e  6a2c                 push 0x2c
// 00861a90  89463c               mov dword ptr [esi + 0x3c], eax
// 00861a93  8d4664               lea eax, [esi + 0x64]
// 00861a96  53                   push ebx
// 00861a97  50                   push eax
// 00861a98  e80730f9ff           call 0x7f4aa4
// 00861a9d  83c40c               add esp, 0xc
// 00861aa0  e87b9cfdff           call 0x83b720
// 00861aa5  8bc8                 mov ecx, eax
// 00861aa7  e844acfdff           call 0x83c6f0
// 00861aac  53                   push ebx
// 00861aad  53                   push ebx
// 00861aae  53                   push ebx
// 00861aaf  894634               mov dword ptr [esi + 0x34], eax
// 00861ab2  83c8ff               or eax, 0xffffffff
// 00861ab5  53                   push ebx
// 00861ab6  8d4e44               lea ecx, [esi + 0x44]
// 00861ab9  51                   push ecx
// 00861aba  898690000000         mov dword ptr [esi + 0x90], eax
// 00861ac0  898694000000         mov dword ptr [esi + 0x94], eax
// 00861ac6  c7463801000000       mov dword ptr [esi + 0x38], 1
// 00861acd  c7464002000000       mov dword ptr [esi + 0x40], 2
// 00861ad4  ff1538ca9800         call dword ptr [0x98ca38]
// 00861ada  6854010000           push 0x154
// 00861adf  83c8ff               or eax, 0xffffffff
// 00861ae2  8d54241c             lea edx, [esp + 0x1c]
// 00861ae6  53                   push ebx
// 00861ae7  52                   push edx
// 00861ae8  894658               mov dword ptr [esi + 0x58], eax
// 00861aeb  894654               mov dword ptr [esi + 0x54], eax
// 00861aee  89465c               mov dword ptr [esi + 0x5c], eax
// 00861af1  e8ae2ff9ff           call 0x7f4aa4
// 00861af6  83c40c               add esp, 0xc
// 00861af9  53                   push ebx
// 00861afa  8d44241c             lea eax, [esp + 0x1c]
// 00861afe  50                   push eax
// 00861aff  6854010000           push 0x154
// 00861b04  6a29                 push 0x29
// 00861b06  c744242854010000     mov dword ptr [esp + 0x28], 0x154
// 00861b0e  ff1500cc9800         call dword ptr [0x98cc00]
// 00861b14  8b1d28b19800         mov ebx, dword ptr [0x98b128]
// 00861b1a  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 00861b21  51                   push ecx
// 00861b22  c784240801000090010000 mov dword ptr [esp + 0x108], 0x190
// 00861b2d  ffd3                 call ebx
// 00861b2f  50                   push eax
// 00861b30  8bcf                 mov ecx, edi
// 00861b32  e8f322f9ff           call 0x7f3e2a
// 00861b37  8d9424f4000000       lea edx, [esp + 0xf4]
// 00861b3e  52                   push edx
// 00861b3f  c7842408010000bc020000 mov dword ptr [esp + 0x108], 0x2bc
// 00861b4a  ffd3                 call ebx
// 00861b4c  50                   push eax
// 00861b4d  8bcd                 mov ecx, ebp
// 00861b4f  e8d622f9ff           call 0x7f3e2a
// 00861b54  8bc6                 mov eax, esi
// 00861b56  8b8c2470010000       mov ecx, dword ptr [esp + 0x170]
// 00861b5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00861b64  59                   pop ecx
// 00861b65  5f                   pop edi
// 00861b66  5e                   pop esi
// 00861b67  5d                   pop ebp
// 00861b68  5b                   pop ebx
// 00861b69  8b8c2458010000       mov ecx, dword ptr [esp + 0x158]
// 00861b70  33cc                 xor ecx, esp
// 00861b72  e82338f9ff           call 0x7f539a
// 00861b77  81c468010000         add esp, 0x168
// 00861b7d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPToolTipContext@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp