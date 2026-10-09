// roc 2009-12 008afc00  unit: CXTPDockingPaneMiniWnd  size: 499 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008afc00
//
// 008afc00  8b442404             mov eax, dword ptr [esp + 4]
// 008afc04  83ec18               sub esp, 0x18
// 008afc07  56                   push esi
// 008afc08  8bf1                 mov esi, ecx
// 008afc0a  3d29090000           cmp eax, 0x929
// 008afc0f  7568                 jne 0x8afc79
// 008afc11  8d442404             lea eax, [esp + 4]
// 008afc15  50                   push eax
// 008afc16  ff1538cc9800         call dword ptr [0x98cc38]
// 008afc1c  56                   push esi
// 008afc1d  8d4c2410             lea ecx, [esp + 0x10]
// 008afc21  e84ab6f9ff           call 0x84b270
// 008afc26  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008afc2c  e81f0c0000           call 0x8b0850
// 008afc31  8b4878               mov ecx, dword ptr [eax + 0x78]
// 008afc34  8b542410             mov edx, dword ptr [esp + 0x10]
// 008afc38  8d441104             lea eax, [ecx + edx + 4]
// 008afc3c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008afc40  8b542404             mov edx, dword ptr [esp + 4]
// 008afc44  51                   push ecx
// 008afc45  8944241c             mov dword ptr [esp + 0x1c], eax
// 008afc49  52                   push edx
// 008afc4a  8d442414             lea eax, [esp + 0x14]
// 008afc4e  50                   push eax
// 008afc4f  ff155cca9800         call dword ptr [0x98ca5c]
// 008afc55  85c0                 test eax, eax
// 008afc57  0f8588010000         jne 0x8afde5
// 008afc5d  83c8ff               or eax, 0xffffffff
// 008afc60  0bc8                 or ecx, eax
// 008afc62  51                   push ecx
// 008afc63  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 008afc69  50                   push eax
// 008afc6a  e8210c0000           call 0x8b0890
// 008afc6f  6829090000           push 0x929
// 008afc74  e962010000           jmp 0x8afddb
// 008afc79  83f803               cmp eax, 3
// 008afc7c  7568                 jne 0x8afce6
// 008afc7e  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008afc85  0f845a010000         je 0x8afde5
// 008afc8b  ff8e40010000         dec dword ptr [esi + 0x140]
// 008afc91  83be40010000ff       cmp dword ptr [esi + 0x140], -1
// 008afc98  7e15                 jle 0x8afcaf
// 008afc9a  6a00                 push 0
// 008afc9c  e8eff1ffff           call 0x8aee90
// 008afca1  8bce                 mov ecx, esi
// 008afca3  e88841f4ff           call 0x7f3e30
// 008afca8  5e                   pop esi
// 008afca9  83c418               add esp, 0x18
// 008afcac  c20400               ret 4
// 008afcaf  8b5620               mov edx, dword ptr [esi + 0x20]
// 008afcb2  6a03                 push 3
// 008afcb4  52                   push edx
// 008afcb5  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 008afcbf  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 008afcc9  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008afccf  6a0b                 push 0xb
// 008afcd1  8bce                 mov ecx, esi
// 008afcd3  e808fdffff           call 0x8af9e0
// 008afcd8  8bce                 mov ecx, esi
// 008afcda  e85141f4ff           call 0x7f3e30
// 008afcdf  5e                   pop esi
// 008afce0  83c418               add esp, 0x18
// 008afce3  c20400               ret 4
// 008afce6  83f801               cmp eax, 1
// 008afce9  0f85f6000000         jne 0x8afde5
// 008afcef  8d442404             lea eax, [esp + 4]
// 008afcf3  50                   push eax
// 008afcf4  ff1538cc9800         call dword ptr [0x98cc38]
// 008afcfa  ff15eccb9800         call dword ptr [0x98cbec]
// 008afd00  50                   push eax
// 008afd01  e8243ef4ff           call 0x7f3b2a
// 008afd06  85c0                 test eax, eax
// 008afd08  7422                 je 0x8afd2c
// 008afd0a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008afd0d  85c9                 test ecx, ecx
// 008afd0f  741b                 je 0x8afd2c
// 008afd11  3bc6                 cmp eax, esi
// 008afd13  0f84cc000000         je 0x8afde5
// 008afd19  51                   push ecx
// 008afd1a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008afd1d  51                   push ecx
// 008afd1e  ff15f4ca9800         call dword ptr [0x98caf4]
// 008afd24  85c0                 test eax, eax
// 008afd26  0f85b9000000         jne 0x8afde5
// 008afd2c  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008afd33  0f85ac000000         jne 0x8afde5
// 008afd39  53                   push ebx
// 008afd3a  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008afd3e  57                   push edi
// 008afd3f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008afd43  56                   push esi
// 008afd44  8d4c2418             lea ecx, [esp + 0x18]
// 008afd48  e823b5f9ff           call 0x84b270
// 008afd4d  53                   push ebx
// 008afd4e  57                   push edi
// 008afd4f  50                   push eax
// 008afd50  ff155cca9800         call dword ptr [0x98ca5c]
// 008afd56  5f                   pop edi
// 008afd57  5b                   pop ebx
// 008afd58  85c0                 test eax, eax
// 008afd5a  0f8585000000         jne 0x8afde5
// 008afd60  ff1528cc9800         call dword ptr [0x98cc28]
// 008afd66  85c0                 test eax, eax
// 008afd68  757b                 jne 0x8afde5
// 008afd6a  ff8e44010000         dec dword ptr [esi + 0x144]
// 008afd70  398644010000         cmp dword ptr [esi + 0x144], eax
// 008afd76  7f6d                 jg 0x8afde5
// 008afd78  6a0a                 push 0xa
// 008afd7a  8bce                 mov ecx, esi
// 008afd7c  e85ffcffff           call 0x8af9e0
// 008afd81  85c0                 test eax, eax
// 008afd83  7411                 je 0x8afd96
// 008afd85  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 008afd8f  5e                   pop esi
// 008afd90  83c418               add esp, 0x18
// 008afd93  c20400               ret 4
// 008afd96  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 008afd9c  3b963c010000         cmp edx, dword ptr [esi + 0x13c]
// 008afda2  7516                 jne 0x8afdba
// 008afda4  56                   push esi
// 008afda5  8d4c2410             lea ecx, [esp + 0x10]
// 008afda9  e8c2b4f9ff           call 0x84b270
// 008afdae  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008afdb1  2b4804               sub ecx, dword ptr [eax + 4]
// 008afdb4  898e38010000         mov dword ptr [esi + 0x138], ecx
// 008afdba  8b4620               mov eax, dword ptr [esi + 0x20]
// 008afdbd  6a00                 push 0
// 008afdbf  c7865001000001000000 mov dword ptr [esi + 0x150], 1
// 008afdc9  8b15b08eb600         mov edx, dword ptr [0xb68eb0]
// 008afdcf  52                   push edx
// 008afdd0  6a03                 push 3
// 008afdd2  50                   push eax
// 008afdd3  ff1558cc9800         call dword ptr [0x98cc58]
// 008afdd9  6a01                 push 1
// 008afddb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008afdde  51                   push ecx
// 008afddf  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008afde5  8bce                 mov ecx, esi
// 008afde7  e84440f4ff           call 0x7f3e30
// 008afdec  5e                   pop esi
// 008afded  83c418               add esp, 0x18
// 008afdf0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnTimer@CXTPDockingPaneMiniWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
