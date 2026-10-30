// roc 2011-06 0086fdc0  unit: CXTSplitterWnd  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086fdc0
//
// 0086fdc0  6aff                 push -1
// 0086fdc2  68b876a000           push 0xa076b8
// 0086fdc7  64a100000000         mov eax, dword ptr fs:[0]
// 0086fdcd  50                   push eax
// 0086fdce  83ec24               sub esp, 0x24
// 0086fdd1  55                   push ebp
// 0086fdd2  56                   push esi
// 0086fdd3  57                   push edi
// 0086fdd4  a12058c900           mov eax, dword ptr [0xc95820]
// 0086fdd9  33c4                 xor eax, esp
// 0086fddb  50                   push eax
// 0086fddc  8d442434             lea eax, [esp + 0x34]
// 0086fde0  64a300000000         mov dword ptr fs:[0], eax
// 0086fde6  8bf1                 mov esi, ecx
// 0086fde8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0086fdef  0f8517010000         jne 0x86ff0c
// 0086fdf5  56                   push esi
// 0086fdf6  8d4c2424             lea ecx, [esp + 0x24]
// 0086fdfa  e8e3c71500           call 0x9cc5e2
// 0086fdff  8d4c2420             lea ecx, [esp + 0x20]
// 0086fe03  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0086fe0b  e868c81500           call 0x9cc678
// 0086fe10  f6860801000001       test byte ptr [esi + 0x108], 1
// 0086fe17  8be8                 mov ebp, eax
// 0086fe19  7457                 je 0x86fe72
// 0086fe1b  8b06                 mov eax, dword ptr [esi]
// 0086fe1d  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0086fe23  8d4c2410             lea ecx, [esp + 0x10]
// 0086fe27  51                   push ecx
// 0086fe28  8bce                 mov ecx, esi
// 0086fe2a  ffd2                 call edx
// 0086fe2c  8b442444             mov eax, dword ptr [esp + 0x44]
// 0086fe30  8b5008               mov edx, dword ptr [eax + 8]
// 0086fe33  8b4804               mov ecx, dword ptr [eax + 4]
// 0086fe36  8b700c               mov esi, dword ptr [eax + 0xc]
// 0086fe39  8bfa                 mov edi, edx
// 0086fe3b  2b38                 sub edi, dword ptr [eax]
// 0086fe3d  2bf1                 sub esi, ecx
// 0086fe3f  3bfe                 cmp edi, esi
// 0086fe41  7d19                 jge 0x86fe5c
// 0086fe43  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086fe47  8d442410             lea eax, [esp + 0x10]
// 0086fe4b  50                   push eax
// 0086fe4c  51                   push ecx
// 0086fe4d  89542420             mov dword ptr [esp + 0x20], edx
// 0086fe51  ff151c1ba400         call dword ptr [0xa41b1c]
// 0086fe57  e995000000           jmp 0x86fef1
// 0086fe5c  8d442410             lea eax, [esp + 0x10]
// 0086fe60  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0086fe64  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0086fe68  50                   push eax
// 0086fe69  51                   push ecx
// 0086fe6a  ff151c1ba400         call dword ptr [0xa41b1c]
// 0086fe70  eb7f                 jmp 0x86fef1
// 0086fe72  8b542444             mov edx, dword ptr [esp + 0x44]
// 0086fe76  52                   push edx
// 0086fe77  8d442414             lea eax, [esp + 0x14]
// 0086fe7b  50                   push eax
// 0086fe7c  ff15681ca400         call dword ptr [0xa41c68]
// 0086fe82  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0086fe86  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086fe8a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0086fe8e  8bc7                 mov eax, edi
// 0086fe90  2b442410             sub eax, dword ptr [esp + 0x10]
// 0086fe94  2bce                 sub ecx, esi
// 0086fe96  33d2                 xor edx, edx
// 0086fe98  3bc8                 cmp ecx, eax
// 0086fe9a  0f9fc2               setg dl
// 0086fe9d  85d2                 test edx, edx
// 0086fe9f  740e                 je 0x86feaf
// 0086fea1  83f804               cmp eax, 4
// 0086fea4  7415                 je 0x86febb
// 0086fea6  83c7fc               add edi, -4
// 0086fea9  897c2410             mov dword ptr [esp + 0x10], edi
// 0086fead  eb0c                 jmp 0x86febb
// 0086feaf  83f904               cmp ecx, 4
// 0086feb2  7407                 je 0x86febb
// 0086feb4  83c604               add esi, 4
// 0086feb7  8974241c             mov dword ptr [esp + 0x1c], esi
// 0086febb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0086febf  51                   push ecx
// 0086fec0  8d4c2424             lea ecx, [esp + 0x24]
// 0086fec4  e879c71500           call 0x9cc642
// 0086fec9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086fecd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086fed1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0086fed5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086fed9  6849005a00           push 0x5a0049
// 0086fede  2bc2                 sub eax, edx
// 0086fee0  50                   push eax
// 0086fee1  2bce                 sub ecx, esi
// 0086fee3  51                   push ecx
// 0086fee4  52                   push edx
// 0086fee5  8b542434             mov edx, dword ptr [esp + 0x34]
// 0086fee9  56                   push esi
// 0086feea  52                   push edx
// 0086feeb  ff150401a400         call dword ptr [0xa40104]
// 0086fef1  55                   push ebp
// 0086fef2  8d4c2424             lea ecx, [esp + 0x24]
// 0086fef6  e883c71500           call 0x9cc67e
// 0086fefb  8d4c2420             lea ecx, [esp + 0x20]
// 0086feff  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0086ff07  e8d0c61500           call 0x9cc5dc
// 0086ff0c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0086ff10  64890d00000000       mov dword ptr fs:[0], ecx
// 0086ff17  59                   pop ecx
// 0086ff18  5f                   pop edi
// 0086ff19  5e                   pop esi
// 0086ff1a  5d                   pop ebp
// 0086ff1b  83c430               add esp, 0x30
// 0086ff1e  c20800               ret 8
// copied from an identical function in another client (function ?DrawTracker@CXTSplitterWnd@@MAEXABVCRect@@PAVCBrush@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1