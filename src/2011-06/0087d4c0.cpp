// from server: 100% by auto
// roc 2011-06 0087d4c0  unit: CXTPPropertyGridItemEnum  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087d4c0
//
// 0087d4c0  56                   push esi
// 0087d4c1  8bf1                 mov esi, ecx
// 0087d4c3  e8a8feffff           call 0x87d370
// 0087d4c8  85c0                 test eax, eax
// 0087d4ca  7502                 jne 0x87d4ce
// 0087d4cc  5e                   pop esi
// 0087d4cd  c3                   ret 
// 0087d4ce  8bce                 mov ecx, esi
// 0087d4d0  e88bf9ffff           call 0x87ce60
// 0087d4d5  81b8d0000000f1ff1f02 cmp dword ptr [eax + 0xd0], 0x21ffff1
// 0087d4df  7507                 jne 0x87d4e8
// 0087d4e1  b801000000           mov eax, 1
// 0087d4e6  5e                   pop esi
// 0087d4e7  c3                   ret 
// 0087d4e8  8bce                 mov ecx, esi
// 0087d4ea  e871f9ffff           call 0x87ce60
// 0087d4ef  66b90500             mov cx, 5
// 0087d4f3  663b88d6000000       cmp cx, word ptr [eax + 0xd6]
// 0087d4fa  5e                   pop esi
// 0087d4fb  1bc0                 sbb eax, eax
// 0087d4fd  f7d8                 neg eax
// 0087d4ff  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPWinThemeWrapper.cpp (function ?IsAppThemeReady@CXTPWinThemeWrapper@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPWinThemeWrapper.cpp
