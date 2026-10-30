// roc 2009-12 008b2ba0  unit: CXTPDockingPaneTabbedContainer  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2ba0
//
// 008b2ba0  56                   push esi
// 008b2ba1  57                   push edi
// 008b2ba2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b2ba6  8d44240c             lea eax, [esp + 0xc]
// 008b2baa  50                   push eax
// 008b2bab  8bf1                 mov esi, ecx
// 008b2bad  c70700000000         mov dword ptr [edi], 0
// 008b2bb3  e8e88df8ff           call 0x83b9a0
// 008b2bb8  83f801               cmp eax, 1
// 008b2bbb  7522                 jne 0x8b2bdf
// 008b2bbd  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008b2bc0  85c0                 test eax, eax
// 008b2bc2  7443                 je 0x8b2c07
// 008b2bc4  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 008b2bca  57                   push edi
// 008b2bcb  68a04ba200           push 0xa24ba0
// 008b2bd0  6a00                 push 0
// 008b2bd2  51                   push ecx
// 008b2bd3  8bce                 mov ecx, esi
// 008b2bd5  e88698f8ff           call 0x83c460
// 008b2bda  5f                   pop edi
// 008b2bdb  5e                   pop esi
// 008b2bdc  c21400               ret 0x14
// 008b2bdf  7e26                 jle 0x8b2c07
// 008b2be1  8b56cc               mov edx, dword ptr [esi - 0x34]
// 008b2be4  42                   inc edx
// 008b2be5  3bc2                 cmp eax, edx
// 008b2be7  7f1e                 jg 0x8b2c07
// 008b2be9  83c0fe               add eax, -2
// 008b2bec  50                   push eax
// 008b2bed  8d8ec8feffff         lea ecx, [esi - 0x138]
// 008b2bf3  e8e8f7ffff           call 0x8b23e0
// 008b2bf8  85c0                 test eax, eax
// 008b2bfa  740b                 je 0x8b2c07
// 008b2bfc  6a01                 push 1
// 008b2bfe  8bc8                 mov ecx, eax
// 008b2c00  e831380700           call 0x926436
// 008b2c05  8907                 mov dword ptr [edi], eax
// 008b2c07  5f                   pop edi
// 008b2c08  33c0                 xor eax, eax
// 008b2c0a  5e                   pop esi
// 008b2c0b  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleChild@CXTPDockingPaneTabbedContainer@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp