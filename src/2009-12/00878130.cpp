// roc 2009-12 00878130  unit: CXTPControlGallery  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878130
//
// 00878130  83ec20               sub esp, 0x20
// 00878133  56                   push esi
// 00878134  8bf1                 mov esi, ecx
// 00878136  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0087813c  85d2                 test edx, edx
// 0087813e  0f8488000000         je 0x8781cc
// 00878144  e807f2ffff           call 0x877350
// 00878149  85c0                 test eax, eax
// 0087814b  747f                 je 0x8781cc
// 0087814d  52                   push edx
// 0087814e  e82d98fcff           call 0x841980
// 00878153  50                   push eax
// 00878154  e8e5baf7ff           call 0x7f3c3e
// 00878159  83c408               add esp, 8
// 0087815c  85c0                 test eax, eax
// 0087815e  742f                 je 0x87818f
// 00878160  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00878166  8b8880010000         mov ecx, dword ptr [eax + 0x180]
// 0087816c  85c9                 test ecx, ecx
// 0087816e  741f                 je 0x87818f
// 00878170  83b9fc0000000a       cmp dword ptr [ecx + 0xfc], 0xa
// 00878177  7516                 jne 0x87818f
// 00878179  8d542414             lea edx, [esp + 0x14]
// 0087817d  52                   push edx
// 0087817e  e82ddaf7ff           call 0x7f5bb0
// 00878183  8bc8                 mov ecx, eax
// 00878185  8b4108               mov eax, dword ptr [ecx + 8]
// 00878188  2b01                 sub eax, dword ptr [ecx]
// 0087818a  5e                   pop esi
// 0087818b  83c420               add esp, 0x20
// 0087818e  c3                   ret 
// 0087818f  8b06                 mov eax, dword ptr [esi]
// 00878191  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00878197  8d4c2404             lea ecx, [esp + 4]
// 0087819b  51                   push ecx
// 0087819c  8bce                 mov ecx, esi
// 0087819e  ffd2                 call edx
// 008781a0  8bce                 mov ecx, esi
// 008781a2  e8a9f1ffff           call 0x877350
// 008781a7  8bc8                 mov ecx, eax
// 008781a9  b810000000           mov eax, 0x10
// 008781ae  394120               cmp dword ptr [ecx + 0x20], eax
// 008781b1  7c0a                 jl 0x8781bd
// 008781b3  8bce                 mov ecx, esi
// 008781b5  e896f1ffff           call 0x877350
// 008781ba  8b4020               mov eax, dword ptr [eax + 0x20]
// 008781bd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008781c1  03c2                 add eax, edx
// 008781c3  03442404             add eax, dword ptr [esp + 4]
// 008781c7  5e                   pop esi
// 008781c8  83c420               add esp, 0x20
// 008781cb  c3                   ret 
// 008781cc  33c0                 xor eax, eax
// 008781ce  5e                   pop esi
// 008781cf  83c420               add esp, 0x20
// 008781d2  c3                   ret 
// copied from an identical function in another client (function ?GetCustomizeMinWidth@CXTPControlGallery@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp