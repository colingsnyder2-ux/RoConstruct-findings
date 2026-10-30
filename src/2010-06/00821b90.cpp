// roc 2010-06 00821b90  unit: CSelectionCaption  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00821b90
//
// 00821b90  83ec10               sub esp, 0x10
// 00821b93  56                   push esi
// 00821b94  8bf1                 mov esi, ecx
// 00821b96  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00821b9c  50                   push eax
// 00821b9d  ff1528bc9e00         call dword ptr [0x9ebc28]
// 00821ba3  85c0                 test eax, eax
// 00821ba5  744b                 je 0x821bf2
// 00821ba7  53                   push ebx
// 00821ba8  57                   push edi
// 00821ba9  8d8ed0000000         lea ecx, [esi + 0xd0]
// 00821baf  8dbedc000000         lea edi, [esi + 0xdc]
// 00821bb5  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00821bbb  50                   push eax
// 00821bbc  8bcf                 mov ecx, edi
// 00821bbe  e89161f8ff           call 0x7a7d54
// 00821bc3  8b16                 mov edx, dword ptr [esi]
// 00821bc5  8b927c010000         mov edx, dword ptr [edx + 0x17c]
// 00821bcb  8d44240c             lea eax, [esp + 0xc]
// 00821bcf  50                   push eax
// 00821bd0  8bce                 mov ecx, esi
// 00821bd2  ffd2                 call edx
// 00821bd4  8b4804               mov ecx, dword ptr [eax + 4]
// 00821bd7  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00821bda  8b10                 mov edx, dword ptr [eax]
// 00821bdc  8b4008               mov eax, dword ptr [eax + 8]
// 00821bdf  6a01                 push 1
// 00821be1  2bd9                 sub ebx, ecx
// 00821be3  53                   push ebx
// 00821be4  2bc2                 sub eax, edx
// 00821be6  50                   push eax
// 00821be7  51                   push ecx
// 00821be8  52                   push edx
// 00821be9  8bcf                 mov ecx, edi
// 00821beb  e88261f8ff           call 0x7a7d72
// 00821bf0  5f                   pop edi
// 00821bf1  5b                   pop ebx
// 00821bf2  8b16                 mov edx, dword ptr [esi]
// 00821bf4  8b442418             mov eax, dword ptr [esp + 0x18]
// 00821bf8  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 00821bfe  50                   push eax
// 00821bff  8bce                 mov ecx, esi
// 00821c01  ffd2                 call edx
// 00821c03  5e                   pop esi
// 00821c04  83c410               add esp, 0x10
// 00821c07  c20400               ret 4
// copied from an identical function in another client (function ?UpdateCaptionText@CXTCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp