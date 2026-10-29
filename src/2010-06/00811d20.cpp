// roc 2010-06 00811d20  unit: CXTSplitterWnd  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811d20
//
// 00811d20  83ec08               sub esp, 8
// 00811d23  55                   push ebp
// 00811d24  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00811d28  56                   push esi
// 00811d29  8bf1                 mov esi, ecx
// 00811d2b  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00811d31  83f8ff               cmp eax, -1
// 00811d34  7412                 je 0x811d48
// 00811d36  3bc5                 cmp eax, ebp
// 00811d38  0f842e010000         je 0x811e6c
// 00811d3e  8b06                 mov eax, dword ptr [esi]
// 00811d40  8b90bc010000         mov edx, dword ptr [eax + 0x1bc]
// 00811d46  ffd2                 call edx
// 00811d48  8b06                 mov eax, dword ptr [esi]
// 00811d4a  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 00811d50  8d4c240c             lea ecx, [esp + 0xc]
// 00811d54  51                   push ecx
// 00811d55  8d54240c             lea edx, [esp + 0xc]
// 00811d59  52                   push edx
// 00811d5a  8bce                 mov ecx, esi
// 00811d5c  89aef8000000         mov dword ptr [esi + 0xf8], ebp
// 00811d62  ffd0                 call eax
// 00811d64  85c0                 test eax, eax
// 00811d66  742f                 je 0x811d97
// 00811d68  8b442408             mov eax, dword ptr [esp + 8]
// 00811d6c  3bc5                 cmp eax, ebp
// 00811d6e  7527                 jne 0x811d97
// 00811d70  40                   inc eax
// 00811d71  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 00811d77  89442408             mov dword ptr [esp + 8], eax
// 00811d7b  7c06                 jl 0x811d83
// 00811d7d  33c0                 xor eax, eax
// 00811d7f  89442408             mov dword ptr [esp + 8], eax
// 00811d83  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00811d87  8b16                 mov edx, dword ptr [esi]
// 00811d89  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 00811d8f  6a00                 push 0
// 00811d91  51                   push ecx
// 00811d92  50                   push eax
// 00811d93  8bce                 mov ecx, esi
// 00811d95  ffd2                 call edx
// 00811d97  53                   push ebx
// 00811d98  33db                 xor ebx, ebx
// 00811d9a  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 00811da0  57                   push edi
// 00811da1  0f8e96000000         jle 0x811e3d
// 00811da7  53                   push ebx
// 00811da8  55                   push ebp
// 00811da9  8bce                 mov ecx, esi
// 00811dab  e81867f9ff           call 0x7a84c8
// 00811db0  8bf8                 mov edi, eax
// 00811db2  85ff                 test edi, edi
// 00811db4  0f84b0000000         je 0x811e6a
// 00811dba  6a00                 push 0
// 00811dbc  8bcf                 mov ecx, edi
// 00811dbe  e8c55ef9ff           call 0x7a7c88
// 00811dc3  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 00811dc9  83f8ff               cmp eax, -1
// 00811dcc  7407                 je 0x811dd5
// 00811dce  3bc3                 cmp eax, ebx
// 00811dd0  8d4301               lea eax, [ebx + 1]
// 00811dd3  7e02                 jle 0x811dd7
// 00811dd5  8bc3                 mov eax, ebx
// 00811dd7  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 00811ddd  81c1900e0000         add ecx, 0xe90
// 00811de3  c1e104               shl ecx, 4
// 00811de6  03c8                 add ecx, eax
// 00811de8  51                   push ecx
// 00811de9  8bcf                 mov ecx, edi
// 00811deb  e820b71600           call 0x97d510
// 00811df0  8d7d01               lea edi, [ebp + 1]
// 00811df3  3bbe80000000         cmp edi, dword ptr [esi + 0x80]
// 00811df9  7d35                 jge 0x811e30
// 00811dfb  eb03                 jmp 0x811e00
// 00811dfd  8d4900               lea ecx, [ecx]
// 00811e00  53                   push ebx
// 00811e01  57                   push edi
// 00811e02  8bce                 mov ecx, esi
// 00811e04  e8bf66f9ff           call 0x7a84c8
// 00811e09  8be8                 mov ebp, eax
// 00811e0b  85ed                 test ebp, ebp
// 00811e0d  745b                 je 0x811e6a
// 00811e0f  53                   push ebx
// 00811e10  8d57ff               lea edx, [edi - 1]
// 00811e13  52                   push edx
// 00811e14  8bce                 mov ecx, esi
// 00811e16  e81166f9ff           call 0x7a842c
// 00811e1b  50                   push eax
// 00811e1c  8bcd                 mov ecx, ebp
// 00811e1e  e8edb61600           call 0x97d510
// 00811e23  47                   inc edi
// 00811e24  3bbe80000000         cmp edi, dword ptr [esi + 0x80]
// 00811e2a  7cd4                 jl 0x811e00
// 00811e2c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00811e30  43                   inc ebx
// 00811e31  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 00811e37  0f8c6affffff         jl 0x811da7
// 00811e3d  ff8e80000000         dec dword ptr [esi + 0x80]
// 00811e43  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00811e49  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00811e4f  8d546d00             lea edx, [ebp + ebp*2]
// 00811e53  8b549108             mov edx, dword ptr [ecx + edx*4 + 8]
// 00811e57  8d0440               lea eax, [eax + eax*2]
// 00811e5a  89548108             mov dword ptr [ecx + eax*4 + 8], edx
// 00811e5e  8b06                 mov eax, dword ptr [esi]
// 00811e60  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00811e66  8bce                 mov ecx, esi
// 00811e68  ffd2                 call edx
// 00811e6a  5f                   pop edi
// 00811e6b  5b                   pop ebx
// 00811e6c  5e                   pop esi
// 00811e6d  5d                   pop ebp
// 00811e6e  83c408               add esp, 8
// 00811e71  c20400               ret 4
// copied from an identical function in another client (function ?HideRow@CXTSplitterWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1