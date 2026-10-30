// roc 2009-12 007f5df0  unit: CRobloxControlColorSelector  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5df0
//
// 007f5df0  6aff                 push -1
// 007f5df2  6899e39500           push 0x95e399
// 007f5df7  64a100000000         mov eax, dword ptr fs:[0]
// 007f5dfd  50                   push eax
// 007f5dfe  56                   push esi
// 007f5dff  57                   push edi
// 007f5e00  a10052b600           mov eax, dword ptr [0xb65200]
// 007f5e05  33c4                 xor eax, esp
// 007f5e07  50                   push eax
// 007f5e08  8d44240c             lea eax, [esp + 0xc]
// 007f5e0c  64a300000000         mov dword ptr fs:[0], eax
// 007f5e12  8bf1                 mov esi, ecx
// 007f5e14  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007f5e18  39be84000000         cmp dword ptr [esi + 0x84], edi
// 007f5e1e  744c                 je 0x7f5e6c
// 007f5e20  8d4c241c             lea ecx, [esp + 0x1c]
// 007f5e24  ff1574de9800         call dword ptr [0x98de74]
// 007f5e2a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007f5e32  e8698a0700           call 0x86e8a0
// 007f5e37  8b10                 mov edx, dword ptr [eax]
// 007f5e39  8b5208               mov edx, dword ptr [edx + 8]
// 007f5e3c  57                   push edi
// 007f5e3d  8d4c2420             lea ecx, [esp + 0x20]
// 007f5e41  51                   push ecx
// 007f5e42  8bc8                 mov ecx, eax
// 007f5e44  ffd2                 call edx
// 007f5e46  85c0                 test eax, eax
// 007f5e48  7412                 je 0x7f5e5c
// 007f5e4a  8d4c241c             lea ecx, [esp + 0x1c]
// 007f5e4e  ff1580de9800         call dword ptr [0x98de80]
// 007f5e54  50                   push eax
// 007f5e55  8bce                 mov ecx, esi
// 007f5e57  e8d4feffff           call 0x7f5d30
// 007f5e5c  8d4c241c             lea ecx, [esp + 0x1c]
// 007f5e60  89be84000000         mov dword ptr [esi + 0x84], edi
// 007f5e66  ff15c0de9800         call dword ptr [0x98dec0]
// 007f5e6c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f5e70  64890d00000000       mov dword ptr fs:[0], ecx
// 007f5e77  59                   pop ecx
// 007f5e78  5f                   pop edi
// 007f5e79  5e                   pop esi
// 007f5e7a  83c40c               add esp, 0xc
// 007f5e7d  c20400               ret 4
// copied from an identical function in another client (function ?SetID@CXTPControl@@QAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp