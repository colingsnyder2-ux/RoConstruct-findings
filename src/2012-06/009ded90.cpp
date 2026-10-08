// from server: 100% by auto
// roc 2012-06 009ded90  unit: CXTPTabClientWnd  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ded90
//
// 009ded90  8b442404             mov eax, dword ptr [esp + 4]
// 009ded94  85c0                 test eax, eax
// 009ded96  7449                 je 0x9dede1
// 009ded98  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 009ded9b  8b5060               mov edx, dword ptr [eax + 0x60]
// 009ded9e  8d4101               lea eax, [ecx + 1]
// 009deda1  85c0                 test eax, eax
// 009deda3  7c11                 jl 0x9dedb6
// 009deda5  3b425c               cmp eax, dword ptr [edx + 0x5c]
// 009deda8  7d0c                 jge 0x9dedb6
// 009dedaa  56                   push esi
// 009dedab  8b7258               mov esi, dword ptr [edx + 0x58]
// 009dedae  8b0486               mov eax, dword ptr [esi + eax*4]
// 009dedb1  5e                   pop esi
// 009dedb2  85c0                 test eax, eax
// 009dedb4  7516                 jne 0x9dedcc
// 009dedb6  8d41ff               lea eax, [ecx - 1]
// 009dedb9  85c0                 test eax, eax
// 009dedbb  7c24                 jl 0x9dede1
// 009dedbd  3b425c               cmp eax, dword ptr [edx + 0x5c]
// 009dedc0  7d1f                 jge 0x9dede1
// 009dedc2  8b4a58               mov ecx, dword ptr [edx + 0x58]
// 009dedc5  8b0481               mov eax, dword ptr [ecx + eax*4]
// 009dedc8  85c0                 test eax, eax
// 009dedca  7415                 je 0x9dede1
// 009dedcc  8bc8                 mov ecx, eax
// 009dedce  e8dd54fdff           call 0x9b42b0
// 009dedd3  85c0                 test eax, eax
// 009dedd5  740a                 je 0x9dede1
// 009dedd7  89442404             mov dword ptr [esp + 4], eax
// 009deddb  ff25a03cb200         jmp dword ptr [0xb23ca0]
// 009dede1  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?ActivateNextItem@CXTPTabClientWnd@@IAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
