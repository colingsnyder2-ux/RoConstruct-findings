// roc 2009-12 0083e020  unit: CXTPCustomizeSheet  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083e020
//
// 0083e020  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083e026  8b4058               mov eax, dword ptr [eax + 0x58]
// 0083e029  85c0                 test eax, eax
// 0083e02b  747a                 je 0x83e0a7
// 0083e02d  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 0083e033  83f902               cmp ecx, 2
// 0083e036  7413                 je 0x83e04b
// 0083e038  83f903               cmp ecx, 3
// 0083e03b  740e                 je 0x83e04b
// 0083e03d  83f904               cmp ecx, 4
// 0083e040  7409                 je 0x83e04b
// 0083e042  83f901               cmp ecx, 1
// 0083e045  7404                 je 0x83e04b
// 0083e047  33d2                 xor edx, edx
// 0083e049  eb05                 jmp 0x83e050
// 0083e04b  ba01000000           mov edx, 1
// 0083e050  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 0083e056  85c9                 test ecx, ecx
// 0083e058  7404                 je 0x83e05e
// 0083e05a  8bc1                 mov eax, ecx
// 0083e05c  eb2a                 jmp 0x83e088
// 0083e05e  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 0083e064  85c9                 test ecx, ecx
// 0083e066  7e04                 jle 0x83e06c
// 0083e068  8bc1                 mov eax, ecx
// 0083e06a  eb1c                 jmp 0x83e088
// 0083e06c  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 0083e072  85c9                 test ecx, ecx
// 0083e074  740c                 je 0x83e082
// 0083e076  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0083e079  85c0                 test eax, eax
// 0083e07b  7f0f                 jg 0x83e08c
// 0083e07d  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0083e080  eb06                 jmp 0x83e088
// 0083e082  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0083e088  85c0                 test eax, eax
// 0083e08a  7e0b                 jle 0x83e097
// 0083e08c  85d2                 test edx, edx
// 0083e08e  7407                 je 0x83e097
// 0083e090  b801000000           mov eax, 1
// 0083e095  eb02                 jmp 0x83e099
// 0083e097  33c0                 xor eax, eax
// 0083e099  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0083e09d  8b11                 mov edx, dword ptr [ecx]
// 0083e09f  89442404             mov dword ptr [esp + 4], eax
// 0083e0a3  8b02                 mov eax, dword ptr [edx]
// 0083e0a5  ffe0                 jmp eax
// 0083e0a7  c20400               ret 4
// copied from an identical function in another client (function ?OnUpdateCustomizeCopyImage@CXTPCustomizeSheet@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp