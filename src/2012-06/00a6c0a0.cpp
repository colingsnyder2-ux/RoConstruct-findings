// roc 2012-06 00a6c0a0  unit: CXTPScrollBase  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c0a0
//
// 00a6c0a0  8b442404             mov eax, dword ptr [esp + 4]
// 00a6c0a4  56                   push esi
// 00a6c0a5  8bf1                 mov esi, ecx
// 00a6c0a7  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a6c0ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a6c0af  57                   push edi
// 00a6c0b0  8bf9                 mov edi, ecx
// 00a6c0b2  7502                 jne 0xa6c0b6
// 00a6c0b4  8bf8                 mov edi, eax
// 00a6c0b6  51                   push ecx
// 00a6c0b7  50                   push eax
// 00a6c0b8  8d4648               lea eax, [esi + 0x48]
// 00a6c0bb  50                   push eax
// 00a6c0bc  ff15483bb200         call dword ptr [0xb23b48]
// 00a6c0c2  85c0                 test eax, eax
// 00a6c0c4  7505                 jne 0xa6c0cb
// 00a6c0c6  5f                   pop edi
// 00a6c0c7  5e                   pop esi
// 00a6c0c8  c20800               ret 8
// 00a6c0cb  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 00a6c0ce  7d0a                 jge 0xa6c0da
// 00a6c0d0  5f                   pop edi
// 00a6c0d1  b83c000000           mov eax, 0x3c
// 00a6c0d6  5e                   pop esi
// 00a6c0d7  c20800               ret 8
// 00a6c0da  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00a6c0dd  85c0                 test eax, eax
// 00a6c0df  7e0e                 jle 0xa6c0ef
// 00a6c0e1  3bf8                 cmp edi, eax
// 00a6c0e3  7e0a                 jle 0xa6c0ef
// 00a6c0e5  5f                   pop edi
// 00a6c0e6  b841000000           mov eax, 0x41
// 00a6c0eb  5e                   pop esi
// 00a6c0ec  c20800               ret 8
// 00a6c0ef  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 00a6c0f2  7c0a                 jl 0xa6c0fe
// 00a6c0f4  5f                   pop edi
// 00a6c0f5  b83d000000           mov eax, 0x3d
// 00a6c0fa  5e                   pop esi
// 00a6c0fb  c20800               ret 8
// 00a6c0fe  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 00a6c101  7d0a                 jge 0xa6c10d
// 00a6c103  5f                   pop edi
// 00a6c104  b83e000000           mov eax, 0x3e
// 00a6c109  5e                   pop esi
// 00a6c10a  c20800               ret 8
// 00a6c10d  33c0                 xor eax, eax
// 00a6c10f  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 00a6c112  5f                   pop edi
// 00a6c113  0f9cc0               setl al
// 00a6c116  5e                   pop esi
// 00a6c117  83c03f               add eax, 0x3f
// 00a6c11a  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?HitTestScrollBar@CXTPScrollBase@@QBEHUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
