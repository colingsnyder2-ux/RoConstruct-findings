// roc 2008-06 00783890  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00783890
//
// 00783890  83ec14               sub esp, 0x14
// 00783893  53                   push ebx
// 00783894  55                   push ebp
// 00783895  56                   push esi
// 00783896  57                   push edi
// 00783897  894c2410             mov dword ptr [esp + 0x10], ecx
// 0078389b  e8d0ad0000           call 0x78e670
// 007838a0  8bc8                 mov ecx, eax
// 007838a2  e8a9940000           call 0x78cd50
// 007838a7  85c0                 test eax, eax
// 007838a9  0f84bd000000         je 0x78396c
// 007838af  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007838b3  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007838b6  8b4650               mov eax, dword ptr [esi + 0x50]
// 007838b9  8b7e44               mov edi, dword ptr [esi + 0x44]
// 007838bc  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 007838bf  8b6e4c               mov ebp, dword ptr [esi + 0x4c]
// 007838c2  89442420             mov dword ptr [esp + 0x20], eax
// 007838c6  397104               cmp dword ptr [ecx + 4], esi
// 007838c9  7405                 je 0x7838d0
// 007838cb  397108               cmp dword ptr [ecx + 8], esi
// 007838ce  7572                 jne 0x783942
// 007838d0  8b11                 mov edx, dword ptr [ecx]
// 007838d2  8b4248               mov eax, dword ptr [edx + 0x48]
// 007838d5  ffd0                 call eax
// 007838d7  83f803               cmp eax, 3
// 007838da  7766                 ja 0x783942
// 007838dc  ff248578397800       jmp dword ptr [eax*4 + 0x783978]
// 007838e3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007838e7  8b542428             mov edx, dword ptr [esp + 0x28]
// 007838eb  83ec10               sub esp, 0x10
// 007838ee  8bc4                 mov eax, esp
// 007838f0  8938                 mov dword ptr [eax], edi
// 007838f2  895804               mov dword ptr [eax + 4], ebx
// 007838f5  896808               mov dword ptr [eax + 8], ebp
// 007838f8  56                   push esi
// 007838f9  89480c               mov dword ptr [eax + 0xc], ecx
// 007838fc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00783900  52                   push edx
// 00783901  e86afcffff           call 0x783570
// 00783906  eb3a                 jmp 0x783942
// 00783908  6850bc7900           push 0x79bc50
// 0078390d  6a00                 push 0
// 0078390f  eb0e                 jmp 0x78391f
// 00783911  6810bd7900           push 0x79bd10
// 00783916  eb05                 jmp 0x78391d
// 00783918  68b0bc7900           push 0x79bcb0
// 0078391d  6a01                 push 1
// 0078391f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00783923  8b542430             mov edx, dword ptr [esp + 0x30]
// 00783927  56                   push esi
// 00783928  83ec10               sub esp, 0x10
// 0078392b  8bc4                 mov eax, esp
// 0078392d  8938                 mov dword ptr [eax], edi
// 0078392f  895804               mov dword ptr [eax + 4], ebx
// 00783932  896808               mov dword ptr [eax + 8], ebp
// 00783935  89480c               mov dword ptr [eax + 0xc], ecx
// 00783938  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0078393c  52                   push edx
// 0078393d  e80efdffff           call 0x783650
// 00783942  8b442410             mov eax, dword ptr [esp + 0x10]
// 00783946  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00783949  8b11                 mov edx, dword ptr [ecx]
// 0078394b  8b5268               mov edx, dword ptr [edx + 0x68]
// 0078394e  6a01                 push 1
// 00783950  83ec10               sub esp, 0x10
// 00783953  8bc4                 mov eax, esp
// 00783955  8938                 mov dword ptr [eax], edi
// 00783957  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0078395b  895804               mov dword ptr [eax + 4], ebx
// 0078395e  896808               mov dword ptr [eax + 8], ebp
// 00783961  89780c               mov dword ptr [eax + 0xc], edi
// 00783964  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00783968  56                   push esi
// 00783969  50                   push eax
// 0078396a  ffd2                 call edx
// 0078396c  5f                   pop edi
// 0078396d  5e                   pop esi
// 0078396e  5d                   pop ebp
// 0078396f  5b                   pop ebx
// 00783970  83c414               add esp, 0x14
// 00783973  c20800               ret 8
// 00783976  8bff                 mov edi, edi
// 00783978  e338                 jecxz 0x7839b2
// 0078397a  7800                 js 0x78397c
// 0078397c  1139                 adc dword ptr [ecx], edi
// 0078397e  7800                 js 0x783980
// 00783980  0839                 or byte ptr [ecx], bh
// 00783982  7800                 js 0x783984
// 00783984  1839                 sbb byte ptr [ecx], bh
// 00783986  7800                 js 0x783988
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
