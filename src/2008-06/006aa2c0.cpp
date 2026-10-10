// roc 2008-06 006aa2c0  unit: CXTPControlComboBoxList  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aa2c0
//
// 006aa2c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006aa2c4  53                   push ebx
// 006aa2c5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006aa2c9  56                   push esi
// 006aa2ca  8bf1                 mov esi, ecx
// 006aa2cc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006aa2d0  50                   push eax
// 006aa2d1  51                   push ecx
// 006aa2d2  53                   push ebx
// 006aa2d3  8bce                 mov ecx, esi
// 006aa2d5  e8d6df0000           call 0x6b82b0
// 006aa2da  85c0                 test eax, eax
// 006aa2dc  7505                 jne 0x6aa2e3
// 006aa2de  5e                   pop esi
// 006aa2df  5b                   pop ebx
// 006aa2e0  c20c00               ret 0xc
// 006aa2e3  57                   push edi
// 006aa2e4  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 006aa2ea  85db                 test ebx, ebx
// 006aa2ec  7569                 jne 0x6aa357
// 006aa2ee  6a08                 push 8
// 006aa2f0  8bcf                 mov ecx, edi
// 006aa2f2  e849340000           call 0x6ad740
// 006aa2f7  6810306a00           push 0x6a3010
// 006aa2fc  b99ced9700           mov ecx, 0x97ed9c
// 006aa301  e8d41c1100           call 0x7bbfda
// 006aa306  85c0                 test eax, eax
// 006aa308  7505                 jne 0x6aa30f
// 006aa30a  e83566ffff           call 0x6a0944
// 006aa30f  ff4804               dec dword ptr [eax + 4]
// 006aa312  6a00                 push 0
// 006aa314  8bce                 mov ecx, esi
// 006aa316  e85366ffff           call 0x6a096e
// 006aa31b  8b16                 mov edx, dword ptr [esi]
// 006aa31d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006aa323  8bce                 mov ecx, esi
// 006aa325  ffd0                 call eax
// 006aa327  85c0                 test eax, eax
// 006aa329  7417                 je 0x6aa342
// 006aa32b  8b16                 mov edx, dword ptr [esi]
// 006aa32d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006aa333  6a00                 push 0
// 006aa335  6aff                 push -1
// 006aa337  8bce                 mov ecx, esi
// 006aa339  ffd0                 call eax
// 006aa33b  8bc8                 mov ecx, eax
// 006aa33d  e88ecb0000           call 0x6b6ed0
// 006aa342  5f                   pop edi
// 006aa343  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 006aa34d  5e                   pop esi
// 006aa34e  b801000000           mov eax, 1
// 006aa353  5b                   pop ebx
// 006aa354  c20c00               ret 0xc
// 006aa357  6810306a00           push 0x6a3010
// 006aa35c  b99ced9700           mov ecx, 0x97ed9c
// 006aa361  e8741c1100           call 0x7bbfda
// 006aa366  85c0                 test eax, eax
// 006aa368  7505                 jne 0x6aa36f
// 006aa36a  e8d565ffff           call 0x6a0944
// 006aa36f  ff4004               inc dword ptr [eax + 4]
// 006aa372  8bcf                 mov ecx, edi
// 006aa374  e807f4ffff           call 0x6a9780
// 006aa379  6a07                 push 7
// 006aa37b  8bcf                 mov ecx, edi
// 006aa37d  e8be330000           call 0x6ad740
// 006aa382  5f                   pop edi
// 006aa383  5e                   pop esi
// 006aa384  b801000000           mov eax, 1
// 006aa389  5b                   pop ebx
// 006aa38a  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?SetTrackingMode@CXTPControlComboBoxList@@MAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
