// roc 2009-12 00806060  unit: CXTPControlComboBoxPopupBar  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00806060
//
// 00806060  53                   push ebx
// 00806061  55                   push ebp
// 00806062  56                   push esi
// 00806063  8b742420             mov esi, dword ptr [esp + 0x20]
// 00806067  57                   push edi
// 00806068  8bf9                 mov edi, ecx
// 0080606a  8d4c2414             lea ecx, [esp + 0x14]
// 0080606e  b803000000           mov eax, 3
// 00806073  51                   push ecx
// 00806074  8bcf                 mov ecx, edi
// 00806076  668906               mov word ptr [esi], ax
// 00806079  c7460800000000       mov dword ptr [esi + 8], 0
// 00806080  e81b590300           call 0x83b9a0
// 00806085  8b57a4               mov edx, dword ptr [edi - 0x5c]
// 00806088  8d5fa4               lea ebx, [edi - 0x5c]
// 0080608b  8be8                 mov ebp, eax
// 0080608d  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00806093  8bcb                 mov ecx, ebx
// 00806095  ffd0                 call eax
// 00806097  85c0                 test eax, eax
// 00806099  7507                 jne 0x8060a2
// 0080609b  814e0800800000       or dword ptr [esi + 8], 0x8000
// 008060a2  85ed                 test ebp, ebp
// 008060a4  7e24                 jle 0x8060ca
// 008060a6  8bcb                 mov ecx, ebx
// 008060a8  e8a3f1ffff           call 0x805250
// 008060ad  3be8                 cmp ebp, eax
// 008060af  7f19                 jg 0x8060ca
// 008060b1  33c9                 xor ecx, ecx
// 008060b3  4d                   dec ebp
// 008060b4  396f70               cmp dword ptr [edi + 0x70], ebp
// 008060b7  0f95c1               setne cl
// 008060ba  49                   dec ecx
// 008060bb  81e186000000         and ecx, 0x86
// 008060c1  81c900003000         or ecx, 0x300000
// 008060c7  094e08               or dword ptr [esi + 8], ecx
// 008060ca  5f                   pop edi
// 008060cb  5e                   pop esi
// 008060cc  5d                   pop ebp
// 008060cd  33c0                 xor eax, eax
// 008060cf  5b                   pop ebx
// 008060d0  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleState@CXTPCommandBar@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp