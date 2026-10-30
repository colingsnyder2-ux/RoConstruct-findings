// roc 2012-06 00a598a0  unit: CXTPPropertyGridPaintManager  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a598a0
//
// 00a598a0  53                   push ebx
// 00a598a1  55                   push ebp
// 00a598a2  56                   push esi
// 00a598a3  8bd9                 mov ebx, ecx
// 00a598a5  8b4b60               mov ecx, dword ptr [ebx + 0x60]
// 00a598a8  57                   push edi
// 00a598a9  e84280f8ff           call 0x9e18f0
// 00a598ae  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a598b2  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a598b6  8be8                 mov ebp, eax
// 00a598b8  85ff                 test edi, edi
// 00a598ba  0f84f7000000         je 0xa599b7
// 00a598c0  83e801               sub eax, 1
// 00a598c3  0f84b4000000         je 0xa5997d
// 00a598c9  83e801               sub eax, 1
// 00a598cc  747d                 je 0xa5994b
// 00a598ce  83e801               sub eax, 1
// 00a598d1  0f85e0000000         jne 0xa599b7
// 00a598d7  e8843ff6ff           call 0x9bd860
// 00a598dc  6a14                 push 0x14
// 00a598de  8bc8                 mov ecx, eax
// 00a598e0  e8fb36f6ff           call 0x9bcfe0
// 00a598e5  8bd8                 mov ebx, eax
// 00a598e7  e8743ff6ff           call 0x9bd860
// 00a598ec  6a10                 push 0x10
// 00a598ee  8bc8                 mov ecx, eax
// 00a598f0  e8eb36f6ff           call 0x9bcfe0
// 00a598f5  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a598f8  8b16                 mov edx, dword ptr [esi]
// 00a598fa  53                   push ebx
// 00a598fb  50                   push eax
// 00a598fc  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a598ff  2bc1                 sub eax, ecx
// 00a59901  50                   push eax
// 00a59902  8b4608               mov eax, dword ptr [esi + 8]
// 00a59905  2bc2                 sub eax, edx
// 00a59907  50                   push eax
// 00a59908  51                   push ecx
// 00a59909  52                   push edx
// 00a5990a  8bcf                 mov ecx, edi
// 00a5990c  e899030400           call 0xa99caa
// 00a59911  e84a3ff6ff           call 0x9bd860
// 00a59916  6a0f                 push 0xf
// 00a59918  8bc8                 mov ecx, eax
// 00a5991a  e8c136f6ff           call 0x9bcfe0
// 00a5991f  8bd8                 mov ebx, eax
// 00a59921  e83a3ff6ff           call 0x9bd860
// 00a59926  6a15                 push 0x15
// 00a59928  8bc8                 mov ecx, eax
// 00a5992a  e8b136f6ff           call 0x9bcfe0
// 00a5992f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a59932  8b16                 mov edx, dword ptr [esi]
// 00a59934  53                   push ebx
// 00a59935  50                   push eax
// 00a59936  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a59939  2bc1                 sub eax, ecx
// 00a5993b  83e802               sub eax, 2
// 00a5993e  50                   push eax
// 00a5993f  8b4608               mov eax, dword ptr [esi + 8]
// 00a59942  2bc2                 sub eax, edx
// 00a59944  83e802               sub eax, 2
// 00a59947  41                   inc ecx
// 00a59948  42                   inc edx
// 00a59949  eb62                 jmp 0xa599ad
// 00a5994b  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00a5994e  83f8ff               cmp eax, -1
// 00a59951  7505                 jne 0xa59958
// 00a59953  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00a59956  eb02                 jmp 0xa5995a
// 00a59958  8bd0                 mov edx, eax
// 00a5995a  83f8ff               cmp eax, -1
// 00a5995d  7505                 jne 0xa59964
// 00a5995f  8b5b40               mov ebx, dword ptr [ebx + 0x40]
// 00a59962  eb02                 jmp 0xa59966
// 00a59964  8bd8                 mov ebx, eax
// 00a59966  8b4604               mov eax, dword ptr [esi + 4]
// 00a59969  8b0e                 mov ecx, dword ptr [esi]
// 00a5996b  52                   push edx
// 00a5996c  8b560c               mov edx, dword ptr [esi + 0xc]
// 00a5996f  53                   push ebx
// 00a59970  2bd0                 sub edx, eax
// 00a59972  52                   push edx
// 00a59973  8b5608               mov edx, dword ptr [esi + 8]
// 00a59976  2bd1                 sub edx, ecx
// 00a59978  52                   push edx
// 00a59979  50                   push eax
// 00a5997a  51                   push ecx
// 00a5997b  eb33                 jmp 0xa599b0
// 00a5997d  e8de3ef6ff           call 0x9bd860
// 00a59982  6a06                 push 6
// 00a59984  8bc8                 mov ecx, eax
// 00a59986  e85536f6ff           call 0x9bcfe0
// 00a5998b  8bd8                 mov ebx, eax
// 00a5998d  e8ce3ef6ff           call 0x9bd860
// 00a59992  6a06                 push 6
// 00a59994  8bc8                 mov ecx, eax
// 00a59996  e84536f6ff           call 0x9bcfe0
// 00a5999b  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a5999e  8b16                 mov edx, dword ptr [esi]
// 00a599a0  53                   push ebx
// 00a599a1  50                   push eax
// 00a599a2  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a599a5  2bc1                 sub eax, ecx
// 00a599a7  50                   push eax
// 00a599a8  8b4608               mov eax, dword ptr [esi + 8]
// 00a599ab  2bc2                 sub eax, edx
// 00a599ad  50                   push eax
// 00a599ae  51                   push ecx
// 00a599af  52                   push edx
// 00a599b0  8bcf                 mov ecx, edi
// 00a599b2  e8f3020400           call 0xa99caa
// 00a599b7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00a599bc  744a                 je 0xa59a08
// 00a599be  83fd03               cmp ebp, 3
// 00a599c1  7517                 jne 0xa599da
// 00a599c3  b802000000           mov eax, 2
// 00a599c8  0106                 add dword ptr [esi], eax
// 00a599ca  014604               add dword ptr [esi + 4], eax
// 00a599cd  294608               sub dword ptr [esi + 8], eax
// 00a599d0  29460c               sub dword ptr [esi + 0xc], eax
// 00a599d3  5f                   pop edi
// 00a599d4  5e                   pop esi
// 00a599d5  5d                   pop ebp
// 00a599d6  5b                   pop ebx
// 00a599d7  c20c00               ret 0xc
// 00a599da  83fd02               cmp ebp, 2
// 00a599dd  7419                 je 0xa599f8
// 00a599df  83fd01               cmp ebp, 1
// 00a599e2  7414                 je 0xa599f8
// 00a599e4  33c0                 xor eax, eax
// 00a599e6  0106                 add dword ptr [esi], eax
// 00a599e8  014604               add dword ptr [esi + 4], eax
// 00a599eb  294608               sub dword ptr [esi + 8], eax
// 00a599ee  29460c               sub dword ptr [esi + 0xc], eax
// 00a599f1  5f                   pop edi
// 00a599f2  5e                   pop esi
// 00a599f3  5d                   pop ebp
// 00a599f4  5b                   pop ebx
// 00a599f5  c20c00               ret 0xc
// 00a599f8  b801000000           mov eax, 1
// 00a599fd  0106                 add dword ptr [esi], eax
// 00a599ff  014604               add dword ptr [esi + 4], eax
// 00a59a02  294608               sub dword ptr [esi + 8], eax
// 00a59a05  29460c               sub dword ptr [esi + 0xc], eax
// 00a59a08  5f                   pop edi
// 00a59a09  5e                   pop esi
// 00a59a0a  5d                   pop ebp
// 00a59a0b  5b                   pop ebx
// 00a59a0c  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?DrawPropertyGridBorder@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@AAUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
