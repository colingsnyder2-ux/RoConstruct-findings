// roc 2010-06 0087d8b0  unit: CXTPPropertyGridPaintManager  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087d8b0
//
// 0087d8b0  53                   push ebx
// 0087d8b1  55                   push ebp
// 0087d8b2  56                   push esi
// 0087d8b3  8bd9                 mov ebx, ecx
// 0087d8b5  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 0087d8b8  57                   push edi
// 0087d8b9  e80244f8ff           call 0x801cc0
// 0087d8be  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0087d8c2  8b742418             mov esi, dword ptr [esp + 0x18]
// 0087d8c6  8be8                 mov ebp, eax
// 0087d8c8  85ff                 test edi, edi
// 0087d8ca  0f84f7000000         je 0x87d9c7
// 0087d8d0  83e801               sub eax, 1
// 0087d8d3  0f84b4000000         je 0x87d98d
// 0087d8d9  83e801               sub eax, 1
// 0087d8dc  747d                 je 0x87d95b
// 0087d8de  83e801               sub eax, 1
// 0087d8e1  0f85e0000000         jne 0x87d9c7
// 0087d8e7  e83462f6ff           call 0x7e3b20
// 0087d8ec  6a14                 push 0x14
// 0087d8ee  8bc8                 mov ecx, eax
// 0087d8f0  e8bb59f6ff           call 0x7e32b0
// 0087d8f5  8bd8                 mov ebx, eax
// 0087d8f7  e82462f6ff           call 0x7e3b20
// 0087d8fc  6a10                 push 0x10
// 0087d8fe  8bc8                 mov ecx, eax
// 0087d900  e8ab59f6ff           call 0x7e32b0
// 0087d905  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087d908  8b16                 mov edx, dword ptr [esi]
// 0087d90a  53                   push ebx
// 0087d90b  50                   push eax
// 0087d90c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0087d90f  2bc1                 sub eax, ecx
// 0087d911  50                   push eax
// 0087d912  8b4608               mov eax, dword ptr [esi + 8]
// 0087d915  2bc2                 sub eax, edx
// 0087d917  50                   push eax
// 0087d918  51                   push ecx
// 0087d919  52                   push edx
// 0087d91a  8bcf                 mov ecx, edi
// 0087d91c  e89dfc0f00           call 0x97d5be
// 0087d921  e8fa61f6ff           call 0x7e3b20
// 0087d926  6a0f                 push 0xf
// 0087d928  8bc8                 mov ecx, eax
// 0087d92a  e88159f6ff           call 0x7e32b0
// 0087d92f  8bd8                 mov ebx, eax
// 0087d931  e8ea61f6ff           call 0x7e3b20
// 0087d936  6a15                 push 0x15
// 0087d938  8bc8                 mov ecx, eax
// 0087d93a  e87159f6ff           call 0x7e32b0
// 0087d93f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087d942  8b16                 mov edx, dword ptr [esi]
// 0087d944  53                   push ebx
// 0087d945  50                   push eax
// 0087d946  8b460c               mov eax, dword ptr [esi + 0xc]
// 0087d949  2bc1                 sub eax, ecx
// 0087d94b  83e802               sub eax, 2
// 0087d94e  50                   push eax
// 0087d94f  8b4608               mov eax, dword ptr [esi + 8]
// 0087d952  2bc2                 sub eax, edx
// 0087d954  83e802               sub eax, 2
// 0087d957  41                   inc ecx
// 0087d958  42                   inc edx
// 0087d959  eb62                 jmp 0x87d9bd
// 0087d95b  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0087d95e  83f8ff               cmp eax, -1
// 0087d961  7505                 jne 0x87d968
// 0087d963  8b5340               mov edx, dword ptr [ebx + 0x40]
// 0087d966  eb02                 jmp 0x87d96a
// 0087d968  8bd0                 mov edx, eax
// 0087d96a  83f8ff               cmp eax, -1
// 0087d96d  7505                 jne 0x87d974
// 0087d96f  8b5b40               mov ebx, dword ptr [ebx + 0x40]
// 0087d972  eb02                 jmp 0x87d976
// 0087d974  8bd8                 mov ebx, eax
// 0087d976  8b4604               mov eax, dword ptr [esi + 4]
// 0087d979  8b0e                 mov ecx, dword ptr [esi]
// 0087d97b  52                   push edx
// 0087d97c  8b560c               mov edx, dword ptr [esi + 0xc]
// 0087d97f  53                   push ebx
// 0087d980  2bd0                 sub edx, eax
// 0087d982  52                   push edx
// 0087d983  8b5608               mov edx, dword ptr [esi + 8]
// 0087d986  2bd1                 sub edx, ecx
// 0087d988  52                   push edx
// 0087d989  50                   push eax
// 0087d98a  51                   push ecx
// 0087d98b  eb33                 jmp 0x87d9c0
// 0087d98d  e88e61f6ff           call 0x7e3b20
// 0087d992  6a06                 push 6
// 0087d994  8bc8                 mov ecx, eax
// 0087d996  e81559f6ff           call 0x7e32b0
// 0087d99b  8bd8                 mov ebx, eax
// 0087d99d  e87e61f6ff           call 0x7e3b20
// 0087d9a2  6a06                 push 6
// 0087d9a4  8bc8                 mov ecx, eax
// 0087d9a6  e80559f6ff           call 0x7e32b0
// 0087d9ab  8b4e04               mov ecx, dword ptr [esi + 4]
// 0087d9ae  8b16                 mov edx, dword ptr [esi]
// 0087d9b0  53                   push ebx
// 0087d9b1  50                   push eax
// 0087d9b2  8b460c               mov eax, dword ptr [esi + 0xc]
// 0087d9b5  2bc1                 sub eax, ecx
// 0087d9b7  50                   push eax
// 0087d9b8  8b4608               mov eax, dword ptr [esi + 8]
// 0087d9bb  2bc2                 sub eax, edx
// 0087d9bd  50                   push eax
// 0087d9be  51                   push ecx
// 0087d9bf  52                   push edx
// 0087d9c0  8bcf                 mov ecx, edi
// 0087d9c2  e8f7fb0f00           call 0x97d5be
// 0087d9c7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0087d9cc  744a                 je 0x87da18
// 0087d9ce  83fd03               cmp ebp, 3
// 0087d9d1  7517                 jne 0x87d9ea
// 0087d9d3  b802000000           mov eax, 2
// 0087d9d8  0106                 add dword ptr [esi], eax
// 0087d9da  014604               add dword ptr [esi + 4], eax
// 0087d9dd  294608               sub dword ptr [esi + 8], eax
// 0087d9e0  29460c               sub dword ptr [esi + 0xc], eax
// 0087d9e3  5f                   pop edi
// 0087d9e4  5e                   pop esi
// 0087d9e5  5d                   pop ebp
// 0087d9e6  5b                   pop ebx
// 0087d9e7  c20c00               ret 0xc
// 0087d9ea  83fd02               cmp ebp, 2
// 0087d9ed  7419                 je 0x87da08
// 0087d9ef  83fd01               cmp ebp, 1
// 0087d9f2  7414                 je 0x87da08
// 0087d9f4  33c0                 xor eax, eax
// 0087d9f6  0106                 add dword ptr [esi], eax
// 0087d9f8  014604               add dword ptr [esi + 4], eax
// 0087d9fb  294608               sub dword ptr [esi + 8], eax
// 0087d9fe  29460c               sub dword ptr [esi + 0xc], eax
// 0087da01  5f                   pop edi
// 0087da02  5e                   pop esi
// 0087da03  5d                   pop ebp
// 0087da04  5b                   pop ebx
// 0087da05  c20c00               ret 0xc
// 0087da08  b801000000           mov eax, 1
// 0087da0d  0106                 add dword ptr [esi], eax
// 0087da0f  014604               add dword ptr [esi + 4], eax
// 0087da12  294608               sub dword ptr [esi + 8], eax
// 0087da15  29460c               sub dword ptr [esi + 0xc], eax
// 0087da18  5f                   pop edi
// 0087da19  5e                   pop esi
// 0087da1a  5d                   pop ebp
// 0087da1b  5b                   pop ebx
// 0087da1c  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawPropertyGridBorder@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@AAUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
