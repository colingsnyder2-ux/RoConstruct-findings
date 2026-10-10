// roc 2008-06 00745a20  unit: CXTPDockContext  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745a20
//
// 00745a20  83ec0c               sub esp, 0xc
// 00745a23  53                   push ebx
// 00745a24  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00745a28  55                   push ebp
// 00745a29  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00745a2d  57                   push edi
// 00745a2e  8bf9                 mov edi, ecx
// 00745a30  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00745a33  8b470c               mov eax, dword ptr [edi + 0xc]
// 00745a36  2be9                 sub ebp, ecx
// 00745a38  8b4f04               mov ecx, dword ptr [edi + 4]
// 00745a3b  2bd8                 sub ebx, eax
// 00745a3d  e8cef3f6ff           call 0x6b4e10
// 00745a42  89442410             mov dword ptr [esp + 0x10], eax
// 00745a46  85c0                 test eax, eax
// 00745a48  0f84f6000000         je 0x745b44
// 00745a4e  56                   push esi
// 00745a4f  55                   push ebp
// 00745a50  53                   push ebx
// 00745a51  8d7740               lea esi, [edi + 0x40]
// 00745a54  56                   push esi
// 00745a55  ff15682d8000         call dword ptr [0x802d68]
// 00745a5b  55                   push ebp
// 00745a5c  8d4730               lea eax, [edi + 0x30]
// 00745a5f  53                   push ebx
// 00745a60  50                   push eax
// 00745a61  ff15682d8000         call dword ptr [0x802d68]
// 00745a67  8b4704               mov eax, dword ptr [edi + 4]
// 00745a6a  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00745a70  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00745a76  8b442424             mov eax, dword ptr [esp + 0x24]
// 00745a7a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00745a7e  52                   push edx
// 00745a7f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00745a83  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00745a87  50                   push eax
// 00745a88  51                   push ecx
// 00745a89  8bcb                 mov ecx, ebx
// 00745a8b  e850daf5ff           call 0x6a34e0
// 00745a90  8be8                 mov ebp, eax
// 00745a92  85ed                 test ebp, ebp
// 00745a94  741a                 je 0x745ab0
// 00745a96  8bcd                 mov ecx, ebp
// 00745a98  e8e34dfdff           call 0x71a880
// 00745a9d  85c0                 test eax, eax
// 00745a9f  0f85a8000000         jne 0x745b4d
// 00745aa5  f644241001           test byte ptr [esp + 0x10], 1
// 00745aaa  0f85cf000000         jne 0x745b7f
// 00745ab0  f644241010           test byte ptr [esp + 0x10], 0x10
// 00745ab5  747e                 je 0x745b35
// 00745ab7  8b4704               mov eax, dword ptr [edi + 4]
// 00745aba  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 00745ac1  744d                 je 0x745b10
// 00745ac3  50                   push eax
// 00745ac4  8bcb                 mov ecx, ebx
// 00745ac6  e8d5cff5ff           call 0x6a2aa0
// 00745acb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00745ace  8b01                 mov eax, dword ptr [ecx]
// 00745ad0  8b80d0010000         mov eax, dword ptr [eax + 0x1d0]
// 00745ad6  6a46                 push 0x46
// 00745ad8  6a00                 push 0
// 00745ada  8d54241c             lea edx, [esp + 0x1c]
// 00745ade  52                   push edx
// 00745adf  ffd0                 call eax
// 00745ae1  8b06                 mov eax, dword ptr [esi]
// 00745ae3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745ae6  8b542414             mov edx, dword ptr [esp + 0x14]
// 00745aea  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00745aee  8906                 mov dword ptr [esi], eax
// 00745af0  03d0                 add edx, eax
// 00745af2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00745af6  894e04               mov dword ptr [esi + 4], ecx
// 00745af9  03d9                 add ebx, ecx
// 00745afb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00745aff  50                   push eax
// 00745b00  51                   push ecx
// 00745b01  895608               mov dword ptr [esi + 8], edx
// 00745b04  56                   push esi
// 00745b05  895e0c               mov dword ptr [esi + 0xc], ebx
// 00745b08  e8d3330200           call 0x768ee0
// 00745b0d  83c40c               add esp, 0xc
// 00745b10  56                   push esi
// 00745b11  8bcf                 mov ecx, edi
// 00745b13  e878feffff           call 0x745990
// 00745b18  8b4604               mov eax, dword ptr [esi + 4]
// 00745b1b  8b560c               mov edx, dword ptr [esi + 0xc]
// 00745b1e  8b0e                 mov ecx, dword ptr [esi]
// 00745b20  6a01                 push 1
// 00745b22  2bd0                 sub edx, eax
// 00745b24  52                   push edx
// 00745b25  8b5608               mov edx, dword ptr [esi + 8]
// 00745b28  2bd1                 sub edx, ecx
// 00745b2a  52                   push edx
// 00745b2b  50                   push eax
// 00745b2c  51                   push ecx
// 00745b2d  8b4f04               mov ecx, dword ptr [edi + 4]
// 00745b30  e817aff5ff           call 0x6a0a4c
// 00745b35  8b442420             mov eax, dword ptr [esp + 0x20]
// 00745b39  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00745b3d  89470c               mov dword ptr [edi + 0xc], eax
// 00745b40  894f10               mov dword ptr [edi + 0x10], ecx
// 00745b43  5e                   pop esi
// 00745b44  5f                   pop edi
// 00745b45  5d                   pop ebp
// 00745b46  5b                   pop ebx
// 00745b47  83c40c               add esp, 0xc
// 00745b4a  c20800               ret 8
// 00745b4d  83f802               cmp eax, 2
// 00745b50  750a                 jne 0x745b5c
// 00745b52  f644241004           test byte ptr [esp + 0x10], 4
// 00745b57  e94effffff           jmp 0x745aaa
// 00745b5c  83f803               cmp eax, 3
// 00745b5f  750a                 jne 0x745b6b
// 00745b61  f644241008           test byte ptr [esp + 0x10], 8
// 00745b66  e93fffffff           jmp 0x745aaa
// 00745b6b  83f801               cmp eax, 1
// 00745b6e  0f853cffffff         jne 0x745ab0
// 00745b74  f644241002           test byte ptr [esp + 0x10], 2
// 00745b79  0f8431ffffff         je 0x745ab0
// 00745b7f  8b4704               mov eax, dword ptr [edi + 4]
// 00745b82  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00745b88  55                   push ebp
// 00745b89  8d7730               lea esi, [edi + 0x30]
// 00745b8c  56                   push esi
// 00745b8d  50                   push eax
// 00745b8e  8bcb                 mov ecx, ebx
// 00745b90  89542420             mov dword ptr [esp + 0x20], edx
// 00745b94  e867cef5ff           call 0x6a2a00
// 00745b99  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00745b9d  750c                 jne 0x745bab
// 00745b9f  8b4704               mov eax, dword ptr [edi + 4]
// 00745ba2  83b80001000004       cmp dword ptr [eax + 0x100], 4
// 00745ba9  758a                 jne 0x745b35
// 00745bab  6a00                 push 0
// 00745bad  8bcb                 mov ecx, ebx
// 00745baf  e83cd8f5ff           call 0x6a33f0
// 00745bb4  8b4f04               mov ecx, dword ptr [edi + 4]
// 00745bb7  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00745bba  56                   push esi
// 00745bbb  52                   push edx
// 00745bbc  ff15342e8000         call dword ptr [0x802e34]
// 00745bc2  e96effffff           jmp 0x745b35
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockContext.cpp (function ?Move@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp
