// roc 2009-12 0086ca90  unit: CSelectionCaption  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ca90
//
// 0086ca90  8b442408             mov eax, dword ptr [esp + 8]
// 0086ca94  53                   push ebx
// 0086ca95  55                   push ebp
// 0086ca96  56                   push esi
// 0086ca97  8bf1                 mov esi, ecx
// 0086ca99  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086ca9d  57                   push edi
// 0086ca9e  898e84000000         mov dword ptr [esi + 0x84], ecx
// 0086caa4  85c0                 test eax, eax
// 0086caa6  7405                 je 0x86caad
// 0086caa8  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086caab  eb02                 jmp 0x86caaf
// 0086caad  33c0                 xor eax, eax
// 0086caaf  8b3dbccb9800         mov edi, dword ptr [0x98cbbc]
// 0086cab5  894638               mov dword ptr [esi + 0x38], eax
// 0086cab8  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0086cabb  50                   push eax
// 0086cabc  ffd7                 call edi
// 0086cabe  50                   push eax
// 0086cabf  e86670f8ff           call 0x7f3b2a
// 0086cac4  898688000000         mov dword ptr [esi + 0x88], eax
// 0086caca  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0086cacd  51                   push ecx
// 0086cace  ffd7                 call edi
// 0086cad0  50                   push eax
// 0086cad1  e85470f8ff           call 0x7f3b2a
// 0086cad6  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 0086cadc  8b2d50cc9800         mov ebp, dword ptr [0x98cc50]
// 0086cae2  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0086cae8  8b4220               mov eax, dword ptr [edx + 0x20]
// 0086caeb  8d9e98000000         lea ebx, [esi + 0x98]
// 0086caf1  53                   push ebx
// 0086caf2  50                   push eax
// 0086caf3  ffd5                 call ebp
// 0086caf5  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0086cafb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0086cafe  8dbea8000000         lea edi, [esi + 0xa8]
// 0086cb04  57                   push edi
// 0086cb05  52                   push edx
// 0086cb06  ffd5                 call ebp
// 0086cb08  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 0086cb0e  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0086cb11  8d86b8000000         lea eax, [esi + 0xb8]
// 0086cb17  50                   push eax
// 0086cb18  52                   push edx
// 0086cb19  ffd5                 call ebp
// 0086cb1b  8b4304               mov eax, dword ptr [ebx + 4]
// 0086cb1e  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0086cb21  6a05                 push 5
// 0086cb23  2b4704               sub eax, dword ptr [edi + 4]
// 0086cb26  8d8edc000000         lea ecx, [esi + 0xdc]
// 0086cb2c  03470c               add eax, dword ptr [edi + 0xc]
// 0086cb2f  89467c               mov dword ptr [esi + 0x7c], eax
// 0086cb32  e81170f8ff           call 0x7f3b48
// 0086cb37  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0086cb3d  51                   push ecx
// 0086cb3e  ff15a4ca9800         call dword ptr [0x98caa4]
// 0086cb44  8b1ddccb9800         mov ebx, dword ptr [0x98cbdc]
// 0086cb4a  6a2d                 push 0x2d
// 0086cb4c  ffd3                 call ebx
// 0086cb4e  8bf0                 mov esi, eax
// 0086cb50  6a2e                 push 0x2e
// 0086cb52  03f6                 add esi, esi
// 0086cb54  ffd3                 call ebx
// 0086cb56  03c0                 add eax, eax
// 0086cb58  50                   push eax
// 0086cb59  56                   push esi
// 0086cb5a  57                   push edi
// 0086cb5b  ff1558ca9800         call dword ptr [0x98ca58]
// 0086cb61  5f                   pop edi
// 0086cb62  5e                   pop esi
// 0086cb63  5d                   pop ebp
// 0086cb64  5b                   pop ebx
// 0086cb65  c20800               ret 8
// copied from an identical function in another client (function ?SetChildWindow@CXTCaption@@UAEXPAVCWnd@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp