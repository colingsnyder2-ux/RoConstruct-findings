// roc 2009-12 0086b2b0  unit: CXTPPropertyGridItemEnum  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086b2b0
//
// 0086b2b0  6aff                 push -1
// 0086b2b2  6856f59500           push 0x95f556
// 0086b2b7  64a100000000         mov eax, dword ptr fs:[0]
// 0086b2bd  50                   push eax
// 0086b2be  51                   push ecx
// 0086b2bf  56                   push esi
// 0086b2c0  a10052b600           mov eax, dword ptr [0xb65200]
// 0086b2c5  33c4                 xor eax, esp
// 0086b2c7  50                   push eax
// 0086b2c8  8d44240c             lea eax, [esp + 0xc]
// 0086b2cc  64a300000000         mov dword ptr fs:[0], eax
// 0086b2d2  8bf1                 mov esi, ecx
// 0086b2d4  89742408             mov dword ptr [esp + 8], esi
// 0086b2d8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086b2dc  6a00                 push 0
// 0086b2de  6a00                 push 0
// 0086b2e0  50                   push eax
// 0086b2e1  e80abaffff           call 0x866cf0
// 0086b2e6  68b8b39b00           push 0x9bb3b8
// 0086b2eb  8d8e14010000         lea ecx, [esi + 0x114]
// 0086b2f1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0086b2f9  c70654f89f00         mov dword ptr [esi], 0x9ff854
// 0086b2ff  c74620f4f79f00       mov dword ptr [esi + 0x20], 0x9ff7f4
// 0086b306  ff15b8de9800         call dword ptr [0x98deb8]
// 0086b30c  68006a9d00           push 0x9d6a00
// 0086b311  8d8e18010000         lea ecx, [esi + 0x118]
// 0086b317  c644241801           mov byte ptr [esp + 0x18], 1
// 0086b31c  ff15b8de9800         call dword ptr [0x98deb8]
// 0086b322  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086b326  8b542420             mov edx, dword ptr [esp + 0x20]
// 0086b32a  898e10010000         mov dword ptr [esi + 0x110], ecx
// 0086b330  52                   push edx
// 0086b331  8bce                 mov ecx, esi
// 0086b333  c644241802           mov byte ptr [esp + 0x18], 2
// 0086b338  e8c3f9ffff           call 0x86ad00
// 0086b33d  8bc6                 mov eax, esi
// 0086b33f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086b343  64890d00000000       mov dword ptr fs:[0], ecx
// 0086b34a  59                   pop ecx
// 0086b34b  5e                   pop esi
// 0086b34c  83c410               add esp, 0x10
// 0086b34f  c20c00               ret 0xc
// copied from an identical function in another client (function ??0CXTPPropertyGridItemBool@@QAE@PBDHPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemBool.cpp