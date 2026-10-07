// roc 2012-06 00a69d30  unit: CXTCaptionButtonTheme  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69d30
//
// 00a69d30  53                   push ebx
// 00a69d31  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00a69d35  56                   push esi
// 00a69d36  8bb3ac000000         mov esi, dword ptr [ebx + 0xac]
// 00a69d3c  57                   push edi
// 00a69d3d  8bf9                 mov edi, ecx
// 00a69d3f  85f6                 test esi, esi
// 00a69d41  7504                 jne 0xa69d47
// 00a69d43  33c0                 xor eax, eax
// 00a69d45  eb03                 jmp 0xa69d4a
// 00a69d47  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a69d4a  50                   push eax
// 00a69d4b  ff15143bb200         call dword ptr [0xb23b14]
// 00a69d51  85c0                 test eax, eax
// 00a69d53  740d                 je 0xa69d62
// 00a69d55  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00a69d58  8b07                 mov eax, dword ptr [edi]
// 00a69d5a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 00a69d5d  51                   push ecx
// 00a69d5e  8bcf                 mov ecx, edi
// 00a69d60  ffd2                 call edx
// 00a69d62  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a69d66  53                   push ebx
// 00a69d67  50                   push eax
// 00a69d68  8bcf                 mov ecx, edi
// 00a69d6a  e8d10c0100           call 0xa7aa40
// 00a69d6f  5f                   pop edi
// 00a69d70  5e                   pop esi
// 00a69d71  5b                   pop ebx
// 00a69d72  c20800               ret 8
// library xtp-13.2.1/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionTheme.cpp
