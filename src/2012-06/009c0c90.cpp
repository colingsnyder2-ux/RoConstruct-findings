// roc 2012-06 009c0c90  unit: CXTTreeBase  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0c90
//
// 009c0c90  83ec20               sub esp, 0x20
// 009c0c93  57                   push edi
// 009c0c94  8bf9                 mov edi, ecx
// 009c0c96  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c0c99  e8401afcff           call 0x9826de
// 009c0c9e  8bcf                 mov ecx, edi
// 009c0ca0  e80beaffff           call 0x9bf6b0
// 009c0ca5  84c0                 test al, al
// 009c0ca7  0f849c000000         je 0x9c0d49
// 009c0cad  837f1000             cmp dword ptr [edi + 0x10], 0
// 009c0cb1  0f8492000000         je 0x9c0d49
// 009c0cb7  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0cba  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0cbd  56                   push esi
// 009c0cbe  6a00                 push 0
// 009c0cc0  6a00                 push 0
// 009c0cc2  680f110000           push 0x110f
// 009c0cc7  50                   push eax
// 009c0cc8  ff15043cb200         call dword ptr [0xb23c04]
// 009c0cce  50                   push eax
// 009c0ccf  e89219fcff           call 0x982666
// 009c0cd4  8bf0                 mov esi, eax
// 009c0cd6  85f6                 test esi, esi
// 009c0cd8  746e                 je 0x9c0d48
// 009c0cda  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009c0cdd  51                   push ecx
// 009c0cde  ff15143bb200         call dword ptr [0xb23b14]
// 009c0ce4  85c0                 test eax, eax
// 009c0ce6  7460                 je 0x9c0d48
// 009c0ce8  8b4620               mov eax, dword ptr [esi + 0x20]
// 009c0ceb  8d542418             lea edx, [esp + 0x18]
// 009c0cef  52                   push edx
// 009c0cf0  50                   push eax
// 009c0cf1  ff15f83ab200         call dword ptr [0xb23af8]
// 009c0cf7  8b5710               mov edx, dword ptr [edi + 0x10]
// 009c0cfa  6a01                 push 1
// 009c0cfc  8d4c240c             lea ecx, [esp + 0xc]
// 009c0d00  51                   push ecx
// 009c0d01  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c0d04  52                   push edx
// 009c0d05  e86a1dfcff           call 0x982a74
// 009c0d0a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009c0d0e  8b542420             mov edx, dword ptr [esp + 0x20]
// 009c0d12  2b542418             sub edx, dword ptr [esp + 0x18]
// 009c0d16  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c0d1a  83e903               sub ecx, 3
// 009c0d1d  03d1                 add edx, ecx
// 009c0d1f  894c2408             mov dword ptr [esp + 8], ecx
// 009c0d23  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009c0d27  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 009c0d2b  48                   dec eax
// 009c0d2c  03c8                 add ecx, eax
// 009c0d2e  89542410             mov dword ptr [esp + 0x10], edx
// 009c0d32  6a01                 push 1
// 009c0d34  8d54240c             lea edx, [esp + 0xc]
// 009c0d38  894c2418             mov dword ptr [esp + 0x18], ecx
// 009c0d3c  52                   push edx
// 009c0d3d  8bce                 mov ecx, esi
// 009c0d3f  89442414             mov dword ptr [esp + 0x14], eax
// 009c0d43  e8e8d7adff           call 0x49e530
// 009c0d48  5e                   pop esi
// 009c0d49  5f                   pop edi
// 009c0d4a  83c420               add esp, 0x20
// 009c0d4d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTTreeBase@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp