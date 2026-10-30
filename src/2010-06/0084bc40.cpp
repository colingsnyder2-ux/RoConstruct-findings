// roc 2010-06 0084bc40  unit: CXTPRibbonBar  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084bc40
//
// 0084bc40  83ec10               sub esp, 0x10
// 0084bc43  53                   push ebx
// 0084bc44  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0084bc48  56                   push esi
// 0084bc49  8bf1                 mov esi, ecx
// 0084bc4b  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0084bc51  57                   push edi
// 0084bc52  85c0                 test eax, eax
// 0084bc54  0f849a000000         je 0x84bcf4
// 0084bc5a  83fb7b               cmp ebx, 0x7b
// 0084bc5d  7546                 jne 0x84bca5
// 0084bc5f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084bc63  8338ff               cmp dword ptr [eax], -1
// 0084bc66  752f                 jne 0x84bc97
// 0084bc68  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0084bc6b  8d7eac               lea edi, [esi - 0x54]
// 0084bc6e  51                   push ecx
// 0084bc6f  8bcf                 mov ecx, edi
// 0084bc71  e85ad7f6ff           call 0x7b93d0
// 0084bc76  8bf0                 mov esi, eax
// 0084bc78  85f6                 test esi, esi
// 0084bc7a  741b                 je 0x84bc97
// 0084bc7c  8d54240c             lea edx, [esp + 0xc]
// 0084bc80  52                   push edx
// 0084bc81  8bce                 mov ecx, esi
// 0084bc83  e868e0f5ff           call 0x7a9cf0
// 0084bc88  8b4804               mov ecx, dword ptr [eax + 4]
// 0084bc8b  8b10                 mov edx, dword ptr [eax]
// 0084bc8d  56                   push esi
// 0084bc8e  51                   push ecx
// 0084bc8f  52                   push edx
// 0084bc90  8bcf                 mov ecx, edi
// 0084bc92  e8a9f8ffff           call 0x84b540
// 0084bc97  5f                   pop edi
// 0084bc98  5e                   pop esi
// 0084bc99  b801000000           mov eax, 1
// 0084bc9e  5b                   pop ebx
// 0084bc9f  83c410               add esp, 0x10
// 0084bca2  c21400               ret 0x14
// 0084bca5  85c0                 test eax, eax
// 0084bca7  744b                 je 0x84bcf4
// 0084bca9  81fb0a020000         cmp ebx, 0x20a
// 0084bcaf  7543                 jne 0x84bcf4
// 0084bcb1  8d7eac               lea edi, [esi - 0x54]
// 0084bcb4  8bcf                 mov ecx, edi
// 0084bcb6  e815c9f6ff           call 0x7b85d0
// 0084bcbb  8bc8                 mov ecx, eax
// 0084bcbd  e87edff7ff           call 0x7c9c40
// 0084bcc2  83780400             cmp dword ptr [eax + 4], 0
// 0084bcc6  7f2c                 jg 0x84bcf4
// 0084bcc8  8bcf                 mov ecx, edi
// 0084bcca  e891c7f7ff           call 0x7c8460
// 0084bccf  85c0                 test eax, eax
// 0084bcd1  7521                 jne 0x84bcf4
// 0084bcd3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0084bcd7  66394102             cmp word ptr [ecx + 2], ax
// 0084bcdb  8bcf                 mov ecx, edi
// 0084bcdd  0f9ec0               setle al
// 0084bce0  50                   push eax
// 0084bce1  e8aad9ffff           call 0x849690
// 0084bce6  5f                   pop edi
// 0084bce7  5e                   pop esi
// 0084bce8  b801000000           mov eax, 1
// 0084bced  5b                   pop ebx
// 0084bcee  83c410               add esp, 0x10
// 0084bcf1  c21400               ret 0x14
// 0084bcf4  8b542430             mov edx, dword ptr [esp + 0x30]
// 0084bcf8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084bcfc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0084bd00  52                   push edx
// 0084bd01  8b542424             mov edx, dword ptr [esp + 0x24]
// 0084bd05  50                   push eax
// 0084bd06  51                   push ecx
// 0084bd07  53                   push ebx
// 0084bd08  52                   push edx
// 0084bd09  8bce                 mov ecx, esi
// 0084bd0b  e8d0c9ffff           call 0x8486e0
// 0084bd10  5f                   pop edi
// 0084bd11  5e                   pop esi
// 0084bd12  5b                   pop ebx
// 0084bd13  83c410               add esp, 0x10
// 0084bd16  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnHookMessage@CXTPRibbonBar@@UAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
