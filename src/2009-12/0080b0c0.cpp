// roc 2009-12 0080b0c0  unit: CXTPImageManagerResource::CBitmapDC  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b0c0
//
// 0080b0c0  83ec0c               sub esp, 0xc
// 0080b0c3  53                   push ebx
// 0080b0c4  55                   push ebp
// 0080b0c5  56                   push esi
// 0080b0c6  8d442420             lea eax, [esp + 0x20]
// 0080b0ca  50                   push eax
// 0080b0cb  8d542414             lea edx, [esp + 0x14]
// 0080b0cf  52                   push edx
// 0080b0d0  8d44241c             lea eax, [esp + 0x1c]
// 0080b0d4  50                   push eax
// 0080b0d5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0080b0d9  8d542418             lea edx, [esp + 0x18]
// 0080b0dd  52                   push edx
// 0080b0de  33f6                 xor esi, esi
// 0080b0e0  50                   push eax
// 0080b0e1  89742420             mov dword ptr [esp + 0x20], esi
// 0080b0e5  89742424             mov dword ptr [esp + 0x24], esi
// 0080b0e9  e892fcffff           call 0x80ad80
// 0080b0ee  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0080b0f2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0080b0f6  85c0                 test eax, eax
// 0080b0f8  7432                 je 0x80b12c
// 0080b0fa  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0080b0fe  57                   push edi
// 0080b0ff  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0080b103  57                   push edi
// 0080b104  8bce                 mov ecx, esi
// 0080b106  e8e992feff           call 0x7f43f4
// 0080b10b  57                   push edi
// 0080b10c  55                   push ebp
// 0080b10d  8bce                 mov ecx, esi
// 0080b10f  e8c892feff           call 0x7f43dc
// 0080b114  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0080b118  57                   push edi
// 0080b119  8bce                 mov ecx, esi
// 0080b11b  e8d492feff           call 0x7f43f4
// 0080b120  57                   push edi
// 0080b121  53                   push ebx
// 0080b122  8bce                 mov ecx, esi
// 0080b124  e8b392feff           call 0x7f43dc
// 0080b129  5f                   pop edi
// 0080b12a  eb0a                 jmp 0x80b136
// 0080b12c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080b130  56                   push esi
// 0080b131  e8be92feff           call 0x7f43f4
// 0080b136  8b3540b79800         mov esi, dword ptr [0x98b740]
// 0080b13c  85db                 test ebx, ebx
// 0080b13e  7406                 je 0x80b146
// 0080b140  53                   push ebx
// 0080b141  ffd6                 call esi
// 0080b143  83c404               add esp, 4
// 0080b146  85ed                 test ebp, ebp
// 0080b148  7406                 je 0x80b150
// 0080b14a  55                   push ebp
// 0080b14b  ffd6                 call esi
// 0080b14d  83c404               add esp, 4
// 0080b150  5e                   pop esi
// 0080b151  5d                   pop ebp
// 0080b152  5b                   pop ebx
// 0080b153  83c40c               add esp, 0xc
// 0080b156  c20800               ret 8
// copied from an identical function in another client (function ?WriteDIBBitmap@CXTPImageManagerIcon@@AAEXAAVCArchive@@PAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp