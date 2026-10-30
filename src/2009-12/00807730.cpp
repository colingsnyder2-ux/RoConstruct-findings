// roc 2009-12 00807730  unit: CXTPCommandBar  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807730
//
// 00807730  56                   push esi
// 00807731  8bf1                 mov esi, ecx
// 00807733  e8c8cdffff           call 0x804500
// 00807738  85c0                 test eax, eax
// 0080773a  0f85a9000000         jne 0x8077e9
// 00807740  8b442410             mov eax, dword ptr [esp + 0x10]
// 00807744  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00807748  57                   push edi
// 00807749  50                   push eax
// 0080774a  51                   push ecx
// 0080774b  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00807751  e8cade0300           call 0x845620
// 00807756  8bf8                 mov edi, eax
// 00807758  85ff                 test edi, edi
// 0080775a  7466                 je 0x8077c2
// 0080775c  8bce                 mov ecx, esi
// 0080775e  e82df9ffff           call 0x807090
// 00807763  8b4020               mov eax, dword ptr [eax + 0x20]
// 00807766  57                   push edi
// 00807767  8d542414             lea edx, [esp + 0x14]
// 0080776b  52                   push edx
// 0080776c  6859280000           push 0x2859
// 00807771  50                   push eax
// 00807772  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00807778  83f801               cmp eax, 1
// 0080777b  746b                 je 0x8077e8
// 0080777d  8bce                 mov ecx, esi
// 0080777f  e81ccdffff           call 0x8044a0
// 00807784  83b82001000000       cmp dword ptr [eax + 0x120], 0
// 0080778b  741b                 je 0x8077a8
// 0080778d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00807791  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00807795  8b17                 mov edx, dword ptr [edi]
// 00807797  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0080779d  50                   push eax
// 0080779e  51                   push ecx
// 0080779f  8bcf                 mov ecx, edi
// 008077a1  ffd2                 call edx
// 008077a3  5f                   pop edi
// 008077a4  5e                   pop esi
// 008077a5  c20c00               ret 0xc
// 008077a8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008077ac  8b07                 mov eax, dword ptr [edi]
// 008077ae  8b542410             mov edx, dword ptr [esp + 0x10]
// 008077b2  8b80f4000000         mov eax, dword ptr [eax + 0xf4]
// 008077b8  51                   push ecx
// 008077b9  52                   push edx
// 008077ba  8bcf                 mov ecx, edi
// 008077bc  ffd0                 call eax
// 008077be  85c0                 test eax, eax
// 008077c0  7526                 jne 0x8077e8
// 008077c2  8bce                 mov ecx, esi
// 008077c4  e8d7ccffff           call 0x8044a0
// 008077c9  85c0                 test eax, eax
// 008077cb  741b                 je 0x8077e8
// 008077cd  3bc6                 cmp eax, esi
// 008077cf  7417                 je 0x8077e8
// 008077d1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008077d5  8b10                 mov edx, dword ptr [eax]
// 008077d7  8b92fc010000         mov edx, dword ptr [edx + 0x1fc]
// 008077dd  51                   push ecx
// 008077de  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008077e2  51                   push ecx
// 008077e3  56                   push esi
// 008077e4  8bc8                 mov ecx, eax
// 008077e6  ffd2                 call edx
// 008077e8  5f                   pop edi
// 008077e9  5e                   pop esi
// 008077ea  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonUp@CXTPCommandBar@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp