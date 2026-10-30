// roc 2009-12 00403f10  unit: VCApp::?$CComObject  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00403f10
//
// 00403f10  56                   push esi
// 00403f11  57                   push edi
// 00403f12  8bf1                 mov esi, ecx
// 00403f14  33ff                 xor edi, edi
// 00403f16  397e08               cmp dword ptr [esi + 8], edi
// 00403f19  7e36                 jle 0x403f51
// 00403f1b  eb03                 jmp 0x403f20
// 00403f1d  8d4900               lea ecx, [ecx]
// 00403f20  85ff                 test edi, edi
// 00403f22  7c65                 jl 0x403f89
// 00403f24  3b7e08               cmp edi, dword ptr [esi + 8]
// 00403f27  7d60                 jge 0x403f89
// 00403f29  8b06                 mov eax, dword ptr [esi]
// 00403f2b  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 00403f2e  51                   push ecx
// 00403f2f  e8d2fb3e00           call 0x7f3b06
// 00403f34  83c404               add esp, 4
// 00403f37  3b7e08               cmp edi, dword ptr [esi + 8]
// 00403f3a  7d4d                 jge 0x403f89
// 00403f3c  8b5604               mov edx, dword ptr [esi + 4]
// 00403f3f  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00403f42  50                   push eax
// 00403f43  e8befb3e00           call 0x7f3b06
// 00403f48  47                   inc edi
// 00403f49  83c404               add esp, 4
// 00403f4c  3b7e08               cmp edi, dword ptr [esi + 8]
// 00403f4f  7ccf                 jl 0x403f20
// 00403f51  8b06                 mov eax, dword ptr [esi]
// 00403f53  8b3d40b79800         mov edi, dword ptr [0x98b740]
// 00403f59  85c0                 test eax, eax
// 00403f5b  740c                 je 0x403f69
// 00403f5d  50                   push eax
// 00403f5e  ffd7                 call edi
// 00403f60  83c404               add esp, 4
// 00403f63  c70600000000         mov dword ptr [esi], 0
// 00403f69  8b4604               mov eax, dword ptr [esi + 4]
// 00403f6c  85c0                 test eax, eax
// 00403f6e  740d                 je 0x403f7d
// 00403f70  50                   push eax
// 00403f71  ffd7                 call edi
// 00403f73  83c404               add esp, 4
// 00403f76  c7460400000000       mov dword ptr [esi + 4], 0
// 00403f7d  5f                   pop edi
// 00403f7e  c7460800000000       mov dword ptr [esi + 8], 0
// 00403f85  33c0                 xor eax, eax
// 00403f87  5e                   pop esi
// 00403f88  c3                   ret 
// 00403f89  6a00                 push 0
// 00403f8b  6a00                 push 0
// 00403f8d  6a01                 push 1
// 00403f8f  688c0000c0           push 0xc000008c
// 00403f94  ff1534b29800         call dword ptr [0x98b234]
// copied from an identical function in another client (function ?ClearReplacements@CExpansionVector@ATL@@QAEJXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-9.0-dll atl.cpp