// from server: 100% by auto
// roc 2008-06 00743e70  unit: CXTPControlEditCtrl  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743e70
//
// 00743e70  53                   push ebx
// 00743e71  56                   push esi
// 00743e72  57                   push edi
// 00743e73  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00743e77  33db                 xor ebx, ebx
// 00743e79  3bfb                 cmp edi, ebx
// 00743e7b  8bf1                 mov esi, ecx
// 00743e7d  7d05                 jge 0x743e84
// 00743e7f  e8c0caf5ff           call 0x6a0944
// 00743e84  8b442414             mov eax, dword ptr [esp + 0x14]
// 00743e88  3bc3                 cmp eax, ebx
// 00743e8a  7c03                 jl 0x743e8f
// 00743e8c  894610               mov dword ptr [esi + 0x10], eax
// 00743e8f  3bfb                 cmp edi, ebx
// 00743e91  751f                 jne 0x743eb2
// 00743e93  8b4604               mov eax, dword ptr [esi + 4]
// 00743e96  3bc3                 cmp eax, ebx
// 00743e98  740c                 je 0x743ea6
// 00743e9a  50                   push eax
// 00743e9b  e8aacaf5ff           call 0x6a094a
// 00743ea0  83c404               add esp, 4
// 00743ea3  895e04               mov dword ptr [esi + 4], ebx
// 00743ea6  5f                   pop edi
// 00743ea7  895e0c               mov dword ptr [esi + 0xc], ebx
// 00743eaa  895e08               mov dword ptr [esi + 8], ebx
// 00743ead  5e                   pop esi
// 00743eae  5b                   pop ebx
// 00743eaf  c20800               ret 8
// 00743eb2  8b4e04               mov ecx, dword ptr [esi + 4]
// 00743eb5  55                   push ebp
// 00743eb6  3bcb                 cmp ecx, ebx
// 00743eb8  7530                 jne 0x743eea
// 00743eba  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00743ebd  3bfd                 cmp edi, ebp
// 00743ebf  7e02                 jle 0x743ec3
// 00743ec1  8bef                 mov ebp, edi
// 00743ec3  8bdd                 mov ebx, ebp
// 00743ec5  c1e304               shl ebx, 4
// 00743ec8  53                   push ebx
// 00743ec9  e888caf5ff           call 0x6a0956
// 00743ece  53                   push ebx
// 00743ecf  6a00                 push 0
// 00743ed1  50                   push eax
// 00743ed2  894604               mov dword ptr [esi + 4], eax
// 00743ed5  e82ad8f5ff           call 0x6a1704
// 00743eda  83c410               add esp, 0x10
// 00743edd  896e0c               mov dword ptr [esi + 0xc], ebp
// 00743ee0  5d                   pop ebp
// 00743ee1  897e08               mov dword ptr [esi + 8], edi
// 00743ee4  5f                   pop edi
// 00743ee5  5e                   pop esi
// 00743ee6  5b                   pop ebx
// 00743ee7  c20800               ret 8
// 00743eea  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00743eed  3bfd                 cmp edi, ebp
// 00743eef  7f2c                 jg 0x743f1d
// 00743ef1  8b4608               mov eax, dword ptr [esi + 8]
// 00743ef4  3bf8                 cmp edi, eax
// 00743ef6  0f8eb3000000         jle 0x743faf
// 00743efc  8bd7                 mov edx, edi
// 00743efe  2bd0                 sub edx, eax
// 00743f00  c1e204               shl edx, 4
// 00743f03  52                   push edx
// 00743f04  c1e004               shl eax, 4
// 00743f07  03c1                 add eax, ecx
// 00743f09  53                   push ebx
// 00743f0a  50                   push eax
// 00743f0b  e8f4d7f5ff           call 0x6a1704
// 00743f10  83c40c               add esp, 0xc
// 00743f13  5d                   pop ebp
// 00743f14  897e08               mov dword ptr [esi + 8], edi
// 00743f17  5f                   pop edi
// 00743f18  5e                   pop esi
// 00743f19  5b                   pop ebx
// 00743f1a  c20800               ret 8
// 00743f1d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00743f20  3bc3                 cmp eax, ebx
// 00743f22  7524                 jne 0x743f48
// 00743f24  8b4608               mov eax, dword ptr [esi + 8]
// 00743f27  99                   cdq 
// 00743f28  83e207               and edx, 7
// 00743f2b  03c2                 add eax, edx
// 00743f2d  c1f803               sar eax, 3
// 00743f30  83f804               cmp eax, 4
// 00743f33  7d07                 jge 0x743f3c
// 00743f35  b804000000           mov eax, 4
// 00743f3a  eb0c                 jmp 0x743f48
// 00743f3c  3d00040000           cmp eax, 0x400
// 00743f41  7e05                 jle 0x743f48
// 00743f43  b800040000           mov eax, 0x400
// 00743f48  8d1c28               lea ebx, [eax + ebp]
// 00743f4b  3bfb                 cmp edi, ebx
// 00743f4d  7d06                 jge 0x743f55
// 00743f4f  895c2414             mov dword ptr [esp + 0x14], ebx
// 00743f53  eb06                 jmp 0x743f5b
// 00743f55  897c2414             mov dword ptr [esp + 0x14], edi
// 00743f59  8bdf                 mov ebx, edi
// 00743f5b  3bdd                 cmp ebx, ebp
// 00743f5d  7d05                 jge 0x743f64
// 00743f5f  e8e0c9f5ff           call 0x6a0944
// 00743f64  c1e304               shl ebx, 4
// 00743f67  53                   push ebx
// 00743f68  e8e9c9f5ff           call 0x6a0956
// 00743f6d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00743f70  8be8                 mov ebp, eax
// 00743f72  8b4608               mov eax, dword ptr [esi + 8]
// 00743f75  c1e004               shl eax, 4
// 00743f78  50                   push eax
// 00743f79  51                   push ecx
// 00743f7a  53                   push ebx
// 00743f7b  55                   push ebp
// 00743f7c  e88fd8cbff           call 0x401810
// 00743f81  8b4608               mov eax, dword ptr [esi + 8]
// 00743f84  8bd7                 mov edx, edi
// 00743f86  2bd0                 sub edx, eax
// 00743f88  c1e204               shl edx, 4
// 00743f8b  52                   push edx
// 00743f8c  c1e004               shl eax, 4
// 00743f8f  03c5                 add eax, ebp
// 00743f91  6a00                 push 0
// 00743f93  50                   push eax
// 00743f94  e86bd7f5ff           call 0x6a1704
// 00743f99  8b4604               mov eax, dword ptr [esi + 4]
// 00743f9c  50                   push eax
// 00743f9d  e8a8c9f5ff           call 0x6a094a
// 00743fa2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00743fa6  83c424               add esp, 0x24
// 00743fa9  896e04               mov dword ptr [esi + 4], ebp
// 00743fac  894e0c               mov dword ptr [esi + 0xc], ecx
// 00743faf  5d                   pop ebp
// 00743fb0  897e08               mov dword ptr [esi + 8], edi
// 00743fb3  5f                   pop edi
// 00743fb4  5e                   pop esi
// 00743fb5  5b                   pop ebx
// 00743fb6  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetSize@?$CArray@UtagRECT@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBarAnimation.cpp
