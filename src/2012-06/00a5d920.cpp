// roc 2012-06 00a5d920  unit: CXTPPropertyGridInplaceList  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5d920
//
// 00a5d920  83ec10               sub esp, 0x10
// 00a5d923  53                   push ebx
// 00a5d924  56                   push esi
// 00a5d925  57                   push edi
// 00a5d926  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a5d92a  8b4718               mov eax, dword ptr [edi + 0x18]
// 00a5d92d  50                   push eax
// 00a5d92e  8bf1                 mov esi, ecx
// 00a5d930  e83dbc0300           call 0xa99572
// 00a5d935  8d4f1c               lea ecx, [edi + 0x1c]
// 00a5d938  51                   push ecx
// 00a5d939  8d542410             lea edx, [esp + 0x10]
// 00a5d93d  52                   push edx
// 00a5d93e  8bd8                 mov ebx, eax
// 00a5d940  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a5d946  8b4708               mov eax, dword ptr [edi + 8]
// 00a5d949  6a00                 push 0
// 00a5d94b  50                   push eax
// 00a5d94c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5d94f  6899010000           push 0x199
// 00a5d954  50                   push eax
// 00a5d955  ff15043cb200         call dword ptr [0xb23c04]
// 00a5d95b  837e5400             cmp dword ptr [esi + 0x54], 0
// 00a5d95f  7433                 je 0xa5d994
// 00a5d961  8b5710               mov edx, dword ptr [edi + 0x10]
// 00a5d964  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a5d968  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a5d96b  8b31                 mov esi, dword ptr [ecx]
// 00a5d96d  83e201               and edx, 1
// 00a5d970  52                   push edx
// 00a5d971  83ec10               sub esp, 0x10
// 00a5d974  8bd4                 mov edx, esp
// 00a5d976  893a                 mov dword ptr [edx], edi
// 00a5d978  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a5d97c  897a04               mov dword ptr [edx + 4], edi
// 00a5d97f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a5d983  897a08               mov dword ptr [edx + 8], edi
// 00a5d986  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00a5d98a  50                   push eax
// 00a5d98b  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00a5d98e  53                   push ebx
// 00a5d98f  897a0c               mov dword ptr [edx + 0xc], edi
// 00a5d992  ffd0                 call eax
// 00a5d994  5f                   pop edi
// 00a5d995  5e                   pop esi
// 00a5d996  5b                   pop ebx
// 00a5d997  83c410               add esp, 0x10
// 00a5d99a  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?DrawItem@CXTPPropertyGridInplaceList@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
