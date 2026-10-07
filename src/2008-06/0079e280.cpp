// roc 2008-06 0079e280  unit: CXTPScrollBase  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e280
//
// 0079e280  8b442404             mov eax, dword ptr [esp + 4]
// 0079e284  56                   push esi
// 0079e285  8bf1                 mov esi, ecx
// 0079e287  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0079e28b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079e28f  57                   push edi
// 0079e290  8bf9                 mov edi, ecx
// 0079e292  7502                 jne 0x79e296
// 0079e294  8bf8                 mov edi, eax
// 0079e296  51                   push ecx
// 0079e297  50                   push eax
// 0079e298  8d4648               lea eax, [esi + 0x48]
// 0079e29b  50                   push eax
// 0079e29c  ff152c2d8000         call dword ptr [0x802d2c]
// 0079e2a2  85c0                 test eax, eax
// 0079e2a4  7505                 jne 0x79e2ab
// 0079e2a6  5f                   pop edi
// 0079e2a7  5e                   pop esi
// 0079e2a8  c20800               ret 8
// 0079e2ab  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 0079e2ae  7d0a                 jge 0x79e2ba
// 0079e2b0  5f                   pop edi
// 0079e2b1  b83c000000           mov eax, 0x3c
// 0079e2b6  5e                   pop esi
// 0079e2b7  c20800               ret 8
// 0079e2ba  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0079e2bd  85c0                 test eax, eax
// 0079e2bf  7e0e                 jle 0x79e2cf
// 0079e2c1  3bf8                 cmp edi, eax
// 0079e2c3  7e0a                 jle 0x79e2cf
// 0079e2c5  5f                   pop edi
// 0079e2c6  b841000000           mov eax, 0x41
// 0079e2cb  5e                   pop esi
// 0079e2cc  c20800               ret 8
// 0079e2cf  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 0079e2d2  7c0a                 jl 0x79e2de
// 0079e2d4  5f                   pop edi
// 0079e2d5  b83d000000           mov eax, 0x3d
// 0079e2da  5e                   pop esi
// 0079e2db  c20800               ret 8
// 0079e2de  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 0079e2e1  7d0a                 jge 0x79e2ed
// 0079e2e3  5f                   pop edi
// 0079e2e4  b83e000000           mov eax, 0x3e
// 0079e2e9  5e                   pop esi
// 0079e2ea  c20800               ret 8
// 0079e2ed  33c0                 xor eax, eax
// 0079e2ef  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 0079e2f2  5f                   pop edi
// 0079e2f3  0f9cc0               setl al
// 0079e2f6  5e                   pop esi
// 0079e2f7  83c03f               add eax, 0x3f
// 0079e2fa  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ?HitTestScrollBar@CXTPScrollBase@@QAEHUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
