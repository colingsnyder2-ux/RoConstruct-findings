// roc 2010-06 00811b70  unit: CXTSplitterWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811b70
//
// 00811b70  83ec0c               sub esp, 0xc
// 00811b73  56                   push esi
// 00811b74  8bf1                 mov esi, ecx
// 00811b76  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00811b7c  3b4658               cmp eax, dword ptr [esi + 0x58]
// 00811b7f  750d                 jne 0x811b8e
// 00811b81  83bef8000000ff       cmp dword ptr [esi + 0xf8], -1
// 00811b88  0f8484010000         je 0x811d12
// 00811b8e  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 00811b94  53                   push ebx
// 00811b95  55                   push ebp
// 00811b96  57                   push edi
// 00811b97  8bbef8000000         mov edi, dword ptr [esi + 0xf8]
// 00811b9d  8d0c40               lea ecx, [eax + eax*2]
// 00811ba0  c786f8000000ffffffff mov dword ptr [esi + 0xf8], 0xffffffff
// 00811baa  8b4c8a08             mov ecx, dword ptr [edx + ecx*4 + 8]
// 00811bae  40                   inc eax
// 00811baf  33db                 xor ebx, ebx
// 00811bb1  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 00811bb7  897c2410             mov dword ptr [esp + 0x10], edi
// 00811bbb  894c2418             mov dword ptr [esp + 0x18], ecx
// 00811bbf  898680000000         mov dword ptr [esi + 0x80], eax
// 00811bc5  0f8eb0000000         jle 0x811c7b
// 00811bcb  eb03                 jmp 0x811bd0
// 00811bcd  8d4900               lea ecx, [ecx]
// 00811bd0  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 00811bd6  83f8ff               cmp eax, -1
// 00811bd9  7407                 je 0x811be2
// 00811bdb  3bc3                 cmp eax, ebx
// 00811bdd  8d4301               lea eax, [ebx + 1]
// 00811be0  7e02                 jle 0x811be4
// 00811be2  8bc3                 mov eax, ebx
// 00811be4  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00811bea  81c2900e0000         add edx, 0xe90
// 00811bf0  c1e204               shl edx, 4
// 00811bf3  03d0                 add edx, eax
// 00811bf5  52                   push edx
// 00811bf6  8bce                 mov ecx, esi
// 00811bf8  e86d6cf9ff           call 0x7a886a
// 00811bfd  8be8                 mov ebp, eax
// 00811bff  896c2414             mov dword ptr [esp + 0x14], ebp
// 00811c03  85ed                 test ebp, ebp
// 00811c05  0f8404010000         je 0x811d0f
// 00811c0b  6a08                 push 8
// 00811c0d  8bcd                 mov ecx, ebp
// 00811c0f  e87460f9ff           call 0x7a7c88
// 00811c14  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 00811c1a  83ef02               sub edi, 2
// 00811c1d  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00811c21  7c32                 jl 0x811c55
// 00811c23  53                   push ebx
// 00811c24  57                   push edi
// 00811c25  8bce                 mov ecx, esi
// 00811c27  e89c68f9ff           call 0x7a84c8
// 00811c2c  8be8                 mov ebp, eax
// 00811c2e  85ed                 test ebp, ebp
// 00811c30  0f84d9000000         je 0x811d0f
// 00811c36  53                   push ebx
// 00811c37  8d4701               lea eax, [edi + 1]
// 00811c3a  50                   push eax
// 00811c3b  8bce                 mov ecx, esi
// 00811c3d  e8ea67f9ff           call 0x7a842c
// 00811c42  50                   push eax
// 00811c43  8bcd                 mov ecx, ebp
// 00811c45  e8c6b81600           call 0x97d510
// 00811c4a  4f                   dec edi
// 00811c4b  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00811c4f  7dd2                 jge 0x811c23
// 00811c51  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00811c55  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00811c59  53                   push ebx
// 00811c5a  51                   push ecx
// 00811c5b  8bce                 mov ecx, esi
// 00811c5d  e8ca67f9ff           call 0x7a842c
// 00811c62  50                   push eax
// 00811c63  8bcd                 mov ecx, ebp
// 00811c65  e8a6b81600           call 0x97d510
// 00811c6a  43                   inc ebx
// 00811c6b  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 00811c71  0f8c59ffffff         jl 0x811bd0
// 00811c77  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00811c7b  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 00811c81  83f8ff               cmp eax, -1
// 00811c84  7431                 je 0x811cb7
// 00811c86  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00811c8c  81c2900e0000         add edx, 0xe90
// 00811c92  c1e204               shl edx, 4
// 00811c95  03d0                 add edx, eax
// 00811c97  52                   push edx
// 00811c98  8bce                 mov ecx, esi
// 00811c9a  e8cb6bf9ff           call 0x7a886a
// 00811c9f  85c0                 test eax, eax
// 00811ca1  7414                 je 0x811cb7
// 00811ca3  8d8f900e0000         lea ecx, [edi + 0xe90]
// 00811ca9  c1e104               shl ecx, 4
// 00811cac  034e5c               add ecx, dword ptr [esi + 0x5c]
// 00811caf  51                   push ecx
// 00811cb0  8bc8                 mov ecx, eax
// 00811cb2  e859b81600           call 0x97d510
// 00811cb7  8d4f01               lea ecx, [edi + 1]
// 00811cba  3b8e80000000         cmp ecx, dword ptr [esi + 0x80]
// 00811cc0  7d29                 jge 0x811ceb
// 00811cc2  8d1449               lea edx, [ecx + ecx*2]
// 00811cc5  03d2                 add edx, edx
// 00811cc7  03d2                 add edx, edx
// 00811cc9  8da42400000000       lea esp, [esp]
// 00811cd0  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00811cd6  8b5c10fc             mov ebx, dword ptr [eax + edx - 4]
// 00811cda  03c2                 add eax, edx
// 00811cdc  41                   inc ecx
// 00811cdd  895804               mov dword ptr [eax + 4], ebx
// 00811ce0  83c20c               add edx, 0xc
// 00811ce3  3b8e80000000         cmp ecx, dword ptr [esi + 0x80]
// 00811ce9  7ce5                 jl 0x811cd0
// 00811ceb  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 00811cf1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00811cf5  8d0c7f               lea ecx, [edi + edi*2]
// 00811cf8  5f                   pop edi
// 00811cf9  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 00811cfd  8b16                 mov edx, dword ptr [esi]
// 00811cff  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00811d05  5d                   pop ebp
// 00811d06  5b                   pop ebx
// 00811d07  8bce                 mov ecx, esi
// 00811d09  5e                   pop esi
// 00811d0a  83c40c               add esp, 0xc
// 00811d0d  ffe0                 jmp eax
// 00811d0f  5f                   pop edi
// 00811d10  5d                   pop ebp
// 00811d11  5b                   pop ebx
// 00811d12  5e                   pop esi
// 00811d13  83c40c               add esp, 0xc
// 00811d16  c3                   ret 
// copied from an identical function in another client (function ?ShowRow@CXTSplitterWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1