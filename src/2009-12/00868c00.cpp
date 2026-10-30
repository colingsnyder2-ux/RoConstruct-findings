// roc 2009-12 00868c00  unit: CXTPPropertyGridView  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868c00
//
// 00868c00  56                   push esi
// 00868c01  8bf1                 mov esi, ecx
// 00868c03  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00868c0a  7410                 je 0x868c1c
// 00868c0c  ff1520cc9800         call dword ptr [0x98cc20]
// 00868c12  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 00868c1c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00868c20  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00868c24  50                   push eax
// 00868c25  51                   push ecx
// 00868c26  8bce                 mov ecx, esi
// 00868c28  e863feffff           call 0x868a90
// 00868c2d  85c0                 test eax, eax
// 00868c2f  741b                 je 0x868c4c
// 00868c31  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868c35  8b10                 mov edx, dword ptr [eax]
// 00868c37  8b92c4000000         mov edx, dword ptr [edx + 0xc4]
// 00868c3d  51                   push ecx
// 00868c3e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868c42  51                   push ecx
// 00868c43  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868c47  51                   push ecx
// 00868c48  8bc8                 mov ecx, eax
// 00868c4a  ffd2                 call edx
// 00868c4c  8bce                 mov ecx, esi
// 00868c4e  e8ddb1f8ff           call 0x7f3e30
// 00868c53  5e                   pop esi
// 00868c54  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTPPropertyGridView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp