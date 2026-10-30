// roc 2009-12 008075c0  unit: CXTPCommandBar  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008075c0
//
// 008075c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008075c4  53                   push ebx
// 008075c5  56                   push esi
// 008075c6  8bf1                 mov esi, ecx
// 008075c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008075cc  50                   push eax
// 008075cd  51                   push ecx
// 008075ce  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008075d4  e847e00300           call 0x845620
// 008075d9  8bd8                 mov ebx, eax
// 008075db  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008075e1  83f8ff               cmp eax, -1
// 008075e4  7441                 je 0x807627
// 008075e6  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 008075ed  7538                 jne 0x807627
// 008075ef  83bef800000001       cmp dword ptr [esi + 0xf8], 1
// 008075f6  752f                 jne 0x807627
// 008075f8  85db                 test ebx, ebx
// 008075fa  7408                 je 0x807604
// 008075fc  398380000000         cmp dword ptr [ebx + 0x80], eax
// 00807602  7423                 je 0x807627
// 00807604  3b86cc000000         cmp eax, dword ptr [esi + 0xcc]
// 0080760a  7510                 jne 0x80761c
// 0080760c  8b16                 mov edx, dword ptr [esi]
// 0080760e  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00807614  6a00                 push 0
// 00807616  6aff                 push -1
// 00807618  8bce                 mov ecx, esi
// 0080761a  ffd0                 call eax
// 0080761c  6a00                 push 0
// 0080761e  6aff                 push -1
// 00807620  8bce                 mov ecx, esi
// 00807622  e879efffff           call 0x8065a0
// 00807627  8bce                 mov ecx, esi
// 00807629  85db                 test ebx, ebx
// 0080762b  0f84f4000000         je 0x807725
// 00807631  57                   push edi
// 00807632  e8c9ceffff           call 0x804500
// 00807637  85c0                 test eax, eax
// 00807639  0f85ad000000         jne 0x8076ec
// 0080763f  8b13                 mov edx, dword ptr [ebx]
// 00807641  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 00807647  8bcb                 mov ecx, ebx
// 00807649  ffd0                 call eax
// 0080764b  85c0                 test eax, eax
// 0080764d  0f8499000000         je 0x8076ec
// 00807653  56                   push esi
// 00807654  e8e79a0000           call 0x811140
// 00807659  50                   push eax
// 0080765a  e8dfc5feff           call 0x7f3c3e
// 0080765f  83c408               add esp, 8
// 00807662  85c0                 test eax, eax
// 00807664  0f8482000000         je 0x8076ec
// 0080766a  6a12                 push 0x12
// 0080766c  ff1530cc9800         call dword ptr [0x98cc30]
// 00807672  6685c0               test ax, ax
// 00807675  7d75                 jge 0x8076ec
// 00807677  8bce                 mov ecx, esi
// 00807679  e852ceffff           call 0x8044d0
// 0080767e  8bf8                 mov edi, eax
// 00807680  85ff                 test edi, edi
// 00807682  7468                 je 0x8076ec
// 00807684  837f6000             cmp dword ptr [edi + 0x60], 0
// 00807688  7462                 je 0x8076ec
// 0080768a  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 0080768d  83794400             cmp dword ptr [ecx + 0x44], 0
// 00807691  7459                 je 0x8076ec
// 00807693  6a01                 push 1
// 00807695  8bcf                 mov ecx, edi
// 00807697  e824f30000           call 0x8169c0
// 0080769c  6a00                 push 0
// 0080769e  6aff                 push -1
// 008076a0  8bce                 mov ecx, esi
// 008076a2  e8f9eeffff           call 0x8065a0
// 008076a7  8b16                 mov edx, dword ptr [esi]
// 008076a9  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 008076af  6a00                 push 0
// 008076b1  6aff                 push -1
// 008076b3  8bce                 mov ecx, esi
// 008076b5  ffd0                 call eax
// 008076b7  8b442418             mov eax, dword ptr [esp + 0x18]
// 008076bb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008076bf  8b13                 mov edx, dword ptr [ebx]
// 008076c1  8b9208010000         mov edx, dword ptr [edx + 0x108]
// 008076c7  50                   push eax
// 008076c8  51                   push ecx
// 008076c9  8bcb                 mov ecx, ebx
// 008076cb  ffd2                 call edx
// 008076cd  6a00                 push 0
// 008076cf  8bcf                 mov ecx, edi
// 008076d1  e8eaf20000           call 0x8169c0
// 008076d6  6a00                 push 0
// 008076d8  8bcf                 mov ecx, edi
// 008076da  e8c1d20000           call 0x8149a0
// 008076df  8bcf                 mov ecx, edi
// 008076e1  e8fae70000           call 0x815ee0
// 008076e6  5f                   pop edi
// 008076e7  5e                   pop esi
// 008076e8  5b                   pop ebx
// 008076e9  c20c00               ret 0xc
// 008076ec  8bce                 mov ecx, esi
// 008076ee  e80dceffff           call 0x804500
// 008076f3  85c0                 test eax, eax
// 008076f5  7410                 je 0x807707
// 008076f7  8b03                 mov eax, dword ptr [ebx]
// 008076f9  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 008076ff  8bcb                 mov ecx, ebx
// 00807701  ffd2                 call edx
// 00807703  85c0                 test eax, eax
// 00807705  74df                 je 0x8076e6
// 00807707  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080770b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080770f  8b03                 mov eax, dword ptr [ebx]
// 00807711  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 00807717  51                   push ecx
// 00807718  52                   push edx
// 00807719  6a00                 push 0
// 0080771b  8bcb                 mov ecx, ebx
// 0080771d  ffd0                 call eax
// 0080771f  5f                   pop edi
// 00807720  5e                   pop esi
// 00807721  5b                   pop ebx
// 00807722  c20c00               ret 0xc
// 00807725  e806c7feff           call 0x7f3e30
// 0080772a  5e                   pop esi
// 0080772b  5b                   pop ebx
// 0080772c  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPCommandBar@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp