// roc 2009-12 008b3460  unit: CXTPDockingPaneTabbedContainer  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3460
//
// 008b3460  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b3464  83ec10               sub esp, 0x10
// 008b3467  56                   push esi
// 008b3468  57                   push edi
// 008b3469  8bf1                 mov esi, ecx
// 008b346b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b346f  50                   push eax
// 008b3470  51                   push ecx
// 008b3471  8bce                 mov ecx, esi
// 008b3473  e898e7ffff           call 0x8b1c10
// 008b3478  8bf8                 mov edi, eax
// 008b347a  8bce                 mov ecx, esi
// 008b347c  85ff                 test edi, edi
// 008b347e  745c                 je 0x8b34dc
// 008b3480  e87bdaffff           call 0x8b0f00
// 008b3485  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 008b348c  7410                 je 0x8b349e
// 008b348e  57                   push edi
// 008b348f  8bce                 mov ecx, esi
// 008b3491  e83aeeffff           call 0x8b22d0
// 008b3496  85c0                 test eax, eax
// 008b3498  0f85f0010000         jne 0x8b368e
// 008b349e  8b542424             mov edx, dword ptr [esp + 0x24]
// 008b34a2  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b34a6  6a01                 push 1
// 008b34a8  52                   push edx
// 008b34a9  50                   push eax
// 008b34aa  56                   push esi
// 008b34ab  8bcf                 mov ecx, edi
// 008b34ad  e85e8a0000           call 0x8bbf10
// 008b34b2  85c0                 test eax, eax
// 008b34b4  0f84d4010000         je 0x8b368e
// 008b34ba  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 008b34c1  0f84c7010000         je 0x8b368e
// 008b34c7  8b16                 mov edx, dword ptr [esi]
// 008b34c9  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 008b34cf  57                   push edi
// 008b34d0  8bce                 mov ecx, esi
// 008b34d2  ffd0                 call eax
// 008b34d4  5f                   pop edi
// 008b34d5  5e                   pop esi
// 008b34d6  83c410               add esp, 0x10
// 008b34d9  c20c00               ret 0xc
// 008b34dc  8b16                 mov edx, dword ptr [esi]
// 008b34de  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008b34e4  ffd0                 call eax
// 008b34e6  85c0                 test eax, eax
// 008b34e8  7423                 je 0x8b350d
// 008b34ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b34ee  8b542420             mov edx, dword ptr [esp + 0x20]
// 008b34f2  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b34f5  6a01                 push 1
// 008b34f7  51                   push ecx
// 008b34f8  52                   push edx
// 008b34f9  50                   push eax
// 008b34fa  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008b3500  e81bd10100           call 0x8d0620
// 008b3505  85c0                 test eax, eax
// 008b3507  0f8581010000         jne 0x8b368e
// 008b350d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b3511  8b542420             mov edx, dword ptr [esp + 0x20]
// 008b3515  51                   push ecx
// 008b3516  52                   push edx
// 008b3517  8bce                 mov ecx, esi
// 008b3519  e8c2e3ffff           call 0x8b18e0
// 008b351e  83f8fe               cmp eax, -2
// 008b3521  7540                 jne 0x8b3563
// 008b3523  8b4654               mov eax, dword ptr [esi + 0x54]
// 008b3526  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008b3529  8d4e54               lea ecx, [esi + 0x54]
// 008b352c  ffd2                 call edx
// 008b352e  85c0                 test eax, eax
// 008b3530  0f8560010000         jne 0x8b3696
// 008b3536  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b3539  8d442420             lea eax, [esp + 0x20]
// 008b353d  50                   push eax
// 008b353e  51                   push ecx
// 008b353f  ff1554cc9800         call dword ptr [0x98cc54]
// 008b3545  8b442424             mov eax, dword ptr [esp + 0x24]
// 008b3549  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b354d  8b16                 mov edx, dword ptr [esi]
// 008b354f  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008b3555  50                   push eax
// 008b3556  51                   push ecx
// 008b3557  8bce                 mov ecx, esi
// 008b3559  ffd2                 call edx
// 008b355b  5f                   pop edi
// 008b355c  5e                   pop esi
// 008b355d  83c410               add esp, 0x10
// 008b3560  c20c00               ret 0xc
// 008b3563  85c0                 test eax, eax
// 008b3565  0f8c2b010000         jl 0x8b3696
// 008b356b  55                   push ebp
// 008b356c  50                   push eax
// 008b356d  8bce                 mov ecx, esi
// 008b356f  e86ceeffff           call 0x8b23e0
// 008b3574  6a00                 push 0
// 008b3576  6a00                 push 0
// 008b3578  8be8                 mov ebp, eax
// 008b357a  55                   push ebp
// 008b357b  6a11                 push 0x11
// 008b357d  8d4e54               lea ecx, [esi + 0x54]
// 008b3580  e8bbd2ffff           call 0x8b0840
// 008b3585  8bc8                 mov ecx, eax
// 008b3587  e8944ff8ff           call 0x838520
// 008b358c  85c0                 test eax, eax
// 008b358e  7441                 je 0x8b35d1
// 008b3590  8b06                 mov eax, dword ptr [esi]
// 008b3592  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008b3598  6a00                 push 0
// 008b359a  6a01                 push 1
// 008b359c  55                   push ebp
// 008b359d  8bce                 mov ecx, esi
// 008b359f  ffd2                 call edx
// 008b35a1  8b442428             mov eax, dword ptr [esp + 0x28]
// 008b35a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008b35a9  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b35ac  50                   push eax
// 008b35ad  51                   push ecx
// 008b35ae  52                   push edx
// 008b35af  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008b35b5  e886c40100           call 0x8cfa40
// 008b35ba  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b35bd  6a00                 push 0
// 008b35bf  6a00                 push 0
// 008b35c1  50                   push eax
// 008b35c2  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008b35c8  5d                   pop ebp
// 008b35c9  5f                   pop edi
// 008b35ca  5e                   pop esi
// 008b35cb  83c410               add esp, 0x10
// 008b35ce  c20c00               ret 0xc
// 008b35d1  53                   push ebx
// 008b35d2  6aff                 push -1
// 008b35d4  8d9eac010000         lea ebx, [esi + 0x1ac]
// 008b35da  6a00                 push 0
// 008b35dc  8bcb                 mov ecx, ebx
// 008b35de  e80d1ffaff           call 0x8554f0
// 008b35e3  33ff                 xor edi, edi
// 008b35e5  39be04010000         cmp dword ptr [esi + 0x104], edi
// 008b35eb  7e51                 jle 0x8b363e
// 008b35ed  8d4900               lea ecx, [ecx]
// 008b35f0  85ff                 test edi, edi
// 008b35f2  7c13                 jl 0x8b3607
// 008b35f4  3bbe04010000         cmp edi, dword ptr [esi + 0x104]
// 008b35fa  7d0b                 jge 0x8b3607
// 008b35fc  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008b3602  8b04b9               mov eax, dword ptr [ecx + edi*4]
// 008b3605  eb02                 jmp 0x8b3609
// 008b3607  33c0                 xor eax, eax
// 008b3609  8b5044               mov edx, dword ptr [eax + 0x44]
// 008b360c  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008b360f  89542410             mov dword ptr [esp + 0x10], edx
// 008b3613  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008b3616  8b4050               mov eax, dword ptr [eax + 0x50]
// 008b3619  894c2414             mov dword ptr [esp + 0x14], ecx
// 008b361d  8d4c2410             lea ecx, [esp + 0x10]
// 008b3621  89542418             mov dword ptr [esp + 0x18], edx
// 008b3625  8b5308               mov edx, dword ptr [ebx + 8]
// 008b3628  51                   push ecx
// 008b3629  52                   push edx
// 008b362a  8bcb                 mov ecx, ebx
// 008b362c  89442424             mov dword ptr [esp + 0x24], eax
// 008b3630  e80b20faff           call 0x855640
// 008b3635  47                   inc edi
// 008b3636  3bbe04010000         cmp edi, dword ptr [esi + 0x104]
// 008b363c  7cb2                 jl 0x8b35f0
// 008b363e  8b06                 mov eax, dword ptr [esi]
// 008b3640  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 008b3646  6a00                 push 0
// 008b3648  6a01                 push 1
// 008b364a  55                   push ebp
// 008b364b  8bce                 mov ecx, esi
// 008b364d  89aea8010000         mov dword ptr [esi + 0x1a8], ebp
// 008b3653  ffd2                 call edx
// 008b3655  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b3659  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b365d  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b3660  50                   push eax
// 008b3661  51                   push ecx
// 008b3662  52                   push edx
// 008b3663  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008b3669  e8d2c30100           call 0x8cfa40
// 008b366e  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b3671  50                   push eax
// 008b3672  ff152ccc9800         call dword ptr [0x98cc2c]
// 008b3678  50                   push eax
// 008b3679  e8ac04f4ff           call 0x7f3b2a
// 008b367e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b3681  6a00                 push 0
// 008b3683  6a00                 push 0
// 008b3685  51                   push ecx
// 008b3686  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008b368c  5b                   pop ebx
// 008b368d  5d                   pop ebp
// 008b368e  5f                   pop edi
// 008b368f  5e                   pop esi
// 008b3690  83c410               add esp, 0x10
// 008b3693  c20c00               ret 0xc
// 008b3696  8bce                 mov ecx, esi
// 008b3698  e863d8ffff           call 0x8b0f00
// 008b369d  5f                   pop edi
// 008b369e  5e                   pop esi
// 008b369f  83c410               add esp, 0x10
// 008b36a2  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp