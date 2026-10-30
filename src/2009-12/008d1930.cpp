// roc 2009-12 008d1930  unit: PAVCXTPTabManagerAtom::?$CArray  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1930
//
// 008d1930  83ec24               sub esp, 0x24
// 008d1933  55                   push ebp
// 008d1934  8be9                 mov ebp, ecx
// 008d1936  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d193a  56                   push esi
// 008d193b  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 008d1941  8b06                 mov eax, dword ptr [esi]
// 008d1943  c744240800000000     mov dword ptr [esp + 8], 0
// 008d194b  85c0                 test eax, eax
// 008d194d  0f846c010000         je 0x8d1abf
// 008d1953  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d1957  3b5604               cmp edx, dword ptr [esi + 4]
// 008d195a  0f8d5f010000         jge 0x8d1abf
// 008d1960  53                   push ebx
// 008d1961  8b5cd004             mov ebx, dword ptr [eax + edx*8 + 4]
// 008d1965  57                   push edi
// 008d1966  8b3cd0               mov edi, dword ptr [eax + edx*8]
// 008d1969  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 008d196f  83782000             cmp dword ptr [eax + 0x20], 0
// 008d1973  0f8494000000         je 0x8d1a0d
// 008d1979  3bfb                 cmp edi, ebx
// 008d197b  0f8f3c010000         jg 0x8d1abd
// 008d1981  85ff                 test edi, edi
// 008d1983  0f8c34010000         jl 0x8d1abd
// 008d1989  3b795c               cmp edi, dword ptr [ecx + 0x5c]
// 008d198c  0f8d2b010000         jge 0x8d1abd
// 008d1992  8b4158               mov eax, dword ptr [ecx + 0x58]
// 008d1995  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008d1998  85f6                 test esi, esi
// 008d199a  0f841d010000         je 0x8d1abd
// 008d19a0  395664               cmp dword ptr [esi + 0x64], edx
// 008d19a3  0f8514010000         jne 0x8d1abd
// 008d19a9  8b4660               mov eax, dword ptr [esi + 0x60]
// 008d19ac  397004               cmp dword ptr [eax + 4], esi
// 008d19af  745c                 je 0x8d1a0d
// 008d19b1  8bce                 mov ecx, esi
// 008d19b3  e8381aeaff           call 0x7733f0
// 008d19b8  85c0                 test eax, eax
// 008d19ba  743b                 je 0x8d19f7
// 008d19bc  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d19c2  8b11                 mov edx, dword ptr [ecx]
// 008d19c4  8b5220               mov edx, dword ptr [edx + 0x20]
// 008d19c7  56                   push esi
// 008d19c8  8d442418             lea eax, [esp + 0x18]
// 008d19cc  50                   push eax
// 008d19cd  ffd2                 call edx
// 008d19cf  50                   push eax
// 008d19d0  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d19d4  50                   push eax
// 008d19d5  8d4c242c             lea ecx, [esp + 0x2c]
// 008d19d9  51                   push ecx
// 008d19da  ff15dcca9800         call dword ptr [0x98cadc]
// 008d19e0  85c0                 test eax, eax
// 008d19e2  7413                 je 0x8d19f7
// 008d19e4  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d19ea  8b11                 mov edx, dword ptr [ecx]
// 008d19ec  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d19f0  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d19f3  56                   push esi
// 008d19f4  50                   push eax
// 008d19f5  ffd2                 call edx
// 008d19f7  47                   inc edi
// 008d19f8  3bfb                 cmp edi, ebx
// 008d19fa  0f8fbd000000         jg 0x8d1abd
// 008d1a00  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d1a04  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d1a08  e974ffffff           jmp 0x8d1981
// 008d1a0d  3bdf                 cmp ebx, edi
// 008d1a0f  0f8ca8000000         jl 0x8d1abd
// 008d1a15  85db                 test ebx, ebx
// 008d1a17  0f8ca0000000         jl 0x8d1abd
// 008d1a1d  3b595c               cmp ebx, dword ptr [ecx + 0x5c]
// 008d1a20  0f8d97000000         jge 0x8d1abd
// 008d1a26  8b4158               mov eax, dword ptr [ecx + 0x58]
// 008d1a29  8b3498               mov esi, dword ptr [eax + ebx*4]
// 008d1a2c  85f6                 test esi, esi
// 008d1a2e  0f8489000000         je 0x8d1abd
// 008d1a34  395664               cmp dword ptr [esi + 0x64], edx
// 008d1a37  7566                 jne 0x8d1a9f
// 008d1a39  8bce                 mov ecx, esi
// 008d1a3b  e8b019eaff           call 0x7733f0
// 008d1a40  85c0                 test eax, eax
// 008d1a42  7449                 je 0x8d1a8d
// 008d1a44  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d1a4a  8b11                 mov edx, dword ptr [ecx]
// 008d1a4c  8b5220               mov edx, dword ptr [edx + 0x20]
// 008d1a4f  56                   push esi
// 008d1a50  8d442428             lea eax, [esp + 0x28]
// 008d1a54  50                   push eax
// 008d1a55  ffd2                 call edx
// 008d1a57  50                   push eax
// 008d1a58  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d1a5c  50                   push eax
// 008d1a5d  8d4c241c             lea ecx, [esp + 0x1c]
// 008d1a61  51                   push ecx
// 008d1a62  ff15dcca9800         call dword ptr [0x98cadc]
// 008d1a68  85c0                 test eax, eax
// 008d1a6a  7421                 je 0x8d1a8d
// 008d1a6c  8b5660               mov edx, dword ptr [esi + 0x60]
// 008d1a6f  397204               cmp dword ptr [edx + 4], esi
// 008d1a72  7506                 jne 0x8d1a7a
// 008d1a74  89742410             mov dword ptr [esp + 0x10], esi
// 008d1a78  eb13                 jmp 0x8d1a8d
// 008d1a7a  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d1a80  8b01                 mov eax, dword ptr [ecx]
// 008d1a82  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d1a86  8b4034               mov eax, dword ptr [eax + 0x34]
// 008d1a89  56                   push esi
// 008d1a8a  52                   push edx
// 008d1a8b  ffd0                 call eax
// 008d1a8d  4b                   dec ebx
// 008d1a8e  3bdf                 cmp ebx, edi
// 008d1a90  7c0d                 jl 0x8d1a9f
// 008d1a92  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d1a96  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d1a9a  e976ffffff           jmp 0x8d1a15
// 008d1a9f  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d1aa3  85c0                 test eax, eax
// 008d1aa5  7416                 je 0x8d1abd
// 008d1aa7  8bade0000000         mov ebp, dword ptr [ebp + 0xe0]
// 008d1aad  8b5500               mov edx, dword ptr [ebp]
// 008d1ab0  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d1ab3  50                   push eax
// 008d1ab4  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d1ab8  50                   push eax
// 008d1ab9  8bcd                 mov ecx, ebp
// 008d1abb  ffd2                 call edx
// 008d1abd  5f                   pop edi
// 008d1abe  5b                   pop ebx
// 008d1abf  5e                   pop esi
// 008d1ac0  5d                   pop ebp
// 008d1ac1  83c424               add esp, 0x24
// 008d1ac4  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawRowItems@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
