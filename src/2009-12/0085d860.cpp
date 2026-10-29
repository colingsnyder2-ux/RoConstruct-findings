// roc 2009-12 0085d860  unit: CXTSplitterWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085d860
//
// 0085d860  83ec10               sub esp, 0x10
// 0085d863  56                   push esi
// 0085d864  8bf1                 mov esi, ecx
// 0085d866  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0085d86c  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0085d86f  750d                 jne 0x85d87e
// 0085d871  83bef4000000ff       cmp dword ptr [esi + 0xf4], -1
// 0085d878  0f8484010000         je 0x85da02
// 0085d87e  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 0085d884  53                   push ebx
// 0085d885  55                   push ebp
// 0085d886  57                   push edi
// 0085d887  8bbef4000000         mov edi, dword ptr [esi + 0xf4]
// 0085d88d  8d0c40               lea ecx, [eax + eax*2]
// 0085d890  c786f4000000ffffffff mov dword ptr [esi + 0xf4], 0xffffffff
// 0085d89a  8b4c8a08             mov ecx, dword ptr [edx + ecx*4 + 8]
// 0085d89e  40                   inc eax
// 0085d89f  33db                 xor ebx, ebx
// 0085d8a1  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 0085d8a7  897c2410             mov dword ptr [esp + 0x10], edi
// 0085d8ab  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0085d8af  898684000000         mov dword ptr [esi + 0x84], eax
// 0085d8b5  0f8eb6000000         jle 0x85d971
// 0085d8bb  33c0                 xor eax, eax
// 0085d8bd  89442414             mov dword ptr [esp + 0x14], eax
// 0085d8c1  eb04                 jmp 0x85d8c7
// 0085d8c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085d8c7  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0085d8cd  83f9ff               cmp ecx, -1
// 0085d8d0  7407                 je 0x85d8d9
// 0085d8d2  3bcb                 cmp ecx, ebx
// 0085d8d4  7f03                 jg 0x85d8d9
// 0085d8d6  83c010               add eax, 0x10
// 0085d8d9  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 0085d8df  0500e90000           add eax, 0xe900
// 0085d8e4  03d0                 add edx, eax
// 0085d8e6  52                   push edx
// 0085d8e7  8bce                 mov ecx, esi
// 0085d8e9  e8426ef9ff           call 0x7f4730
// 0085d8ee  8be8                 mov ebp, eax
// 0085d8f0  896c2418             mov dword ptr [esp + 0x18], ebp
// 0085d8f4  85ed                 test ebp, ebp
// 0085d8f6  0f8403010000         je 0x85d9ff
// 0085d8fc  6a08                 push 8
// 0085d8fe  8bcd                 mov ecx, ebp
// 0085d900  e84362f9ff           call 0x7f3b48
// 0085d905  8bbe84000000         mov edi, dword ptr [esi + 0x84]
// 0085d90b  83ef02               sub edi, 2
// 0085d90e  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0085d912  7c32                 jl 0x85d946
// 0085d914  57                   push edi
// 0085d915  53                   push ebx
// 0085d916  8bce                 mov ecx, esi
// 0085d918  e86b6af9ff           call 0x7f4388
// 0085d91d  8be8                 mov ebp, eax
// 0085d91f  85ed                 test ebp, ebp
// 0085d921  0f84d8000000         je 0x85d9ff
// 0085d927  8d4701               lea eax, [edi + 1]
// 0085d92a  50                   push eax
// 0085d92b  53                   push ebx
// 0085d92c  8bce                 mov ecx, esi
// 0085d92e  e8b969f9ff           call 0x7f42ec
// 0085d933  50                   push eax
// 0085d934  8bcd                 mov ecx, ebp
// 0085d936  e893920c00           call 0x926bce
// 0085d93b  4f                   dec edi
// 0085d93c  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0085d940  7dd2                 jge 0x85d914
// 0085d942  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0085d946  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085d94a  51                   push ecx
// 0085d94b  53                   push ebx
// 0085d94c  8bce                 mov ecx, esi
// 0085d94e  e89969f9ff           call 0x7f42ec
// 0085d953  50                   push eax
// 0085d954  8bcd                 mov ecx, ebp
// 0085d956  e873920c00           call 0x926bce
// 0085d95b  8344241410           add dword ptr [esp + 0x14], 0x10
// 0085d960  43                   inc ebx
// 0085d961  3b9e80000000         cmp ebx, dword ptr [esi + 0x80]
// 0085d967  0f8c56ffffff         jl 0x85d8c3
// 0085d96d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0085d971  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0085d977  83f8ff               cmp eax, -1
// 0085d97a  7430                 je 0x85d9ac
// 0085d97c  05900e0000           add eax, 0xe90
// 0085d981  c1e004               shl eax, 4
// 0085d984  038684000000         add eax, dword ptr [esi + 0x84]
// 0085d98a  8bce                 mov ecx, esi
// 0085d98c  50                   push eax
// 0085d98d  e89e6df9ff           call 0x7f4730
// 0085d992  85c0                 test eax, eax
// 0085d994  7416                 je 0x85d9ac
// 0085d996  8b5658               mov edx, dword ptr [esi + 0x58]
// 0085d999  81c2900e0000         add edx, 0xe90
// 0085d99f  c1e204               shl edx, 4
// 0085d9a2  03d7                 add edx, edi
// 0085d9a4  52                   push edx
// 0085d9a5  8bc8                 mov ecx, eax
// 0085d9a7  e822920c00           call 0x926bce
// 0085d9ac  8d4f01               lea ecx, [edi + 1]
// 0085d9af  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 0085d9b5  7d24                 jge 0x85d9db
// 0085d9b7  8d1449               lea edx, [ecx + ecx*2]
// 0085d9ba  03d2                 add edx, edx
// 0085d9bc  03d2                 add edx, edx
// 0085d9be  8bff                 mov edi, edi
// 0085d9c0  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0085d9c6  8b5c10fc             mov ebx, dword ptr [eax + edx - 4]
// 0085d9ca  03c2                 add eax, edx
// 0085d9cc  41                   inc ecx
// 0085d9cd  895804               mov dword ptr [eax + 4], ebx
// 0085d9d0  83c20c               add edx, 0xc
// 0085d9d3  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 0085d9d9  7ce5                 jl 0x85d9c0
// 0085d9db  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 0085d9e1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085d9e5  8d0c7f               lea ecx, [edi + edi*2]
// 0085d9e8  5f                   pop edi
// 0085d9e9  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 0085d9ed  8b16                 mov edx, dword ptr [esi]
// 0085d9ef  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0085d9f5  5d                   pop ebp
// 0085d9f6  5b                   pop ebx
// 0085d9f7  8bce                 mov ecx, esi
// 0085d9f9  5e                   pop esi
// 0085d9fa  83c410               add esp, 0x10
// 0085d9fd  ffe0                 jmp eax
// 0085d9ff  5f                   pop edi
// 0085da00  5d                   pop ebp
// 0085da01  5b                   pop ebx
// 0085da02  5e                   pop esi
// 0085da03  83c410               add esp, 0x10
// 0085da06  c3                   ret 
// copied from an identical function in another client (function ?ShowColumn@CXTSplitterWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1