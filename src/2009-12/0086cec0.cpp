// roc 2009-12 0086cec0  unit: CSelectionCaption  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086cec0
//
// 0086cec0  83ec10               sub esp, 0x10
// 0086cec3  56                   push esi
// 0086cec4  8bf1                 mov esi, ecx
// 0086cec6  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0086cecc  50                   push eax
// 0086cecd  ff1584cc9800         call dword ptr [0x98cc84]
// 0086ced3  85c0                 test eax, eax
// 0086ced5  744b                 je 0x86cf22
// 0086ced7  53                   push ebx
// 0086ced8  57                   push edi
// 0086ced9  8d8ed0000000         lea ecx, [esi + 0xd0]
// 0086cedf  8dbedc000000         lea edi, [esi + 0xdc]
// 0086cee5  ff1580de9800         call dword ptr [0x98de80]
// 0086ceeb  50                   push eax
// 0086ceec  8bcf                 mov ecx, edi
// 0086ceee  e8216df8ff           call 0x7f3c14
// 0086cef3  8b16                 mov edx, dword ptr [esi]
// 0086cef5  8b927c010000         mov edx, dword ptr [edx + 0x17c]
// 0086cefb  8d44240c             lea eax, [esp + 0xc]
// 0086ceff  50                   push eax
// 0086cf00  8bce                 mov ecx, esi
// 0086cf02  ffd2                 call edx
// 0086cf04  8b4804               mov ecx, dword ptr [eax + 4]
// 0086cf07  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0086cf0a  8b10                 mov edx, dword ptr [eax]
// 0086cf0c  8b4008               mov eax, dword ptr [eax + 8]
// 0086cf0f  6a01                 push 1
// 0086cf11  2bd9                 sub ebx, ecx
// 0086cf13  53                   push ebx
// 0086cf14  2bc2                 sub eax, edx
// 0086cf16  50                   push eax
// 0086cf17  51                   push ecx
// 0086cf18  52                   push edx
// 0086cf19  8bcf                 mov ecx, edi
// 0086cf1b  e8126df8ff           call 0x7f3c32
// 0086cf20  5f                   pop edi
// 0086cf21  5b                   pop ebx
// 0086cf22  8b16                 mov edx, dword ptr [esi]
// 0086cf24  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086cf28  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 0086cf2e  50                   push eax
// 0086cf2f  8bce                 mov ecx, esi
// 0086cf31  ffd2                 call edx
// 0086cf33  5e                   pop esi
// 0086cf34  83c410               add esp, 0x10
// 0086cf37  c20400               ret 4
// copied from an identical function in another client (function ?UpdateCaptionText@CXTCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp