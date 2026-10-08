// from server: 100% by auto
// roc 2012-06 009e1920  unit: CXTPPropertyGridToolBar  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e1920
//
// 009e1920  8b442408             mov eax, dword ptr [esp + 8]
// 009e1924  53                   push ebx
// 009e1925  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009e1929  c70000000000         mov dword ptr [eax], 0
// 009e192f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 009e1932  83e801               sub eax, 1
// 009e1935  7556                 jne 0x9e198d
// 009e1937  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 009e193a  56                   push esi
// 009e193b  57                   push edi
// 009e193c  8b3d503ab200         mov edi, dword ptr [0xb23a50]
// 009e1942  51                   push ecx
// 009e1943  ffd7                 call edi
// 009e1945  50                   push eax
// 009e1946  e81b0dfaff           call 0x982666
// 009e194b  8bf0                 mov esi, eax
// 009e194d  8b5620               mov edx, dword ptr [esi + 0x20]
// 009e1950  52                   push edx
// 009e1951  ffd7                 call edi
// 009e1953  50                   push eax
// 009e1954  e80d0dfaff           call 0x982666
// 009e1959  8b7620               mov esi, dword ptr [esi + 0x20]
// 009e195c  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 009e195f  8b4020               mov eax, dword ptr [eax + 0x20]
// 009e1962  56                   push esi
// 009e1963  51                   push ecx
// 009e1964  6838010000           push 0x138
// 009e1969  50                   push eax
// 009e196a  ff15043cb200         call dword ptr [0xb23c04]
// 009e1970  5f                   pop edi
// 009e1971  5e                   pop esi
// 009e1972  85c0                 test eax, eax
// 009e1974  7508                 jne 0x9e197e
// 009e1976  6a0f                 push 0xf
// 009e1978  ff15783cb200         call dword ptr [0xb23c78]
// 009e197e  8b5310               mov edx, dword ptr [ebx + 0x10]
// 009e1981  50                   push eax
// 009e1982  8d4b14               lea ecx, [ebx + 0x14]
// 009e1985  51                   push ecx
// 009e1986  52                   push edx
// 009e1987  ff157c3cb200         call dword ptr [0xb23c7c]
// 009e198d  5b                   pop ebx
// 009e198e  c20800               ret 8
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?OnCustomDraw@CXTPPropertyGridToolBar@@IAEXPAUtagNMHDR@@PAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
