// roc 2011-06 00866800  unit: CXTPTabClientWnd  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00866800
//
// 00866800  8b442404             mov eax, dword ptr [esp + 4]
// 00866804  85c0                 test eax, eax
// 00866806  7449                 je 0x866851
// 00866808  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0086680b  8b5060               mov edx, dword ptr [eax + 0x60]
// 0086680e  8d4101               lea eax, [ecx + 1]
// 00866811  85c0                 test eax, eax
// 00866813  7c11                 jl 0x866826
// 00866815  3b425c               cmp eax, dword ptr [edx + 0x5c]
// 00866818  7d0c                 jge 0x866826
// 0086681a  56                   push esi
// 0086681b  8b7258               mov esi, dword ptr [edx + 0x58]
// 0086681e  8b0486               mov eax, dword ptr [esi + eax*4]
// 00866821  5e                   pop esi
// 00866822  85c0                 test eax, eax
// 00866824  7516                 jne 0x86683c
// 00866826  8d41ff               lea eax, [ecx - 1]
// 00866829  85c0                 test eax, eax
// 0086682b  7c24                 jl 0x866851
// 0086682d  3b425c               cmp eax, dword ptr [edx + 0x5c]
// 00866830  7d1f                 jge 0x866851
// 00866832  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 00866835  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00866838  85c0                 test eax, eax
// 0086683a  7415                 je 0x866851
// 0086683c  8bc8                 mov ecx, eax
// 0086683e  e87d560000           call 0x86bec0
// 00866843  85c0                 test eax, eax
// 00866845  740a                 je 0x866851
// 00866847  89442404             mov dword ptr [esp + 4], eax
// 0086684b  ff25941aa400         jmp dword ptr [0xa41a94]
// 00866851  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?ActivateNextItem@CXTPTabClientWnd@@IAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
