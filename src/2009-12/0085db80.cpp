// roc 2009-12 0085db80  unit: CXTSplitterWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085db80
//
// 0085db80  83ec0c               sub esp, 0xc
// 0085db83  56                   push esi
// 0085db84  8bf1                 mov esi, ecx
// 0085db86  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0085db8c  3b4658               cmp eax, dword ptr [esi + 0x58]
// 0085db8f  750d                 jne 0x85db9e
// 0085db91  83bef8000000ff       cmp dword ptr [esi + 0xf8], -1
// 0085db98  0f8484010000         je 0x85dd22
// 0085db9e  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0085dba4  53                   push ebx
// 0085dba5  55                   push ebp
// 0085dba6  57                   push edi
// 0085dba7  8bbef8000000         mov edi, dword ptr [esi + 0xf8]
// 0085dbad  8d0c40               lea ecx, [eax + eax*2]
// 0085dbb0  c786f8000000ffffffff mov dword ptr [esi + 0xf8], 0xffffffff
// 0085dbba  8b4c8a08             mov ecx, dword ptr [edx + ecx*4 + 8]
// 0085dbbe  40                   inc eax
// 0085dbbf  33db                 xor ebx, ebx
// 0085dbc1  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 0085dbc7  897c2410             mov dword ptr [esp + 0x10], edi
// 0085dbcb  894c2418             mov dword ptr [esp + 0x18], ecx
// 0085dbcf  898680000000         mov dword ptr [esi + 0x80], eax
// 0085dbd5  0f8eb0000000         jle 0x85dc8b
// 0085dbdb  eb03                 jmp 0x85dbe0
// 0085dbdd  8d4900               lea ecx, [ecx]
// 0085dbe0  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0085dbe6  83f8ff               cmp eax, -1
// 0085dbe9  7407                 je 0x85dbf2
// 0085dbeb  3bc3                 cmp eax, ebx
// 0085dbed  8d4301               lea eax, [ebx + 1]
// 0085dbf0  7e02                 jle 0x85dbf4
// 0085dbf2  8bc3                 mov eax, ebx
// 0085dbf4  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0085dbfa  81c2900e0000         add edx, 0xe90
// 0085dc00  c1e204               shl edx, 4
// 0085dc03  03d0                 add edx, eax
// 0085dc05  52                   push edx
// 0085dc06  8bce                 mov ecx, esi
// 0085dc08  e8236bf9ff           call 0x7f4730
// 0085dc0d  8be8                 mov ebp, eax
// 0085dc0f  896c2414             mov dword ptr [esp + 0x14], ebp
// 0085dc13  85ed                 test ebp, ebp
// 0085dc15  0f8404010000         je 0x85dd1f
// 0085dc1b  6a08                 push 8
// 0085dc1d  8bcd                 mov ecx, ebp
// 0085dc1f  e8245ff9ff           call 0x7f3b48
// 0085dc24  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 0085dc2a  83ef02               sub edi, 2
// 0085dc2d  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0085dc31  7c32                 jl 0x85dc65
// 0085dc33  53                   push ebx
// 0085dc34  57                   push edi
// 0085dc35  8bce                 mov ecx, esi
// 0085dc37  e84c67f9ff           call 0x7f4388
// 0085dc3c  8be8                 mov ebp, eax
// 0085dc3e  85ed                 test ebp, ebp
// 0085dc40  0f84d9000000         je 0x85dd1f
// 0085dc46  53                   push ebx
// 0085dc47  8d4701               lea eax, [edi + 1]
// 0085dc4a  50                   push eax
// 0085dc4b  8bce                 mov ecx, esi
// 0085dc4d  e89a66f9ff           call 0x7f42ec
// 0085dc52  50                   push eax
// 0085dc53  8bcd                 mov ecx, ebp
// 0085dc55  e8748f0c00           call 0x926bce
// 0085dc5a  4f                   dec edi
// 0085dc5b  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0085dc5f  7dd2                 jge 0x85dc33
// 0085dc61  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0085dc65  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085dc69  53                   push ebx
// 0085dc6a  51                   push ecx
// 0085dc6b  8bce                 mov ecx, esi
// 0085dc6d  e87a66f9ff           call 0x7f42ec
// 0085dc72  50                   push eax
// 0085dc73  8bcd                 mov ecx, ebp
// 0085dc75  e8548f0c00           call 0x926bce
// 0085dc7a  43                   inc ebx
// 0085dc7b  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 0085dc81  0f8c59ffffff         jl 0x85dbe0
// 0085dc87  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085dc8b  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0085dc91  83f8ff               cmp eax, -1
// 0085dc94  7431                 je 0x85dcc7
// 0085dc96  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0085dc9c  81c2900e0000         add edx, 0xe90
// 0085dca2  c1e204               shl edx, 4
// 0085dca5  03d0                 add edx, eax
// 0085dca7  52                   push edx
// 0085dca8  8bce                 mov ecx, esi
// 0085dcaa  e8816af9ff           call 0x7f4730
// 0085dcaf  85c0                 test eax, eax
// 0085dcb1  7414                 je 0x85dcc7
// 0085dcb3  8d8f900e0000         lea ecx, [edi + 0xe90]
// 0085dcb9  c1e104               shl ecx, 4
// 0085dcbc  034e5c               add ecx, dword ptr [esi + 0x5c]
// 0085dcbf  51                   push ecx
// 0085dcc0  8bc8                 mov ecx, eax
// 0085dcc2  e8078f0c00           call 0x926bce
// 0085dcc7  8d4f01               lea ecx, [edi + 1]
// 0085dcca  3b8e80000000         cmp ecx, dword ptr [esi + 0x80]
// 0085dcd0  7d29                 jge 0x85dcfb
// 0085dcd2  8d1449               lea edx, [ecx + ecx*2]
// 0085dcd5  03d2                 add edx, edx
// 0085dcd7  03d2                 add edx, edx
// 0085dcd9  8da42400000000       lea esp, [esp]
// 0085dce0  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 0085dce6  8b5c10fc             mov ebx, dword ptr [eax + edx - 4]
// 0085dcea  03c2                 add eax, edx
// 0085dcec  41                   inc ecx
// 0085dced  895804               mov dword ptr [eax + 4], ebx
// 0085dcf0  83c20c               add edx, 0xc
// 0085dcf3  3b8e80000000         cmp ecx, dword ptr [esi + 0x80]
// 0085dcf9  7ce5                 jl 0x85dce0
// 0085dcfb  8b9694000000         mov edx, dword ptr [esi + 0x94]
// 0085dd01  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085dd05  8d0c7f               lea ecx, [edi + edi*2]
// 0085dd08  5f                   pop edi
// 0085dd09  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 0085dd0d  8b16                 mov edx, dword ptr [esi]
// 0085dd0f  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0085dd15  5d                   pop ebp
// 0085dd16  5b                   pop ebx
// 0085dd17  8bce                 mov ecx, esi
// 0085dd19  5e                   pop esi
// 0085dd1a  83c40c               add esp, 0xc
// 0085dd1d  ffe0                 jmp eax
// 0085dd1f  5f                   pop edi
// 0085dd20  5d                   pop ebp
// 0085dd21  5b                   pop ebx
// 0085dd22  5e                   pop esi
// 0085dd23  83c40c               add esp, 0xc
// 0085dd26  c3                   ret 
// copied from an identical function in another client (function ?ShowRow@CXTSplitterWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1