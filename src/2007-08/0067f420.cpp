// from server: 100% by auto
// roc 2007-08 0067f420  unit: CXTPControlSelector  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f420
//
// 0067f420  53                   push ebx
// 0067f421  55                   push ebp
// 0067f422  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0067f426  56                   push esi
// 0067f427  8b742410             mov esi, dword ptr [esp + 0x10]
// 0067f42b  57                   push edi
// 0067f42c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0067f430  8d5f01               lea ebx, [edi + 1]
// 0067f433  53                   push ebx
// 0067f434  8d4501               lea eax, [ebp + 1]
// 0067f437  50                   push eax
// 0067f438  57                   push edi
// 0067f439  55                   push ebp
// 0067f43a  8bce                 mov ecx, esi
// 0067f43c  e833940b00           call 0x738874
// 0067f441  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067f445  53                   push ebx
// 0067f446  50                   push eax
// 0067f447  8d48ff               lea ecx, [eax - 1]
// 0067f44a  57                   push edi
// 0067f44b  894c2420             mov dword ptr [esp + 0x20], ecx
// 0067f44f  51                   push ecx
// 0067f450  8bce                 mov ecx, esi
// 0067f452  e81d940b00           call 0x738874
// 0067f457  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0067f45b  57                   push edi
// 0067f45c  8d4501               lea eax, [ebp + 1]
// 0067f45f  50                   push eax
// 0067f460  8d5fff               lea ebx, [edi - 1]
// 0067f463  53                   push ebx
// 0067f464  55                   push ebp
// 0067f465  8bce                 mov ecx, esi
// 0067f467  e808940b00           call 0x738874
// 0067f46c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067f470  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0067f474  57                   push edi
// 0067f475  50                   push eax
// 0067f476  53                   push ebx
// 0067f477  51                   push ecx
// 0067f478  8bce                 mov ecx, esi
// 0067f47a  e8f5930b00           call 0x738874
// 0067f47f  5f                   pop edi
// 0067f480  5e                   pop esi
// 0067f481  5d                   pop ebp
// 0067f482  5b                   pop ebx
// 0067f483  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2003Theme.cpp (function ?ExcludeCorners@CXTPOffice2003Theme@XTPPaintThemes@@QAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2003Theme.cpp
