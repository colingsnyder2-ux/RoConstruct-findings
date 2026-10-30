// roc 2009-12 008f1e80  unit: CXTPRibbonSystemPopupBar  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1e80
//
// 008f1e80  6aff                 push -1
// 008f1e82  68526a9600           push 0x966a52
// 008f1e87  64a100000000         mov eax, dword ptr fs:[0]
// 008f1e8d  50                   push eax
// 008f1e8e  83ec44               sub esp, 0x44
// 008f1e91  53                   push ebx
// 008f1e92  55                   push ebp
// 008f1e93  56                   push esi
// 008f1e94  57                   push edi
// 008f1e95  a10052b600           mov eax, dword ptr [0xb65200]
// 008f1e9a  33c4                 xor eax, esp
// 008f1e9c  50                   push eax
// 008f1e9d  8d442458             lea eax, [esp + 0x58]
// 008f1ea1  64a300000000         mov dword ptr fs:[0], eax
// 008f1ea7  8bf1                 mov esi, ecx
// 008f1ea9  56                   push esi
// 008f1eaa  8d4c243c             lea ecx, [esp + 0x3c]
// 008f1eae  e81d94f5ff           call 0x84b2d0
// 008f1eb3  8bce                 mov ecx, esi
// 008f1eb5  e8d626f1ff           call 0x804590
// 008f1eba  8be8                 mov ebp, eax
// 008f1ebc  6808f8a000           push 0xa0f808
// 008f1ec1  8bcd                 mov ecx, ebp
// 008f1ec3  e838cef8ff           call 0x87ed00
// 008f1ec8  8bf8                 mov edi, eax
// 008f1eca  85ff                 test edi, edi
// 008f1ecc  0f84dd010000         je 0x8f20af
// 008f1ed2  6a01                 push 1
// 008f1ed4  6a00                 push 0
// 008f1ed6  8d442450             lea eax, [esp + 0x50]
// 008f1eda  50                   push eax
// 008f1edb  8bcf                 mov ecx, edi
// 008f1edd  e8dee9feff           call 0x8e08c0
// 008f1ee2  8b10                 mov edx, dword ptr [eax]
// 008f1ee4  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008f1ee8  6aff                 push -1
// 008f1eea  8d8e00020000         lea ecx, [esi + 0x200]
// 008f1ef0  51                   push ecx
// 008f1ef1  83ec10               sub esp, 0x10
// 008f1ef4  8bcc                 mov ecx, esp
// 008f1ef6  8911                 mov dword ptr [ecx], edx
// 008f1ef8  8b5004               mov edx, dword ptr [eax + 4]
// 008f1efb  895104               mov dword ptr [ecx + 4], edx
// 008f1efe  8b5008               mov edx, dword ptr [eax + 8]
// 008f1f01  8b400c               mov eax, dword ptr [eax + 0xc]
// 008f1f04  895108               mov dword ptr [ecx + 8], edx
// 008f1f07  89410c               mov dword ptr [ecx + 0xc], eax
// 008f1f0a  8d4c2450             lea ecx, [esp + 0x50]
// 008f1f0e  51                   push ecx
// 008f1f0f  53                   push ebx
// 008f1f10  8bcf                 mov ecx, edi
// 008f1f12  e8e9eefeff           call 0x8e0e00
// 008f1f17  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 008f1f1d  52                   push edx
// 008f1f1e  e8fdf9ffff           call 0x8f1920
// 008f1f23  50                   push eax
// 008f1f24  e8151df0ff           call 0x7f3c3e
// 008f1f29  83c408               add esp, 8
// 008f1f2c  85c0                 test eax, eax
// 008f1f2e  0f847b010000         je 0x8f20af
// 008f1f34  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008f1f3a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008f1f40  50                   push eax
// 008f1f41  e83a2afaff           call 0x894980
// 008f1f46  50                   push eax
// 008f1f47  e8f21cf0ff           call 0x7f3c3e
// 008f1f4c  8bf8                 mov edi, eax
// 008f1f4e  83c408               add esp, 8
// 008f1f51  85ff                 test edi, edi
// 008f1f53  0f8456010000         je 0x8f20af
// 008f1f59  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008f1f5f  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 008f1f65  894c2418             mov dword ptr [esp + 0x18], ecx
// 008f1f69  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 008f1f6f  8954241c             mov dword ptr [esp + 0x1c], edx
// 008f1f73  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 008f1f79  894c2420             mov dword ptr [esp + 0x20], ecx
// 008f1f7d  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008f1f83  89542424             mov dword ptr [esp + 0x24], edx
// 008f1f87  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008f1f8d  8d4c2418             lea ecx, [esp + 0x18]
// 008f1f91  51                   push ecx
// 008f1f92  8bc8                 mov ecx, eax
// 008f1f94  e8611ef0ff           call 0x7f3dfa
// 008f1f99  8d542418             lea edx, [esp + 0x18]
// 008f1f9d  52                   push edx
// 008f1f9e  8bce                 mov ecx, esi
// 008f1fa0  e83328f0ff           call 0x7f47d8
// 008f1fa5  8bcf                 mov ecx, edi
// 008f1fa7  e8a42ffaff           call 0x894f50
// 008f1fac  85c0                 test eax, eax
// 008f1fae  744e                 je 0x8f1ffe
// 008f1fb0  8d442438             lea eax, [esp + 0x38]
// 008f1fb4  50                   push eax
// 008f1fb5  8d4c241c             lea ecx, [esp + 0x1c]
// 008f1fb9  51                   push ecx
// 008f1fba  8d542450             lea edx, [esp + 0x50]
// 008f1fbe  52                   push edx
// 008f1fbf  ff15dcca9800         call dword ptr [0x98cadc]
// 008f1fc5  85c0                 test eax, eax
// 008f1fc7  7435                 je 0x8f1ffe
// 008f1fc9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f1fcd  8b5500               mov edx, dword ptr [ebp]
// 008f1fd0  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 008f1fd6  83ec10               sub esp, 0x10
// 008f1fd9  8bc4                 mov eax, esp
// 008f1fdb  8908                 mov dword ptr [eax], ecx
// 008f1fdd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f1fe1  894804               mov dword ptr [eax + 4], ecx
// 008f1fe4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008f1fe8  894808               mov dword ptr [eax + 8], ecx
// 008f1feb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008f1fef  89480c               mov dword ptr [eax + 0xc], ecx
// 008f1ff2  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 008f1ff8  50                   push eax
// 008f1ff9  53                   push ebx
// 008f1ffa  8bcd                 mov ecx, ebp
// 008f1ffc  ffd2                 call edx
// 008f1ffe  8bce                 mov ecx, esi
// 008f2000  33ff                 xor edi, edi
// 008f2002  e84932f1ff           call 0x805250
// 008f2007  85c0                 test eax, eax
// 008f2009  0f8ea0000000         jle 0x8f20af
// 008f200f  90                   nop 
// 008f2010  57                   push edi
// 008f2011  8bce                 mov ecx, esi
// 008f2013  e84832f1ff           call 0x805260
// 008f2018  85c0                 test eax, eax
// 008f201a  7409                 je 0x8f2025
// 008f201c  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 008f2023  750e                 jne 0x8f2033
// 008f2025  8bce                 mov ecx, esi
// 008f2027  47                   inc edi
// 008f2028  e82332f1ff           call 0x805250
// 008f202d  3bf8                 cmp edi, eax
// 008f202f  7cdf                 jl 0x8f2010
// 008f2031  eb7c                 jmp 0x8f20af
// 008f2033  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 008f2039  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008f203f  894c2428             mov dword ptr [esp + 0x28], ecx
// 008f2043  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 008f2049  51                   push ecx
// 008f204a  89542430             mov dword ptr [esp + 0x30], edx
// 008f204e  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 008f2054  894c2434             mov dword ptr [esp + 0x34], ecx
// 008f2058  8bcc                 mov ecx, esp
// 008f205a  8964246c             mov dword ptr [esp + 0x6c], esp
// 008f205e  68ecf7a000           push 0xa0f7ec
// 008f2063  8954243c             mov dword ptr [esp + 0x3c], edx
// 008f2067  ff15b8de9800         call dword ptr [0x98deb8]
// 008f206d  51                   push ecx
// 008f206e  8bcc                 mov ecx, esp
// 008f2070  8964241c             mov dword ptr [esp + 0x1c], esp
// 008f2074  68000fa000           push 0xa00f00
// 008f2079  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008f2081  ff15b8de9800         call dword ptr [0x98deb8]
// 008f2087  8bcd                 mov ecx, ebp
// 008f2089  c644246801           mov byte ptr [esp + 0x68], 1
// 008f208e  e85dccf8ff           call 0x87ecf0
// 008f2093  8bc8                 mov ecx, eax
// 008f2095  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008f209d  e85ef0feff           call 0x8e1100
// 008f20a2  50                   push eax
// 008f20a3  8d44242c             lea eax, [esp + 0x2c]
// 008f20a7  50                   push eax
// 008f20a8  8bcb                 mov ecx, ebx
// 008f20aa  e84f25f0ff           call 0x7f45fe
// 008f20af  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008f20b3  64890d00000000       mov dword ptr fs:[0], ecx
// 008f20ba  59                   pop ecx
// 008f20bb  5f                   pop edi
// 008f20bc  5e                   pop esi
// 008f20bd  5d                   pop ebp
// 008f20be  5b                   pop ebx
// 008f20bf  83c450               add esp, 0x50
// 008f20c2  c20400               ret 4
// copied from an identical function in another client (function ?FillCommandBarEntry@CXTPRibbonSystemPopupBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp