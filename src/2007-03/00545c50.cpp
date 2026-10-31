// roc 2007-03 00545c50  unit: seg_00540000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00545c50
//
// 00545c50  53                   push ebx
// 00545c51  56                   push esi
// 00545c52  8b742410             mov esi, dword ptr [esp + 0x10]
// 00545c56  85f6                 test esi, esi
// 00545c58  8bd9                 mov ebx, ecx
// 00545c5a  750a                 jne 0x545c66
// 00545c5c  e8dff2ffff           call 0x544f40
// 00545c61  5e                   pop esi
// 00545c62  5b                   pop ebx
// 00545c63  c20800               ret 8
// 00545c66  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00545c6a  85c9                 test ecx, ecx
// 00545c6c  750a                 jne 0x545c78
// 00545c6e  6857000780           push 0x80070057
// 00545c73  e888b3ebff           call 0x401000
// 00545c78  8b03                 mov eax, dword ptr [ebx]
// 00545c7a  55                   push ebp
// 00545c7b  8b68f4               mov ebp, dword ptr [eax - 0xc]
// 00545c7e  57                   push edi
// 00545c7f  8bf9                 mov edi, ecx
// 00545c81  2bf8                 sub edi, eax
// 00545c83  ba01000000           mov edx, 1
// 00545c88  2b50fc               sub edx, dword ptr [eax - 4]
// 00545c8b  8b40f8               mov eax, dword ptr [eax - 8]
// 00545c8e  2bc6                 sub eax, esi
// 00545c90  0bd0                 or edx, eax
// 00545c92  7d0c                 jge 0x545ca0
// 00545c94  56                   push esi
// 00545c95  8bcb                 mov ecx, ebx
// 00545c97  e8a4e3ecff           call 0x414040
// 00545c9c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00545ca0  3bfd                 cmp edi, ebp
// 00545ca2  8b03                 mov eax, dword ptr [ebx]
// 00545ca4  56                   push esi
// 00545ca5  770e                 ja 0x545cb5
// 00545ca7  8d0c38               lea ecx, [eax + edi]
// 00545caa  51                   push ecx
// 00545cab  56                   push esi
// 00545cac  50                   push eax
// 00545cad  ff1578e97700         call dword ptr [0x77e978]
// 00545cb3  eb09                 jmp 0x545cbe
// 00545cb5  51                   push ecx
// 00545cb6  56                   push esi
// 00545cb7  50                   push eax
// 00545cb8  ff1540e97700         call dword ptr [0x77e940]
// 00545cbe  83c410               add esp, 0x10
// 00545cc1  85f6                 test esi, esi
// 00545cc3  5f                   pop edi
// 00545cc4  5d                   pop ebp
// 00545cc5  7ca7                 jl 0x545c6e
// 00545cc7  8b03                 mov eax, dword ptr [ebx]
// 00545cc9  3b70f8               cmp esi, dword ptr [eax - 8]
// 00545ccc  7fa0                 jg 0x545c6e
// 00545cce  8970f4               mov dword ptr [eax - 0xc], esi
// 00545cd1  8b13                 mov edx, dword ptr [ebx]
// 00545cd3  c6041600             mov byte ptr [esi + edx], 0
// 00545cd7  5e                   pop esi
// 00545cd8  5b                   pop ebx
// 00545cd9  c20800               ret 8
// copied from an identical function in another client (function ?SetString@?$CSimpleStringT@D$0A@@ATL@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp