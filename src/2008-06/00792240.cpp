// roc 2008-06 00792240  unit: CXTCaptionButton  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792240
//
// 00792240  f644240804           test byte ptr [esp + 8], 4
// 00792245  56                   push esi
// 00792246  8bf1                 mov esi, ecx
// 00792248  7509                 jne 0x792253
// 0079224a  e819eaf0ff           call 0x6a0c68
// 0079224f  5e                   pop esi
// 00792250  c20800               ret 8
// 00792253  8b442408             mov eax, dword ptr [esp + 8]
// 00792257  50                   push eax
// 00792258  e8cb9d0200           call 0x7bc028
// 0079225d  85c0                 test eax, eax
// 0079225f  740d                 je 0x79226e
// 00792261  8b16                 mov edx, dword ptr [esi]
// 00792263  50                   push eax
// 00792264  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 0079226a  8bce                 mov ecx, esi
// 0079226c  ffd0                 call eax
// 0079226e  b801000000           mov eax, 1
// 00792273  5e                   pop esi
// 00792274  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButton.cpp (function ?OnPrintClient@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButton.cpp
