// roc 2008-06 006e1b70  unit: CXTPControls  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e1b70
//
// 006e1b70  56                   push esi
// 006e1b71  57                   push edi
// 006e1b72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e1b76  8bf1                 mov esi, ecx
// 006e1b78  6a00                 push 0
// 006e1b7a  8d462c               lea eax, [esi + 0x2c]
// 006e1b7d  50                   push eax
// 006e1b7e  68ec648500           push 0x8564ec
// 006e1b83  57                   push edi
// 006e1b84  e887b70100           call 0x6fd310
// 006e1b89  6a00                 push 0
// 006e1b8b  8d4e30               lea ecx, [esi + 0x30]
// 006e1b8e  51                   push ecx
// 006e1b8f  68e4648500           push 0x8564e4
// 006e1b94  57                   push edi
// 006e1b95  e876b70100           call 0x6fd310
// 006e1b9a  6816b78000           push 0x80b716
// 006e1b9f  8d5640               lea edx, [esi + 0x40]
// 006e1ba2  52                   push edx
// 006e1ba3  68a0358500           push 0x8535a0
// 006e1ba8  57                   push edi
// 006e1ba9  e852b80100           call 0x6fd400
// 006e1bae  6816b78000           push 0x80b716
// 006e1bb3  8d4650               lea eax, [esi + 0x50]
// 006e1bb6  50                   push eax
// 006e1bb7  68d4648500           push 0x8564d4
// 006e1bbc  57                   push edi
// 006e1bbd  e83eb80100           call 0x6fd400
// 006e1bc2  83c440               add esp, 0x40
// 006e1bc5  6816b78000           push 0x80b716
// 006e1bca  8d4e44               lea ecx, [esi + 0x44]
// 006e1bcd  51                   push ecx
// 006e1bce  68c8648500           push 0x8564c8
// 006e1bd3  57                   push edi
// 006e1bd4  e827b80100           call 0x6fd400
// 006e1bd9  6816b78000           push 0x80b716
// 006e1bde  8d5648               lea edx, [esi + 0x48]
// 006e1be1  52                   push edx
// 006e1be2  68b8648500           push 0x8564b8
// 006e1be7  57                   push edi
// 006e1be8  e813b80100           call 0x6fd400
// 006e1bed  6816b78000           push 0x80b716
// 006e1bf2  83c64c               add esi, 0x4c
// 006e1bf5  56                   push esi
// 006e1bf6  68ac648500           push 0x8564ac
// 006e1bfb  57                   push edi
// 006e1bfc  e8ffb70100           call 0x6fd400
// 006e1c01  83c430               add esp, 0x30
// 006e1c04  5f                   pop edi
// 006e1c05  5e                   pop esi
// 006e1c06  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlAction@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
