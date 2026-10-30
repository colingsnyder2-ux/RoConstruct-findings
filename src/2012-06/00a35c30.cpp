// from server: 100% by auto
// roc 2012-06 00a35c30  unit: CXTPDockingPaneWindowSelect  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a35c30
//
// 00a35c30  55                   push ebp
// 00a35c31  56                   push esi
// 00a35c32  57                   push edi
// 00a35c33  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a35c37  33ed                 xor ebp, ebp
// 00a35c39  3bfd                 cmp edi, ebp
// 00a35c3b  8bf1                 mov esi, ecx
// 00a35c3d  7d05                 jge 0xa35c44
// 00a35c3f  e87cc7f4ff           call 0x9823c0
// 00a35c44  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a35c48  3bc5                 cmp eax, ebp
// 00a35c4a  7c03                 jl 0xa35c4f
// 00a35c4c  894610               mov dword ptr [esi + 0x10], eax
// 00a35c4f  3bfd                 cmp edi, ebp
// 00a35c51  751f                 jne 0xa35c72
// 00a35c53  8b4604               mov eax, dword ptr [esi + 4]
// 00a35c56  3bc5                 cmp eax, ebp
// 00a35c58  740c                 je 0xa35c66
// 00a35c5a  50                   push eax
// 00a35c5b  e85ac7f4ff           call 0x9823ba
// 00a35c60  83c404               add esp, 4
// 00a35c63  896e04               mov dword ptr [esi + 4], ebp
// 00a35c66  5f                   pop edi
// 00a35c67  896e0c               mov dword ptr [esi + 0xc], ebp
// 00a35c6a  896e08               mov dword ptr [esi + 8], ebp
// 00a35c6d  5e                   pop esi
// 00a35c6e  5d                   pop ebp
// 00a35c6f  c20800               ret 8
// 00a35c72  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a35c75  53                   push ebx
// 00a35c76  3bcd                 cmp ecx, ebp
// 00a35c78  7532                 jne 0xa35cac
// 00a35c7a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00a35c7d  3bfd                 cmp edi, ebp
// 00a35c7f  7e02                 jle 0xa35c83
// 00a35c81  8bef                 mov ebp, edi
// 00a35c83  8d1ced00000000       lea ebx, [ebp*8]
// 00a35c8a  53                   push ebx
// 00a35c8b  e860c7f4ff           call 0x9823f0
// 00a35c90  53                   push ebx
// 00a35c91  6a00                 push 0
// 00a35c93  50                   push eax
// 00a35c94  894604               mov dword ptr [esi + 4], eax
// 00a35c97  e8d8d6f4ff           call 0x983374
// 00a35c9c  83c410               add esp, 0x10
// 00a35c9f  5b                   pop ebx
// 00a35ca0  897e08               mov dword ptr [esi + 8], edi
// 00a35ca3  5f                   pop edi
// 00a35ca4  896e0c               mov dword ptr [esi + 0xc], ebp
// 00a35ca7  5e                   pop esi
// 00a35ca8  5d                   pop ebp
// 00a35ca9  c20800               ret 8
// 00a35cac  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00a35caf  3bfb                 cmp edi, ebx
// 00a35cb1  7f2d                 jg 0xa35ce0
// 00a35cb3  8b4608               mov eax, dword ptr [esi + 8]
// 00a35cb6  3bf8                 cmp edi, eax
// 00a35cb8  0f8ebb000000         jle 0xa35d79
// 00a35cbe  8bd7                 mov edx, edi
// 00a35cc0  2bd0                 sub edx, eax
// 00a35cc2  03d2                 add edx, edx
// 00a35cc4  03d2                 add edx, edx
// 00a35cc6  03d2                 add edx, edx
// 00a35cc8  52                   push edx
// 00a35cc9  8d04c1               lea eax, [ecx + eax*8]
// 00a35ccc  55                   push ebp
// 00a35ccd  50                   push eax
// 00a35cce  e8a1d6f4ff           call 0x983374
// 00a35cd3  83c40c               add esp, 0xc
// 00a35cd6  5b                   pop ebx
// 00a35cd7  897e08               mov dword ptr [esi + 8], edi
// 00a35cda  5f                   pop edi
// 00a35cdb  5e                   pop esi
// 00a35cdc  5d                   pop ebp
// 00a35cdd  c20800               ret 8
// 00a35ce0  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a35ce3  3bc5                 cmp eax, ebp
// 00a35ce5  7524                 jne 0xa35d0b
// 00a35ce7  8b4608               mov eax, dword ptr [esi + 8]
// 00a35cea  99                   cdq 
// 00a35ceb  83e207               and edx, 7
// 00a35cee  03c2                 add eax, edx
// 00a35cf0  c1f803               sar eax, 3
// 00a35cf3  83f804               cmp eax, 4
// 00a35cf6  7d07                 jge 0xa35cff
// 00a35cf8  b804000000           mov eax, 4
// 00a35cfd  eb0c                 jmp 0xa35d0b
// 00a35cff  3d00040000           cmp eax, 0x400
// 00a35d04  7e05                 jle 0xa35d0b
// 00a35d06  b800040000           mov eax, 0x400
// 00a35d0b  03c3                 add eax, ebx
// 00a35d0d  3bf8                 cmp edi, eax
// 00a35d0f  7d06                 jge 0xa35d17
// 00a35d11  89442414             mov dword ptr [esp + 0x14], eax
// 00a35d15  eb06                 jmp 0xa35d1d
// 00a35d17  897c2414             mov dword ptr [esp + 0x14], edi
// 00a35d1b  8bc7                 mov eax, edi
// 00a35d1d  3bc3                 cmp eax, ebx
// 00a35d1f  7d05                 jge 0xa35d26
// 00a35d21  e89ac6f4ff           call 0x9823c0
// 00a35d26  8d2cc500000000       lea ebp, [eax*8]
// 00a35d2d  55                   push ebp
// 00a35d2e  e8bdc6f4ff           call 0x9823f0
// 00a35d33  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a35d36  8b5604               mov edx, dword ptr [esi + 4]
// 00a35d39  03c9                 add ecx, ecx
// 00a35d3b  03c9                 add ecx, ecx
// 00a35d3d  03c9                 add ecx, ecx
// 00a35d3f  51                   push ecx
// 00a35d40  52                   push edx
// 00a35d41  8bd8                 mov ebx, eax
// 00a35d43  55                   push ebp
// 00a35d44  53                   push ebx
// 00a35d45  e886e49cff           call 0x4041d0
// 00a35d4a  8b4608               mov eax, dword ptr [esi + 8]
// 00a35d4d  8bcf                 mov ecx, edi
// 00a35d4f  2bc8                 sub ecx, eax
// 00a35d51  03c9                 add ecx, ecx
// 00a35d53  03c9                 add ecx, ecx
// 00a35d55  03c9                 add ecx, ecx
// 00a35d57  51                   push ecx
// 00a35d58  8d14c3               lea edx, [ebx + eax*8]
// 00a35d5b  6a00                 push 0
// 00a35d5d  52                   push edx
// 00a35d5e  e811d6f4ff           call 0x983374
// 00a35d63  8b4604               mov eax, dword ptr [esi + 4]
// 00a35d66  50                   push eax
// 00a35d67  e84ec6f4ff           call 0x9823ba
// 00a35d6c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a35d70  83c424               add esp, 0x24
// 00a35d73  895e04               mov dword ptr [esi + 4], ebx
// 00a35d76  894e0c               mov dword ptr [esi + 0xc], ecx
// 00a35d79  5b                   pop ebx
// 00a35d7a  897e08               mov dword ptr [esi + 8], edi
// 00a35d7d  5f                   pop edi
// 00a35d7e  5e                   pop esi
// 00a35d7f  5d                   pop ebp
// 00a35d80  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarMsgNotifier.cpp (function ?SetSize@?$CArray@UCLIENT_INFO@CXTPCalendarMsgNotifier@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMsgNotifier.cpp
