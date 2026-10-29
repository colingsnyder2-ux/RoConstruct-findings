// roc 2011-06 0086f0a0  unit: CXTSplitterWnd  size: 423 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f0a0
//
// 0086f0a0  83ec10               sub esp, 0x10
// 0086f0a3  56                   push esi
// 0086f0a4  8bf1                 mov esi, ecx
// 0086f0a6  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0086f0ac  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0086f0af  750d                 jne 0x86f0be
// 0086f0b1  83bef4000000ff       cmp dword ptr [esi + 0xf4], -1
// 0086f0b8  0f8484010000         je 0x86f242
// 0086f0be  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 0086f0c4  53                   push ebx
// 0086f0c5  55                   push ebp
// 0086f0c6  57                   push edi
// 0086f0c7  8bbef4000000         mov edi, dword ptr [esi + 0xf4]
// 0086f0cd  8d0c40               lea ecx, [eax + eax*2]
// 0086f0d0  c786f4000000ffffffff mov dword ptr [esi + 0xf4], 0xffffffff
// 0086f0da  8b4c8a08             mov ecx, dword ptr [edx + ecx*4 + 8]
// 0086f0de  40                   inc eax
// 0086f0df  33db                 xor ebx, ebx
// 0086f0e1  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 0086f0e7  897c2410             mov dword ptr [esp + 0x10], edi
// 0086f0eb  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0086f0ef  898684000000         mov dword ptr [esi + 0x84], eax
// 0086f0f5  0f8eb6000000         jle 0x86f1b1
// 0086f0fb  33c0                 xor eax, eax
// 0086f0fd  89442414             mov dword ptr [esp + 0x14], eax
// 0086f101  eb04                 jmp 0x86f107
// 0086f103  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086f107  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0086f10d  83f9ff               cmp ecx, -1
// 0086f110  7407                 je 0x86f119
// 0086f112  3bcb                 cmp ecx, ebx
// 0086f114  7f03                 jg 0x86f119
// 0086f116  83c010               add eax, 0x10
// 0086f119  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 0086f11f  0500e90000           add eax, 0xe900
// 0086f124  03d0                 add edx, eax
// 0086f126  52                   push edx
// 0086f127  8bce                 mov ecx, esi
// 0086f129  e830bef9ff           call 0x80af5e
// 0086f12e  8be8                 mov ebp, eax
// 0086f130  896c2418             mov dword ptr [esp + 0x18], ebp
// 0086f134  85ed                 test ebp, ebp
// 0086f136  0f8403010000         je 0x86f23f
// 0086f13c  6a08                 push 8
// 0086f13e  8bcd                 mov ecx, ebp
// 0086f140  e801b2f9ff           call 0x80a346
// 0086f145  8bbe84000000         mov edi, dword ptr [esi + 0x84]
// 0086f14b  83ef02               sub edi, 2
// 0086f14e  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0086f152  7c32                 jl 0x86f186
// 0086f154  57                   push edi
// 0086f155  53                   push ebx
// 0086f156  8bce                 mov ecx, esi
// 0086f158  e82fbaf9ff           call 0x80ab8c
// 0086f15d  8be8                 mov ebp, eax
// 0086f15f  85ed                 test ebp, ebp
// 0086f161  0f84d8000000         je 0x86f23f
// 0086f167  8d4701               lea eax, [edi + 1]
// 0086f16a  50                   push eax
// 0086f16b  53                   push ebx
// 0086f16c  8bce                 mov ecx, esi
// 0086f16e  e87db9f9ff           call 0x80aaf0
// 0086f173  50                   push eax
// 0086f174  8bcd                 mov ecx, ebp
// 0086f176  e83dda1500           call 0x9ccbb8
// 0086f17b  4f                   dec edi
// 0086f17c  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0086f180  7dd2                 jge 0x86f154
// 0086f182  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0086f186  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086f18a  51                   push ecx
// 0086f18b  53                   push ebx
// 0086f18c  8bce                 mov ecx, esi
// 0086f18e  e85db9f9ff           call 0x80aaf0
// 0086f193  50                   push eax
// 0086f194  8bcd                 mov ecx, ebp
// 0086f196  e81dda1500           call 0x9ccbb8
// 0086f19b  8344241410           add dword ptr [esp + 0x14], 0x10
// 0086f1a0  43                   inc ebx
// 0086f1a1  3b9e80000000         cmp ebx, dword ptr [esi + 0x80]
// 0086f1a7  0f8c56ffffff         jl 0x86f103
// 0086f1ad  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0086f1b1  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0086f1b7  83f8ff               cmp eax, -1
// 0086f1ba  7430                 je 0x86f1ec
// 0086f1bc  05900e0000           add eax, 0xe90
// 0086f1c1  c1e004               shl eax, 4
// 0086f1c4  038684000000         add eax, dword ptr [esi + 0x84]
// 0086f1ca  8bce                 mov ecx, esi
// 0086f1cc  50                   push eax
// 0086f1cd  e88cbdf9ff           call 0x80af5e
// 0086f1d2  85c0                 test eax, eax
// 0086f1d4  7416                 je 0x86f1ec
// 0086f1d6  8b5658               mov edx, dword ptr [esi + 0x58]
// 0086f1d9  81c2900e0000         add edx, 0xe90
// 0086f1df  c1e204               shl edx, 4
// 0086f1e2  03d7                 add edx, edi
// 0086f1e4  52                   push edx
// 0086f1e5  8bc8                 mov ecx, eax
// 0086f1e7  e8ccd91500           call 0x9ccbb8
// 0086f1ec  8d4f01               lea ecx, [edi + 1]
// 0086f1ef  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 0086f1f5  7d24                 jge 0x86f21b
// 0086f1f7  8d1449               lea edx, [ecx + ecx*2]
// 0086f1fa  03d2                 add edx, edx
// 0086f1fc  03d2                 add edx, edx
// 0086f1fe  8bff                 mov edi, edi
// 0086f200  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0086f206  8b5c10fc             mov ebx, dword ptr [eax + edx - 4]
// 0086f20a  03c2                 add eax, edx
// 0086f20c  41                   inc ecx
// 0086f20d  895804               mov dword ptr [eax + 4], ebx
// 0086f210  83c20c               add edx, 0xc
// 0086f213  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 0086f219  7ce5                 jl 0x86f200
// 0086f21b  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 0086f221  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086f225  8d0c7f               lea ecx, [edi + edi*2]
// 0086f228  5f                   pop edi
// 0086f229  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 0086f22d  8b16                 mov edx, dword ptr [esi]
// 0086f22f  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0086f235  5d                   pop ebp
// 0086f236  5b                   pop ebx
// 0086f237  8bce                 mov ecx, esi
// 0086f239  5e                   pop esi
// 0086f23a  83c410               add esp, 0x10
// 0086f23d  ffe0                 jmp eax
// 0086f23f  5f                   pop edi
// 0086f240  5d                   pop ebp
// 0086f241  5b                   pop ebx
// 0086f242  5e                   pop esi
// 0086f243  83c410               add esp, 0x10
// 0086f246  c3                   ret 
// copied from an identical function in another client (function ?ShowColumn@CXTSplitterWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1