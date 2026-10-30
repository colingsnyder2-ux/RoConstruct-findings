// roc 2009-12 008cf130  unit: CXTPTabManagerItem  size: 386 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cf130
//
// 008cf130  6aff                 push -1
// 008cf132  68154f9600           push 0x964f15
// 008cf137  64a100000000         mov eax, dword ptr fs:[0]
// 008cf13d  50                   push eax
// 008cf13e  83ec08               sub esp, 8
// 008cf141  53                   push ebx
// 008cf142  55                   push ebp
// 008cf143  56                   push esi
// 008cf144  57                   push edi
// 008cf145  a10052b600           mov eax, dword ptr [0xb65200]
// 008cf14a  33c4                 xor eax, esp
// 008cf14c  50                   push eax
// 008cf14d  8d44241c             lea eax, [esp + 0x1c]
// 008cf151  64a300000000         mov dword ptr fs:[0], eax
// 008cf157  8bf1                 mov esi, ecx
// 008cf159  89742414             mov dword ptr [esp + 0x14], esi
// 008cf15d  33db                 xor ebx, ebx
// 008cf15f  8d4e54               lea ecx, [esi + 0x54]
// 008cf162  895c2424             mov dword ptr [esp + 0x24], ebx
// 008cf166  c706c4a7a000         mov dword ptr [esi], 0xa0a7c4
// 008cf16c  e83f7bf8ff           call 0x856cb0
// 008cf171  8d7e68               lea edi, [esi + 0x68]
// 008cf174  8bcf                 mov ecx, edi
// 008cf176  e865fdffff           call 0x8ceee0
// 008cf17b  bd01000000           mov ebp, 1
// 008cf180  55                   push ebp
// 008cf181  8d4e7c               lea ecx, [esi + 0x7c]
// 008cf184  c644242802           mov byte ptr [esp + 0x28], 2
// 008cf189  e8b2c5f9ff           call 0x86b740
// 008cf18e  8d4624               lea eax, [esi + 0x24]
// 008cf191  896e18               mov dword ptr [esi + 0x18], ebp
// 008cf194  896e1c               mov dword ptr [esi + 0x1c], ebp
// 008cf197  8b2d9cca9800         mov ebp, dword ptr [0x98ca9c]
// 008cf19d  50                   push eax
// 008cf19e  c644242803           mov byte ptr [esp + 0x28], 3
// 008cf1a3  895e04               mov dword ptr [esi + 4], ebx
// 008cf1a6  895e08               mov dword ptr [esi + 8], ebx
// 008cf1a9  895e0c               mov dword ptr [esi + 0xc], ebx
// 008cf1ac  895e14               mov dword ptr [esi + 0x14], ebx
// 008cf1af  c7868c00000014000000 mov dword ptr [esi + 0x8c], 0x14
// 008cf1b9  ffd5                 call ebp
// 008cf1bb  8d4e34               lea ecx, [esi + 0x34]
// 008cf1be  51                   push ecx
// 008cf1bf  ffd5                 call ebp
// 008cf1c1  8d5644               lea edx, [esi + 0x44]
// 008cf1c4  52                   push edx
// 008cf1c5  ffd5                 call ebp
// 008cf1c7  6a0c                 push 0xc
// 008cf1c9  895e20               mov dword ptr [esi + 0x20], ebx
// 008cf1cc  895e10               mov dword ptr [esi + 0x10], ebx
// 008cf1cf  e88c46f2ff           call 0x7f3860
// 008cf1d4  83c404               add esp, 4
// 008cf1d7  89442418             mov dword ptr [esp + 0x18], eax
// 008cf1db  c644242404           mov byte ptr [esp + 0x24], 4
// 008cf1e0  3bc3                 cmp eax, ebx
// 008cf1e2  740a                 je 0x8cf1ee
// 008cf1e4  56                   push esi
// 008cf1e5  8bc8                 mov ecx, eax
// 008cf1e7  e814ffffff           call 0x8cf100
// 008cf1ec  eb02                 jmp 0x8cf1f0
// 008cf1ee  33c0                 xor eax, eax
// 008cf1f0  6a30                 push 0x30
// 008cf1f2  c644242803           mov byte ptr [esp + 0x28], 3
// 008cf1f7  898688000000         mov dword ptr [esi + 0x88], eax
// 008cf1fd  e85e46f2ff           call 0x7f3860
// 008cf202  83c404               add esp, 4
// 008cf205  89442418             mov dword ptr [esp + 0x18], eax
// 008cf209  c644242405           mov byte ptr [esp + 0x24], 5
// 008cf20e  3bc3                 cmp eax, ebx
// 008cf210  740c                 je 0x8cf21e
// 008cf212  6a01                 push 1
// 008cf214  56                   push esi
// 008cf215  8bc8                 mov ecx, eax
// 008cf217  e864f8ffff           call 0x8cea80
// 008cf21c  eb02                 jmp 0x8cf220
// 008cf21e  33c0                 xor eax, eax
// 008cf220  8b4f08               mov ecx, dword ptr [edi + 8]
// 008cf223  50                   push eax
// 008cf224  51                   push ecx
// 008cf225  8bcf                 mov ecx, edi
// 008cf227  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008cf22c  e83fbaf9ff           call 0x86ac70
// 008cf231  6a30                 push 0x30
// 008cf233  e82846f2ff           call 0x7f3860
// 008cf238  83c404               add esp, 4
// 008cf23b  89442418             mov dword ptr [esp + 0x18], eax
// 008cf23f  c644242406           mov byte ptr [esp + 0x24], 6
// 008cf244  3bc3                 cmp eax, ebx
// 008cf246  740c                 je 0x8cf254
// 008cf248  6a01                 push 1
// 008cf24a  56                   push esi
// 008cf24b  8bc8                 mov ecx, eax
// 008cf24d  e8aef8ffff           call 0x8ceb00
// 008cf252  eb02                 jmp 0x8cf256
// 008cf254  33c0                 xor eax, eax
// 008cf256  8b4f08               mov ecx, dword ptr [edi + 8]
// 008cf259  50                   push eax
// 008cf25a  51                   push ecx
// 008cf25b  8bcf                 mov ecx, edi
// 008cf25d  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008cf262  e809baf9ff           call 0x86ac70
// 008cf267  6a30                 push 0x30
// 008cf269  e8f245f2ff           call 0x7f3860
// 008cf26e  83c404               add esp, 4
// 008cf271  89442418             mov dword ptr [esp + 0x18], eax
// 008cf275  c644242407           mov byte ptr [esp + 0x24], 7
// 008cf27a  3bc3                 cmp eax, ebx
// 008cf27c  740b                 je 0x8cf289
// 008cf27e  53                   push ebx
// 008cf27f  56                   push esi
// 008cf280  8bc8                 mov ecx, eax
// 008cf282  e8f9f8ffff           call 0x8ceb80
// 008cf287  eb02                 jmp 0x8cf28b
// 008cf289  33c0                 xor eax, eax
// 008cf28b  50                   push eax
// 008cf28c  8b4708               mov eax, dword ptr [edi + 8]
// 008cf28f  50                   push eax
// 008cf290  8bcf                 mov ecx, edi
// 008cf292  c644242c03           mov byte ptr [esp + 0x2c], 3
// 008cf297  e8d4b9f9ff           call 0x86ac70
// 008cf29c  8bc6                 mov eax, esi
// 008cf29e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008cf2a2  64890d00000000       mov dword ptr fs:[0], ecx
// 008cf2a9  59                   pop ecx
// 008cf2aa  5f                   pop edi
// 008cf2ab  5e                   pop esi
// 008cf2ac  5d                   pop ebp
// 008cf2ad  5b                   pop ebx
// 008cf2ae  83c414               add esp, 0x14
// 008cf2b1  c3                   ret 
// copied from an identical function in another client (function ??0CXTPTabManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp