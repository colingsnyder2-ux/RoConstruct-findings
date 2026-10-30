// roc 2009-12 0081c060  unit: CInstanceRecord::CNameItem  size: 553 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c060
//
// 0081c060  6aff                 push -1
// 0081c062  6850ac9500           push 0x95ac50
// 0081c067  64a100000000         mov eax, dword ptr fs:[0]
// 0081c06d  50                   push eax
// 0081c06e  83ec3c               sub esp, 0x3c
// 0081c071  55                   push ebp
// 0081c072  56                   push esi
// 0081c073  57                   push edi
// 0081c074  a10052b600           mov eax, dword ptr [0xb65200]
// 0081c079  33c4                 xor eax, esp
// 0081c07b  50                   push eax
// 0081c07c  8d44244c             lea eax, [esp + 0x4c]
// 0081c080  64a300000000         mov dword ptr fs:[0], eax
// 0081c086  8bf9                 mov edi, ecx
// 0081c088  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0081c08c  6aff                 push -1
// 0081c08e  8d4734               lea eax, [edi + 0x34]
// 0081c091  50                   push eax
// 0081c092  68e45e9e00           push 0x9e5ee4
// 0081c097  56                   push esi
// 0081c098  e863490300           call 0x850a00
// 0081c09d  6aff                 push -1
// 0081c09f  8d4f38               lea ecx, [edi + 0x38]
// 0081c0a2  51                   push ecx
// 0081c0a3  6874899e00           push 0x9e8974
// 0081c0a8  56                   push esi
// 0081c0a9  e852490300           call 0x850a00
// 0081c0ae  6a00                 push 0
// 0081c0b0  8d573c               lea edx, [edi + 0x3c]
// 0081c0b3  52                   push edx
// 0081c0b4  68304b9f00           push 0x9f4b30
// 0081c0b9  56                   push esi
// 0081c0ba  e8a1490300           call 0x850a60
// 0081c0bf  6810389a00           push 0x9a3810
// 0081c0c4  8d4740               lea eax, [edi + 0x40]
// 0081c0c7  50                   push eax
// 0081c0c8  68284b9f00           push 0x9f4b28
// 0081c0cd  56                   push esi
// 0081c0ce  e8ed490300           call 0x850ac0
// 0081c0d3  83c440               add esp, 0x40
// 0081c0d6  6a01                 push 1
// 0081c0d8  8d4f44               lea ecx, [edi + 0x44]
// 0081c0db  51                   push ecx
// 0081c0dc  681c4b9f00           push 0x9f4b1c
// 0081c0e1  56                   push esi
// 0081c0e2  e879490300           call 0x850a60
// 0081c0e7  6aff                 push -1
// 0081c0e9  8d5750               lea edx, [edi + 0x50]
// 0081c0ec  52                   push edx
// 0081c0ed  68104b9f00           push 0x9f4b10
// 0081c0f2  56                   push esi
// 0081c0f3  e808490300           call 0x850a00
// 0081c0f8  6aff                 push -1
// 0081c0fa  8d4754               lea eax, [edi + 0x54]
// 0081c0fd  50                   push eax
// 0081c0fe  68004b9f00           push 0x9f4b00
// 0081c103  56                   push esi
// 0081c104  e8f7480300           call 0x850a00
// 0081c109  6aff                 push -1
// 0081c10b  8d4f58               lea ecx, [edi + 0x58]
// 0081c10e  51                   push ecx
// 0081c10f  68f04a9f00           push 0x9f4af0
// 0081c114  56                   push esi
// 0081c115  e8e6480300           call 0x850a00
// 0081c11a  83c440               add esp, 0x40
// 0081c11d  6856fd9900           push 0x99fd56
// 0081c122  8d575c               lea edx, [edi + 0x5c]
// 0081c125  52                   push edx
// 0081c126  68e04a9f00           push 0x9f4ae0
// 0081c12b  56                   push esi
// 0081c12c  e88f490300           call 0x850ac0
// 0081c131  6a01                 push 1
// 0081c133  8d4764               lea eax, [edi + 0x64]
// 0081c136  50                   push eax
// 0081c137  68d44a9f00           push 0x9f4ad4
// 0081c13c  56                   push esi
// 0081c13d  e81e490300           call 0x850a60
// 0081c142  6a00                 push 0
// 0081c144  8d4f68               lea ecx, [edi + 0x68]
// 0081c147  51                   push ecx
// 0081c148  68cc4a9f00           push 0x9f4acc
// 0081c14d  56                   push esi
// 0081c14e  e80d490300           call 0x850a60
// 0081c153  6a00                 push 0
// 0081c155  8d576c               lea edx, [edi + 0x6c]
// 0081c158  52                   push edx
// 0081c159  68c04a9f00           push 0x9f4ac0
// 0081c15e  56                   push esi
// 0081c15f  e8fc480300           call 0x850a60
// 0081c164  8b4770               mov eax, dword ptr [edi + 0x70]
// 0081c167  83c440               add esp, 0x40
// 0081c16a  6a00                 push 0
// 0081c16c  89442414             mov dword ptr [esp + 0x14], eax
// 0081c170  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0081c178  6a00                 push 0
// 0081c17a  8d4c2418             lea ecx, [esp + 0x18]
// 0081c17e  51                   push ecx
// 0081c17f  6884b09b00           push 0x9bb084
// 0081c184  56                   push esi
// 0081c185  e8665a0300           call 0x851bf0
// 0081c18a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0081c18e  6856fd9900           push 0x99fd56
// 0081c193  8d4774               lea eax, [edi + 0x74]
// 0081c196  50                   push eax
// 0081c197  68b84a9f00           push 0x9f4ab8
// 0081c19c  56                   push esi
// 0081c19d  895770               mov dword ptr [edi + 0x70], edx
// 0081c1a0  e81b490300           call 0x850ac0
// 0081c1a5  83c424               add esp, 0x24
// 0081c1a8  837e2c10             cmp dword ptr [esi + 0x2c], 0x10
// 0081c1ac  7617                 jbe 0x81c1c5
// 0081c1ae  6856fd9900           push 0x99fd56
// 0081c1b3  8d4f60               lea ecx, [edi + 0x60]
// 0081c1b6  51                   push ecx
// 0081c1b7  68b04a9f00           push 0x9f4ab0
// 0081c1bc  56                   push esi
// 0081c1bd  e8fe480300           call 0x850ac0
// 0081c1c2  83c410               add esp, 0x10
// 0081c1c5  8b16                 mov edx, dword ptr [esi]
// 0081c1c7  8b4270               mov eax, dword ptr [edx + 0x70]
// 0081c1ca  68a44a9f00           push 0x9f4aa4
// 0081c1cf  8bce                 mov ecx, esi
// 0081c1d1  ffd0                 call eax
// 0081c1d3  8be8                 mov ebp, eax
// 0081c1d5  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0081c1d9  8d4c2418             lea ecx, [esp + 0x18]
// 0081c1dd  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0081c1e5  e8b6720800           call 0x8a34a0
// 0081c1ea  837e2800             cmp dword ptr [esi + 0x28], 0
// 0081c1ee  c644245401           mov byte ptr [esp + 0x54], 1
// 0081c1f3  7511                 jne 0x81c206
// 0081c1f5  8b4748               mov eax, dword ptr [edi + 0x48]
// 0081c1f8  85c0                 test eax, eax
// 0081c1fa  740a                 je 0x81c206
// 0081c1fc  50                   push eax
// 0081c1fd  8d4c241c             lea ecx, [esp + 0x1c]
// 0081c201  e87a6a0800           call 0x8a2c80
// 0081c206  55                   push ebp
// 0081c207  8d4c241c             lea ecx, [esp + 0x1c]
// 0081c20b  e8c0700800           call 0x8a32d0
// 0081c210  837e2800             cmp dword ptr [esi + 0x28], 0
// 0081c214  743d                 je 0x81c253
// 0081c216  837c244000           cmp dword ptr [esp + 0x40], 0
// 0081c21b  7425                 je 0x81c242
// 0081c21d  8bcf                 mov ecx, edi
// 0081c21f  e8ccfdffff           call 0x81bff0
// 0081c224  85c0                 test eax, eax
// 0081c226  742b                 je 0x81c253
// 0081c228  8bcf                 mov ecx, edi
// 0081c22a  e8c1fdffff           call 0x81bff0
// 0081c22f  8b10                 mov edx, dword ptr [eax]
// 0081c231  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0081c237  8d4c2418             lea ecx, [esp + 0x18]
// 0081c23b  51                   push ecx
// 0081c23c  8bc8                 mov ecx, eax
// 0081c23e  ffd2                 call edx
// 0081c240  eb11                 jmp 0x81c253
// 0081c242  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0081c245  85c9                 test ecx, ecx
// 0081c247  740a                 je 0x81c253
// 0081c249  8b01                 mov eax, dword ptr [ecx]
// 0081c24b  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0081c251  ffd2                 call edx
// 0081c253  8d4c2418             lea ecx, [esp + 0x18]
// 0081c257  c644245400           mov byte ptr [esp + 0x54], 0
// 0081c25c  e80f700800           call 0x8a3270
// 0081c261  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0081c269  85ed                 test ebp, ebp
// 0081c26b  7407                 je 0x81c274
// 0081c26d  8bcd                 mov ecx, ebp
// 0081c26f  e8687bfdff           call 0x7f3ddc
// 0081c274  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0081c278  64890d00000000       mov dword ptr fs:[0], ecx
// 0081c27f  59                   pop ecx
// 0081c280  5f                   pop edi
// 0081c281  5e                   pop esi
// 0081c282  5d                   pop ebp
// 0081c283  83c448               add esp, 0x48
// 0081c286  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportRecordItem@@UAEXPAVCXTPPropExchange@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp