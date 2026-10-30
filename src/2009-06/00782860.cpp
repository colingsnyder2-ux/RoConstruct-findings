// roc 2009-06 00782860  unit: CXTSplitterWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782860
//
// 00782860  83ec10               sub esp, 0x10
// 00782863  56                   push esi
// 00782864  8bf1                 mov esi, ecx
// 00782866  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0078286c  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0078286f  750d                 jne 0x78287e
// 00782871  83bef4000000ff       cmp dword ptr [esi + 0xf4], -1
// 00782878  0f8484010000         je 0x782a02
// 0078287e  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 00782884  53                   push ebx
// 00782885  55                   push ebp
// 00782886  57                   push edi
// 00782887  8bbef4000000         mov edi, dword ptr [esi + 0xf4]
// 0078288d  8d0c40               lea ecx, [eax + eax*2]
// 00782890  c786f4000000ffffffff mov dword ptr [esi + 0xf4], 0xffffffff
// 0078289a  8b4c8a08             mov ecx, dword ptr [edx + ecx*4 + 8]
// 0078289e  40                   inc eax
// 0078289f  33db                 xor ebx, ebx
// 007828a1  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 007828a7  897c2410             mov dword ptr [esp + 0x10], edi
// 007828ab  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007828af  898684000000         mov dword ptr [esi + 0x84], eax
// 007828b5  0f8eb6000000         jle 0x782971
// 007828bb  33c0                 xor eax, eax
// 007828bd  89442414             mov dword ptr [esp + 0x14], eax
// 007828c1  eb04                 jmp 0x7828c7
// 007828c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 007828c7  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 007828cd  83f9ff               cmp ecx, -1
// 007828d0  7407                 je 0x7828d9
// 007828d2  3bcb                 cmp ecx, ebx
// 007828d4  7f03                 jg 0x7828d9
// 007828d6  83c010               add eax, 0x10
// 007828d9  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 007828df  0500e90000           add eax, 0xe900
// 007828e4  03d0                 add edx, eax
// 007828e6  52                   push edx
// 007828e7  8bce                 mov ecx, esi
// 007828e9  e80e70f9ff           call 0x7198fc
// 007828ee  8be8                 mov ebp, eax
// 007828f0  896c2418             mov dword ptr [esp + 0x18], ebp
// 007828f4  85ed                 test ebp, ebp
// 007828f6  0f8403010000         je 0x7829ff
// 007828fc  6a08                 push 8
// 007828fe  8bcd                 mov ecx, ebp
// 00782900  e81b64f9ff           call 0x718d20
// 00782905  8bbe84000000         mov edi, dword ptr [esi + 0x84]
// 0078290b  83ef02               sub edi, 2
// 0078290e  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00782912  7c32                 jl 0x782946
// 00782914  57                   push edi
// 00782915  53                   push ebx
// 00782916  8bce                 mov ecx, esi
// 00782918  e83d6cf9ff           call 0x71955a
// 0078291d  8be8                 mov ebp, eax
// 0078291f  85ed                 test ebp, ebp
// 00782921  0f84d8000000         je 0x7829ff
// 00782927  8d4701               lea eax, [edi + 1]
// 0078292a  50                   push eax
// 0078292b  53                   push ebx
// 0078292c  8bce                 mov ecx, esi
// 0078292e  e88b6bf9ff           call 0x7194be
// 00782933  50                   push eax
// 00782934  8bcd                 mov ecx, ebp
// 00782936  e8279d0c00           call 0x84c662
// 0078293b  4f                   dec edi
// 0078293c  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 00782940  7dd2                 jge 0x782914
// 00782942  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00782946  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0078294a  51                   push ecx
// 0078294b  53                   push ebx
// 0078294c  8bce                 mov ecx, esi
// 0078294e  e86b6bf9ff           call 0x7194be
// 00782953  50                   push eax
// 00782954  8bcd                 mov ecx, ebp
// 00782956  e8079d0c00           call 0x84c662
// 0078295b  8344241410           add dword ptr [esp + 0x14], 0x10
// 00782960  43                   inc ebx
// 00782961  3b9e80000000         cmp ebx, dword ptr [esi + 0x80]
// 00782967  0f8c56ffffff         jl 0x7828c3
// 0078296d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00782971  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00782977  83f8ff               cmp eax, -1
// 0078297a  7430                 je 0x7829ac
// 0078297c  05900e0000           add eax, 0xe90
// 00782981  c1e004               shl eax, 4
// 00782984  038684000000         add eax, dword ptr [esi + 0x84]
// 0078298a  8bce                 mov ecx, esi
// 0078298c  50                   push eax
// 0078298d  e86a6ff9ff           call 0x7198fc
// 00782992  85c0                 test eax, eax
// 00782994  7416                 je 0x7829ac
// 00782996  8b5658               mov edx, dword ptr [esi + 0x58]
// 00782999  81c2900e0000         add edx, 0xe90
// 0078299f  c1e204               shl edx, 4
// 007829a2  03d7                 add edx, edi
// 007829a4  52                   push edx
// 007829a5  8bc8                 mov ecx, eax
// 007829a7  e8b69c0c00           call 0x84c662
// 007829ac  8d4f01               lea ecx, [edi + 1]
// 007829af  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 007829b5  7d24                 jge 0x7829db
// 007829b7  8d1449               lea edx, [ecx + ecx*2]
// 007829ba  03d2                 add edx, edx
// 007829bc  03d2                 add edx, edx
// 007829be  8bff                 mov edi, edi
// 007829c0  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 007829c6  8b5c10fc             mov ebx, dword ptr [eax + edx - 4]
// 007829ca  03c2                 add eax, edx
// 007829cc  41                   inc ecx
// 007829cd  895804               mov dword ptr [eax + 4], ebx
// 007829d0  83c20c               add edx, 0xc
// 007829d3  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 007829d9  7ce5                 jl 0x7829c0
// 007829db  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 007829e1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007829e5  8d0c7f               lea ecx, [edi + edi*2]
// 007829e8  5f                   pop edi
// 007829e9  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 007829ed  8b16                 mov edx, dword ptr [esi]
// 007829ef  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 007829f5  5d                   pop ebp
// 007829f6  5b                   pop ebx
// 007829f7  8bce                 mov ecx, esi
// 007829f9  5e                   pop esi
// 007829fa  83c410               add esp, 0x10
// 007829fd  ffe0                 jmp eax
// 007829ff  5f                   pop edi
// 00782a00  5d                   pop ebp
// 00782a01  5b                   pop ebx
// 00782a02  5e                   pop esi
// 00782a03  83c410               add esp, 0x10
// 00782a06  c3                   ret 
// copied from an identical function in another client (function ?ShowColumn@CXTSplitterWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1