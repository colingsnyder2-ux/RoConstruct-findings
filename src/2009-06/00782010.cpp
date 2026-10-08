// roc 2009-06 00782010  unit: CXTPDockingPane  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00782010
//
// 00782010  56                   push esi
// 00782011  57                   push edi
// 00782012  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00782016  8bf1                 mov esi, ecx
// 00782018  85ff                 test edi, edi
// 0078201a  7471                 je 0x78208d
// 0078201c  8b4720               mov eax, dword ptr [edi + 0x20]
// 0078201f  53                   push ebx
// 00782020  8d5e20               lea ebx, [esi + 0x20]
// 00782023  8bcb                 mov ecx, ebx
// 00782025  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0078202b  e8d03c0500           call 0x7d5d00
// 00782030  8bc8                 mov ecx, eax
// 00782032  e859cefdff           call 0x75ee90
// 00782037  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0078203a  85c9                 test ecx, ecx
// 0078203c  7415                 je 0x782053
// 0078203e  8b01                 mov eax, dword ptr [ecx]
// 00782040  8b5020               mov edx, dword ptr [eax + 0x20]
// 00782043  ffd2                 call edx
// 00782045  50                   push eax
// 00782046  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0078204c  50                   push eax
// 0078204d  ff15a0ec8900         call dword ptr [0x89eca0]
// 00782053  8bcb                 mov ecx, ebx
// 00782055  e8a63c0500           call 0x7d5d00
// 0078205a  83b84401000000       cmp dword ptr [eax + 0x144], 0
// 00782061  5b                   pop ebx
// 00782062  7429                 je 0x78208d
// 00782064  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00782067  6a00                 push 0
// 00782069  6a00                 push 0
// 0078206b  6864030000           push 0x364
// 00782070  51                   push ecx
// 00782071  ff1590ee8900         call dword ptr [0x89ee90]
// 00782077  8b5720               mov edx, dword ptr [edi + 0x20]
// 0078207a  6a01                 push 1
// 0078207c  6a01                 push 1
// 0078207e  6a00                 push 0
// 00782080  6a00                 push 0
// 00782082  6864030000           push 0x364
// 00782087  52                   push edx
// 00782088  e8cda10c00           call 0x84c25a
// 0078208d  5f                   pop edi
// 0078208e  5e                   pop esi
// 0078208f  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?Attach@CXTPDockingPane@@QAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
