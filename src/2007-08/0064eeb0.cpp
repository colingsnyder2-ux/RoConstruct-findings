// roc 2007-08 0064eeb0  unit: CXTPToolBar  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064eeb0
//
// 0064eeb0  56                   push esi
// 0064eeb1  8bf1                 mov esi, ecx
// 0064eeb3  e8c84affff           call 0x643980
// 0064eeb8  8bc8                 mov ecx, eax
// 0064eeba  85c9                 test ecx, ecx
// 0064eebc  7422                 je 0x64eee0
// 0064eebe  8b542408             mov edx, dword ptr [esp + 8]
// 0064eec2  83fa02               cmp edx, 2
// 0064eec5  740e                 je 0x64eed5
// 0064eec7  85d2                 test edx, edx
// 0064eec9  740a                 je 0x64eed5
// 0064eecb  83fa03               cmp edx, 3
// 0064eece  7405                 je 0x64eed5
// 0064eed0  83fa01               cmp edx, 1
// 0064eed3  7511                 jne 0x64eee6
// 0064eed5  52                   push edx
// 0064eed6  56                   push esi
// 0064eed7  e8c42efeff           call 0x631da0
// 0064eedc  85c0                 test eax, eax
// 0064eede  7515                 jne 0x64eef5
// 0064eee0  33c0                 xor eax, eax
// 0064eee2  5e                   pop esi
// 0064eee3  c20400               ret 4
// 0064eee6  83fa04               cmp edx, 4
// 0064eee9  75f5                 jne 0x64eee0
// 0064eeeb  56                   push esi
// 0064eeec  e8ef2efeff           call 0x631de0
// 0064eef1  85c0                 test eax, eax
// 0064eef3  74eb                 je 0x64eee0
// 0064eef5  b801000000           mov eax, 1
// 0064eefa  5e                   pop esi
// 0064eefb  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPToolBar.cpp (function ?SetPosition@CXTPToolBar@@UAEHW4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPToolBar.cpp
