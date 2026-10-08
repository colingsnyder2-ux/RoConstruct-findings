// from server: 100% by auto
// roc 2007-08 007140e0  unit: CXTCaptionButtonTheme  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007140e0
//
// 007140e0  53                   push ebx
// 007140e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007140e5  56                   push esi
// 007140e6  8bb3ac000000         mov esi, dword ptr [ebx + 0xac]
// 007140ec  85f6                 test esi, esi
// 007140ee  57                   push edi
// 007140ef  8bf9                 mov edi, ecx
// 007140f1  7504                 jne 0x7140f7
// 007140f3  33c0                 xor eax, eax
// 007140f5  eb03                 jmp 0x7140fa
// 007140f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 007140fa  50                   push eax
// 007140fb  ff15bced7700         call dword ptr [0x77edbc]
// 00714101  85c0                 test eax, eax
// 00714103  740d                 je 0x714112
// 00714105  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00714108  8b07                 mov eax, dword ptr [edi]
// 0071410a  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0071410d  51                   push ecx
// 0071410e  8bcf                 mov ecx, edi
// 00714110  ffd2                 call edx
// 00714112  8b442410             mov eax, dword ptr [esp + 0x10]
// 00714116  53                   push ebx
// 00714117  50                   push eax
// 00714118  8bcf                 mov ecx, edi
// 0071411a  e801d90000           call 0x721a20
// 0071411f  5f                   pop edi
// 00714120  5e                   pop esi
// 00714121  5b                   pop ebx
// 00714122  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawButtonThemeBackground@CXTCaptionButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
