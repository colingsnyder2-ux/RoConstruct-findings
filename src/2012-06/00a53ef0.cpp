// roc 2012-06 00a53ef0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a53ef0
//
// 00a53ef0  83ec14               sub esp, 0x14
// 00a53ef3  53                   push ebx
// 00a53ef4  55                   push ebp
// 00a53ef5  56                   push esi
// 00a53ef6  57                   push edi
// 00a53ef7  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a53efb  e8302b0100           call 0xa66a30
// 00a53f00  8bc8                 mov ecx, eax
// 00a53f02  e809120100           call 0xa65110
// 00a53f07  85c0                 test eax, eax
// 00a53f09  0f84bd000000         je 0xa53fcc
// 00a53f0f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00a53f13  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a53f16  8b4650               mov eax, dword ptr [esi + 0x50]
// 00a53f19  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00a53f1c  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 00a53f1f  8b6e4c               mov ebp, dword ptr [esi + 0x4c]
// 00a53f22  89442420             mov dword ptr [esp + 0x20], eax
// 00a53f26  397104               cmp dword ptr [ecx + 4], esi
// 00a53f29  7405                 je 0xa53f30
// 00a53f2b  397108               cmp dword ptr [ecx + 8], esi
// 00a53f2e  7572                 jne 0xa53fa2
// 00a53f30  8b11                 mov edx, dword ptr [ecx]
// 00a53f32  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a53f35  ffd0                 call eax
// 00a53f37  83f803               cmp eax, 3
// 00a53f3a  7766                 ja 0xa53fa2
// 00a53f3c  ff2485d83fa500       jmp dword ptr [eax*4 + 0xa53fd8]
// 00a53f43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a53f47  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a53f4b  83ec10               sub esp, 0x10
// 00a53f4e  8bc4                 mov eax, esp
// 00a53f50  8938                 mov dword ptr [eax], edi
// 00a53f52  895804               mov dword ptr [eax + 4], ebx
// 00a53f55  896808               mov dword ptr [eax + 8], ebp
// 00a53f58  56                   push esi
// 00a53f59  89480c               mov dword ptr [eax + 0xc], ecx
// 00a53f5c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a53f60  52                   push edx
// 00a53f61  e86afcffff           call 0xa53bd0
// 00a53f66  eb3a                 jmp 0xa53fa2
// 00a53f68  68b0caa600           push 0xa6cab0
// 00a53f6d  6a00                 push 0
// 00a53f6f  eb0e                 jmp 0xa53f7f
// 00a53f71  6870cba600           push 0xa6cb70
// 00a53f76  eb05                 jmp 0xa53f7d
// 00a53f78  6810cba600           push 0xa6cb10
// 00a53f7d  6a01                 push 1
// 00a53f7f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a53f83  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a53f87  56                   push esi
// 00a53f88  83ec10               sub esp, 0x10
// 00a53f8b  8bc4                 mov eax, esp
// 00a53f8d  8938                 mov dword ptr [eax], edi
// 00a53f8f  895804               mov dword ptr [eax + 4], ebx
// 00a53f92  896808               mov dword ptr [eax + 8], ebp
// 00a53f95  89480c               mov dword ptr [eax + 0xc], ecx
// 00a53f98  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a53f9c  52                   push edx
// 00a53f9d  e80efdffff           call 0xa53cb0
// 00a53fa2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a53fa6  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00a53fa9  8b11                 mov edx, dword ptr [ecx]
// 00a53fab  8b5268               mov edx, dword ptr [edx + 0x68]
// 00a53fae  6a01                 push 1
// 00a53fb0  83ec10               sub esp, 0x10
// 00a53fb3  8bc4                 mov eax, esp
// 00a53fb5  8938                 mov dword ptr [eax], edi
// 00a53fb7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00a53fbb  895804               mov dword ptr [eax + 4], ebx
// 00a53fbe  896808               mov dword ptr [eax + 8], ebp
// 00a53fc1  89780c               mov dword ptr [eax + 0xc], edi
// 00a53fc4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a53fc8  56                   push esi
// 00a53fc9  50                   push eax
// 00a53fca  ffd2                 call edx
// 00a53fcc  5f                   pop edi
// 00a53fcd  5e                   pop esi
// 00a53fce  5d                   pop ebp
// 00a53fcf  5b                   pop ebx
// 00a53fd0  83c414               add esp, 0x14
// 00a53fd3  c20800               ret 8
// 00a53fd6  8bff                 mov edi, edi
// 00a53fd8  43                   inc ebx
// 00a53fd9  3f                   aas 
// 00a53fda  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a53fdb  00713f               add byte ptr [ecx + 0x3f], dh
// 00a53fde  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a53fdf  00683f               add byte ptr [eax + 0x3f], ch
// 00a53fe2  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a53fe3  00783f               add byte ptr [eax + 0x3f], bh
// 00a53fe6  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp