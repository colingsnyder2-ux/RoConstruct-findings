// roc 2009-12 008f0960  unit: CXTPRibbonControlTab  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0960
//
// 008f0960  57                   push edi
// 008f0961  8bf9                 mov edi, ecx
// 008f0963  8b877cffffff         mov eax, dword ptr [edi - 0x84]
// 008f0969  85c0                 test eax, eax
// 008f096b  7406                 je 0x8f0973
// 008f096d  83782000             cmp dword ptr [eax + 0x20], 0
// 008f0971  750e                 jne 0x8f0981
// 008f0973  8b442408             mov eax, dword ptr [esp + 8]
// 008f0977  50                   push eax
// 008f0978  e8e3e4fdff           call 0x8cee60
// 008f097d  5f                   pop edi
// 008f097e  c20400               ret 4
// 008f0981  8b977cfeffff         mov edx, dword ptr [edi - 0x184]
// 008f0987  8b4274               mov eax, dword ptr [edx + 0x74]
// 008f098a  53                   push ebx
// 008f098b  55                   push ebp
// 008f098c  8daf7cfeffff         lea ebp, [edi - 0x184]
// 008f0992  8bcd                 mov ecx, ebp
// 008f0994  ffd0                 call eax
// 008f0996  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008f099a  85c0                 test eax, eax
// 008f099c  7525                 jne 0x8f09c3
// 008f099e  85db                 test ebx, ebx
// 008f09a0  7421                 je 0x8f09c3
// 008f09a2  8b8f7cffffff         mov ecx, dword ptr [edi - 0x84]
// 008f09a8  e83348faff           call 0x8951e0
// 008f09ad  85c0                 test eax, eax
// 008f09af  7512                 jne 0x8f09c3
// 008f09b1  8b8f7cffffff         mov ecx, dword ptr [edi - 0x84]
// 008f09b7  e8143bf1ff           call 0x8044d0
// 008f09bc  8bc8                 mov ecx, eax
// 008f09be  e81d55f2ff           call 0x815ee0
// 008f09c3  395f04               cmp dword ptr [edi + 4], ebx
// 008f09c6  0f84e9000000         je 0x8f0ab5
// 008f09cc  8b8f7cffffff         mov ecx, dword ptr [edi - 0x84]
// 008f09d2  e8f93af1ff           call 0x8044d0
// 008f09d7  83784401             cmp dword ptr [eax + 0x44], 1
// 008f09db  7e12                 jle 0x8f09ef
// 008f09dd  8b8f7cffffff         mov ecx, dword ptr [edi - 0x84]
// 008f09e3  e8e83af1ff           call 0x8044d0
// 008f09e8  8bc8                 mov ecx, eax
// 008f09ea  e8e150f2ff           call 0x815ad0
// 008f09ef  56                   push esi
// 008f09f0  8bb77cffffff         mov esi, dword ptr [edi - 0x84]
// 008f09f6  8b16                 mov edx, dword ptr [esi]
// 008f09f8  8b8238020000         mov eax, dword ptr [edx + 0x238]
// 008f09fe  53                   push ebx
// 008f09ff  8bce                 mov ecx, esi
// 008f0a01  ffd0                 call eax
// 008f0a03  85c0                 test eax, eax
// 008f0a05  0f85a9000000         jne 0x8f0ab4
// 008f0a0b  ff8660010000         inc dword ptr [esi + 0x160]
// 008f0a11  53                   push ebx
// 008f0a12  8bce                 mov ecx, esi
// 008f0a14  e8f754faff           call 0x895f10
// 008f0a19  53                   push ebx
// 008f0a1a  8bcf                 mov ecx, edi
// 008f0a1c  e83fe4fdff           call 0x8cee60
// 008f0a21  8b16                 mov edx, dword ptr [esi]
// 008f0a23  8b82f4010000         mov eax, dword ptr [edx + 0x1f4]
// 008f0a29  6a00                 push 0
// 008f0a2b  6a00                 push 0
// 008f0a2d  8bce                 mov ecx, esi
// 008f0a2f  ffd0                 call eax
// 008f0a31  838660010000ff       add dword ptr [esi + 0x160], -1
// 008f0a38  7519                 jne 0x8f0a53
// 008f0a3a  f686e800000002       test byte ptr [esi + 0xe8], 2
// 008f0a41  7410                 je 0x8f0a53
// 008f0a43  8b16                 mov edx, dword ptr [esi]
// 008f0a45  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 008f0a4b  6a01                 push 1
// 008f0a4d  6a00                 push 0
// 008f0a4f  8bce                 mov ecx, esi
// 008f0a51  ffd0                 call eax
// 008f0a53  8b16                 mov edx, dword ptr [esi]
// 008f0a55  8b823c020000         mov eax, dword ptr [edx + 0x23c]
// 008f0a5b  53                   push ebx
// 008f0a5c  8bce                 mov ecx, esi
// 008f0a5e  ffd0                 call eax
// 008f0a60  8bce                 mov ecx, esi
// 008f0a62  e87947faff           call 0x8951e0
// 008f0a67  85c0                 test eax, eax
// 008f0a69  7412                 je 0x8f0a7d
// 008f0a6b  85db                 test ebx, ebx
// 008f0a6d  740e                 je 0x8f0a7d
// 008f0a6f  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 008f0a75  51                   push ecx
// 008f0a76  8bcd                 mov ecx, ebp
// 008f0a78  e863fbffff           call 0x8f05e0
// 008f0a7d  6a64                 push 0x64
// 008f0a7f  8bcd                 mov ecx, ebp
// 008f0a81  e80a7bf0ff           call 0x7f8590
// 008f0a86  85db                 test ebx, ebx
// 008f0a88  742a                 je 0x8f0ab4
// 008f0a8a  8b877cffffff         mov eax, dword ptr [edi - 0x84]
// 008f0a90  8b5b2c               mov ebx, dword ptr [ebx + 0x2c]
// 008f0a93  8b8f00ffffff         mov ecx, dword ptr [edi - 0x100]
// 008f0a99  85c0                 test eax, eax
// 008f0a9b  7403                 je 0x8f0aa0
// 008f0a9d  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f0aa0  43                   inc ebx
// 008f0aa1  53                   push ebx
// 008f0aa2  51                   push ecx
// 008f0aa3  50                   push eax
// 008f0aa4  6805800000           push 0x8005
// 008f0aa9  8d8f9cfeffff         lea ecx, [edi - 0x164]
// 008f0aaf  e8dcaef4ff           call 0x83b990
// 008f0ab4  5e                   pop esi
// 008f0ab5  5d                   pop ebp
// 008f0ab6  5b                   pop ebx
// 008f0ab7  5f                   pop edi
// 008f0ab8  c20400               ret 4
// copied from an identical function in another client (function ?SetSelectedItem@CXTPRibbonControlTab@@UAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp