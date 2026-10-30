// roc 2011-06 0086f3c0  unit: CXTSplitterWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f3c0
//
// 0086f3c0  83ec0c               sub esp, 0xc
// 0086f3c3  56                   push esi
// 0086f3c4  8bf1                 mov esi, ecx
// 0086f3c6  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0086f3cc  3b4658               cmp eax, dword ptr [esi + 0x58]
// 0086f3cf  750d                 jne 0x86f3de
// 0086f3d1  83bef8000000ff       cmp dword ptr [esi + 0xf8], -1
// 0086f3d8  0f8484010000         je 0x86f562
// 0086f3de  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0086f3e4  53                   push ebx
// 0086f3e5  55                   push ebp
// 0086f3e6  57                   push edi
// 0086f3e7  8bbef8000000         mov edi, dword ptr [esi + 0xf8]
// 0086f3ed  8d0c40               lea ecx, [eax + eax*2]
// 0086f3f0  c786f8000000ffffffff mov dword ptr [esi + 0xf8], 0xffffffff
// 0086f3fa  8b4c8a08             mov ecx, dword ptr [edx + ecx*4 + 8]
// 0086f3fe  40                   inc eax
// 0086f3ff  33db                 xor ebx, ebx
// 0086f401  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 0086f407  897c2410             mov dword ptr [esp + 0x10], edi
// 0086f40b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0086f40f  898680000000         mov dword ptr [esi + 0x80], eax
// 0086f415  0f8eb0000000         jle 0x86f4cb
// 0086f41b  eb03                 jmp 0x86f420
// 0086f41d  8d4900               lea ecx, [ecx]
// 0086f420  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0086f426  83f8ff               cmp eax, -1
// 0086f429  7407                 je 0x86f432
// 0086f42b  3bc3                 cmp eax, ebx
// 0086f42d  8d4301               lea eax, [ebx + 1]
// 0086f430  7e02                 jle 0x86f434
// 0086f432  8bc3                 mov eax, ebx
// 0086f434  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0086f43a  81c2900e0000         add edx, 0xe90
// 0086f440  c1e204               shl edx, 4
// 0086f443  03d0                 add edx, eax
// 0086f445  52                   push edx
// 0086f446  8bce                 mov ecx, esi
// 0086f448  e811bbf9ff           call 0x80af5e
// 0086f44d  8be8                 mov ebp, eax
// 0086f44f  896c2414             mov dword ptr [esp + 0x14], ebp
// 0086f453  85ed                 test ebp, ebp
// 0086f455  0f8404010000         je 0x86f55f
// 0086f45b  6a08                 push 8
// 0086f45d  8bcd                 mov ecx, ebp
// 0086f45f  e8e2aef9ff           call 0x80a346
// 0086f464  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 0086f46a  83ef02               sub edi, 2
// 0086f46d  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0086f471  7c32                 jl 0x86f4a5
// 0086f473  53                   push ebx
// 0086f474  57                   push edi
// 0086f475  8bce                 mov ecx, esi
// 0086f477  e810b7f9ff           call 0x80ab8c
// 0086f47c  8be8                 mov ebp, eax
// 0086f47e  85ed                 test ebp, ebp
// 0086f480  0f84d9000000         je 0x86f55f
// 0086f486  53                   push ebx
// 0086f487  8d4701               lea eax, [edi + 1]
// 0086f48a  50                   push eax
// 0086f48b  8bce                 mov ecx, esi
// 0086f48d  e85eb6f9ff           call 0x80aaf0
// 0086f492  50                   push eax
// 0086f493  8bcd                 mov ecx, ebp
// 0086f495  e81ed71500           call 0x9ccbb8
// 0086f49a  4f                   dec edi
// 0086f49b  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0086f49f  7dd2                 jge 0x86f473
// 0086f4a1  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0086f4a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086f4a9  53                   push ebx
// 0086f4aa  51                   push ecx
// 0086f4ab  8bce                 mov ecx, esi
// 0086f4ad  e83eb6f9ff           call 0x80aaf0
// 0086f4b2  50                   push eax
// 0086f4b3  8bcd                 mov ecx, ebp
// 0086f4b5  e8fed61500           call 0x9ccbb8
// 0086f4ba  43                   inc ebx
// 0086f4bb  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 0086f4c1  0f8c59ffffff         jl 0x86f420
// 0086f4c7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0086f4cb  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0086f4d1  83f8ff               cmp eax, -1
// 0086f4d4  7431                 je 0x86f507
// 0086f4d6  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0086f4dc  81c2900e0000         add edx, 0xe90
// 0086f4e2  c1e204               shl edx, 4
// 0086f4e5  03d0                 add edx, eax
// 0086f4e7  52                   push edx
// 0086f4e8  8bce                 mov ecx, esi
// 0086f4ea  e86fbaf9ff           call 0x80af5e
// 0086f4ef  85c0                 test eax, eax
// 0086f4f1  7414                 je 0x86f507
// 0086f4f3  8d8f900e0000         lea ecx, [edi + 0xe90]
// 0086f4f9  c1e104               shl ecx, 4
// 0086f4fc  034e5c               add ecx, dword ptr [esi + 0x5c]
// 0086f4ff  51                   push ecx
// 0086f500  8bc8                 mov ecx, eax
// 0086f502  e8b1d61500           call 0x9ccbb8
// 0086f507  8d4f01               lea ecx, [edi + 1]
// 0086f50a  3b8e80000000         cmp ecx, dword ptr [esi + 0x80]
// 0086f510  7d29                 jge 0x86f53b
// 0086f512  8d1449               lea edx, [ecx + ecx*2]
// 0086f515  03d2                 add edx, edx
// 0086f517  03d2                 add edx, edx
// 0086f519  8da42400000000       lea esp, [esp]
// 0086f520  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0086f526  8b5c10fc             mov ebx, dword ptr [eax + edx - 4]
// 0086f52a  03c2                 add eax, edx
// 0086f52c  41                   inc ecx
// 0086f52d  895804               mov dword ptr [eax + 4], ebx
// 0086f530  83c20c               add edx, 0xc
// 0086f533  3b8e80000000         cmp ecx, dword ptr [esi + 0x80]
// 0086f539  7ce5                 jl 0x86f520
// 0086f53b  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0086f541  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086f545  8d0c7f               lea ecx, [edi + edi*2]
// 0086f548  5f                   pop edi
// 0086f549  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 0086f54d  8b16                 mov edx, dword ptr [esi]
// 0086f54f  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0086f555  5d                   pop ebp
// 0086f556  5b                   pop ebx
// 0086f557  8bce                 mov ecx, esi
// 0086f559  5e                   pop esi
// 0086f55a  83c40c               add esp, 0xc
// 0086f55d  ffe0                 jmp eax
// 0086f55f  5f                   pop edi
// 0086f560  5d                   pop ebp
// 0086f561  5b                   pop ebx
// 0086f562  5e                   pop esi
// 0086f563  83c40c               add esp, 0xc
// 0086f566  c3                   ret 
// copied from an identical function in another client (function ?ShowRow@CXTSplitterWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1