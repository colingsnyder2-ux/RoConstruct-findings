// roc 2008-06 0073d8e0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 402 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073d8e0
//
// 0073d8e0  51                   push ecx
// 0073d8e1  56                   push esi
// 0073d8e2  57                   push edi
// 0073d8e3  8bf1                 mov esi, ecx
// 0073d8e5  e8f653ffff           call 0x732ce0
// 0073d8ea  e85f35f6ff           call 0x6a0e4e
// 0073d8ef  85c0                 test eax, eax
// 0073d8f1  7428                 je 0x73d91b
// 0073d8f3  8b10                 mov edx, dword ptr [eax]
// 0073d8f5  8bc8                 mov ecx, eax
// 0073d8f7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0073d8fa  ffd0                 call eax
// 0073d8fc  85c0                 test eax, eax
// 0073d8fe  741b                 je 0x73d91b
// 0073d900  e84935f6ff           call 0x6a0e4e
// 0073d905  85c0                 test eax, eax
// 0073d907  7412                 je 0x73d91b
// 0073d909  8b10                 mov edx, dword ptr [eax]
// 0073d90b  8bc8                 mov ecx, eax
// 0073d90d  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0073d910  ffd0                 call eax
// 0073d912  85c0                 test eax, eax
// 0073d914  7405                 je 0x73d91b
// 0073d916  8b7820               mov edi, dword ptr [eax + 0x20]
// 0073d919  eb02                 jmp 0x73d91d
// 0073d91b  33ff                 xor edi, edi
// 0073d91d  53                   push ebx
// 0073d91e  55                   push ebp
// 0073d91f  68bc348600           push 0x8634bc
// 0073d924  8dae6c040000         lea ebp, [esi + 0x46c]
// 0073d92a  57                   push edi
// 0073d92b  8bcd                 mov ecx, ebp
// 0073d92d  e83eacfdff           call 0x718570
// 0073d932  68b0348600           push 0x8634b0
// 0073d937  8d9e60040000         lea ebx, [esi + 0x460]
// 0073d93d  57                   push edi
// 0073d93e  8bcb                 mov ecx, ebx
// 0073d940  e82bacfdff           call 0x718570
// 0073d945  689c348600           push 0x86349c
// 0073d94a  57                   push edi
// 0073d94b  8d8e78040000         lea ecx, [esi + 0x478]
// 0073d951  e81aacfdff           call 0x718570
// 0073d956  680c1f8600           push 0x861f0c
// 0073d95b  57                   push edi
// 0073d95c  8d8e84040000         lea ecx, [esi + 0x484]
// 0073d962  e809acfdff           call 0x718570
// 0073d967  6890348600           push 0x863490
// 0073d96c  57                   push edi
// 0073d96d  8d8e90040000         lea ecx, [esi + 0x490]
// 0073d973  e8f8abfdff           call 0x718570
// 0073d978  6a00                 push 0
// 0073d97a  8dbea4040000         lea edi, [esi + 0x4a4]
// 0073d980  57                   push edi
// 0073d981  6a00                 push 0
// 0073d983  6822100000           push 0x1022
// 0073d988  c70701000000         mov dword ptr [edi], 1
// 0073d98e  ff15902c8000         call dword ptr [0x802c90]
// 0073d994  85c0                 test eax, eax
// 0073d996  7502                 jne 0x73d99a
// 0073d998  8907                 mov dword ptr [edi], eax
// 0073d99a  8bcb                 mov ecx, ebx
// 0073d99c  e88faafdff           call 0x718430
// 0073d9a1  85c0                 test eax, eax
// 0073d9a3  741b                 je 0x73d9c0
// 0073d9a5  8d8e9c040000         lea ecx, [esi + 0x49c]
// 0073d9ab  51                   push ecx
// 0073d9ac  68de0e0000           push 0xede
// 0073d9b1  6a00                 push 0
// 0073d9b3  6a03                 push 3
// 0073d9b5  8bcb                 mov ecx, ebx
// 0073d9b7  e864a8fdff           call 0x718220
// 0073d9bc  85c0                 test eax, eax
// 0073d9be  7d0f                 jge 0x73d9cf
// 0073d9c0  6a10                 push 0x10
// 0073d9c2  8bce                 mov ecx, esi
// 0073d9c4  e8a706f7ff           call 0x6ae070
// 0073d9c9  89869c040000         mov dword ptr [esi + 0x49c], eax
// 0073d9cf  8bcb                 mov ecx, ebx
// 0073d9d1  e85aaafdff           call 0x718430
// 0073d9d6  85c0                 test eax, eax
// 0073d9d8  741b                 je 0x73d9f5
// 0073d9da  8d96a0040000         lea edx, [esi + 0x4a0]
// 0073d9e0  52                   push edx
// 0073d9e1  68dd0e0000           push 0xedd
// 0073d9e6  6a00                 push 0
// 0073d9e8  6a03                 push 3
// 0073d9ea  8bcb                 mov ecx, ebx
// 0073d9ec  e82fa8fdff           call 0x718220
// 0073d9f1  85c0                 test eax, eax
// 0073d9f3  7d0f                 jge 0x73da04
// 0073d9f5  6a14                 push 0x14
// 0073d9f7  8bce                 mov ecx, esi
// 0073d9f9  e87206f7ff           call 0x6ae070
// 0073d9fe  8986a0040000         mov dword ptr [esi + 0x4a0], eax
// 0073da04  8bcd                 mov ecx, ebp
// 0073da06  e825aafdff           call 0x718430
// 0073da0b  85c0                 test eax, eax
// 0073da0d  7423                 je 0x73da32
// 0073da0f  8d442410             lea eax, [esp + 0x10]
// 0073da13  50                   push eax
// 0073da14  68db0e0000           push 0xedb
// 0073da19  6a00                 push 0
// 0073da1b  6a00                 push 0
// 0073da1d  8bcd                 mov ecx, ebp
// 0073da1f  e8fca7fdff           call 0x718220
// 0073da24  85c0                 test eax, eax
// 0073da26  7c0a                 jl 0x73da32
// 0073da28  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073da2c  898e40020000         mov dword ptr [esi + 0x240], ecx
// 0073da32  833f00               cmp dword ptr [edi], 0
// 0073da35  751c                 jne 0x73da53
// 0073da37  8bcb                 mov ecx, ebx
// 0073da39  e8f2a9fdff           call 0x718430
// 0073da3e  85c0                 test eax, eax
// 0073da40  740e                 je 0x73da50
// 0073da42  68e9030000           push 0x3e9
// 0073da47  8bcb                 mov ecx, ebx
// 0073da49  e842a9fdff           call 0x718390
// 0073da4e  8907                 mov dword ptr [edi], eax
// 0073da50  833f00               cmp dword ptr [edi], 0
// 0073da53  5d                   pop ebp
// 0073da54  5b                   pop ebx
// 0073da55  7517                 jne 0x73da6e
// 0073da57  8b8608020000         mov eax, dword ptr [esi + 0x208]
// 0073da5d  83f8ff               cmp eax, -1
// 0073da60  7506                 jne 0x73da68
// 0073da62  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 0073da68  8986c4020000         mov dword ptr [esi + 0x2c4], eax
// 0073da6e  5f                   pop edi
// 0073da6f  5e                   pop esi
// 0073da70  59                   pop ecx
// 0073da71  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPNativeXPTheme.cpp (function ?RefreshMetrics@CXTPNativeXPTheme@XTPPaintThemes@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPNativeXPTheme.cpp
