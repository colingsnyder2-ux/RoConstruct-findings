// roc 2007-03 00705450  unit: seg_00700000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00705450
//
// 00705450  8b442408             mov eax, dword ptr [esp + 8]
// 00705454  56                   push esi
// 00705455  8bb0ac000000         mov esi, dword ptr [eax + 0xac]
// 0070545b  85f6                 test esi, esi
// 0070545d  57                   push edi
// 0070545e  8bf9                 mov edi, ecx
// 00705460  7504                 jne 0x705466
// 00705462  33c0                 xor eax, eax
// 00705464  eb03                 jmp 0x705469
// 00705466  8b4620               mov eax, dword ptr [esi + 0x20]
// 00705469  50                   push eax
// 0070546a  ff1574ed7700         call dword ptr [0x77ed74]
// 00705470  85c0                 test eax, eax
// 00705472  7408                 je 0x70547c
// 00705474  8b4678               mov eax, dword ptr [esi + 0x78]
// 00705477  5f                   pop edi
// 00705478  5e                   pop esi
// 00705479  c20800               ret 8
// 0070547c  8b4734               mov eax, dword ptr [edi + 0x34]
// 0070547f  83f8ff               cmp eax, -1
// 00705482  7503                 jne 0x705487
// 00705484  8b4730               mov eax, dword ptr [edi + 0x30]
// 00705487  5f                   pop edi
// 00705488  5e                   pop esi
// 00705489  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonTheme@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
