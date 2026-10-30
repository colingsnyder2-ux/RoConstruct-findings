// roc 2009-12 0087baf0  unit: CXTPControlGallery  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087baf0
//
// 0087baf0  6aff                 push -1
// 0087baf2  6898039600           push 0x960398
// 0087baf7  64a100000000         mov eax, dword ptr fs:[0]
// 0087bafd  50                   push eax
// 0087bafe  83ec10               sub esp, 0x10
// 0087bb01  56                   push esi
// 0087bb02  a10052b600           mov eax, dword ptr [0xb65200]
// 0087bb07  33c4                 xor eax, esp
// 0087bb09  50                   push eax
// 0087bb0a  8d442418             lea eax, [esp + 0x18]
// 0087bb0e  64a300000000         mov dword ptr fs:[0], eax
// 0087bb14  8bf1                 mov esi, ecx
// 0087bb16  8b46fc               mov eax, dword ptr [esi - 4]
// 0087bb19  50                   push eax
// 0087bb1a  8d4c240c             lea ecx, [esp + 0xc]
// 0087bb1e  e80d80f7ff           call 0x7f3b30
// 0087bb23  8d4c242c             lea ecx, [esp + 0x2c]
// 0087bb27  51                   push ecx
// 0087bb28  8bce                 mov ecx, esi
// 0087bb2a  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0087bb32  e869fefbff           call 0x83b9a0
// 0087bb37  85c0                 test eax, eax
// 0087bb39  756d                 jne 0x87bba8
// 0087bb3b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0087bb3f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087bb43  83ec10               sub esp, 0x10
// 0087bb46  8bc4                 mov eax, esp
// 0087bb48  8910                 mov dword ptr [eax], edx
// 0087bb4a  8b542444             mov edx, dword ptr [esp + 0x44]
// 0087bb4e  894804               mov dword ptr [eax + 4], ecx
// 0087bb51  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0087bb55  895008               mov dword ptr [eax + 8], edx
// 0087bb58  8b542438             mov edx, dword ptr [esp + 0x38]
// 0087bb5c  89480c               mov dword ptr [eax + 0xc], ecx
// 0087bb5f  52                   push edx
// 0087bb60  8bce                 mov ecx, esi
// 0087bb62  e849b9f7ff           call 0x7f74b0
// 0087bb67  8bf0                 mov esi, eax
// 0087bb69  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087bb6d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0087bb75  85c0                 test eax, eax
// 0087bb77  7407                 je 0x87bb80
// 0087bb79  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087bb7d  894804               mov dword ptr [eax + 4], ecx
// 0087bb80  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087bb85  740c                 je 0x87bb93
// 0087bb87  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087bb8b  52                   push edx
// 0087bb8c  6a00                 push 0
// 0087bb8e  e8917ff7ff           call 0x7f3b24
// 0087bb93  8bc6                 mov eax, esi
// 0087bb95  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087bb99  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bba0  59                   pop ecx
// 0087bba1  5e                   pop esi
// 0087bba2  83c41c               add esp, 0x1c
// 0087bba5  c21400               ret 0x14
// 0087bba8  48                   dec eax
// 0087bba9  50                   push eax
// 0087bbaa  8d4ee0               lea ecx, [esi - 0x20]
// 0087bbad  e8def6ffff           call 0x87b290
// 0087bbb2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087bbb6  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0087bbbe  85c0                 test eax, eax
// 0087bbc0  7407                 je 0x87bbc9
// 0087bbc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087bbc6  894804               mov dword ptr [eax + 4], ecx
// 0087bbc9  837c241400           cmp dword ptr [esp + 0x14], 0
// 0087bbce  740c                 je 0x87bbdc
// 0087bbd0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087bbd4  52                   push edx
// 0087bbd5  6a00                 push 0
// 0087bbd7  e8487ff7ff           call 0x7f3b24
// 0087bbdc  33c0                 xor eax, eax
// 0087bbde  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087bbe2  64890d00000000       mov dword ptr fs:[0], ecx
// 0087bbe9  59                   pop ecx
// 0087bbea  5e                   pop esi
// 0087bbeb  83c41c               add esp, 0x1c
// 0087bbee  c21400               ret 0x14
// copied from an identical function in another client (function ?AccessibleSelect@CXTPControlGallery@@MAEJJUtagVARIANT@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPControlGallery.cpp