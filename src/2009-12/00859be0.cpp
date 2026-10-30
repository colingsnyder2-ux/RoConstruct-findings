// roc 2009-12 00859be0  unit: CXTPTabClientWnd  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00859be0
//
// 00859be0  51                   push ecx
// 00859be1  56                   push esi
// 00859be2  57                   push edi
// 00859be3  8bf1                 mov esi, ecx
// 00859be5  33ff                 xor edi, edi
// 00859be7  39be94000000         cmp dword ptr [esi + 0x94], edi
// 00859bed  0f84c1010000         je 0x859db4
// 00859bf3  8b06                 mov eax, dword ptr [esi]
// 00859bf5  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00859bfb  ffd2                 call edx
// 00859bfd  3bc7                 cmp eax, edi
// 00859bff  0f84af010000         je 0x859db4
// 00859c05  53                   push ebx
// 00859c06  8bc8                 mov ecx, eax
// 00859c08  e8d3aafbff           call 0x8146e0
// 00859c0d  8b10                 mov edx, dword ptr [eax]
// 00859c0f  8bc8                 mov ecx, eax
// 00859c11  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 00859c17  ffd0                 call eax
// 00859c19  8bd8                 mov ebx, eax
// 00859c1b  895c240c             mov dword ptr [esp + 0xc], ebx
// 00859c1f  399e90000000         cmp dword ptr [esi + 0x90], ebx
// 00859c25  0f8488010000         je 0x859db3
// 00859c2b  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859c31  89793c               mov dword ptr [ecx + 0x3c], edi
// 00859c34  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00859c3a  897a38               mov dword ptr [edx + 0x38], edi
// 00859c3d  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00859c43  55                   push ebp
// 00859c44  8b2d38ca9800         mov ebp, dword ptr [0x98ca38]
// 00859c4a  57                   push edi
// 00859c4b  897834               mov dword ptr [eax + 0x34], edi
// 00859c4e  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859c54  57                   push edi
// 00859c55  897920               mov dword ptr [ecx + 0x20], edi
// 00859c58  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00859c5e  57                   push edi
// 00859c5f  57                   push edi
// 00859c60  83c260               add edx, 0x60
// 00859c63  52                   push edx
// 00859c64  ffd5                 call ebp
// 00859c66  8d43ff               lea eax, [ebx - 1]
// 00859c69  8d5f01               lea ebx, [edi + 1]
// 00859c6c  83f805               cmp eax, 5
// 00859c6f  0f871f010000         ja 0x859d94
// 00859c75  ff2485b89d8500       jmp dword ptr [eax*4 + 0x859db8]
// 00859c7c  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859c82  6a05                 push 5
// 00859c84  e8c7960700           call 0x8d3350
// 00859c89  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00859c8f  89583c               mov dword ptr [eax + 0x3c], ebx
// 00859c92  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859c98  895938               mov dword ptr [ecx + 0x38], ebx
// 00859c9b  e900010000           jmp 0x859da0
// 00859ca0  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00859ca6  897a30               mov dword ptr [edx + 0x30], edi
// 00859ca9  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00859caf  895834               mov dword ptr [eax + 0x34], ebx
// 00859cb2  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859cb8  895920               mov dword ptr [ecx + 0x20], ebx
// 00859cbb  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859cc1  6a03                 push 3
// 00859cc3  e888960700           call 0x8d3350
// 00859cc8  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859cce  6a20                 push 0x20
// 00859cd0  e88b7a0700           call 0x8d1760
// 00859cd5  e9c6000000           jmp 0x859da0
// 00859cda  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00859ce0  897a30               mov dword ptr [edx + 0x30], edi
// 00859ce3  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00859ce9  897834               mov dword ptr [eax + 0x34], edi
// 00859cec  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859cf2  895920               mov dword ptr [ecx + 0x20], ebx
// 00859cf5  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859cfb  6a0a                 push 0xa
// 00859cfd  e84e960700           call 0x8d3350
// 00859d02  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00859d08  53                   push ebx
// 00859d09  6a03                 push 3
// 00859d0b  6a02                 push 2
// 00859d0d  6a03                 push 3
// 00859d0f  83c260               add edx, 0x60
// 00859d12  52                   push edx
// 00859d13  ffd5                 call ebp
// 00859d15  e986000000           jmp 0x859da0
// 00859d1a  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00859d20  897830               mov dword ptr [eax + 0x30], edi
// 00859d23  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859d29  895934               mov dword ptr [ecx + 0x34], ebx
// 00859d2c  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00859d32  895a20               mov dword ptr [edx + 0x20], ebx
// 00859d35  6a03                 push 3
// 00859d37  eb5c                 jmp 0x859d95
// 00859d39  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859d3f  57                   push edi
// 00859d40  e80b960700           call 0x8d3350
// 00859d45  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859d4b  6a08                 push 8
// 00859d4d  e80e7a0700           call 0x8d1760
// 00859d52  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00859d58  895820               mov dword ptr [eax + 0x20], ebx
// 00859d5b  eb43                 jmp 0x859da0
// 00859d5d  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859d63  89593c               mov dword ptr [ecx + 0x3c], ebx
// 00859d66  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 00859d6c  895a38               mov dword ptr [edx + 0x38], ebx
// 00859d6f  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00859d75  895830               mov dword ptr [eax + 0x30], ebx
// 00859d78  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859d7e  6a03                 push 3
// 00859d80  e8cb950700           call 0x8d3350
// 00859d85  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859d8b  6a10                 push 0x10
// 00859d8d  e8ce790700           call 0x8d1760
// 00859d92  eb0c                 jmp 0x859da0
// 00859d94  57                   push edi
// 00859d95  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00859d9b  e8b0950700           call 0x8d3350
// 00859da0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00859da4  898e90000000         mov dword ptr [esi + 0x90], ecx
// 00859daa  53                   push ebx
// 00859dab  8bce                 mov ecx, esi
// 00859dad  e81ef3ffff           call 0x8590d0
// 00859db2  5d                   pop ebp
// 00859db3  5b                   pop ebx
// 00859db4  5f                   pop edi
// 00859db5  5e                   pop esi
// 00859db6  59                   pop ecx
// 00859db7  c3                   ret 
// 00859db8  7c9c                 jl 0x859d56
// 00859dba  8500                 test dword ptr [eax], eax
// 00859dbc  1a9d8500399d         sbb bl, byte ptr [ebp - 0x62c6ff7b]
// 00859dc2  8500                 test dword ptr [eax], eax
// 00859dc4  5d                   pop ebp
// 00859dc5  9d                   popfd 
// 00859dc6  8500                 test dword ptr [eax], eax
// 00859dc8  a09c8500da           mov al, byte ptr [0xda00859c]
// 00859dcd  9c                   pushfd 
// 00859dce  8500                 test dword ptr [eax], eax
// copied from an identical function in another client (function ?CheckCommandBarsTheme@CXTPTabClientWnd@@MAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp