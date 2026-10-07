// roc 2008-06 00791990  unit: CXTCaptionButtonTheme  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791990
//
// 00791990  53                   push ebx
// 00791991  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00791995  56                   push esi
// 00791996  8bb3ac000000         mov esi, dword ptr [ebx + 0xac]
// 0079199c  57                   push edi
// 0079199d  8bf9                 mov edi, ecx
// 0079199f  85f6                 test esi, esi
// 007919a1  7504                 jne 0x7919a7
// 007919a3  33c0                 xor eax, eax
// 007919a5  eb03                 jmp 0x7919aa
// 007919a7  8b4620               mov eax, dword ptr [esi + 0x20]
// 007919aa  50                   push eax
// 007919ab  ff15502d8000         call dword ptr [0x802d50]
// 007919b1  85c0                 test eax, eax
// 007919b3  740d                 je 0x7919c2
// 007919b5  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007919b8  8b07                 mov eax, dword ptr [edi]
// 007919ba  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007919bd  51                   push ecx
// 007919be  8bcf                 mov ecx, edi
// 007919c0  ffd2                 call edx
// 007919c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 007919c6  53                   push ebx
// 007919c7  50                   push eax
// 007919c8  8bcf                 mov ecx, edi
// 007919ca  e8210f0100           call 0x7a28f0
// 007919cf  5f                   pop edi
// 007919d0  5e                   pop esi
// 007919d1  5b                   pop ebx
// 007919d2  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
