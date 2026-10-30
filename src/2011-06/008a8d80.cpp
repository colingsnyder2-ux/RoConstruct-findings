// roc 2011-06 008a8d80  unit: CXTPRibbonBar  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a8d80
//
// 008a8d80  83ec10               sub esp, 0x10
// 008a8d83  53                   push ebx
// 008a8d84  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008a8d88  56                   push esi
// 008a8d89  8bf1                 mov esi, ecx
// 008a8d8b  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 008a8d91  57                   push edi
// 008a8d92  85c0                 test eax, eax
// 008a8d94  0f849a000000         je 0x8a8e34
// 008a8d9a  83fb7b               cmp ebx, 0x7b
// 008a8d9d  7546                 jne 0x8a8de5
// 008a8d9f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008a8da3  8338ff               cmp dword ptr [eax], -1
// 008a8da6  752f                 jne 0x8a8dd7
// 008a8da8  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008a8dab  8d7eac               lea edi, [esi - 0x54]
// 008a8dae  51                   push ecx
// 008a8daf  8bcf                 mov ecx, edi
// 008a8db1  e86a2af7ff           call 0x81b820
// 008a8db6  8bf0                 mov esi, eax
// 008a8db8  85f6                 test esi, esi
// 008a8dba  741b                 je 0x8a8dd7
// 008a8dbc  8d54240c             lea edx, [esp + 0xc]
// 008a8dc0  52                   push edx
// 008a8dc1  8bce                 mov ecx, esi
// 008a8dc3  e81836f6ff           call 0x80c3e0
// 008a8dc8  8b4804               mov ecx, dword ptr [eax + 4]
// 008a8dcb  8b10                 mov edx, dword ptr [eax]
// 008a8dcd  56                   push esi
// 008a8dce  51                   push ecx
// 008a8dcf  52                   push edx
// 008a8dd0  8bcf                 mov ecx, edi
// 008a8dd2  e8a9f8ffff           call 0x8a8680
// 008a8dd7  5f                   pop edi
// 008a8dd8  5e                   pop esi
// 008a8dd9  b801000000           mov eax, 1
// 008a8dde  5b                   pop ebx
// 008a8ddf  83c410               add esp, 0x10
// 008a8de2  c21400               ret 0x14
// 008a8de5  85c0                 test eax, eax
// 008a8de7  744b                 je 0x8a8e34
// 008a8de9  81fb0a020000         cmp ebx, 0x20a
// 008a8def  7543                 jne 0x8a8e34
// 008a8df1  8d7eac               lea edi, [esi - 0x54]
// 008a8df4  8bcf                 mov ecx, edi
// 008a8df6  e8951cf7ff           call 0x81aa90
// 008a8dfb  8bc8                 mov ecx, eax
// 008a8dfd  e8ee28f8ff           call 0x82b6f0
// 008a8e02  83780400             cmp dword ptr [eax + 4], 0
// 008a8e06  7f2c                 jg 0x8a8e34
// 008a8e08  8bcf                 mov ecx, edi
// 008a8e0a  e8c110f8ff           call 0x829ed0
// 008a8e0f  85c0                 test eax, eax
// 008a8e11  7521                 jne 0x8a8e34
// 008a8e13  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a8e17  66394102             cmp word ptr [ecx + 2], ax
// 008a8e1b  8bcf                 mov ecx, edi
// 008a8e1d  0f9ec0               setle al
// 008a8e20  50                   push eax
// 008a8e21  e8aad9ffff           call 0x8a67d0
// 008a8e26  5f                   pop edi
// 008a8e27  5e                   pop esi
// 008a8e28  b801000000           mov eax, 1
// 008a8e2d  5b                   pop ebx
// 008a8e2e  83c410               add esp, 0x10
// 008a8e31  c21400               ret 0x14
// 008a8e34  8b542430             mov edx, dword ptr [esp + 0x30]
// 008a8e38  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008a8e3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a8e40  52                   push edx
// 008a8e41  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a8e45  50                   push eax
// 008a8e46  51                   push ecx
// 008a8e47  53                   push ebx
// 008a8e48  52                   push edx
// 008a8e49  8bce                 mov ecx, esi
// 008a8e4b  e8d0c9ffff           call 0x8a5820
// 008a8e50  5f                   pop edi
// 008a8e51  5e                   pop esi
// 008a8e52  5b                   pop ebx
// 008a8e53  83c410               add esp, 0x10
// 008a8e56  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnHookMessage@CXTPRibbonBar@@UAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
