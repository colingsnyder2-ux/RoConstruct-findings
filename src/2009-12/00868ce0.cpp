// roc 2009-12 00868ce0  unit: CXTPPropertyGridView  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868ce0
//
// 00868ce0  56                   push esi
// 00868ce1  57                   push edi
// 00868ce2  8bf9                 mov edi, ecx
// 00868ce4  e847b1f8ff           call 0x7f3e30
// 00868ce9  8b442414             mov eax, dword ptr [esp + 0x14]
// 00868ced  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868cf1  50                   push eax
// 00868cf2  51                   push ecx
// 00868cf3  8bcf                 mov ecx, edi
// 00868cf5  e896fdffff           call 0x868a90
// 00868cfa  8bf0                 mov esi, eax
// 00868cfc  85f6                 test esi, esi
// 00868cfe  743a                 je 0x868d3a
// 00868d00  8b442414             mov eax, dword ptr [esp + 0x14]
// 00868d04  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868d08  8b16                 mov edx, dword ptr [esi]
// 00868d0a  8b92bc000000         mov edx, dword ptr [edx + 0xbc]
// 00868d10  50                   push eax
// 00868d11  8b442410             mov eax, dword ptr [esp + 0x10]
// 00868d15  51                   push ecx
// 00868d16  50                   push eax
// 00868d17  8bce                 mov ecx, esi
// 00868d19  ffd2                 call edx
// 00868d1b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00868d1f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868d23  50                   push eax
// 00868d24  51                   push ecx
// 00868d25  8bcf                 mov ecx, edi
// 00868d27  e864fdffff           call 0x868a90
// 00868d2c  3bf0                 cmp esi, eax
// 00868d2e  750a                 jne 0x868d3a
// 00868d30  56                   push esi
// 00868d31  6a09                 push 9
// 00868d33  8bcf                 mov ecx, edi
// 00868d35  e8d6ebffff           call 0x867910
// 00868d3a  5f                   pop edi
// 00868d3b  5e                   pop esi
// 00868d3c  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPPropertyGridView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp