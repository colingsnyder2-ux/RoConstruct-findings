// roc 2010-06 007e9440  unit: CXTPControls  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e9440
//
// 007e9440  56                   push esi
// 007e9441  57                   push edi
// 007e9442  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007e9446  8bf1                 mov esi, ecx
// 007e9448  6a00                 push 0
// 007e944a  8d462c               lea eax, [esi + 0x2c]
// 007e944d  50                   push eax
// 007e944e  68c4bca500           push 0xa5bcc4
// 007e9453  57                   push edi
// 007e9454  e8e7b50100           call 0x804a40
// 007e9459  6a00                 push 0
// 007e945b  8d4e30               lea ecx, [esi + 0x30]
// 007e945e  51                   push ecx
// 007e945f  68bcbca500           push 0xa5bcbc
// 007e9464  57                   push edi
// 007e9465  e8d6b50100           call 0x804a40
// 007e946a  68fe08a000           push 0xa008fe
// 007e946f  8d5640               lea edx, [esi + 0x40]
// 007e9472  52                   push edx
// 007e9473  68a08da500           push 0xa58da0
// 007e9478  57                   push edi
// 007e9479  e8b2b60100           call 0x804b30
// 007e947e  68fe08a000           push 0xa008fe
// 007e9483  8d4650               lea eax, [esi + 0x50]
// 007e9486  50                   push eax
// 007e9487  68acbca500           push 0xa5bcac
// 007e948c  57                   push edi
// 007e948d  e89eb60100           call 0x804b30
// 007e9492  83c440               add esp, 0x40
// 007e9495  68fe08a000           push 0xa008fe
// 007e949a  8d4e44               lea ecx, [esi + 0x44]
// 007e949d  51                   push ecx
// 007e949e  68a0bca500           push 0xa5bca0
// 007e94a3  57                   push edi
// 007e94a4  e887b60100           call 0x804b30
// 007e94a9  68fe08a000           push 0xa008fe
// 007e94ae  8d5648               lea edx, [esi + 0x48]
// 007e94b1  52                   push edx
// 007e94b2  6890bca500           push 0xa5bc90
// 007e94b7  57                   push edi
// 007e94b8  e873b60100           call 0x804b30
// 007e94bd  68fe08a000           push 0xa008fe
// 007e94c2  83c64c               add esi, 0x4c
// 007e94c5  56                   push esi
// 007e94c6  6884bca500           push 0xa5bc84
// 007e94cb  57                   push edi
// 007e94cc  e85fb60100           call 0x804b30
// 007e94d1  83c430               add esp, 0x30
// 007e94d4  5f                   pop edi
// 007e94d5  5e                   pop esi
// 007e94d6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlAction@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
