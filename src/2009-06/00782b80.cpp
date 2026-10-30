// roc 2009-06 00782b80  unit: CXTSplitterWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782b80
//
// 00782b80  83ec0c               sub esp, 0xc
// 00782b83  56                   push esi
// 00782b84  8bf1                 mov esi, ecx
// 00782b86  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00782b8c  3b4658               cmp eax, dword ptr [esi + 0x58]
// 00782b8f  750d                 jne 0x782b9e
// 00782b91  83bef8000000ff       cmp dword ptr [esi + 0xf8], -1
// 00782b98  0f8484010000         je 0x782d22
// 00782b9e  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 00782ba4  53                   push ebx
// 00782ba5  55                   push ebp
// 00782ba6  57                   push edi
// 00782ba7  8bbef8000000         mov edi, dword ptr [esi + 0xf8]
// 00782bad  8d0c40               lea ecx, [eax + eax*2]
// 00782bb0  c786f8000000ffffffff mov dword ptr [esi + 0xf8], 0xffffffff
// 00782bba  8b4c8a08             mov ecx, dword ptr [edx + ecx*4 + 8]
// 00782bbe  40                   inc eax
// 00782bbf  33db                 xor ebx, ebx
// 00782bc1  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 00782bc7  897c2410             mov dword ptr [esp + 0x10], edi
// 00782bcb  894c2418             mov dword ptr [esp + 0x18], ecx
// 00782bcf  898680000000         mov dword ptr [esi + 0x80], eax
// 00782bd5  0f8eb0000000         jle 0x782c8b
// 00782bdb  eb03                 jmp 0x782be0
// 00782bdd  8d4900               lea ecx, [ecx]
// 00782be0  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 00782be6  83f8ff               cmp eax, -1
// 00782be9  7407                 je 0x782bf2
// 00782beb  3bc3                 cmp eax, ebx
// 00782bed  8d4301               lea eax, [ebx + 1]
// 00782bf0  7e02                 jle 0x782bf4
// 00782bf2  8bc3                 mov eax, ebx
// 00782bf4  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00782bfa  81c2900e0000         add edx, 0xe90
// 00782c00  c1e204               shl edx, 4
// 00782c03  03d0                 add edx, eax
// 00782c05  52                   push edx
// 00782c06  8bce                 mov ecx, esi
// 00782c08  e8ef6cf9ff           call 0x7198fc
// 00782c0d  8be8                 mov ebp, eax
// 00782c0f  896c2414             mov dword ptr [esp + 0x14], ebp
// 00782c13  85ed                 test ebp, ebp
// 00782c15  0f8404010000         je 0x782d1f
// 00782c1b  6a08                 push 8
// 00782c1d  8bcd                 mov ecx, ebp
// 00782c1f  e8fc60f9ff           call 0x718d20
// 00782c24  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 00782c2a  83ef02               sub edi, 2
// 00782c2d  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00782c31  7c32                 jl 0x782c65
// 00782c33  53                   push ebx
// 00782c34  57                   push edi
// 00782c35  8bce                 mov ecx, esi
// 00782c37  e81e69f9ff           call 0x71955a
// 00782c3c  8be8                 mov ebp, eax
// 00782c3e  85ed                 test ebp, ebp
// 00782c40  0f84d9000000         je 0x782d1f
// 00782c46  53                   push ebx
// 00782c47  8d4701               lea eax, [edi + 1]
// 00782c4a  50                   push eax
// 00782c4b  8bce                 mov ecx, esi
// 00782c4d  e86c68f9ff           call 0x7194be
// 00782c52  50                   push eax
// 00782c53  8bcd                 mov ecx, ebp
// 00782c55  e8089a0c00           call 0x84c662
// 00782c5a  4f                   dec edi
// 00782c5b  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00782c5f  7dd2                 jge 0x782c33
// 00782c61  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00782c65  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00782c69  53                   push ebx
// 00782c6a  51                   push ecx
// 00782c6b  8bce                 mov ecx, esi
// 00782c6d  e84c68f9ff           call 0x7194be
// 00782c72  50                   push eax
// 00782c73  8bcd                 mov ecx, ebp
// 00782c75  e8e8990c00           call 0x84c662
// 00782c7a  43                   inc ebx
// 00782c7b  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 00782c81  0f8c59ffffff         jl 0x782be0
// 00782c87  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00782c8b  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 00782c91  83f8ff               cmp eax, -1
// 00782c94  7431                 je 0x782cc7
// 00782c96  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 00782c9c  81c2900e0000         add edx, 0xe90
// 00782ca2  c1e204               shl edx, 4
// 00782ca5  03d0                 add edx, eax
// 00782ca7  52                   push edx
// 00782ca8  8bce                 mov ecx, esi
// 00782caa  e84d6cf9ff           call 0x7198fc
// 00782caf  85c0                 test eax, eax
// 00782cb1  7414                 je 0x782cc7
// 00782cb3  8d8f900e0000         lea ecx, [edi + 0xe90]
// 00782cb9  c1e104               shl ecx, 4
// 00782cbc  034e5c               add ecx, dword ptr [esi + 0x5c]
// 00782cbf  51                   push ecx
// 00782cc0  8bc8                 mov ecx, eax
// 00782cc2  e89b990c00           call 0x84c662
// 00782cc7  8d4f01               lea ecx, [edi + 1]
// 00782cca  3b8e80000000         cmp ecx, dword ptr [esi + 0x80]
// 00782cd0  7d29                 jge 0x782cfb
// 00782cd2  8d1449               lea edx, [ecx + ecx*2]
// 00782cd5  03d2                 add edx, edx
// 00782cd7  03d2                 add edx, edx
// 00782cd9  8da42400000000       lea esp, [esp]
// 00782ce0  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00782ce6  8b5c10fc             mov ebx, dword ptr [eax + edx - 4]
// 00782cea  03c2                 add eax, edx
// 00782cec  41                   inc ecx
// 00782ced  895804               mov dword ptr [eax + 4], ebx
// 00782cf0  83c20c               add edx, 0xc
// 00782cf3  3b8e80000000         cmp ecx, dword ptr [esi + 0x80]
// 00782cf9  7ce5                 jl 0x782ce0
// 00782cfb  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 00782d01  8b442418             mov eax, dword ptr [esp + 0x18]
// 00782d05  8d0c7f               lea ecx, [edi + edi*2]
// 00782d08  5f                   pop edi
// 00782d09  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 00782d0d  8b16                 mov edx, dword ptr [esi]
// 00782d0f  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00782d15  5d                   pop ebp
// 00782d16  5b                   pop ebx
// 00782d17  8bce                 mov ecx, esi
// 00782d19  5e                   pop esi
// 00782d1a  83c40c               add esp, 0xc
// 00782d1d  ffe0                 jmp eax
// 00782d1f  5f                   pop edi
// 00782d20  5d                   pop ebp
// 00782d21  5b                   pop ebx
// 00782d22  5e                   pop esi
// 00782d23  83c40c               add esp, 0xc
// 00782d26  c3                   ret 
// copied from an identical function in another client (function ?ShowRow@CXTSplitterWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1