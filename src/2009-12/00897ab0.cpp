// roc 2009-12 00897ab0  unit: CXTPRibbonBar  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897ab0
//
// 00897ab0  83ec10               sub esp, 0x10
// 00897ab3  53                   push ebx
// 00897ab4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00897ab8  56                   push esi
// 00897ab9  8bf1                 mov esi, ecx
// 00897abb  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00897ac1  57                   push edi
// 00897ac2  85c0                 test eax, eax
// 00897ac4  0f849a000000         je 0x897b64
// 00897aca  83fb7b               cmp ebx, 0x7b
// 00897acd  7546                 jne 0x897b15
// 00897acf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00897ad3  8338ff               cmp dword ptr [eax], -1
// 00897ad6  752f                 jne 0x897b07
// 00897ad8  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00897adb  8d7eac               lea edi, [esi - 0x54]
// 00897ade  51                   push ecx
// 00897adf  8bcf                 mov ecx, edi
// 00897ae1  e87ad7f6ff           call 0x805260
// 00897ae6  8bf0                 mov esi, eax
// 00897ae8  85f6                 test esi, esi
// 00897aea  741b                 je 0x897b07
// 00897aec  8d54240c             lea edx, [esp + 0xc]
// 00897af0  52                   push edx
// 00897af1  8bce                 mov ecx, esi
// 00897af3  e8b8e0f5ff           call 0x7f5bb0
// 00897af8  8b4804               mov ecx, dword ptr [eax + 4]
// 00897afb  8b10                 mov edx, dword ptr [eax]
// 00897afd  56                   push esi
// 00897afe  51                   push ecx
// 00897aff  52                   push edx
// 00897b00  8bcf                 mov ecx, edi
// 00897b02  e8a9f8ffff           call 0x8973b0
// 00897b07  5f                   pop edi
// 00897b08  5e                   pop esi
// 00897b09  b801000000           mov eax, 1
// 00897b0e  5b                   pop ebx
// 00897b0f  83c410               add esp, 0x10
// 00897b12  c21400               ret 0x14
// 00897b15  85c0                 test eax, eax
// 00897b17  744b                 je 0x897b64
// 00897b19  81fb0a020000         cmp ebx, 0x20a
// 00897b1f  7543                 jne 0x897b64
// 00897b21  8d7eac               lea edi, [esi - 0x54]
// 00897b24  8bcf                 mov ecx, edi
// 00897b26  e8a5c9f6ff           call 0x8044d0
// 00897b2b  8bc8                 mov ecx, eax
// 00897b2d  e83ee0f7ff           call 0x815b70
// 00897b32  83780400             cmp dword ptr [eax + 4], 0
// 00897b36  7f2c                 jg 0x897b64
// 00897b38  8bcf                 mov ecx, edi
// 00897b3a  e841c8f7ff           call 0x814380
// 00897b3f  85c0                 test eax, eax
// 00897b41  7521                 jne 0x897b64
// 00897b43  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00897b47  66394102             cmp word ptr [ecx + 2], ax
// 00897b4b  8bcf                 mov ecx, edi
// 00897b4d  0f9ec0               setle al
// 00897b50  50                   push eax
// 00897b51  e8aad9ffff           call 0x895500
// 00897b56  5f                   pop edi
// 00897b57  5e                   pop esi
// 00897b58  b801000000           mov eax, 1
// 00897b5d  5b                   pop ebx
// 00897b5e  83c410               add esp, 0x10
// 00897b61  c21400               ret 0x14
// 00897b64  8b542430             mov edx, dword ptr [esp + 0x30]
// 00897b68  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00897b6c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00897b70  52                   push edx
// 00897b71  8b542424             mov edx, dword ptr [esp + 0x24]
// 00897b75  50                   push eax
// 00897b76  51                   push ecx
// 00897b77  53                   push ebx
// 00897b78  52                   push edx
// 00897b79  8bce                 mov ecx, esi
// 00897b7b  e8d0c9ffff           call 0x894550
// 00897b80  5f                   pop edi
// 00897b81  5e                   pop esi
// 00897b82  5b                   pop ebx
// 00897b83  83c410               add esp, 0x10
// 00897b86  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnHookMessage@CXTPRibbonBar@@UAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
