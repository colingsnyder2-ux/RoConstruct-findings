// from server: 100% by auto
// roc 2008-06 007919e0  unit: CXTCaptionButtonTheme  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007919e0
//
// 007919e0  8b442408             mov eax, dword ptr [esp + 8]
// 007919e4  56                   push esi
// 007919e5  8bb0ac000000         mov esi, dword ptr [eax + 0xac]
// 007919eb  57                   push edi
// 007919ec  8bf9                 mov edi, ecx
// 007919ee  85f6                 test esi, esi
// 007919f0  7504                 jne 0x7919f6
// 007919f2  33c0                 xor eax, eax
// 007919f4  eb03                 jmp 0x7919f9
// 007919f6  8b4620               mov eax, dword ptr [esi + 0x20]
// 007919f9  50                   push eax
// 007919fa  ff15502d8000         call dword ptr [0x802d50]
// 00791a00  85c0                 test eax, eax
// 00791a02  7408                 je 0x791a0c
// 00791a04  8b4678               mov eax, dword ptr [esi + 0x78]
// 00791a07  5f                   pop edi
// 00791a08  5e                   pop esi
// 00791a09  c20800               ret 8
// 00791a0c  8b4734               mov eax, dword ptr [edi + 0x34]
// 00791a0f  83f8ff               cmp eax, -1
// 00791a12  7503                 jne 0x791a17
// 00791a14  8b4730               mov eax, dword ptr [edi + 0x30]
// 00791a17  5f                   pop edi
// 00791a18  5e                   pop esi
// 00791a19  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonTheme@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
