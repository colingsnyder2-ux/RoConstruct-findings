// roc 2010-06 00883650  unit: CXTPTabManagerItem  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00883650
//
// 00883650  53                   push ebx
// 00883651  56                   push esi
// 00883652  57                   push edi
// 00883653  8bf1                 mov esi, ecx
// 00883655  33ff                 xor edi, edi
// 00883657  397e5c               cmp dword ptr [esi + 0x5c], edi
// 0088365a  7e29                 jle 0x883685
// 0088365c  8d642400             lea esp, [esp]
// 00883660  85ff                 test edi, edi
// 00883662  7c4e                 jl 0x8836b2
// 00883664  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00883667  7d49                 jge 0x8836b2
// 00883669  8b4658               mov eax, dword ptr [esi + 0x58]
// 0088366c  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 0088366f  8b13                 mov edx, dword ptr [ebx]
// 00883671  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00883674  8bcb                 mov ecx, ebx
// 00883676  ffd0                 call eax
// 00883678  8bcb                 mov ecx, ebx
// 0088367a  e89d48f2ff           call 0x7a7f1c
// 0088367f  47                   inc edi
// 00883680  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00883683  7cdb                 jl 0x883660
// 00883685  6aff                 push -1
// 00883687  6a00                 push 0
// 00883689  8d4e54               lea ecx, [esi + 0x54]
// 0088368c  e86fdcf5ff           call 0x7e1300
// 00883691  8b16                 mov edx, dword ptr [esi]
// 00883693  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00883696  5f                   pop edi
// 00883697  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0088369e  c7460400000000       mov dword ptr [esi + 4], 0
// 008836a5  c7460800000000       mov dword ptr [esi + 8], 0
// 008836ac  8bce                 mov ecx, esi
// 008836ae  5e                   pop esi
// 008836af  5b                   pop ebx
// 008836b0  ffe0                 jmp eax
// 008836b2  e89545f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?DeleteAllItems@CXTPTabManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp