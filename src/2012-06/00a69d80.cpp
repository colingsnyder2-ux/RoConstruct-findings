// roc 2012-06 00a69d80  unit: CXTCaptionButtonTheme  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69d80
//
// 00a69d80  8b442408             mov eax, dword ptr [esp + 8]
// 00a69d84  56                   push esi
// 00a69d85  8bb0ac000000         mov esi, dword ptr [eax + 0xac]
// 00a69d8b  57                   push edi
// 00a69d8c  8bf9                 mov edi, ecx
// 00a69d8e  85f6                 test esi, esi
// 00a69d90  7504                 jne 0xa69d96
// 00a69d92  33c0                 xor eax, eax
// 00a69d94  eb03                 jmp 0xa69d99
// 00a69d96  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a69d99  50                   push eax
// 00a69d9a  ff15143bb200         call dword ptr [0xb23b14]
// 00a69da0  85c0                 test eax, eax
// 00a69da2  7408                 je 0xa69dac
// 00a69da4  8b4678               mov eax, dword ptr [esi + 0x78]
// 00a69da7  5f                   pop edi
// 00a69da8  5e                   pop esi
// 00a69da9  c20800               ret 8
// 00a69dac  8b4734               mov eax, dword ptr [edi + 0x34]
// 00a69daf  83f8ff               cmp eax, -1
// 00a69db2  7503                 jne 0xa69db7
// 00a69db4  8b4730               mov eax, dword ptr [edi + 0x30]
// 00a69db7  5f                   pop edi
// 00a69db8  5e                   pop esi
// 00a69db9  c20800               ret 8
// library xtp-13.2.1/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonTheme@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTCaptionTheme.cpp
