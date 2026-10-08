// roc 2010-06 00809f70  unit: CXTPControlTabWorkspace  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809f70
//
// 00809f70  83ec08               sub esp, 8
// 00809f73  53                   push ebx
// 00809f74  56                   push esi
// 00809f75  8bd9                 mov ebx, ecx
// 00809f77  8b8378010000         mov eax, dword ptr [ebx + 0x178]
// 00809f7d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00809f80  57                   push edi
// 00809f81  8dbb78010000         lea edi, [ebx + 0x178]
// 00809f87  8bcf                 mov ecx, edi
// 00809f89  ffd2                 call edx
// 00809f8b  8bf0                 mov esi, eax
// 00809f8d  85f6                 test esi, esi
// 00809f8f  751c                 jne 0x809fad
// 00809f91  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00809f95  8b742418             mov esi, dword ptr [esp + 0x18]
// 00809f99  50                   push eax
// 00809f9a  56                   push esi
// 00809f9b  8bcb                 mov ecx, ebx
// 00809f9d  e8ae07faff           call 0x7aa750
// 00809fa2  5f                   pop edi
// 00809fa3  8bc6                 mov eax, esi
// 00809fa5  5e                   pop esi
// 00809fa6  5b                   pop ebx
// 00809fa7  83c408               add esp, 8
// 00809faa  c20800               ret 8
// 00809fad  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00809fb3  57                   push edi
// 00809fb4  e8472d0800           call 0x88cd00
// 00809fb9  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00809fbd  7403                 je 0x809fc2
// 00809fbf  83c002               add eax, 2
// 00809fc2  8b8b00010000         mov ecx, dword ptr [ebx + 0x100]
// 00809fc8  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00809fce  83f902               cmp ecx, 2
// 00809fd1  740a                 je 0x809fdd
// 00809fd3  83f903               cmp ecx, 3
// 00809fd6  7405                 je 0x809fdd
// 00809fd8  83f905               cmp ecx, 5
// 00809fdb  7510                 jne 0x809fed
// 00809fdd  8b9360010000         mov edx, dword ptr [ebx + 0x160]
// 00809fe3  8944240c             mov dword ptr [esp + 0xc], eax
// 00809fe7  89542410             mov dword ptr [esp + 0x10], edx
// 00809feb  eb0e                 jmp 0x809ffb
// 00809fed  8b8b60010000         mov ecx, dword ptr [ebx + 0x160]
// 00809ff3  894c240c             mov dword ptr [esp + 0xc], ecx
// 00809ff7  89442410             mov dword ptr [esp + 0x10], eax
// 00809ffb  8b442418             mov eax, dword ptr [esp + 0x18]
// 00809fff  8d4c240c             lea ecx, [esp + 0xc]
// 0080a003  8b11                 mov edx, dword ptr [ecx]
// 0080a005  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080a008  5f                   pop edi
// 0080a009  5e                   pop esi
// 0080a00a  8910                 mov dword ptr [eax], edx
// 0080a00c  894804               mov dword ptr [eax + 4], ecx
// 0080a00f  5b                   pop ebx
// 0080a010  83c408               add esp, 8
// 0080a013  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetSize@CXTPControlTabWorkspace@@MAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
