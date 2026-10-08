// from server: 100% by auto
// roc 2007-08 006ecf40  unit: CXTPDockingPaneContext  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ecf40
//
// 006ecf40  83ec14               sub esp, 0x14
// 006ecf43  53                   push ebx
// 006ecf44  55                   push ebp
// 006ecf45  56                   push esi
// 006ecf46  57                   push edi
// 006ecf47  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006ecf4b  8d442414             lea eax, [esp + 0x14]
// 006ecf4f  8bf1                 mov esi, ecx
// 006ecf51  57                   push edi
// 006ecf52  50                   push eax
// 006ecf53  89742418             mov dword ptr [esp + 0x18], esi
// 006ecf57  e85452f8ff           call 0x6721b0
// 006ecf5c  8bc8                 mov ecx, eax
// 006ecf5e  e8ad4df8ff           call 0x671d10
// 006ecf63  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 006ecf69  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 006ecf6f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ecf73  2b4f04               sub ecx, dword ptr [edi + 4]
// 006ecf76  8b2dd8ed7700         mov ebp, dword ptr [0x77edd8]
// 006ecf7c  8bc1                 mov eax, ecx
// 006ecf7e  99                   cdq 
// 006ecf7f  33c2                 xor eax, edx
// 006ecf81  2bc2                 sub eax, edx
// 006ecf83  3bc6                 cmp eax, esi
// 006ecf85  7d06                 jge 0x6ecf8d
// 006ecf87  51                   push ecx
// 006ecf88  6a00                 push 0
// 006ecf8a  57                   push edi
// 006ecf8b  ffd5                 call ebp
// 006ecf8d  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 006ecf90  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006ecf94  8bc3                 mov eax, ebx
// 006ecf96  2bc1                 sub eax, ecx
// 006ecf98  99                   cdq 
// 006ecf99  33c2                 xor eax, edx
// 006ecf9b  2bc2                 sub eax, edx
// 006ecf9d  3bc6                 cmp eax, esi
// 006ecf9f  7d08                 jge 0x6ecfa9
// 006ecfa1  2bcb                 sub ecx, ebx
// 006ecfa3  51                   push ecx
// 006ecfa4  6a00                 push 0
// 006ecfa6  57                   push edi
// 006ecfa7  ffd5                 call ebp
// 006ecfa9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ecfad  2b4f08               sub ecx, dword ptr [edi + 8]
// 006ecfb0  8bc1                 mov eax, ecx
// 006ecfb2  99                   cdq 
// 006ecfb3  33c2                 xor eax, edx
// 006ecfb5  2bc2                 sub eax, edx
// 006ecfb7  3bc6                 cmp eax, esi
// 006ecfb9  7d06                 jge 0x6ecfc1
// 006ecfbb  6a00                 push 0
// 006ecfbd  51                   push ecx
// 006ecfbe  57                   push edi
// 006ecfbf  ffd5                 call ebp
// 006ecfc1  8b1f                 mov ebx, dword ptr [edi]
// 006ecfc3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ecfc7  8bc3                 mov eax, ebx
// 006ecfc9  2bc1                 sub eax, ecx
// 006ecfcb  99                   cdq 
// 006ecfcc  33c2                 xor eax, edx
// 006ecfce  2bc2                 sub eax, edx
// 006ecfd0  3bc6                 cmp eax, esi
// 006ecfd2  7d08                 jge 0x6ecfdc
// 006ecfd4  6a00                 push 0
// 006ecfd6  2bcb                 sub ecx, ebx
// 006ecfd8  51                   push ecx
// 006ecfd9  57                   push edi
// 006ecfda  ffd5                 call ebp
// 006ecfdc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006ecfe0  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 006ecfe6  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 006ecfec  e821b40400           call 0x738412
// 006ecff1  a900000021           test eax, 0x21000000
// 006ecff6  7515                 jne 0x6ed00d
// 006ecff8  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 006ecffe  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 006ed004  51                   push ecx
// 006ed005  57                   push edi
// 006ed006  8bcd                 mov ecx, ebp
// 006ed008  e8c3fdffff           call 0x6ecdd0
// 006ed00d  8b8d1c010000         mov ecx, dword ptr [ebp + 0x11c]
// 006ed013  e83811f8ff           call 0x66e150
// 006ed018  8b5804               mov ebx, dword ptr [eax + 4]
// 006ed01b  85db                 test ebx, ebx
// 006ed01d  7448                 je 0x6ed067
// 006ed01f  90                   nop 
// 006ed020  8bc3                 mov eax, ebx
// 006ed022  8b4008               mov eax, dword ptr [eax + 8]
// 006ed025  83781803             cmp dword ptr [eax + 0x18], 3
// 006ed029  8b1b                 mov ebx, dword ptr [ebx]
// 006ed02b  7536                 jne 0x6ed063
// 006ed02d  8db01cffffff         lea esi, [eax - 0xe4]
// 006ed033  85f6                 test esi, esi
// 006ed035  742c                 je 0x6ed063
// 006ed037  8b4620               mov eax, dword ptr [esi + 0x20]
// 006ed03a  85c0                 test eax, eax
// 006ed03c  7425                 je 0x6ed063
// 006ed03e  50                   push eax
// 006ed03f  ff15a0ed7700         call dword ptr [0x77eda0]
// 006ed045  85c0                 test eax, eax
// 006ed047  741a                 je 0x6ed063
// 006ed049  8b8d20010000         mov ecx, dword ptr [ebp + 0x120]
// 006ed04f  8b11                 mov edx, dword ptr [ecx]
// 006ed051  8b4218               mov eax, dword ptr [edx + 0x18]
// 006ed054  ffd0                 call eax
// 006ed056  3bc6                 cmp eax, esi
// 006ed058  7409                 je 0x6ed063
// 006ed05a  56                   push esi
// 006ed05b  57                   push edi
// 006ed05c  8bcd                 mov ecx, ebp
// 006ed05e  e86dfdffff           call 0x6ecdd0
// 006ed063  85db                 test ebx, ebx
// 006ed065  75b9                 jne 0x6ed020
// 006ed067  5f                   pop edi
// 006ed068  5e                   pop esi
// 006ed069  5d                   pop ebp
// 006ed06a  5b                   pop ebx
// 006ed06b  83c414               add esp, 0x14
// 006ed06e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
