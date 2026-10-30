// roc 2009-12 00815600  unit: CXTPCommandBars  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815600
//
// 00815600  53                   push ebx
// 00815601  57                   push edi
// 00815602  8bd9                 mov ebx, ecx
// 00815604  33ff                 xor edi, edi
// 00815606  39bb84000000         cmp dword ptr [ebx + 0x84], edi
// 0081560c  7e3c                 jle 0x81564a
// 0081560e  56                   push esi
// 0081560f  90                   nop 
// 00815610  57                   push edi
// 00815611  8bcb                 mov ecx, ebx
// 00815613  e8c8f6ffff           call 0x814ce0
// 00815618  8bf0                 mov esi, eax
// 0081561a  8b06                 mov eax, dword ptr [esi]
// 0081561c  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00815622  8bce                 mov ecx, esi
// 00815624  ffd2                 call edx
// 00815626  85c0                 test eax, eax
// 00815628  7416                 je 0x815640
// 0081562a  837e2000             cmp dword ptr [esi + 0x20], 0
// 0081562e  7410                 je 0x815640
// 00815630  8b06                 mov eax, dword ptr [esi]
// 00815632  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00815638  6a01                 push 1
// 0081563a  6a00                 push 0
// 0081563c  8bce                 mov ecx, esi
// 0081563e  ffd2                 call edx
// 00815640  47                   inc edi
// 00815641  3bbb84000000         cmp edi, dword ptr [ebx + 0x84]
// 00815647  7cc7                 jl 0x815610
// 00815649  5e                   pop esi
// 0081564a  5f                   pop edi
// 0081564b  5b                   pop ebx
// 0081564c  c3                   ret 
// copied from an identical function in another client (function ?InvalidateCommandBars@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp