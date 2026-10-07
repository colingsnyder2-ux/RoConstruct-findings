// roc 2008-06 00703c30  unit: CXTPTabClientWnd  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703c30
//
// 00703c30  8b442404             mov eax, dword ptr [esp + 4]
// 00703c34  85c0                 test eax, eax
// 00703c36  7449                 je 0x703c81
// 00703c38  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00703c3b  8b5060               mov edx, dword ptr [eax + 0x60]
// 00703c3e  8d4101               lea eax, [ecx + 1]
// 00703c41  85c0                 test eax, eax
// 00703c43  7c11                 jl 0x703c56
// 00703c45  3b425c               cmp eax, dword ptr [edx + 0x5c]
// 00703c48  7d0c                 jge 0x703c56
// 00703c4a  56                   push esi
// 00703c4b  8b7258               mov esi, dword ptr [edx + 0x58]
// 00703c4e  8b0486               mov eax, dword ptr [esi + eax*4]
// 00703c51  5e                   pop esi
// 00703c52  85c0                 test eax, eax
// 00703c54  7516                 jne 0x703c6c
// 00703c56  8d41ff               lea eax, [ecx - 1]
// 00703c59  85c0                 test eax, eax
// 00703c5b  7c24                 jl 0x703c81
// 00703c5d  3b425c               cmp eax, dword ptr [edx + 0x5c]
// 00703c60  7d1f                 jge 0x703c81
// 00703c62  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 00703c65  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00703c68  85c0                 test eax, eax
// 00703c6a  7415                 je 0x703c81
// 00703c6c  8bc8                 mov ecx, eax
// 00703c6e  e80d99f0ff           call 0x60d580
// 00703c73  85c0                 test eax, eax
// 00703c75  740a                 je 0x703c81
// 00703c77  89442404             mov dword ptr [esp + 4], eax
// 00703c7b  ff25c42b8000         jmp dword ptr [0x802bc4]
// 00703c81  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?ActivateNextItem@CXTPTabClientWnd@@IAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
