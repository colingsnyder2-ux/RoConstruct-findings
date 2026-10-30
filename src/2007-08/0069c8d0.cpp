// roc 2007-08 0069c8d0  unit: CXTPPropertyGridView  size: 445 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069c8d0
//
// 0069c8d0  83ec18               sub esp, 0x18
// 0069c8d3  56                   push esi
// 0069c8d4  8bf1                 mov esi, ecx
// 0069c8d6  57                   push edi
// 0069c8d7  8dbee8000000         lea edi, [esi + 0xe8]
// 0069c8dd  85ff                 test edi, edi
// 0069c8df  0f84f6000000         je 0x69c9db
// 0069c8e5  837f2000             cmp dword ptr [edi + 0x20], 0
// 0069c8e9  0f84ec000000         je 0x69c9db
// 0069c8ef  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0069c8f5  50                   push eax
// 0069c8f6  ff15a0ed7700         call dword ptr [0x77eda0]
// 0069c8fc  85c0                 test eax, eax
// 0069c8fe  0f84d7000000         je 0x69c9db
// 0069c904  8b9608010000         mov edx, dword ptr [esi + 0x108]
// 0069c90a  8d4c2410             lea ecx, [esp + 0x10]
// 0069c90e  51                   push ecx
// 0069c90f  52                   push edx
// 0069c910  ff15d4ed7700         call dword ptr [0x77edd4]
// 0069c916  8d442408             lea eax, [esp + 8]
// 0069c91a  50                   push eax
// 0069c91b  ff1554ec7700         call dword ptr [0x77ec54]
// 0069c921  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069c925  8b542408             mov edx, dword ptr [esp + 8]
// 0069c929  51                   push ecx
// 0069c92a  52                   push edx
// 0069c92b  8d86b8000000         lea eax, [esi + 0xb8]
// 0069c931  50                   push eax
// 0069c932  ff1594ed7700         call dword ptr [0x77ed94]
// 0069c938  85c0                 test eax, eax
// 0069c93a  7409                 je 0x69c945
// 0069c93c  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 0069c943  741e                 je 0x69c963
// 0069c945  6854597800           push 0x785954
// 0069c94a  8d8ed8000000         lea ecx, [esi + 0xd8]
// 0069c950  ff156cdd7700         call dword ptr [0x77dd6c]
// 0069c956  6a00                 push 0
// 0069c958  6a00                 push 0
// 0069c95a  6a00                 push 0
// 0069c95c  8bcf                 mov ecx, edi
// 0069c95e  e88de5ffff           call 0x69aef0
// 0069c963  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069c967  3d05020000           cmp eax, 0x205
// 0069c96c  7735                 ja 0x69c9a3
// 0069c96e  3d04020000           cmp eax, 0x204
// 0069c973  7359                 jae 0x69c9ce
// 0069c975  3d04010000           cmp eax, 0x104
// 0069c97a  7711                 ja 0x69c98d
// 0069c97c  7450                 je 0x69c9ce
// 0069c97e  3d00010000           cmp eax, 0x100
// 0069c983  7449                 je 0x69c9ce
// 0069c985  5f                   pop edi
// 0069c986  5e                   pop esi
// 0069c987  83c418               add esp, 0x18
// 0069c98a  c20400               ret 4
// 0069c98d  3d01020000           cmp eax, 0x201
// 0069c992  7247                 jb 0x69c9db
// 0069c994  3d02020000           cmp eax, 0x202
// 0069c999  7633                 jbe 0x69c9ce
// 0069c99b  5f                   pop edi
// 0069c99c  5e                   pop esi
// 0069c99d  83c418               add esp, 0x18
// 0069c9a0  c20400               ret 4
// 0069c9a3  05f9fdffff           add eax, 0xfffffdf9
// 0069c9a8  3d9c000000           cmp eax, 0x9c
// 0069c9ad  772c                 ja 0x69c9db
// 0069c9af  0fb688f0c96900       movzx ecx, byte ptr [eax + 0x69c9f0]
// 0069c9b6  ff248de4c96900       jmp dword ptr [ecx*4 + 0x69c9e4]
// 0069c9bd  6854597800           push 0x785954
// 0069c9c2  8d8ed8000000         lea ecx, [esi + 0xd8]
// 0069c9c8  ff156cdd7700         call dword ptr [0x77dd6c]
// 0069c9ce  6a00                 push 0
// 0069c9d0  6a00                 push 0
// 0069c9d2  6a00                 push 0
// 0069c9d4  8bcf                 mov ecx, edi
// 0069c9d6  e815e5ffff           call 0x69aef0
// 0069c9db  5f                   pop edi
// 0069c9dc  5e                   pop esi
// 0069c9dd  83c418               add esp, 0x18
// 0069c9e0  c20400               ret 4
// 0069c9e3  90                   nop 
// 0069c9e4  ce                   into 
// 0069c9e5  c9                   leave 
// 0069c9e6  6900bdc96900         imul eax, dword ptr [eax], 0x69c9bd
// 0069c9ec  dbc9                 fcmovne st(0), st(1)
// 0069c9ee  690000000201         imul eax, dword ptr [eax], 0x1020000
// 0069c9f4  0202                 add al, byte ptr [edx]
// 0069c9f6  0202                 add al, byte ptr [edx]
// 0069c9f8  0202                 add al, byte ptr [edx]
// 0069c9fa  0202                 add al, byte ptr [edx]
// 0069c9fc  0202                 add al, byte ptr [edx]
// 0069c9fe  0202                 add al, byte ptr [edx]
// 0069ca00  0202                 add al, byte ptr [edx]
// 0069ca02  0202                 add al, byte ptr [edx]
// 0069ca04  0202                 add al, byte ptr [edx]
// 0069ca06  0202                 add al, byte ptr [edx]
// 0069ca08  0202                 add al, byte ptr [edx]
// 0069ca0a  0202                 add al, byte ptr [edx]
// 0069ca0c  0202                 add al, byte ptr [edx]
// 0069ca0e  0202                 add al, byte ptr [edx]
// 0069ca10  0202                 add al, byte ptr [edx]
// 0069ca12  0202                 add al, byte ptr [edx]
// 0069ca14  0202                 add al, byte ptr [edx]
// 0069ca16  0202                 add al, byte ptr [edx]
// 0069ca18  0202                 add al, byte ptr [edx]
// 0069ca1a  0202                 add al, byte ptr [edx]
// 0069ca1c  0202                 add al, byte ptr [edx]
// 0069ca1e  0202                 add al, byte ptr [edx]
// 0069ca20  0202                 add al, byte ptr [edx]
// 0069ca22  0202                 add al, byte ptr [edx]
// 0069ca24  0202                 add al, byte ptr [edx]
// 0069ca26  0202                 add al, byte ptr [edx]
// 0069ca28  0202                 add al, byte ptr [edx]
// 0069ca2a  0202                 add al, byte ptr [edx]
// 0069ca2c  0202                 add al, byte ptr [edx]
// 0069ca2e  0202                 add al, byte ptr [edx]
// 0069ca30  0202                 add al, byte ptr [edx]
// 0069ca32  0202                 add al, byte ptr [edx]
// 0069ca34  0202                 add al, byte ptr [edx]
// 0069ca36  0202                 add al, byte ptr [edx]
// 0069ca38  0202                 add al, byte ptr [edx]
// 0069ca3a  0202                 add al, byte ptr [edx]
// 0069ca3c  0202                 add al, byte ptr [edx]
// 0069ca3e  0202                 add al, byte ptr [edx]
// 0069ca40  0202                 add al, byte ptr [edx]
// 0069ca42  0202                 add al, byte ptr [edx]
// 0069ca44  0202                 add al, byte ptr [edx]
// 0069ca46  0202                 add al, byte ptr [edx]
// 0069ca48  0202                 add al, byte ptr [edx]
// 0069ca4a  0202                 add al, byte ptr [edx]
// 0069ca4c  0202                 add al, byte ptr [edx]
// 0069ca4e  0202                 add al, byte ptr [edx]
// 0069ca50  0202                 add al, byte ptr [edx]
// 0069ca52  0202                 add al, byte ptr [edx]
// 0069ca54  0202                 add al, byte ptr [edx]
// 0069ca56  0202                 add al, byte ptr [edx]
// 0069ca58  0202                 add al, byte ptr [edx]
// 0069ca5a  0202                 add al, byte ptr [edx]
// 0069ca5c  0202                 add al, byte ptr [edx]
// 0069ca5e  0202                 add al, byte ptr [edx]
// 0069ca60  0202                 add al, byte ptr [edx]
// 0069ca62  0202                 add al, byte ptr [edx]
// 0069ca64  0202                 add al, byte ptr [edx]
// 0069ca66  0202                 add al, byte ptr [edx]
// 0069ca68  0202                 add al, byte ptr [edx]
// 0069ca6a  0202                 add al, byte ptr [edx]
// 0069ca6c  0202                 add al, byte ptr [edx]
// 0069ca6e  0202                 add al, byte ptr [edx]
// 0069ca70  0202                 add al, byte ptr [edx]
// 0069ca72  0202                 add al, byte ptr [edx]
// 0069ca74  0202                 add al, byte ptr [edx]
// 0069ca76  0202                 add al, byte ptr [edx]
// 0069ca78  0202                 add al, byte ptr [edx]
// 0069ca7a  0202                 add al, byte ptr [edx]
// 0069ca7c  0202                 add al, byte ptr [edx]
// 0069ca7e  0202                 add al, byte ptr [edx]
// 0069ca80  0202                 add al, byte ptr [edx]
// 0069ca82  0202                 add al, byte ptr [edx]
// 0069ca84  0202                 add al, byte ptr [edx]
// 0069ca86  0202                 add al, byte ptr [edx]
// 0069ca88  0202                 add al, byte ptr [edx]
// 0069ca8a  0202                 add al, byte ptr [edx]
// copied from an identical function in another client (function ?RelayToolTipEvent@CXTPPropertyGridView@@AAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp