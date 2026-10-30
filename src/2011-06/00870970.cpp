// roc 2011-06 00870970  unit: CXTColorDialog  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00870970
//
// 00870970  6aff                 push -1
// 00870972  681377a000           push 0xa07713
// 00870977  64a100000000         mov eax, dword ptr fs:[0]
// 0087097d  50                   push eax
// 0087097e  83ec08               sub esp, 8
// 00870981  56                   push esi
// 00870982  57                   push edi
// 00870983  a12058c900           mov eax, dword ptr [0xc95820]
// 00870988  33c4                 xor eax, esp
// 0087098a  50                   push eax
// 0087098b  8d442414             lea eax, [esp + 0x14]
// 0087098f  64a300000000         mov dword ptr fs:[0], eax
// 00870995  8bf1                 mov esi, ecx
// 00870997  89742410             mov dword ptr [esp + 0x10], esi
// 0087099b  e88ac21500           call 0x9ccc2a
// 008709a0  8dbeb0000000         lea edi, [esi + 0xb0]
// 008709a6  8bcf                 mov ecx, edi
// 008709a8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008709b0  c706e4c6ac00         mov dword ptr [esi], 0xacc6e4
// 008709b6  e88b9ff9ff           call 0x80a946
// 008709bb  c7078423ac00         mov dword ptr [edi], 0xac2384
// 008709c1  8d4c240c             lea ecx, [esp + 0xc]
// 008709c5  ff15b42da400         call dword ptr [0xa42db4]
// 008709cb  c644241c02           mov byte ptr [esp + 0x1c], 2
// 008709d0  e86bf50000           call 0x87ff40
// 008709d5  8b10                 mov edx, dword ptr [eax]
// 008709d7  8b5208               mov edx, dword ptr [edx + 8]
// 008709da  6887240000           push 0x2487
// 008709df  8d4c2410             lea ecx, [esp + 0x10]
// 008709e3  51                   push ecx
// 008709e4  8bc8                 mov ecx, eax
// 008709e6  ffd2                 call edx
// 008709e8  8b442430             mov eax, dword ptr [esp + 0x30]
// 008709ec  6a00                 push 0
// 008709ee  50                   push eax
// 008709ef  8d4c2414             lea ecx, [esp + 0x14]
// 008709f3  ff15c82da400         call dword ptr [0xa42dc8]
// 008709f9  50                   push eax
// 008709fa  8bce                 mov ecx, esi
// 008709fc  e823c21500           call 0x9ccc24
// 00870a01  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00870a04  8b542424             mov edx, dword ptr [esp + 0x24]
// 00870a08  8b442428             mov eax, dword ptr [esp + 0x28]
// 00870a0c  81e1fffdffff         and ecx, 0xfffffdff
// 00870a12  81c980000000         or ecx, 0x80
// 00870a18  894e58               mov dword ptr [esi + 0x58], ecx
// 00870a1b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00870a1f  681c010000           push 0x11c
// 00870a24  899624010000         mov dword ptr [esi + 0x124], edx
// 00870a2a  898628010000         mov dword ptr [esi + 0x128], eax
// 00870a30  898eac000000         mov dword ptr [esi + 0xac], ecx
// 00870a36  e82396f9ff           call 0x80a05e
// 00870a3b  83c404               add esp, 4
// 00870a3e  89442430             mov dword ptr [esp + 0x30], eax
// 00870a42  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00870a47  85c0                 test eax, eax
// 00870a49  740a                 je 0x870a55
// 00870a4b  56                   push esi
// 00870a4c  8bc8                 mov ecx, eax
// 00870a4e  e89d730700           call 0x8e7df0
// 00870a53  eb02                 jmp 0x870a57
// 00870a55  33c0                 xor eax, eax
// 00870a57  50                   push eax
// 00870a58  8bce                 mov ecx, esi
// 00870a5a  c644242002           mov byte ptr [esp + 0x20], 2
// 00870a5f  e8ccfdffff           call 0x870830
// 00870a64  6888070000           push 0x788
// 00870a69  e8f095f9ff           call 0x80a05e
// 00870a6e  83c404               add esp, 4
// 00870a71  89442430             mov dword ptr [esp + 0x30], eax
// 00870a75  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00870a7a  85c0                 test eax, eax
// 00870a7c  740a                 je 0x870a88
// 00870a7e  56                   push esi
// 00870a7f  8bc8                 mov ecx, eax
// 00870a81  e81aa90700           call 0x8eb3a0
// 00870a86  eb02                 jmp 0x870a8a
// 00870a88  33c0                 xor eax, eax
// 00870a8a  50                   push eax
// 00870a8b  8bce                 mov ecx, esi
// 00870a8d  c644242002           mov byte ptr [esp + 0x20], 2
// 00870a92  e899fdffff           call 0x870830
// 00870a97  8d4c240c             lea ecx, [esp + 0xc]
// 00870a9b  ff15082ea400         call dword ptr [0xa42e08]
// 00870aa1  8bc6                 mov eax, esi
// 00870aa3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00870aa7  64890d00000000       mov dword ptr fs:[0], ecx
// 00870aae  59                   pop ecx
// 00870aaf  5f                   pop edi
// 00870ab0  5e                   pop esi
// 00870ab1  83c414               add esp, 0x14
// 00870ab4  c21000               ret 0x10
// copied from an identical function in another client (function ??0CXTColorDialog@@QAE@KKKPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp