// from server: 100% by auto
// roc 2008-06 006e3200  unit: CXTPToolBar::CControlButtonExpand  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e3200
//
// 006e3200  56                   push esi
// 006e3201  8b742408             mov esi, dword ptr [esp + 8]
// 006e3205  57                   push edi
// 006e3206  56                   push esi
// 006e3207  8bf9                 mov edi, ecx
// 006e3209  e8f2fbffff           call 0x6e2e00
// 006e320e  837e2800             cmp dword ptr [esi + 0x28], 0
// 006e3212  752e                 jne 0x6e3242
// 006e3214  8b8778010000         mov eax, dword ptr [edi + 0x178]
// 006e321a  85c0                 test eax, eax
// 006e321c  7413                 je 0x6e3231
// 006e321e  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 006e3224  6a00                 push 0
// 006e3226  8d4c2410             lea ecx, [esp + 0x10]
// 006e322a  89442410             mov dword ptr [esp + 0x10], eax
// 006e322e  51                   push ecx
// 006e322f  eb1a                 jmp 0x6e324b
// 006e3231  6a00                 push 0
// 006e3233  8d4c2410             lea ecx, [esp + 0x10]
// 006e3237  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006e323f  51                   push ecx
// 006e3240  eb09                 jmp 0x6e324b
// 006e3242  6a00                 push 0
// 006e3244  8d977c010000         lea edx, [edi + 0x17c]
// 006e324a  52                   push edx
// 006e324b  68d0678500           push 0x8567d0
// 006e3250  56                   push esi
// 006e3251  e8baa00100           call 0x6fd310
// 006e3256  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006e3259  83c410               add esp, 0x10
// 006e325c  83f804               cmp eax, 4
// 006e325f  761c                 jbe 0x6e327d
// 006e3261  83f812               cmp eax, 0x12
// 006e3264  7317                 jae 0x6e327d
// 006e3266  6a00                 push 0
// 006e3268  81c748010000         add edi, 0x148
// 006e326e  57                   push edi
// 006e326f  68f8658500           push 0x8565f8
// 006e3274  56                   push esi
// 006e3275  e896a00100           call 0x6fd310
// 006e327a  83c410               add esp, 0x10
// 006e327d  5f                   pop edi
// 006e327e  5e                   pop esi
// 006e327f  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlPopup@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
