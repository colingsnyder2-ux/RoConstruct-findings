// roc 2009-12 008f0360  unit: CXTPRibbonQuickAccessControls  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0360
//
// 008f0360  56                   push esi
// 008f0361  8bf1                 mov esi, ecx
// 008f0363  8b562c               mov edx, dword ptr [esi + 0x2c]
// 008f0366  33c0                 xor eax, eax
// 008f0368  85d2                 test edx, edx
// 008f036a  7e42                 jle 0x8f03ae
// 008f036c  57                   push edi
// 008f036d  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f0371  85c0                 test eax, eax
// 008f0373  7c0c                 jl 0x8f0381
// 008f0375  3bc2                 cmp eax, edx
// 008f0377  7d08                 jge 0x8f0381
// 008f0379  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008f037c  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 008f037f  eb02                 jmp 0x8f0383
// 008f0381  33c9                 xor ecx, ecx
// 008f0383  3bcf                 cmp ecx, edi
// 008f0385  740a                 je 0x8f0391
// 008f0387  40                   inc eax
// 008f0388  3bc2                 cmp eax, edx
// 008f038a  7ce5                 jl 0x8f0371
// 008f038c  5f                   pop edi
// 008f038d  5e                   pop esi
// 008f038e  c20400               ret 4
// 008f0391  6a01                 push 1
// 008f0393  50                   push eax
// 008f0394  8d4e24               lea ecx, [esi + 0x24]
// 008f0397  e8e4cef3ff           call 0x82d280
// 008f039c  8b16                 mov edx, dword ptr [esi]
// 008f039e  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008f03a1  57                   push edi
// 008f03a2  8bce                 mov ecx, esi
// 008f03a4  ffd0                 call eax
// 008f03a6  8bcf                 mov ecx, edi
// 008f03a8  e82f3af0ff           call 0x7f3ddc
// 008f03ad  5f                   pop edi
// 008f03ae  5e                   pop esi
// 008f03af  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTPRibbonQuickAccessControls@@UAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Ribbon\XTPRibbonQuickAccessControls.cpp