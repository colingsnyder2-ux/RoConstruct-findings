// roc 2009-06 00791ea0  unit: CSelectionCaption  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791ea0
//
// 00791ea0  83ec10               sub esp, 0x10
// 00791ea3  56                   push esi
// 00791ea4  8bf1                 mov esi, ecx
// 00791ea6  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00791eac  50                   push eax
// 00791ead  ff15e0ed8900         call dword ptr [0x89ede0]
// 00791eb3  85c0                 test eax, eax
// 00791eb5  744b                 je 0x791f02
// 00791eb7  53                   push ebx
// 00791eb8  57                   push edi
// 00791eb9  8d8ed0000000         lea ecx, [esi + 0xd0]
// 00791ebf  8dbedc000000         lea edi, [esi + 0xdc]
// 00791ec5  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00791ecb  50                   push eax
// 00791ecc  8bcf                 mov ecx, edi
// 00791ece  e8196ff8ff           call 0x718dec
// 00791ed3  8b16                 mov edx, dword ptr [esi]
// 00791ed5  8b927c010000         mov edx, dword ptr [edx + 0x17c]
// 00791edb  8d44240c             lea eax, [esp + 0xc]
// 00791edf  50                   push eax
// 00791ee0  8bce                 mov ecx, esi
// 00791ee2  ffd2                 call edx
// 00791ee4  8b4804               mov ecx, dword ptr [eax + 4]
// 00791ee7  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00791eea  8b10                 mov edx, dword ptr [eax]
// 00791eec  8b4008               mov eax, dword ptr [eax + 8]
// 00791eef  6a01                 push 1
// 00791ef1  2bd9                 sub ebx, ecx
// 00791ef3  53                   push ebx
// 00791ef4  2bc2                 sub eax, edx
// 00791ef6  50                   push eax
// 00791ef7  51                   push ecx
// 00791ef8  52                   push edx
// 00791ef9  8bcf                 mov ecx, edi
// 00791efb  e80a6ff8ff           call 0x718e0a
// 00791f00  5f                   pop edi
// 00791f01  5b                   pop ebx
// 00791f02  8b16                 mov edx, dword ptr [esi]
// 00791f04  8b442418             mov eax, dword ptr [esp + 0x18]
// 00791f08  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 00791f0e  50                   push eax
// 00791f0f  8bce                 mov ecx, esi
// 00791f11  ffd2                 call edx
// 00791f13  5e                   pop esi
// 00791f14  83c410               add esp, 0x10
// 00791f17  c20400               ret 4
// copied from an identical function in another client (function ?UpdateCaptionText@CXTCaption@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp