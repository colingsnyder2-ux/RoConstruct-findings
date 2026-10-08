// from server: 100% by auto
// roc 2007-08 0071d5a0  unit: CXTPScrollBase  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d5a0
//
// 0071d5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0071d5a4  56                   push esi
// 0071d5a5  8bf1                 mov esi, ecx
// 0071d5a7  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0071d5ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071d5af  57                   push edi
// 0071d5b0  8bf9                 mov edi, ecx
// 0071d5b2  7502                 jne 0x71d5b6
// 0071d5b4  8bf8                 mov edi, eax
// 0071d5b6  51                   push ecx
// 0071d5b7  50                   push eax
// 0071d5b8  8d4648               lea eax, [esi + 0x48]
// 0071d5bb  50                   push eax
// 0071d5bc  ff1594ed7700         call dword ptr [0x77ed94]
// 0071d5c2  85c0                 test eax, eax
// 0071d5c4  7505                 jne 0x71d5cb
// 0071d5c6  5f                   pop edi
// 0071d5c7  5e                   pop esi
// 0071d5c8  c20800               ret 8
// 0071d5cb  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0071d5ce  7d0a                 jge 0x71d5da
// 0071d5d0  5f                   pop edi
// 0071d5d1  b83c000000           mov eax, 0x3c
// 0071d5d6  5e                   pop esi
// 0071d5d7  c20800               ret 8
// 0071d5da  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0071d5dd  85c0                 test eax, eax
// 0071d5df  7e0e                 jle 0x71d5ef
// 0071d5e1  3bf8                 cmp edi, eax
// 0071d5e3  7e0a                 jle 0x71d5ef
// 0071d5e5  5f                   pop edi
// 0071d5e6  b841000000           mov eax, 0x41
// 0071d5eb  5e                   pop esi
// 0071d5ec  c20800               ret 8
// 0071d5ef  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0071d5f2  7c0a                 jl 0x71d5fe
// 0071d5f4  5f                   pop edi
// 0071d5f5  b83d000000           mov eax, 0x3d
// 0071d5fa  5e                   pop esi
// 0071d5fb  c20800               ret 8
// 0071d5fe  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0071d601  7d0a                 jge 0x71d60d
// 0071d603  5f                   pop edi
// 0071d604  b83e000000           mov eax, 0x3e
// 0071d609  5e                   pop esi
// 0071d60a  c20800               ret 8
// 0071d60d  33c0                 xor eax, eax
// 0071d60f  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 0071d612  5f                   pop edi
// 0071d613  0f9cc0               setl al
// 0071d616  5e                   pop esi
// 0071d617  83c03f               add eax, 0x3f
// 0071d61a  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?HitTestScrollBar@CXTPScrollBase@@QAEHUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
