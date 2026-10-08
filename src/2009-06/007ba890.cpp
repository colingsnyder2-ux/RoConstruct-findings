// roc 2009-06 007ba890  unit: CXTPRibbonBar  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ba890
//
// 007ba890  83ec10               sub esp, 0x10
// 007ba893  53                   push ebx
// 007ba894  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007ba898  56                   push esi
// 007ba899  8bf1                 mov esi, ecx
// 007ba89b  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 007ba8a1  57                   push edi
// 007ba8a2  85c0                 test eax, eax
// 007ba8a4  0f849a000000         je 0x7ba944
// 007ba8aa  83fb7b               cmp ebx, 0x7b
// 007ba8ad  7546                 jne 0x7ba8f5
// 007ba8af  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007ba8b3  8338ff               cmp dword ptr [eax], -1
// 007ba8b6  752f                 jne 0x7ba8e7
// 007ba8b8  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 007ba8bb  8d7eac               lea edi, [esi - 0x54]
// 007ba8be  51                   push ecx
// 007ba8bf  8bcf                 mov ecx, edi
// 007ba8c1  e85a38f7ff           call 0x72e120
// 007ba8c6  8bf0                 mov esi, eax
// 007ba8c8  85f6                 test esi, esi
// 007ba8ca  741b                 je 0x7ba8e7
// 007ba8cc  8d54240c             lea edx, [esp + 0xc]
// 007ba8d0  52                   push edx
// 007ba8d1  8bce                 mov ecx, esi
// 007ba8d3  e83803f6ff           call 0x71ac10
// 007ba8d8  8b4804               mov ecx, dword ptr [eax + 4]
// 007ba8db  8b10                 mov edx, dword ptr [eax]
// 007ba8dd  56                   push esi
// 007ba8de  51                   push ecx
// 007ba8df  52                   push edx
// 007ba8e0  8bcf                 mov ecx, edi
// 007ba8e2  e8a9f8ffff           call 0x7ba190
// 007ba8e7  5f                   pop edi
// 007ba8e8  5e                   pop esi
// 007ba8e9  b801000000           mov eax, 1
// 007ba8ee  5b                   pop ebx
// 007ba8ef  83c410               add esp, 0x10
// 007ba8f2  c21400               ret 0x14
// 007ba8f5  85c0                 test eax, eax
// 007ba8f7  744b                 je 0x7ba944
// 007ba8f9  81fb0a020000         cmp ebx, 0x20a
// 007ba8ff  7543                 jne 0x7ba944
// 007ba901  8d7eac               lea edi, [esi - 0x54]
// 007ba904  8bcf                 mov ecx, edi
// 007ba906  e8852af7ff           call 0x72d390
// 007ba90b  8bc8                 mov ecx, eax
// 007ba90d  e8ae05f7ff           call 0x72aec0
// 007ba912  83780400             cmp dword ptr [eax + 4], 0
// 007ba916  7f2c                 jg 0x7ba944
// 007ba918  8bcf                 mov ecx, edi
// 007ba91a  e871edf6ff           call 0x729690
// 007ba91f  85c0                 test eax, eax
// 007ba921  7521                 jne 0x7ba944
// 007ba923  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ba927  66394102             cmp word ptr [ecx + 2], ax
// 007ba92b  8bcf                 mov ecx, edi
// 007ba92d  0f9ec0               setle al
// 007ba930  50                   push eax
// 007ba931  e87ad9ffff           call 0x7b82b0
// 007ba936  5f                   pop edi
// 007ba937  5e                   pop esi
// 007ba938  b801000000           mov eax, 1
// 007ba93d  5b                   pop ebx
// 007ba93e  83c410               add esp, 0x10
// 007ba941  c21400               ret 0x14
// 007ba944  8b542430             mov edx, dword ptr [esp + 0x30]
// 007ba948  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007ba94c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ba950  52                   push edx
// 007ba951  8b542424             mov edx, dword ptr [esp + 0x24]
// 007ba955  50                   push eax
// 007ba956  51                   push ecx
// 007ba957  53                   push ebx
// 007ba958  52                   push edx
// 007ba959  8bce                 mov ecx, esi
// 007ba95b  e8a0c9ffff           call 0x7b7300
// 007ba960  5f                   pop edi
// 007ba961  5e                   pop esi
// 007ba962  5b                   pop ebx
// 007ba963  83c410               add esp, 0x10
// 007ba966  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnHookMessage@CXTPRibbonBar@@UAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
