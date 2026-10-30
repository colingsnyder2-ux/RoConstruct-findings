// from server: 100% by auto
// roc 2012-06 00987850  unit: CRobloxControlColorSelector  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00987850
//
// 00987850  8b8158040000         mov eax, dword ptr [ecx + 0x458]
// 00987856  83f807               cmp eax, 7
// 00987859  751f                 jne 0x98787a
// 0098785b  e800600300           call 0x9bd860
// 00987860  8bc8                 mov ecx, eax
// 00987862  e8595a0300           call 0x9bd2c0
// 00987867  85c0                 test eax, eax
// 00987869  7403                 je 0x98786e
// 0098786b  33c0                 xor eax, eax
// 0098786d  c3                   ret 
// 0098786e  e8ed5f0300           call 0x9bd860
// 00987873  8bc8                 mov ecx, eax
// 00987875  e9965d0300           jmp 0x9bd610
// 0098787a  83f806               cmp eax, 6
// 0098787d  75ee                 jne 0x98786d
// 0098787f  e8dc5f0300           call 0x9bd860
// 00987884  8bc8                 mov ecx, eax
// 00987886  e9455a0300           jmp 0x9bd2d0
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GetCurrentSystemTheme@CXTPPaintManager@@QAE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
