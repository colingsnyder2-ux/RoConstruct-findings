// roc 2009-12 00868c80  unit: CXTPPropertyGridView  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868c80
//
// 00868c80  56                   push esi
// 00868c81  57                   push edi
// 00868c82  8bf9                 mov edi, ecx
// 00868c84  e8a7b1f8ff           call 0x7f3e30
// 00868c89  8b442414             mov eax, dword ptr [esp + 0x14]
// 00868c8d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868c91  50                   push eax
// 00868c92  51                   push ecx
// 00868c93  8bcf                 mov ecx, edi
// 00868c95  e8f6fdffff           call 0x868a90
// 00868c9a  8bf0                 mov esi, eax
// 00868c9c  85f6                 test esi, esi
// 00868c9e  743a                 je 0x868cda
// 00868ca0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00868ca4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868ca8  8b16                 mov edx, dword ptr [esi]
// 00868caa  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 00868cb0  50                   push eax
// 00868cb1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00868cb5  51                   push ecx
// 00868cb6  50                   push eax
// 00868cb7  8bce                 mov ecx, esi
// 00868cb9  ffd2                 call edx
// 00868cbb  8b442414             mov eax, dword ptr [esp + 0x14]
// 00868cbf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00868cc3  50                   push eax
// 00868cc4  51                   push ecx
// 00868cc5  8bcf                 mov ecx, edi
// 00868cc7  e8c4fdffff           call 0x868a90
// 00868ccc  3bf0                 cmp esi, eax
// 00868cce  750a                 jne 0x868cda
// 00868cd0  56                   push esi
// 00868cd1  6a08                 push 8
// 00868cd3  8bcf                 mov ecx, edi
// 00868cd5  e836ecffff           call 0x867910
// 00868cda  5f                   pop edi
// 00868cdb  5e                   pop esi
// 00868cdc  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPPropertyGridView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp