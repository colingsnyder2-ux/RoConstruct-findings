// roc 2009-12 0085ae30  unit: CXTPStatusBar  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ae30
//
// 0085ae30  6aff                 push -1
// 0085ae32  68f8e29500           push 0x95e2f8
// 0085ae37  64a100000000         mov eax, dword ptr fs:[0]
// 0085ae3d  50                   push eax
// 0085ae3e  83ec78               sub esp, 0x78
// 0085ae41  53                   push ebx
// 0085ae42  56                   push esi
// 0085ae43  57                   push edi
// 0085ae44  a10052b600           mov eax, dword ptr [0xb65200]
// 0085ae49  33c4                 xor eax, esp
// 0085ae4b  50                   push eax
// 0085ae4c  8d842488000000       lea eax, [esp + 0x88]
// 0085ae53  64a300000000         mov dword ptr fs:[0], eax
// 0085ae59  8bf1                 mov esi, ecx
// 0085ae5b  6a00                 push 0
// 0085ae5d  8d4c2440             lea ecx, [esp + 0x40]
// 0085ae61  e87098f9ff           call 0x7f46d6
// 0085ae66  8d86b0000000         lea eax, [esi + 0xb0]
// 0085ae6c  50                   push eax
// 0085ae6d  8d4c2440             lea ecx, [esp + 0x40]
// 0085ae71  51                   push ecx
// 0085ae72  8d4c2434             lea ecx, [esp + 0x34]
// 0085ae76  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0085ae81  e8da07ffff           call 0x84b660
// 0085ae86  8b442444             mov eax, dword ptr [esp + 0x44]
// 0085ae8a  8d542450             lea edx, [esp + 0x50]
// 0085ae8e  52                   push edx
// 0085ae8f  50                   push eax
// 0085ae90  ff15dcb09800         call dword ptr [0x98b0dc]
// 0085ae96  8d4c242c             lea ecx, [esp + 0x2c]
// 0085ae9a  e84108ffff           call 0x84b6e0
// 0085ae9f  8d4c243c             lea ecx, [esp + 0x3c]
// 0085aea3  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 0085aeae  e81d98f9ff           call 0x7f46d0
// 0085aeb3  8d4c241c             lea ecx, [esp + 0x1c]
// 0085aeb7  51                   push ecx
// 0085aeb8  ff159cca9800         call dword ptr [0x98ca9c]
// 0085aebe  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0085aec5  8b16                 mov edx, dword ptr [esi]
// 0085aec7  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0085aecd  50                   push eax
// 0085aece  8d4c2420             lea ecx, [esp + 0x20]
// 0085aed2  51                   push ecx
// 0085aed3  8bce                 mov ecx, esi
// 0085aed5  ffd2                 call edx
// 0085aed7  8b06                 mov eax, dword ptr [esi]
// 0085aed9  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0085aedf  8d4c2410             lea ecx, [esp + 0x10]
// 0085aee3  51                   push ecx
// 0085aee4  6a00                 push 0
// 0085aee6  6807040000           push 0x407
// 0085aeeb  8bce                 mov ecx, esi
// 0085aeed  ffd2                 call edx
// 0085aeef  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0085aef3  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 0085aefa  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 0085aefe  6a06                 push 6
// 0085af00  c703ff7f0000         mov dword ptr [ebx], 0x7fff
// 0085af06  ff15dccb9800         call dword ptr [0x98cbdc]
// 0085af0c  03442414             add eax, dword ptr [esp + 0x14]
// 0085af10  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0085af14  03c0                 add eax, eax
// 0085af16  2bc7                 sub eax, edi
// 0085af18  2b44245c             sub eax, dword ptr [esp + 0x5c]
// 0085af1c  8d4408ff             lea eax, [eax + ecx - 1]
// 0085af20  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0085af26  3bc1                 cmp eax, ecx
// 0085af28  894304               mov dword ptr [ebx + 4], eax
// 0085af2b  7d03                 jge 0x85af30
// 0085af2d  894b04               mov dword ptr [ebx + 4], ecx
// 0085af30  8bce                 mov ecx, esi
// 0085af32  e869faffff           call 0x85a9a0
// 0085af37  85c0                 test eax, eax
// 0085af39  740e                 je 0x85af49
// 0085af3b  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 0085af41  394304               cmp dword ptr [ebx + 4], eax
// 0085af44  7d03                 jge 0x85af49
// 0085af46  894304               mov dword ptr [ebx + 4], eax
// 0085af49  8bc3                 mov eax, ebx
// 0085af4b  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0085af52  64890d00000000       mov dword ptr fs:[0], ecx
// 0085af59  59                   pop ecx
// 0085af5a  5f                   pop edi
// 0085af5b  5e                   pop esi
// 0085af5c  5b                   pop ebx
// 0085af5d  81c484000000         add esp, 0x84
// 0085af63  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcFixedLayout@CXTPStatusBar@@MAE?AVCSize@@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp