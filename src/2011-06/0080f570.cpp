// from server: 100% by auto
// roc 2011-06 0080f570  unit: CRobloxControlColorSelector  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f570
//
// 0080f570  8b8158040000         mov eax, dword ptr [ecx + 0x458]
// 0080f576  83f807               cmp eax, 7
// 0080f579  751f                 jne 0x80f59a
// 0080f57b  e8605e0300           call 0x8453e0
// 0080f580  8bc8                 mov ecx, eax
// 0080f582  e809590300           call 0x844e90
// 0080f587  85c0                 test eax, eax
// 0080f589  7403                 je 0x80f58e
// 0080f58b  33c0                 xor eax, eax
// 0080f58d  c3                   ret 
// 0080f58e  e84d5e0300           call 0x8453e0
// 0080f593  8bc8                 mov ecx, eax
// 0080f595  e9465c0300           jmp 0x8451e0
// 0080f59a  83f806               cmp eax, 6
// 0080f59d  75ee                 jne 0x80f58d
// 0080f59f  e83c5e0300           call 0x8453e0
// 0080f5a4  8bc8                 mov ecx, eax
// 0080f5a6  e9f5580300           jmp 0x844ea0
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GetCurrentSystemTheme@CXTPPaintManager@@QAE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
