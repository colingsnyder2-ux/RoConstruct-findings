// roc 2009-12 00886e70  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00886e70
//
// 00886e70  51                   push ecx
// 00886e71  56                   push esi
// 00886e72  57                   push edi
// 00886e73  8bf1                 mov esi, ecx
// 00886e75  e87654ffff           call 0x87c2f0
// 00886e7a  e897d1f6ff           call 0x7f4016
// 00886e7f  85c0                 test eax, eax
// 00886e81  7428                 je 0x886eab
// 00886e83  8b10                 mov edx, dword ptr [eax]
// 00886e85  8bc8                 mov ecx, eax
// 00886e87  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00886e8a  ffd0                 call eax
// 00886e8c  85c0                 test eax, eax
// 00886e8e  741b                 je 0x886eab
// 00886e90  e881d1f6ff           call 0x7f4016
// 00886e95  85c0                 test eax, eax
// 00886e97  7412                 je 0x886eab
// 00886e99  8b10                 mov edx, dword ptr [eax]
// 00886e9b  8bc8                 mov ecx, eax
// 00886e9d  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00886ea0  ffd0                 call eax
// 00886ea2  85c0                 test eax, eax
// 00886ea4  7405                 je 0x886eab
// 00886ea6  8b7820               mov edi, dword ptr [eax + 0x20]
// 00886ea9  eb02                 jmp 0x886ead
// 00886eab  33ff                 xor edi, edi
// 00886ead  53                   push ebx
// 00886eae  55                   push ebp
// 00886eaf  68e42ba000           push 0xa02be4
// 00886eb4  8dae6c040000         lea ebp, [esi + 0x46c]
// 00886eba  57                   push edi
// 00886ebb  8bcd                 mov ecx, ebp
// 00886ebd  e83e4efeff           call 0x86bd00
// 00886ec2  68d82ba000           push 0xa02bd8
// 00886ec7  8d9e60040000         lea ebx, [esi + 0x460]
// 00886ecd  57                   push edi
// 00886ece  8bcb                 mov ecx, ebx
// 00886ed0  e82b4efeff           call 0x86bd00
// 00886ed5  68c42ba000           push 0xa02bc4
// 00886eda  57                   push edi
// 00886edb  8d8e78040000         lea ecx, [esi + 0x478]
// 00886ee1  e81a4efeff           call 0x86bd00
// 00886ee6  682c16a000           push 0xa0162c
// 00886eeb  57                   push edi
// 00886eec  8d8e84040000         lea ecx, [esi + 0x484]
// 00886ef2  e8094efeff           call 0x86bd00
// 00886ef7  68b82ba000           push 0xa02bb8
// 00886efc  57                   push edi
// 00886efd  8d8e90040000         lea ecx, [esi + 0x490]
// 00886f03  e8f84dfeff           call 0x86bd00
// 00886f08  6a00                 push 0
// 00886f0a  8dbea4040000         lea edi, [esi + 0x4a4]
// 00886f10  57                   push edi
// 00886f11  6a00                 push 0
// 00886f13  6822100000           push 0x1022
// 00886f18  c70701000000         mov dword ptr [edi], 1
// 00886f1e  ff1500cc9800         call dword ptr [0x98cc00]
// 00886f24  85c0                 test eax, eax
// 00886f26  7502                 jne 0x886f2a
// 00886f28  8907                 mov dword ptr [edi], eax
// 00886f2a  8bcb                 mov ecx, ebx
// 00886f2c  e88f4cfeff           call 0x86bbc0
// 00886f31  85c0                 test eax, eax
// 00886f33  741b                 je 0x886f50
// 00886f35  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00886f3b  51                   push ecx
// 00886f3c  68de0e0000           push 0xede
// 00886f41  6a00                 push 0
// 00886f43  6a03                 push 3
// 00886f45  8bcb                 mov ecx, ebx
// 00886f47  e8644afeff           call 0x86b9b0
// 00886f4c  85c0                 test eax, eax
// 00886f4e  7d0f                 jge 0x886f5f
// 00886f50  6a10                 push 0x10
// 00886f52  8bce                 mov ecx, esi
// 00886f54  e8e766f7ff           call 0x7fd640
// 00886f59  89869c040000         mov dword ptr [esi + 0x49c], eax
// 00886f5f  8bcb                 mov ecx, ebx
// 00886f61  e85a4cfeff           call 0x86bbc0
// 00886f66  85c0                 test eax, eax
// 00886f68  741b                 je 0x886f85
// 00886f6a  8d96a0040000         lea edx, [esi + 0x4a0]
// 00886f70  52                   push edx
// 00886f71  68dd0e0000           push 0xedd
// 00886f76  6a00                 push 0
// 00886f78  6a03                 push 3
// 00886f7a  8bcb                 mov ecx, ebx
// 00886f7c  e82f4afeff           call 0x86b9b0
// 00886f81  85c0                 test eax, eax
// 00886f83  7d0f                 jge 0x886f94
// 00886f85  6a14                 push 0x14
// 00886f87  8bce                 mov ecx, esi
// 00886f89  e8b266f7ff           call 0x7fd640
// 00886f8e  8986a0040000         mov dword ptr [esi + 0x4a0], eax
// 00886f94  8bcd                 mov ecx, ebp
// 00886f96  e8254cfeff           call 0x86bbc0
// 00886f9b  85c0                 test eax, eax
// 00886f9d  7423                 je 0x886fc2
// 00886f9f  8d442410             lea eax, [esp + 0x10]
// 00886fa3  50                   push eax
// 00886fa4  68db0e0000           push 0xedb
// 00886fa9  6a00                 push 0
// 00886fab  6a00                 push 0
// 00886fad  8bcd                 mov ecx, ebp
// 00886faf  e8fc49feff           call 0x86b9b0
// 00886fb4  85c0                 test eax, eax
// 00886fb6  7c0a                 jl 0x886fc2
// 00886fb8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00886fbc  898e40020000         mov dword ptr [esi + 0x240], ecx
// 00886fc2  833f00               cmp dword ptr [edi], 0
// 00886fc5  751c                 jne 0x886fe3
// 00886fc7  8bcb                 mov ecx, ebx
// 00886fc9  e8f24bfeff           call 0x86bbc0
// 00886fce  85c0                 test eax, eax
// 00886fd0  740e                 je 0x886fe0
// 00886fd2  68e9030000           push 0x3e9
// 00886fd7  8bcb                 mov ecx, ebx
// 00886fd9  e8424bfeff           call 0x86bb20
// 00886fde  8907                 mov dword ptr [edi], eax
// 00886fe0  833f00               cmp dword ptr [edi], 0
// 00886fe3  5d                   pop ebp
// 00886fe4  5b                   pop ebx
// 00886fe5  7517                 jne 0x886ffe
// 00886fe7  8b8608020000         mov eax, dword ptr [esi + 0x208]
// 00886fed  83f8ff               cmp eax, -1
// 00886ff0  7506                 jne 0x886ff8
// 00886ff2  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 00886ff8  8986c4020000         mov dword ptr [esi + 0x2c4], eax
// 00886ffe  5f                   pop edi
// 00886fff  5e                   pop esi
// 00887000  59                   pop ecx
// 00887001  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPNativeXPTheme@XTPPaintThemes@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp