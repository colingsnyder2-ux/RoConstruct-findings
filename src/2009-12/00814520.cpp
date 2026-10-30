// roc 2009-12 00814520  unit: MyXTPCommandBars  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814520
//
// 00814520  6aff                 push -1
// 00814522  68a2a39500           push 0x95a3a2
// 00814527  64a100000000         mov eax, dword ptr fs:[0]
// 0081452d  50                   push eax
// 0081452e  55                   push ebp
// 0081452f  56                   push esi
// 00814530  57                   push edi
// 00814531  a10052b600           mov eax, dword ptr [0xb65200]
// 00814536  33c4                 xor eax, esp
// 00814538  50                   push eax
// 00814539  8d442410             lea eax, [esp + 0x10]
// 0081453d  64a300000000         mov dword ptr fs:[0], eax
// 00814543  8bf9                 mov edi, ecx
// 00814545  8b442424             mov eax, dword ptr [esp + 0x24]
// 00814549  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0081454f  6a00                 push 0
// 00814551  6aff                 push -1
// 00814553  6a00                 push 0
// 00814555  6a00                 push 0
// 00814557  6a02                 push 2
// 00814559  e8023c0300           call 0x848160
// 0081455e  8bf0                 mov esi, eax
// 00814560  6a08                 push 8
// 00814562  8bce                 mov ecx, esi
// 00814564  e8f71afeff           call 0x7f6060
// 00814569  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0081456d  8d4c2420             lea ecx, [esp + 0x20]
// 00814571  51                   push ecx
// 00814572  8bcd                 mov ecx, ebp
// 00814574  e80790feff           call 0x7fd580
// 00814579  6a00                 push 0
// 0081457b  50                   push eax
// 0081457c  8d54242c             lea edx, [esp + 0x2c]
// 00814580  52                   push edx
// 00814581  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00814589  e8f23f0300           call 0x848580
// 0081458e  83c40c               add esp, 0xc
// 00814591  8bc8                 mov ecx, eax
// 00814593  c644241801           mov byte ptr [esp + 0x18], 1
// 00814598  ff1580de9800         call dword ptr [0x98de80]
// 0081459e  50                   push eax
// 0081459f  8bce                 mov ecx, esi
// 008145a1  e88a21feff           call 0x7f6730
// 008145a6  8d4c2424             lea ecx, [esp + 0x24]
// 008145aa  ff15c0de9800         call dword ptr [0x98dec0]
// 008145b0  8d4c2420             lea ecx, [esp + 0x20]
// 008145b4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008145bc  ff15c0de9800         call dword ptr [0x98dec0]
// 008145c2  837f6000             cmp dword ptr [edi + 0x60], 0
// 008145c6  7419                 je 0x8145e1
// 008145c8  83bd8801000000       cmp dword ptr [ebp + 0x188], 0
// 008145cf  7410                 je 0x8145e1
// 008145d1  83bd3801000000       cmp dword ptr [ebp + 0x138], 0
// 008145d8  7407                 je 0x8145e1
// 008145da  bf01000000           mov edi, 1
// 008145df  eb02                 jmp 0x8145e3
// 008145e1  33ff                 xor edi, edi
// 008145e3  8b06                 mov eax, dword ptr [esi]
// 008145e5  8b5068               mov edx, dword ptr [eax + 0x68]
// 008145e8  57                   push edi
// 008145e9  8bce                 mov ecx, esi
// 008145eb  ffd2                 call edx
// 008145ed  85ff                 test edi, edi
// 008145ef  742a                 je 0x81461b
// 008145f1  8b06                 mov eax, dword ptr [esi]
// 008145f3  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 008145f9  8bce                 mov ecx, esi
// 008145fb  ffd2                 call edx
// 008145fd  50                   push eax
// 008145fe  8bcd                 mov ecx, ebp
// 00814600  e8dbf0ffff           call 0x8136e0
// 00814605  8b06                 mov eax, dword ptr [esi]
// 00814607  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 0081460d  8bce                 mov ecx, esi
// 0081460f  ffd2                 call edx
// 00814611  c7801002000001000000 mov dword ptr [eax + 0x210], 1
// 0081461b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081461f  64890d00000000       mov dword ptr fs:[0], ecx
// 00814626  59                   pop ecx
// 00814627  5f                   pop edi
// 00814628  5e                   pop esi
// 00814629  5d                   pop ebp
// 0081462a  83c40c               add esp, 0xc
// 0081462d  c20800               ret 8
// copied from an identical function in another client (function ?_GetAddOrRemovePopup@CXTPCommandBars@@IAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCommandBars.cpp