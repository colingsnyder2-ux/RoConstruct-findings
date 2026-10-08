// from server: 100% by auto
// roc 2008-06 006ae030  unit: CRobloxControlColorSelector  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae030
//
// 006ae030  8b8158040000         mov eax, dword ptr [ecx + 0x458]
// 006ae036  83f807               cmp eax, 7
// 006ae039  751f                 jne 0x6ae05a
// 006ae03b  e8001d0300           call 0x6dfd40
// 006ae040  8bc8                 mov ecx, eax
// 006ae042  e85985f0ff           call 0x5b65a0
// 006ae047  85c0                 test eax, eax
// 006ae049  7403                 je 0x6ae04e
// 006ae04b  33c0                 xor eax, eax
// 006ae04d  c3                   ret 
// 006ae04e  e8ed1c0300           call 0x6dfd40
// 006ae053  8bc8                 mov ecx, eax
// 006ae055  e9e61a0300           jmp 0x6dfb40
// 006ae05a  83f806               cmp eax, 6
// 006ae05d  75ee                 jne 0x6ae04d
// 006ae05f  e8dc1c0300           call 0x6dfd40
// 006ae064  8bc8                 mov ecx, eax
// 006ae066  e995170300           jmp 0x6df800
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetCurrentSystemTheme@CXTPPaintManager@@QAE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
