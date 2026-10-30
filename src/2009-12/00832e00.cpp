// roc 2009-12 00832e00  unit: CXTTreeBase  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00832e00
//
// 00832e00  83ec20               sub esp, 0x20
// 00832e03  57                   push edi
// 00832e04  8bf9                 mov edi, ecx
// 00832e06  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00832e09  e82210fcff           call 0x7f3e30
// 00832e0e  8bcf                 mov ecx, edi
// 00832e10  e80beaffff           call 0x831820
// 00832e15  84c0                 test al, al
// 00832e17  0f849c000000         je 0x832eb9
// 00832e1d  837f1000             cmp dword ptr [edi + 0x10], 0
// 00832e21  0f8492000000         je 0x832eb9
// 00832e27  8b4734               mov eax, dword ptr [edi + 0x34]
// 00832e2a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00832e2d  56                   push esi
// 00832e2e  6a00                 push 0
// 00832e30  6a00                 push 0
// 00832e32  680f110000           push 0x110f
// 00832e37  50                   push eax
// 00832e38  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00832e3e  50                   push eax
// 00832e3f  e8e60cfcff           call 0x7f3b2a
// 00832e44  8bf0                 mov esi, eax
// 00832e46  85f6                 test esi, esi
// 00832e48  746e                 je 0x832eb8
// 00832e4a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00832e4d  51                   push ecx
// 00832e4e  ff1584cc9800         call dword ptr [0x98cc84]
// 00832e54  85c0                 test eax, eax
// 00832e56  7460                 je 0x832eb8
// 00832e58  8b4620               mov eax, dword ptr [esi + 0x20]
// 00832e5b  8d542418             lea edx, [esp + 0x18]
// 00832e5f  52                   push edx
// 00832e60  50                   push eax
// 00832e61  ff1570cc9800         call dword ptr [0x98cc70]
// 00832e67  8b5710               mov edx, dword ptr [edi + 0x10]
// 00832e6a  6a01                 push 1
// 00832e6c  8d4c240c             lea ecx, [esp + 0xc]
// 00832e70  51                   push ecx
// 00832e71  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00832e74  52                   push edx
// 00832e75  e87c13fcff           call 0x7f41f6
// 00832e7a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00832e7e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00832e82  2b542418             sub edx, dword ptr [esp + 0x18]
// 00832e86  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00832e8a  83e903               sub ecx, 3
// 00832e8d  03d1                 add edx, ecx
// 00832e8f  894c2408             mov dword ptr [esp + 8], ecx
// 00832e93  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00832e97  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00832e9b  48                   dec eax
// 00832e9c  03c8                 add ecx, eax
// 00832e9e  89542410             mov dword ptr [esp + 0x10], edx
// 00832ea2  6a01                 push 1
// 00832ea4  8d54240c             lea edx, [esp + 0xc]
// 00832ea8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00832eac  52                   push edx
// 00832ead  8bce                 mov ecx, esi
// 00832eaf  89442414             mov dword ptr [esp + 0x14], eax
// 00832eb3  e84885c3ff           call 0x46b400
// 00832eb8  5e                   pop esi
// 00832eb9  5f                   pop edi
// 00832eba  83c420               add esp, 0x20
// 00832ebd  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTTreeBase@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp