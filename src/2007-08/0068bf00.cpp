// from server: 100% by auto
// roc 2007-08 0068bf00  unit: CXTPTabClientWnd  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068bf00
//
// 0068bf00  8b442404             mov eax, dword ptr [esp + 4]
// 0068bf04  85c0                 test eax, eax
// 0068bf06  7449                 je 0x68bf51
// 0068bf08  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0068bf0b  8b5060               mov edx, dword ptr [eax + 0x60]
// 0068bf0e  8d4101               lea eax, [ecx + 1]
// 0068bf11  85c0                 test eax, eax
// 0068bf13  7c11                 jl 0x68bf26
// 0068bf15  3b425c               cmp eax, dword ptr [edx + 0x5c]
// 0068bf18  7d0c                 jge 0x68bf26
// 0068bf1a  56                   push esi
// 0068bf1b  8b7258               mov esi, dword ptr [edx + 0x58]
// 0068bf1e  8b0486               mov eax, dword ptr [esi + eax*4]
// 0068bf21  85c0                 test eax, eax
// 0068bf23  5e                   pop esi
// 0068bf24  7516                 jne 0x68bf3c
// 0068bf26  8d41ff               lea eax, [ecx - 1]
// 0068bf29  85c0                 test eax, eax
// 0068bf2b  7c24                 jl 0x68bf51
// 0068bf2d  3b425c               cmp eax, dword ptr [edx + 0x5c]
// 0068bf30  7d1f                 jge 0x68bf51
// 0068bf32  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 0068bf35  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0068bf38  85c0                 test eax, eax
// 0068bf3a  7415                 je 0x68bf51
// 0068bf3c  8bc8                 mov ecx, eax
// 0068bf3e  e82d120700           call 0x6fd170
// 0068bf43  85c0                 test eax, eax
// 0068bf45  740a                 je 0x68bf51
// 0068bf47  89442404             mov dword ptr [esp + 4], eax
// 0068bf4b  ff25b8ee7700         jmp dword ptr [0x77eeb8]
// 0068bf51  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?ActivateNextItem@CXTPTabClientWnd@@IAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
