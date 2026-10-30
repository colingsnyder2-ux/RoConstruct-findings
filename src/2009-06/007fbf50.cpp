// roc 2009-06 007fbf50  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fbf50
//
// 007fbf50  83ec14               sub esp, 0x14
// 007fbf53  53                   push ebx
// 007fbf54  55                   push ebp
// 007fbf55  56                   push esi
// 007fbf56  57                   push edi
// 007fbf57  894c2410             mov dword ptr [esp + 0x10], ecx
// 007fbf5b  e8a0ad0000           call 0x806d00
// 007fbf60  8bc8                 mov ecx, eax
// 007fbf62  e879940000           call 0x8053e0
// 007fbf67  85c0                 test eax, eax
// 007fbf69  0f84bd000000         je 0x7fc02c
// 007fbf6f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007fbf73  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007fbf76  8b4650               mov eax, dword ptr [esi + 0x50]
// 007fbf79  8b7e44               mov edi, dword ptr [esi + 0x44]
// 007fbf7c  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 007fbf7f  8b6e4c               mov ebp, dword ptr [esi + 0x4c]
// 007fbf82  89442420             mov dword ptr [esp + 0x20], eax
// 007fbf86  397104               cmp dword ptr [ecx + 4], esi
// 007fbf89  7405                 je 0x7fbf90
// 007fbf8b  397108               cmp dword ptr [ecx + 8], esi
// 007fbf8e  7572                 jne 0x7fc002
// 007fbf90  8b11                 mov edx, dword ptr [ecx]
// 007fbf92  8b4248               mov eax, dword ptr [edx + 0x48]
// 007fbf95  ffd0                 call eax
// 007fbf97  83f803               cmp eax, 3
// 007fbf9a  7766                 ja 0x7fc002
// 007fbf9c  ff248538c07f00       jmp dword ptr [eax*4 + 0x7fc038]
// 007fbfa3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007fbfa7  8b542428             mov edx, dword ptr [esp + 0x28]
// 007fbfab  83ec10               sub esp, 0x10
// 007fbfae  8bc4                 mov eax, esp
// 007fbfb0  8938                 mov dword ptr [eax], edi
// 007fbfb2  895804               mov dword ptr [eax + 4], ebx
// 007fbfb5  896808               mov dword ptr [eax + 8], ebp
// 007fbfb8  56                   push esi
// 007fbfb9  89480c               mov dword ptr [eax + 0xc], ecx
// 007fbfbc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fbfc0  52                   push edx
// 007fbfc1  e86afcffff           call 0x7fbc30
// 007fbfc6  eb3a                 jmp 0x7fc002
// 007fbfc8  68e0c28000           push 0x80c2e0
// 007fbfcd  6a00                 push 0
// 007fbfcf  eb0e                 jmp 0x7fbfdf
// 007fbfd1  68a0c38000           push 0x80c3a0
// 007fbfd6  eb05                 jmp 0x7fbfdd
// 007fbfd8  6840c38000           push 0x80c340
// 007fbfdd  6a01                 push 1
// 007fbfdf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fbfe3  8b542430             mov edx, dword ptr [esp + 0x30]
// 007fbfe7  56                   push esi
// 007fbfe8  83ec10               sub esp, 0x10
// 007fbfeb  8bc4                 mov eax, esp
// 007fbfed  8938                 mov dword ptr [eax], edi
// 007fbfef  895804               mov dword ptr [eax + 4], ebx
// 007fbff2  896808               mov dword ptr [eax + 8], ebp
// 007fbff5  89480c               mov dword ptr [eax + 0xc], ecx
// 007fbff8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007fbffc  52                   push edx
// 007fbffd  e80efdffff           call 0x7fbd10
// 007fc002  8b442410             mov eax, dword ptr [esp + 0x10]
// 007fc006  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 007fc009  8b11                 mov edx, dword ptr [ecx]
// 007fc00b  8b5268               mov edx, dword ptr [edx + 0x68]
// 007fc00e  6a01                 push 1
// 007fc010  83ec10               sub esp, 0x10
// 007fc013  8bc4                 mov eax, esp
// 007fc015  8938                 mov dword ptr [eax], edi
// 007fc017  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 007fc01b  895804               mov dword ptr [eax + 4], ebx
// 007fc01e  896808               mov dword ptr [eax + 8], ebp
// 007fc021  89780c               mov dword ptr [eax + 0xc], edi
// 007fc024  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007fc028  56                   push esi
// 007fc029  50                   push eax
// 007fc02a  ffd2                 call edx
// 007fc02c  5f                   pop edi
// 007fc02d  5e                   pop esi
// 007fc02e  5d                   pop ebp
// 007fc02f  5b                   pop ebx
// 007fc030  83c414               add esp, 0x14
// 007fc033  c20800               ret 8
// 007fc036  8bff                 mov edi, edi
// 007fc038  a3bf7f00d1           mov dword ptr [0xd1007fbf], eax
// 007fc03d  bf7f00c8bf           mov edi, 0xbfc8007f
// 007fc042  7f00                 jg 0x7fc044
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp