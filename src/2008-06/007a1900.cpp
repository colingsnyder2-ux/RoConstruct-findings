// from server: 100% by auto
// roc 2008-06 007a1900  unit: CXTButtonTheme  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1900
//
// 007a1900  53                   push ebx
// 007a1901  56                   push esi
// 007a1902  57                   push edi
// 007a1903  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007a1907  8bf1                 mov esi, ecx
// 007a1909  8b06                 mov eax, dword ptr [esi]
// 007a190b  8b5014               mov edx, dword ptr [eax + 0x14]
// 007a190e  57                   push edi
// 007a190f  ffd2                 call edx
// 007a1911  8a5c2410             mov bl, byte ptr [esp + 0x10]
// 007a1915  85c0                 test eax, eax
// 007a1917  747c                 je 0x7a1995
// 007a1919  55                   push ebp
// 007a191a  8bcf                 mov ecx, edi
// 007a191c  bd01000000           mov ebp, 1
// 007a1921  e81a0affff           call 0x792340
// 007a1926  3c01                 cmp al, 1
// 007a1928  7505                 jne 0x7a192f
// 007a192a  bd05000000           mov ebp, 5
// 007a192f  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 007a1936  750b                 jne 0x7a1943
// 007a1938  ff15ac2d8000         call dword ptr [0x802dac]
// 007a193e  3b4720               cmp eax, dword ptr [edi + 0x20]
// 007a1941  7505                 jne 0x7a1948
// 007a1943  bd02000000           mov ebp, 2
// 007a1948  f6c301               test bl, 1
// 007a194b  7506                 jne 0x7a1953
// 007a194d  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 007a1951  7405                 je 0x7a1958
// 007a1953  bd03000000           mov ebp, 3
// 007a1958  f6c304               test bl, 4
// 007a195b  7405                 je 0x7a1962
// 007a195d  bd04000000           mov ebp, 4
// 007a1962  8b4634               mov eax, dword ptr [esi + 0x34]
// 007a1965  83f8ff               cmp eax, -1
// 007a1968  7503                 jne 0x7a196d
// 007a196a  8b4630               mov eax, dword ptr [esi + 0x30]
// 007a196d  8d4c2418             lea ecx, [esp + 0x18]
// 007a1971  51                   push ecx
// 007a1972  68db0e0000           push 0xedb
// 007a1977  55                   push ebp
// 007a1978  6a01                 push 1
// 007a197a  8d4e74               lea ecx, [esi + 0x74]
// 007a197d  89442428             mov dword ptr [esp + 0x28], eax
// 007a1981  e89a68f7ff           call 0x718220
// 007a1986  5d                   pop ebp
// 007a1987  85c0                 test eax, eax
// 007a1989  7c0a                 jl 0x7a1995
// 007a198b  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a198f  5f                   pop edi
// 007a1990  5e                   pop esi
// 007a1991  5b                   pop ebx
// 007a1992  c20800               ret 8
// 007a1995  f6c304               test bl, 4
// 007a1998  7411                 je 0x7a19ab
// 007a199a  8b4640               mov eax, dword ptr [esi + 0x40]
// 007a199d  83f8ff               cmp eax, -1
// 007a19a0  7514                 jne 0x7a19b6
// 007a19a2  8b463c               mov eax, dword ptr [esi + 0x3c]
// 007a19a5  5f                   pop edi
// 007a19a6  5e                   pop esi
// 007a19a7  5b                   pop ebx
// 007a19a8  c20800               ret 8
// 007a19ab  8b4634               mov eax, dword ptr [esi + 0x34]
// 007a19ae  83f8ff               cmp eax, -1
// 007a19b1  7503                 jne 0x7a19b6
// 007a19b3  8b4630               mov eax, dword ptr [esi + 0x30]
// 007a19b6  5f                   pop edi
// 007a19b7  5e                   pop esi
// 007a19b8  5b                   pop ebx
// 007a19b9  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetTextColor@CXTButtonTheme@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
