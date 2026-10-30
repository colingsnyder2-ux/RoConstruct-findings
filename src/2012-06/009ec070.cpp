// roc 2012-06 009ec070  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ec070
//
// 009ec070  56                   push esi
// 009ec071  8bf1                 mov esi, ecx
// 009ec073  837e6800             cmp dword ptr [esi + 0x68], 0
// 009ec077  0f840a010000         je 0x9ec187
// 009ec07d  53                   push ebx
// 009ec07e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009ec082  8b4304               mov eax, dword ptr [ebx + 4]
// 009ec085  3d00020000           cmp eax, 0x200
// 009ec08a  7207                 jb 0x9ec093
// 009ec08c  3d0a020000           cmp eax, 0x20a
// 009ec091  7616                 jbe 0x9ec0a9
// 009ec093  3da0000000           cmp eax, 0xa0
// 009ec098  0f82e8000000         jb 0x9ec186
// 009ec09e  3da9000000           cmp eax, 0xa9
// 009ec0a3  0f87dd000000         ja 0x9ec186
// 009ec0a9  57                   push edi
// 009ec0aa  e8a1feffff           call 0x9ebf50
// 009ec0af  817b0401020000       cmp dword ptr [ebx + 4], 0x201
// 009ec0b6  8bf8                 mov edi, eax
// 009ec0b8  7512                 jne 0x9ec0cc
// 009ec0ba  85ff                 test edi, edi
// 009ec0bc  7424                 je 0x9ec0e2
// 009ec0be  57                   push edi
// 009ec0bf  8d8ea8000000         lea ecx, [esi + 0xa8]
// 009ec0c5  e8c6d8ffff           call 0x9e9990
// 009ec0ca  eb14                 jmp 0x9ec0e0
// 009ec0cc  85ff                 test edi, edi
// 009ec0ce  7412                 je 0x9ec0e2
// 009ec0d0  57                   push edi
// 009ec0d1  8d8ea8000000         lea ecx, [esi + 0xa8]
// 009ec0d7  e884d8ffff           call 0x9e9960
// 009ec0dc  85c0                 test eax, eax
// 009ec0de  7402                 je 0x9ec0e2
// 009ec0e0  33ff                 xor edi, edi
// 009ec0e2  55                   push ebp
// 009ec0e3  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 009ec0e9  85ed                 test ebp, ebp
// 009ec0eb  742e                 je 0x9ec11b
// 009ec0ed  8d9ee0000000         lea ebx, [esi + 0xe0]
// 009ec0f3  57                   push edi
// 009ec0f4  8bcb                 mov ecx, ebx
// 009ec0f6  e865d8ffff           call 0x9e9960
// 009ec0fb  85c0                 test eax, eax
// 009ec0fd  751c                 jne 0x9ec11b
// 009ec0ff  8b4620               mov eax, dword ptr [esi + 0x20]
// 009ec102  55                   push ebp
// 009ec103  50                   push eax
// 009ec104  ff15083cb200         call dword ptr [0xb23c08]
// 009ec10a  8bcb                 mov ecx, ebx
// 009ec10c  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 009ec116  e805dfffff           call 0x9ea020
// 009ec11b  5d                   pop ebp
// 009ec11c  85ff                 test edi, edi
// 009ec11e  745c                 je 0x9ec17c
// 009ec120  57                   push edi
// 009ec121  8d4e70               lea ecx, [esi + 0x70]
// 009ec124  e837d8ffff           call 0x9e9960
// 009ec129  85c0                 test eax, eax
// 009ec12b  7558                 jne 0x9ec185
// 009ec12d  ff157422b200         call dword ptr [0xb22274]
// 009ec133  2b861c010000         sub eax, dword ptr [esi + 0x11c]
// 009ec139  57                   push edi
// 009ec13a  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 009ec140  723c                 jb 0x9ec17e
// 009ec142  8d9ee0000000         lea ebx, [esi + 0xe0]
// 009ec148  8bcb                 mov ecx, ebx
// 009ec14a  e811d8ffff           call 0x9e9960
// 009ec14f  85c0                 test eax, eax
// 009ec151  7532                 jne 0x9ec185
// 009ec153  57                   push edi
// 009ec154  8bcb                 mov ecx, ebx
// 009ec156  e835d8ffff           call 0x9e9990
// 009ec15b  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 009ec161  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009ec164  6a00                 push 0
// 009ec166  50                   push eax
// 009ec167  6a01                 push 1
// 009ec169  51                   push ecx
// 009ec16a  ff15e03ab200         call dword ptr [0xb23ae0]
// 009ec170  5f                   pop edi
// 009ec171  5b                   pop ebx
// 009ec172  898618010000         mov dword ptr [esi + 0x118], eax
// 009ec178  5e                   pop esi
// 009ec179  c20400               ret 4
// 009ec17c  6a00                 push 0
// 009ec17e  8bce                 mov ecx, esi
// 009ec180  e87be3ffff           call 0x9ea500
// 009ec185  5f                   pop edi
// 009ec186  5b                   pop ebx
// 009ec187  5e                   pop esi
// 009ec188  c20400               ret 4
// copied from an identical function in another client (function ?RelayEvent@CXTPToolTipContextToolTip@@QAEXPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp