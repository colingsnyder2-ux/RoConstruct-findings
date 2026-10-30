// roc 2009-12 008073d0  unit: CXTPCommandBar  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008073d0
//
// 008073d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008073d4  56                   push esi
// 008073d5  57                   push edi
// 008073d6  8bf1                 mov esi, ecx
// 008073d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008073dc  50                   push eax
// 008073dd  51                   push ecx
// 008073de  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008073e4  e837e20300           call 0x845620
// 008073e9  8bf8                 mov edi, eax
// 008073eb  85ff                 test edi, edi
// 008073ed  0f84c1000000         je 0x8074b4
// 008073f3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008073f7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008073fb  8b17                 mov edx, dword ptr [edi]
// 008073fd  8b92f0000000         mov edx, dword ptr [edx + 0xf0]
// 00807403  50                   push eax
// 00807404  51                   push ecx
// 00807405  8bcf                 mov ecx, edi
// 00807407  ffd2                 call edx
// 00807409  85c0                 test eax, eax
// 0080740b  0f859e000000         jne 0x8074af
// 00807411  398638010000         cmp dword ptr [esi + 0x138], eax
// 00807417  0f8497000000         je 0x8074b4
// 0080741d  8bce                 mov ecx, esi
// 0080741f  e8dcd0ffff           call 0x804500
// 00807424  85c0                 test eax, eax
// 00807426  0f8488000000         je 0x8074b4
// 0080742c  8b07                 mov eax, dword ptr [edi]
// 0080742e  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00807434  6a00                 push 0
// 00807436  8bcf                 mov ecx, edi
// 00807438  ffd2                 call edx
// 0080743a  85c0                 test eax, eax
// 0080743c  7471                 je 0x8074af
// 0080743e  8b07                 mov eax, dword ptr [edi]
// 00807440  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00807446  8bcf                 mov ecx, edi
// 00807448  ffd2                 call edx
// 0080744a  85c0                 test eax, eax
// 0080744c  7461                 je 0x8074af
// 0080744e  53                   push ebx
// 0080744f  6a00                 push 0
// 00807451  6aff                 push -1
// 00807453  8bce                 mov ecx, esi
// 00807455  e846f1ffff           call 0x8065a0
// 0080745a  8b06                 mov eax, dword ptr [esi]
// 0080745c  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00807462  6a00                 push 0
// 00807464  6aff                 push -1
// 00807466  8bce                 mov ecx, esi
// 00807468  ffd2                 call edx
// 0080746a  8bce                 mov ecx, esi
// 0080746c  e85fd0ffff           call 0x8044d0
// 00807471  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 00807474  57                   push edi
// 00807475  8bc8                 mov ecx, eax
// 00807477  e824d90000           call 0x814da0
// 0080747c  8bcb                 mov ecx, ebx
// 0080747e  e83d830600           call 0x86f7c0
// 00807483  85c0                 test eax, eax
// 00807485  7427                 je 0x8074ae
// 00807487  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0080748a  8d442414             lea eax, [esp + 0x14]
// 0080748e  50                   push eax
// 0080748f  51                   push ecx
// 00807490  ff1554cc9800         call dword ptr [0x98cc54]
// 00807496  8b542418             mov edx, dword ptr [esp + 0x18]
// 0080749a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080749e  52                   push edx
// 0080749f  50                   push eax
// 008074a0  8bcb                 mov ecx, ebx
// 008074a2  e819830600           call 0x86f7c0
// 008074a7  8bc8                 mov ecx, eax
// 008074a9  e852670300           call 0x83dc00
// 008074ae  5b                   pop ebx
// 008074af  5f                   pop edi
// 008074b0  5e                   pop esi
// 008074b1  c20c00               ret 0xc
// 008074b4  8bce                 mov ecx, esi
// 008074b6  e875c9feff           call 0x7f3e30
// 008074bb  5f                   pop edi
// 008074bc  5e                   pop esi
// 008074bd  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPCommandBar@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp