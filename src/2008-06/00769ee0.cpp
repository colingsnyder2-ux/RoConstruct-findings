// from server: 100% by auto
// roc 2008-06 00769ee0  unit: CXTPDockingPaneContext  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00769ee0
//
// 00769ee0  83ec14               sub esp, 0x14
// 00769ee3  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00769ee9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00769eed  56                   push esi
// 00769eee  57                   push edi
// 00769eef  8bb8c8000000         mov edi, dword ptr [eax + 0xc8]
// 00769ef5  51                   push ecx
// 00769ef6  8d4c2410             lea ecx, [esp + 0x10]
// 00769efa  897c240c             mov dword ptr [esp + 0xc], edi
// 00769efe  e8cddbf8ff           call 0x6f7ad0
// 00769f03  8b542410             mov edx, dword ptr [esp + 0x10]
// 00769f07  8b742420             mov esi, dword ptr [esp + 0x20]
// 00769f0b  2bd7                 sub edx, edi
// 00769f0d  39560c               cmp dword ptr [esi + 0xc], edx
// 00769f10  0f8c31010000         jl 0x76a047
// 00769f16  8b4604               mov eax, dword ptr [esi + 4]
// 00769f19  55                   push ebp
// 00769f1a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00769f1e  8d0c2f               lea ecx, [edi + ebp]
// 00769f21  3bc1                 cmp eax, ecx
// 00769f23  0f8f1d010000         jg 0x76a046
// 00769f29  53                   push ebx
// 00769f2a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00769f2e  8bd3                 mov edx, ebx
// 00769f30  2bd7                 sub edx, edi
// 00769f32  395608               cmp dword ptr [esi + 8], edx
// 00769f35  0f8c0a010000         jl 0x76a045
// 00769f3b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00769f3f  8d1439               lea edx, [ecx + edi]
// 00769f42  3916                 cmp dword ptr [esi], edx
// 00769f44  0f8ffb000000         jg 0x76a045
// 00769f4a  2be8                 sub ebp, eax
// 00769f4c  8bc5                 mov eax, ebp
// 00769f4e  99                   cdq 
// 00769f4f  33c2                 xor eax, edx
// 00769f51  2bc2                 sub eax, edx
// 00769f53  3bc7                 cmp eax, edi
// 00769f55  8b3d682d8000         mov edi, dword ptr [0x802d68]
// 00769f5b  7d0e                 jge 0x769f6b
// 00769f5d  55                   push ebp
// 00769f5e  6a00                 push 0
// 00769f60  56                   push esi
// 00769f61  ffd7                 call edi
// 00769f63  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00769f67  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00769f6b  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00769f6e  8bc5                 mov eax, ebp
// 00769f70  2b442418             sub eax, dword ptr [esp + 0x18]
// 00769f74  99                   cdq 
// 00769f75  33c2                 xor eax, edx
// 00769f77  2bc2                 sub eax, edx
// 00769f79  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00769f7d  7d14                 jge 0x769f93
// 00769f7f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00769f83  2bc5                 sub eax, ebp
// 00769f85  50                   push eax
// 00769f86  6a00                 push 0
// 00769f88  56                   push esi
// 00769f89  ffd7                 call edi
// 00769f8b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00769f8f  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00769f93  8beb                 mov ebp, ebx
// 00769f95  2b6e08               sub ebp, dword ptr [esi + 8]
// 00769f98  8bc5                 mov eax, ebp
// 00769f9a  99                   cdq 
// 00769f9b  33c2                 xor eax, edx
// 00769f9d  2bc2                 sub eax, edx
// 00769f9f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00769fa3  7d0e                 jge 0x769fb3
// 00769fa5  6a00                 push 0
// 00769fa7  55                   push ebp
// 00769fa8  56                   push esi
// 00769fa9  ffd7                 call edi
// 00769fab  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00769faf  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00769fb3  8b2e                 mov ebp, dword ptr [esi]
// 00769fb5  8bc5                 mov eax, ebp
// 00769fb7  2bc1                 sub eax, ecx
// 00769fb9  99                   cdq 
// 00769fba  33c2                 xor eax, edx
// 00769fbc  2bc2                 sub eax, edx
// 00769fbe  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00769fc2  7d10                 jge 0x769fd4
// 00769fc4  6a00                 push 0
// 00769fc6  2bcd                 sub ecx, ebp
// 00769fc8  51                   push ecx
// 00769fc9  56                   push esi
// 00769fca  ffd7                 call edi
// 00769fcc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00769fd0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00769fd4  8b2e                 mov ebp, dword ptr [esi]
// 00769fd6  8bc5                 mov eax, ebp
// 00769fd8  2bc3                 sub eax, ebx
// 00769fda  99                   cdq 
// 00769fdb  33c2                 xor eax, edx
// 00769fdd  2bc2                 sub eax, edx
// 00769fdf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00769fe3  7d0c                 jge 0x769ff1
// 00769fe5  6a00                 push 0
// 00769fe7  2bdd                 sub ebx, ebp
// 00769fe9  53                   push ebx
// 00769fea  56                   push esi
// 00769feb  ffd7                 call edi
// 00769fed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00769ff1  8b5e08               mov ebx, dword ptr [esi + 8]
// 00769ff4  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00769ff8  8bc3                 mov eax, ebx
// 00769ffa  2bc1                 sub eax, ecx
// 00769ffc  99                   cdq 
// 00769ffd  33c2                 xor eax, edx
// 00769fff  2bc2                 sub eax, edx
// 0076a001  3bc5                 cmp eax, ebp
// 0076a003  7d08                 jge 0x76a00d
// 0076a005  6a00                 push 0
// 0076a007  2bcb                 sub ecx, ebx
// 0076a009  51                   push ecx
// 0076a00a  56                   push esi
// 0076a00b  ffd7                 call edi
// 0076a00d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0076a010  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0076a014  8bc3                 mov eax, ebx
// 0076a016  2bc1                 sub eax, ecx
// 0076a018  99                   cdq 
// 0076a019  33c2                 xor eax, edx
// 0076a01b  2bc2                 sub eax, edx
// 0076a01d  3bc5                 cmp eax, ebp
// 0076a01f  7d08                 jge 0x76a029
// 0076a021  2bcb                 sub ecx, ebx
// 0076a023  51                   push ecx
// 0076a024  6a00                 push 0
// 0076a026  56                   push esi
// 0076a027  ffd7                 call edi
// 0076a029  8b5e04               mov ebx, dword ptr [esi + 4]
// 0076a02c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076a030  8bc3                 mov eax, ebx
// 0076a032  2bc1                 sub eax, ecx
// 0076a034  99                   cdq 
// 0076a035  33c2                 xor eax, edx
// 0076a037  2bc2                 sub eax, edx
// 0076a039  3bc5                 cmp eax, ebp
// 0076a03b  7d08                 jge 0x76a045
// 0076a03d  2bcb                 sub ecx, ebx
// 0076a03f  51                   push ecx
// 0076a040  6a00                 push 0
// 0076a042  56                   push esi
// 0076a043  ffd7                 call edi
// 0076a045  5b                   pop ebx
// 0076a046  5d                   pop ebp
// 0076a047  5f                   pop edi
// 0076a048  5e                   pop esi
// 0076a049  83c414               add esp, 0x14
// 0076a04c  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@IAEXAAVCRect@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
