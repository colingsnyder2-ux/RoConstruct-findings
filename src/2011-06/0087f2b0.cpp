// roc 2011-06 0087f2b0  unit: CSelectionCaption  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087f2b0
//
// 0087f2b0  83ec10               sub esp, 0x10
// 0087f2b3  56                   push esi
// 0087f2b4  8bf1                 mov esi, ecx
// 0087f2b6  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0087f2bc  50                   push eax
// 0087f2bd  ff15ec1ba400         call dword ptr [0xa41bec]
// 0087f2c3  85c0                 test eax, eax
// 0087f2c5  744b                 je 0x87f312
// 0087f2c7  53                   push ebx
// 0087f2c8  57                   push edi
// 0087f2c9  8d8ed0000000         lea ecx, [esi + 0xd0]
// 0087f2cf  8dbedc000000         lea edi, [esi + 0xdc]
// 0087f2d5  ff15c82da400         call dword ptr [0xa42dc8]
// 0087f2db  50                   push eax
// 0087f2dc  8bcf                 mov ecx, edi
// 0087f2de  e82fb1f8ff           call 0x80a412
// 0087f2e3  8b16                 mov edx, dword ptr [esi]
// 0087f2e5  8b927c010000         mov edx, dword ptr [edx + 0x17c]
// 0087f2eb  8d44240c             lea eax, [esp + 0xc]
// 0087f2ef  50                   push eax
// 0087f2f0  8bce                 mov ecx, esi
// 0087f2f2  ffd2                 call edx
// 0087f2f4  8b4804               mov ecx, dword ptr [eax + 4]
// 0087f2f7  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0087f2fa  8b10                 mov edx, dword ptr [eax]
// 0087f2fc  8b4008               mov eax, dword ptr [eax + 8]
// 0087f2ff  6a01                 push 1
// 0087f301  2bd9                 sub ebx, ecx
// 0087f303  53                   push ebx
// 0087f304  2bc2                 sub eax, edx
// 0087f306  50                   push eax
// 0087f307  51                   push ecx
// 0087f308  52                   push edx
// 0087f309  8bcf                 mov ecx, edi
// 0087f30b  e820b1f8ff           call 0x80a430
// 0087f310  5f                   pop edi
// 0087f311  5b                   pop ebx
// 0087f312  8b16                 mov edx, dword ptr [esi]
// 0087f314  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087f318  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 0087f31e  50                   push eax
// 0087f31f  8bce                 mov ecx, esi
// 0087f321  ffd2                 call edx
// 0087f323  5e                   pop esi
// 0087f324  83c410               add esp, 0x10
// 0087f327  c20400               ret 4
// copied from an identical function in another client (function ?UpdateCaptionText@CXTCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp