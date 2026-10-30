// from server: 100% by auto
// roc 2008-06 00718620  unit: CXTPPropertyGridItemEnum  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718620
//
// 00718620  56                   push esi
// 00718621  8bf1                 mov esi, ecx
// 00718623  e8a8feffff           call 0x7184d0
// 00718628  85c0                 test eax, eax
// 0071862a  7502                 jne 0x71862e
// 0071862c  5e                   pop esi
// 0071862d  c3                   ret 
// 0071862e  8bce                 mov ecx, esi
// 00718630  e8dbf8ffff           call 0x717f10
// 00718635  81b8d0000000f1ff1f02 cmp dword ptr [eax + 0xd0], 0x21ffff1
// 0071863f  7507                 jne 0x718648
// 00718641  b801000000           mov eax, 1
// 00718646  5e                   pop esi
// 00718647  c3                   ret 
// 00718648  8bce                 mov ecx, esi
// 0071864a  e8c1f8ffff           call 0x717f10
// 0071864f  66b90500             mov cx, 5
// 00718653  663b88d6000000       cmp cx, word ptr [eax + 0xd6]
// 0071865a  5e                   pop esi
// 0071865b  1bc0                 sbb eax, eax
// 0071865d  f7d8                 neg eax
// 0071865f  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ?IsAppThemeReady@CXTPWinThemeWrapper@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
