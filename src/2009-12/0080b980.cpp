// roc 2009-12 0080b980  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b980
//
// 0080b980  6aff                 push -1
// 0080b982  6828999500           push 0x959928
// 0080b987  64a100000000         mov eax, dword ptr fs:[0]
// 0080b98d  50                   push eax
// 0080b98e  83ec0c               sub esp, 0xc
// 0080b991  56                   push esi
// 0080b992  57                   push edi
// 0080b993  a10052b600           mov eax, dword ptr [0xb65200]
// 0080b998  33c4                 xor eax, esp
// 0080b99a  50                   push eax
// 0080b99b  8d442418             lea eax, [esp + 0x18]
// 0080b99f  64a300000000         mov dword ptr fs:[0], eax
// 0080b9a5  8b742428             mov esi, dword ptr [esp + 0x28]
// 0080b9a9  56                   push esi
// 0080b9aa  e821d5ffff           call 0x808ed0
// 0080b9af  83c404               add esp, 4
// 0080b9b2  85c0                 test eax, eax
// 0080b9b4  0f8492000000         je 0x80ba4c
// 0080b9ba  8d4c240c             lea ecx, [esp + 0xc]
// 0080b9be  e87d410800           call 0x88fb40
// 0080b9c3  56                   push esi
// 0080b9c4  8d4c2410             lea ecx, [esp + 0x10]
// 0080b9c8  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0080b9d0  e80b460800           call 0x88ffe0
// 0080b9d5  85c0                 test eax, eax
// 0080b9d7  752d                 jne 0x80ba06
// 0080b9d9  8d4c240c             lea ecx, [esp + 0xc]
// 0080b9dd  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080b9e5  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080b9ed  e83e38c0ff           call 0x40f230
// 0080b9f2  33c0                 xor eax, eax
// 0080b9f4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080b9f8  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b9ff  59                   pop ecx
// 0080ba00  5f                   pop edi
// 0080ba01  5e                   pop esi
// 0080ba02  83c418               add esp, 0x18
// 0080ba05  c3                   ret 
// 0080ba06  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0080ba0a  85c0                 test eax, eax
// 0080ba0c  7406                 je 0x80ba14
// 0080ba0e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0080ba12  8908                 mov dword ptr [eax], ecx
// 0080ba14  8d4c240c             lea ecx, [esp + 0xc]
// 0080ba18  e851ab1100           call 0x92656e
// 0080ba1d  8d4c240c             lea ecx, [esp + 0xc]
// 0080ba21  8bf0                 mov esi, eax
// 0080ba23  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0080ba2b  c744240c18229a00     mov dword ptr [esp + 0xc], 0x9a2218
// 0080ba33  e8f837c0ff           call 0x40f230
// 0080ba38  8bc6                 mov eax, esi
// 0080ba3a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080ba3e  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ba45  59                   pop ecx
// 0080ba46  5f                   pop edi
// 0080ba47  5e                   pop esi
// 0080ba48  83c418               add esp, 0x18
// 0080ba4b  c3                   ret 
// 0080ba4c  56                   push esi
// 0080ba4d  e8ded3ffff           call 0x808e30
// 0080ba52  83c404               add esp, 4
// 0080ba55  8bf8                 mov edi, eax
// 0080ba57  8bd7                 mov edx, edi
// 0080ba59  f7da                 neg edx
// 0080ba5b  1bd2                 sbb edx, edx
// 0080ba5d  81e200200000         and edx, 0x2000
// 0080ba63  83ca50               or edx, 0x50
// 0080ba66  52                   push edx
// 0080ba67  6a00                 push 0
// 0080ba69  6a00                 push 0
// 0080ba6b  6a00                 push 0
// 0080ba6d  56                   push esi
// 0080ba6e  6a00                 push 0
// 0080ba70  ff150ccb9800         call dword ptr [0x98cb0c]
// 0080ba76  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080ba7a  85c9                 test ecx, ecx
// 0080ba7c  7402                 je 0x80ba80
// 0080ba7e  8939                 mov dword ptr [ecx], edi
// 0080ba80  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080ba84  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ba8b  59                   pop ecx
// 0080ba8c  5f                   pop edi
// 0080ba8d  5e                   pop esi
// 0080ba8e  83c418               add esp, 0x18
// 0080ba91  c3                   ret 
// copied from an identical function in another client (function ?LoadBitmapFromFile@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PBDPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp