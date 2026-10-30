// roc 2009-12 008baa80  unit: CXTPDockingPanePaintManager  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008baa80
//
// 008baa80  83ec24               sub esp, 0x24
// 008baa83  837c244000           cmp dword ptr [esp + 0x40], 0
// 008baa88  53                   push ebx
// 008baa89  55                   push ebp
// 008baa8a  56                   push esi
// 008baa8b  57                   push edi
// 008baa8c  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008baa90  8be9                 mov ebp, ecx
// 008baa92  7435                 je 0x8baac9
// 008baa94  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008baa98  8b01                 mov eax, dword ptr [ecx]
// 008baa9a  034108               add eax, dword ptr [ecx + 8]
// 008baa9d  8d5108               lea edx, [ecx + 8]
// 008baaa0  89542410             mov dword ptr [esp + 0x10], edx
// 008baaa4  99                   cdq 
// 008baaa5  2bc2                 sub eax, edx
// 008baaa7  8bf0                 mov esi, eax
// 008baaa9  8bc7                 mov eax, edi
// 008baaab  99                   cdq 
// 008baaac  2bc2                 sub eax, edx
// 008baaae  d1f8                 sar eax, 1
// 008baab0  d1fe                 sar esi, 1
// 008baab2  83c10c               add ecx, 0xc
// 008baab5  2bf0                 sub esi, eax
// 008baab7  8b01                 mov eax, dword ptr [ecx]
// 008baab9  2bc7                 sub eax, edi
// 008baabb  89742414             mov dword ptr [esp + 0x14], esi
// 008baabf  894c2440             mov dword ptr [esp + 0x40], ecx
// 008baac3  89442418             mov dword ptr [esp + 0x18], eax
// 008baac7  eb33                 jmp 0x8baafc
// 008baac9  8b442440             mov eax, dword ptr [esp + 0x40]
// 008baacd  8d4808               lea ecx, [eax + 8]
// 008baad0  894c2410             mov dword ptr [esp + 0x10], ecx
// 008baad4  8b09                 mov ecx, dword ptr [ecx]
// 008baad6  2bcf                 sub ecx, edi
// 008baad8  894c2414             mov dword ptr [esp + 0x14], ecx
// 008baadc  8d480c               lea ecx, [eax + 0xc]
// 008baadf  8b4004               mov eax, dword ptr [eax + 4]
// 008baae2  0301                 add eax, dword ptr [ecx]
// 008baae4  894c2440             mov dword ptr [esp + 0x40], ecx
// 008baae8  99                   cdq 
// 008baae9  2bc2                 sub eax, edx
// 008baaeb  8bc8                 mov ecx, eax
// 008baaed  8bc7                 mov eax, edi
// 008baaef  99                   cdq 
// 008baaf0  2bc2                 sub eax, edx
// 008baaf2  d1f9                 sar ecx, 1
// 008baaf4  d1f8                 sar eax, 1
// 008baaf6  2bc8                 sub ecx, eax
// 008baaf8  894c2418             mov dword ptr [esp + 0x18], ecx
// 008baafc  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008bab00  8d4c2414             lea ecx, [esp + 0x14]
// 008bab04  8b01                 mov eax, dword ptr [ecx]
// 008bab06  8b4904               mov ecx, dword ptr [ecx + 4]
// 008bab09  89442414             mov dword ptr [esp + 0x14], eax
// 008bab0d  03c7                 add eax, edi
// 008bab0f  8944241c             mov dword ptr [esp + 0x1c], eax
// 008bab13  8b4208               mov eax, dword ptr [edx + 8]
// 008bab16  894c2418             mov dword ptr [esp + 0x18], ecx
// 008bab1a  03cf                 add ecx, edi
// 008bab1c  33db                 xor ebx, ebx
// 008bab1e  894c2420             mov dword ptr [esp + 0x20], ecx
// 008bab22  85c0                 test eax, eax
// 008bab24  0f8efa000000         jle 0x8bac24
// 008bab2a  8d9b00000000         lea ebx, [ebx]
// 008bab30  85db                 test ebx, ebx
// 008bab32  0f8c07010000         jl 0x8bac3f
// 008bab38  3bd8                 cmp ebx, eax
// 008bab3a  0f8dff000000         jge 0x8bac3f
// 008bab40  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008bab44  8b4804               mov ecx, dword ptr [eax + 4]
// 008bab47  8b3499               mov esi, dword ptr [ecx + ebx*4]
// 008bab4a  85db                 test ebx, ebx
// 008bab4c  7528                 jne 0x8bab76
// 008bab4e  8b4610               mov eax, dword ptr [esi + 0x10]
// 008bab51  50                   push eax
// 008bab52  e8d9f9ffff           call 0x8ba530
// 008bab57  83c404               add esp, 4
// 008bab5a  85c0                 test eax, eax
// 008bab5c  7418                 je 0x8bab76
// 008bab5e  8bc8                 mov ecx, eax
// 008bab60  e8cbcbe9ff           call 0x757730
// 008bab65  a802                 test al, 2
// 008bab67  750d                 jne 0x8bab76
// 008bab69  6a11                 push 0x11
// 008bab6b  8bcd                 mov ecx, ebp
// 008bab6d  e88eadffff           call 0x8b5900
// 008bab72  89442444             mov dword ptr [esp + 0x44], eax
// 008bab76  8bce                 mov ecx, esi
// 008bab78  e833abffff           call 0x8b56b0
// 008bab7d  85c0                 test eax, eax
// 008bab7f  7468                 je 0x8babe9
// 008bab81  8b542414             mov edx, dword ptr [esp + 0x14]
// 008bab85  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bab89  83ec10               sub esp, 0x10
// 008bab8c  8bc4                 mov eax, esp
// 008bab8e  8910                 mov dword ptr [eax], edx
// 008bab90  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008bab94  894804               mov dword ptr [eax + 4], ecx
// 008bab97  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008bab9b  895008               mov dword ptr [eax + 8], edx
// 008bab9e  89480c               mov dword ptr [eax + 0xc], ecx
// 008baba1  8bce                 mov ecx, esi
// 008baba3  e878b2ffff           call 0x8b5e20
// 008baba8  8b442444             mov eax, dword ptr [esp + 0x44]
// 008babac  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008babb0  8b5500               mov edx, dword ptr [ebp]
// 008babb3  8b5264               mov edx, dword ptr [edx + 0x64]
// 008babb6  50                   push eax
// 008babb7  56                   push esi
// 008babb8  51                   push ecx
// 008babb9  8bcd                 mov ecx, ebp
// 008babbb  ffd2                 call edx
// 008babbd  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008babc1  8d0c07               lea ecx, [edi + eax]
// 008babc4  f7d9                 neg ecx
// 008babc6  837c245000           cmp dword ptr [esp + 0x50], 0
// 008babcb  8d542414             lea edx, [esp + 0x14]
// 008babcf  740c                 je 0x8babdd
// 008babd1  51                   push ecx
// 008babd2  6a00                 push 0
// 008babd4  52                   push edx
// 008babd5  ff156ccc9800         call dword ptr [0x98cc6c]
// 008babdb  eb37                 jmp 0x8bac14
// 008babdd  6a00                 push 0
// 008babdf  51                   push ecx
// 008babe0  52                   push edx
// 008babe1  ff156ccc9800         call dword ptr [0x98cc6c]
// 008babe7  eb2b                 jmp 0x8bac14
// 008babe9  8d4c2424             lea ecx, [esp + 0x24]
// 008babed  e83e06f9ff           call 0x84b230
// 008babf2  8b10                 mov edx, dword ptr [eax]
// 008babf4  83ec10               sub esp, 0x10
// 008babf7  8bcc                 mov ecx, esp
// 008babf9  8911                 mov dword ptr [ecx], edx
// 008babfb  8b5004               mov edx, dword ptr [eax + 4]
// 008babfe  895104               mov dword ptr [ecx + 4], edx
// 008bac01  8b5008               mov edx, dword ptr [eax + 8]
// 008bac04  8b400c               mov eax, dword ptr [eax + 0xc]
// 008bac07  895108               mov dword ptr [ecx + 8], edx
// 008bac0a  89410c               mov dword ptr [ecx + 0xc], eax
// 008bac0d  8bce                 mov ecx, esi
// 008bac0f  e80cb2ffff           call 0x8b5e20
// 008bac14  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008bac18  8b4108               mov eax, dword ptr [ecx + 8]
// 008bac1b  43                   inc ebx
// 008bac1c  3bd8                 cmp ebx, eax
// 008bac1e  0f8c0cffffff         jl 0x8bab30
// 008bac24  837c245000           cmp dword ptr [esp + 0x50], 0
// 008bac29  7419                 je 0x8bac44
// 008bac2b  8b542420             mov edx, dword ptr [esp + 0x20]
// 008bac2f  8b442440             mov eax, dword ptr [esp + 0x40]
// 008bac33  8910                 mov dword ptr [eax], edx
// 008bac35  5f                   pop edi
// 008bac36  5e                   pop esi
// 008bac37  5d                   pop ebp
// 008bac38  5b                   pop ebx
// 008bac39  83c424               add esp, 0x24
// 008bac3c  c21c00               ret 0x1c
// 008bac3f  e8c88ef3ff           call 0x7f3b0c
// 008bac44  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bac48  8b542410             mov edx, dword ptr [esp + 0x10]
// 008bac4c  5f                   pop edi
// 008bac4d  5e                   pop esi
// 008bac4e  5d                   pop ebp
// 008bac4f  890a                 mov dword ptr [edx], ecx
// 008bac51  5b                   pop ebx
// 008bac52  83c424               add esp, 0x24
// 008bac55  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawCaptionButtons@CXTPDockingPanePaintManager@@UAEXPAVCDC@@PAVCXTPDockingPaneCaptionButtons@@AAVCRect@@KHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPanePaintManager.cpp