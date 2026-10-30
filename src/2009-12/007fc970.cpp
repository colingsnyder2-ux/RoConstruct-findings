// roc 2009-12 007fc970  unit: CPatchedControlComboBox  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc970
//
// 007fc970  8b442404             mov eax, dword ptr [esp + 4]
// 007fc974  56                   push esi
// 007fc975  8bf1                 mov esi, ecx
// 007fc977  3986b8010000         cmp dword ptr [esi + 0x1b8], eax
// 007fc97d  0f843c010000         je 0x7fcabf
// 007fc983  57                   push edi
// 007fc984  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 007fc98a  85c0                 test eax, eax
// 007fc98c  0f8496000000         je 0x7fca28
// 007fc992  e889e0ffff           call 0x7faa20
// 007fc997  898690010000         mov dword ptr [esi + 0x190], eax
// 007fc99d  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fc9a3  c786c001000000000000 mov dword ptr [esi + 0x1c0], 0
// 007fc9ad  85c0                 test eax, eax
// 007fc9af  7426                 je 0x7fc9d7
// 007fc9b1  83782000             cmp dword ptr [eax + 0x20], 0
// 007fc9b5  7420                 je 0x7fc9d7
// 007fc9b7  85c0                 test eax, eax
// 007fc9b9  7504                 jne 0x7fc9bf
// 007fc9bb  33ff                 xor edi, edi
// 007fc9bd  eb03                 jmp 0x7fc9c2
// 007fc9bf  8b7820               mov edi, dword ptr [eax + 0x20]
// 007fc9c2  ff15eccb9800         call dword ptr [0x98cbec]
// 007fc9c8  3bc7                 cmp eax, edi
// 007fc9ca  740b                 je 0x7fc9d7
// 007fc9cc  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007fc9d2  e82b72ffff           call 0x7f3c02
// 007fc9d7  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007fc9dd  8b01                 mov eax, dword ptr [ecx]
// 007fc9df  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 007fc9e5  6a00                 push 0
// 007fc9e7  6a00                 push 0
// 007fc9e9  6a01                 push 1
// 007fc9eb  ffd2                 call edx
// 007fc9ed  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007fc9f3  8b01                 mov eax, dword ptr [ecx]
// 007fc9f5  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 007fc9fb  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 007fca01  6a00                 push 0
// 007fca03  52                   push edx
// 007fca04  ffd0                 call eax
// 007fca06  68b0647f00           push 0x7f64b0
// 007fca0b  b9d0bab900           mov ecx, 0xb9bad0
// 007fca10  e8279a1200           call 0x92643c
// 007fca15  85c0                 test eax, eax
// 007fca17  7505                 jne 0x7fca1e
// 007fca19  e8ee70ffff           call 0x7f3b0c
// 007fca1e  ff4004               inc dword ptr [eax + 4]
// 007fca21  6a03                 push 3
// 007fca23  e986000000           jmp 0x7fcaae
// 007fca28  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 007fca2f  7528                 jne 0x7fca59
// 007fca31  e89a04f7ff           call 0x76ced0
// 007fca36  85c0                 test eax, eax
// 007fca38  751f                 jne 0x7fca59
// 007fca3a  398684010000         cmp dword ptr [esi + 0x184], eax
// 007fca40  7517                 jne 0x7fca59
// 007fca42  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 007fca48  51                   push ecx
// 007fca49  8bce                 mov ecx, esi
// 007fca4b  e800e0ffff           call 0x7faa50
// 007fca50  6a0a                 push 0xa
// 007fca52  8bce                 mov ecx, esi
// 007fca54  e837bbffff           call 0x7f8590
// 007fca59  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fca5f  85c0                 test eax, eax
// 007fca61  742e                 je 0x7fca91
// 007fca63  83782000             cmp dword ptr [eax + 0x20], 0
// 007fca67  7428                 je 0x7fca91
// 007fca69  85c0                 test eax, eax
// 007fca6b  7504                 jne 0x7fca71
// 007fca6d  33ff                 xor edi, edi
// 007fca6f  eb03                 jmp 0x7fca74
// 007fca71  8b7820               mov edi, dword ptr [eax + 0x20]
// 007fca74  ff15eccb9800         call dword ptr [0x98cbec]
// 007fca7a  3bc7                 cmp eax, edi
// 007fca7c  7513                 jne 0x7fca91
// 007fca7e  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 007fca84  8b82d4000000         mov eax, dword ptr [edx + 0xd4]
// 007fca8a  50                   push eax
// 007fca8b  ff15c8cb9800         call dword ptr [0x98cbc8]
// 007fca91  68b0647f00           push 0x7f64b0
// 007fca96  b9d0bab900           mov ecx, 0xb9bad0
// 007fca9b  e89c991200           call 0x92643c
// 007fcaa0  85c0                 test eax, eax
// 007fcaa2  7505                 jne 0x7fcaa9
// 007fcaa4  e86370ffff           call 0x7f3b0c
// 007fcaa9  ff4804               dec dword ptr [eax + 4]
// 007fcaac  6a04                 push 4
// 007fcaae  8bce                 mov ecx, esi
// 007fcab0  e8dbbaffff           call 0x7f8590
// 007fcab5  6a01                 push 1
// 007fcab7  8bce                 mov ecx, esi
// 007fcab9  e8029cffff           call 0x7f66c0
// 007fcabe  5f                   pop edi
// 007fcabf  5e                   pop esi
// 007fcac0  c20400               ret 4
// copied from an identical function in another client (function ?SetFocused@CXTPControlComboBox@@UAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp