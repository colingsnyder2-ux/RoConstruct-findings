// roc 2012-06 009a3010  unit: CXTPCommandBarKeyboardTip  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a3010
//
// 009a3010  56                   push esi
// 009a3011  8b742408             mov esi, dword ptr [esp + 8]
// 009a3015  8b06                 mov eax, dword ptr [esi]
// 009a3017  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 009a301d  8bce                 mov ecx, esi
// 009a301f  ffd2                 call edx
// 009a3021  8b4028               mov eax, dword ptr [eax + 0x28]
// 009a3024  50                   push eax
// 009a3025  e8d4660f00           call 0xa996fe
// 009a302a  50                   push eax
// 009a302b  e8b6f4fdff           call 0x9824e6
// 009a3030  83c408               add esp, 8
// 009a3033  85c0                 test eax, eax
// 009a3035  745c                 je 0x9a3093
// 009a3037  8bb6e8000000         mov esi, dword ptr [esi + 0xe8]
// 009a303d  85f6                 test esi, esi
// 009a303f  7454                 je 0x9a3095
// 009a3041  397068               cmp dword ptr [eax + 0x68], esi
// 009a3044  744f                 je 0x9a3095
// 009a3046  e887f3fdff           call 0x9823d2
// 009a304b  8b4804               mov ecx, dword ptr [eax + 4]
// 009a304e  e8a5660f00           call 0xa996f8
// 009a3053  89442408             mov dword ptr [esp + 8], eax
// 009a3057  85c0                 test eax, eax
// 009a3059  7438                 je 0x9a3093
// 009a305b  eb03                 jmp 0x9a3060
// 009a305d  8d4900               lea ecx, [ecx]
// 009a3060  e86df3fdff           call 0x9823d2
// 009a3065  8b4004               mov eax, dword ptr [eax + 4]
// 009a3068  8d4c2408             lea ecx, [esp + 8]
// 009a306c  51                   push ecx
// 009a306d  8bc8                 mov ecx, eax
// 009a306f  e87e660f00           call 0xa996f2
// 009a3074  50                   push eax
// 009a3075  e884660f00           call 0xa996fe
// 009a307a  50                   push eax
// 009a307b  e866f4fdff           call 0x9824e6
// 009a3080  83c408               add esp, 8
// 009a3083  85c0                 test eax, eax
// 009a3085  7405                 je 0x9a308c
// 009a3087  397068               cmp dword ptr [eax + 0x68], esi
// 009a308a  7409                 je 0x9a3095
// 009a308c  837c240800           cmp dword ptr [esp + 8], 0
// 009a3091  75cd                 jne 0x9a3060
// 009a3093  33c0                 xor eax, eax
// 009a3095  5e                   pop esi
// 009a3096  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?FindDocTemplate@CXTPCommandBars@@IAEPAVCDocTemplate@@PAVCMDIChildWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCommandBars.cpp
