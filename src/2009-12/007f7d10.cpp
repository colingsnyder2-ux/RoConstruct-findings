// roc 2009-12 007f7d10  unit: IIHH::?$CMap  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7d10
//
// 007f7d10  6aff                 push -1
// 007f7d12  6899e39500           push 0x95e399
// 007f7d17  64a100000000         mov eax, dword ptr fs:[0]
// 007f7d1d  50                   push eax
// 007f7d1e  56                   push esi
// 007f7d1f  57                   push edi
// 007f7d20  a10052b600           mov eax, dword ptr [0xb65200]
// 007f7d25  33c4                 xor eax, esp
// 007f7d27  50                   push eax
// 007f7d28  8d44240c             lea eax, [esp + 0xc]
// 007f7d2c  64a300000000         mov dword ptr fs:[0], eax
// 007f7d32  8bf1                 mov esi, ecx
// 007f7d34  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007f7d38  50                   push eax
// 007f7d39  8d4c2420             lea ecx, [esp + 0x20]
// 007f7d3d  ff15b8de9800         call dword ptr [0x98deb8]
// 007f7d43  6a00                 push 0
// 007f7d45  6a09                 push 9
// 007f7d47  8d4c2424             lea ecx, [esp + 0x24]
// 007f7d4b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007f7d53  ff1580d69800         call dword ptr [0x98d680]
// 007f7d59  83f8ff               cmp eax, -1
// 007f7d5c  740b                 je 0x7f7d69
// 007f7d5e  50                   push eax
// 007f7d5f  8d4c2420             lea ecx, [esp + 0x20]
// 007f7d63  ff1560d29800         call dword ptr [0x98d260]
// 007f7d69  8d4c241c             lea ecx, [esp + 0x1c]
// 007f7d6d  8d7e40               lea edi, [esi + 0x40]
// 007f7d70  ff1580de9800         call dword ptr [0x98de80]
// 007f7d76  50                   push eax
// 007f7d77  8bcf                 mov ecx, edi
// 007f7d79  ff1584de9800         call dword ptr [0x98de84]
// 007f7d7f  85c0                 test eax, eax
// 007f7d81  7426                 je 0x7f7da9
// 007f7d83  6a03                 push 3
// 007f7d85  8bce                 mov ecx, esi
// 007f7d87  e8d4feffff           call 0x7f7c60
// 007f7d8c  8d4c241c             lea ecx, [esp + 0x1c]
// 007f7d90  51                   push ecx
// 007f7d91  8bcf                 mov ecx, edi
// 007f7d93  ff1538d59800         call dword ptr [0x98d538]
// 007f7d99  6a03                 push 3
// 007f7d9b  8bce                 mov ecx, esi
// 007f7d9d  e87efeffff           call 0x7f7c20
// 007f7da2  8bce                 mov ecx, esi
// 007f7da4  e8f7feffff           call 0x7f7ca0
// 007f7da9  8d4c241c             lea ecx, [esp + 0x1c]
// 007f7dad  ff15c0de9800         call dword ptr [0x98dec0]
// 007f7db3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f7db7  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7dbe  59                   pop ecx
// 007f7dbf  5f                   pop edi
// 007f7dc0  5e                   pop esi
// 007f7dc1  83c40c               add esp, 0xc
// 007f7dc4  c20400               ret 4
// copied from an identical function in another client (function ?SetCaption@CXTPControlAction@@QAEXPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp