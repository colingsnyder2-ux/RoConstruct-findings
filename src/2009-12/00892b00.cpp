// roc 2009-12 00892b00  unit: CXTPDockBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892b00
//
// 00892b00  53                   push ebx
// 00892b01  56                   push esi
// 00892b02  57                   push edi
// 00892b03  6a00                 push 0
// 00892b05  8bf9                 mov edi, ecx
// 00892b07  8b07                 mov eax, dword ptr [edi]
// 00892b09  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00892b0f  6a00                 push 0
// 00892b11  680c040000           push 0x40c
// 00892b16  ffd2                 call edx
// 00892b18  8bf0                 mov esi, eax
// 00892b1a  85f6                 test esi, esi
// 00892b1c  7415                 je 0x892b33
// 00892b1e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00892b22  4e                   dec esi
// 00892b23  56                   push esi
// 00892b24  8bcf                 mov ecx, edi
// 00892b26  e885ffffff           call 0x892ab0
// 00892b2b  3bc3                 cmp eax, ebx
// 00892b2d  740d                 je 0x892b3c
// 00892b2f  85f6                 test esi, esi
// 00892b31  75ef                 jne 0x892b22
// 00892b33  5f                   pop edi
// 00892b34  5e                   pop esi
// 00892b35  83c8ff               or eax, 0xffffffff
// 00892b38  5b                   pop ebx
// 00892b39  c20400               ret 4
// 00892b3c  5f                   pop edi
// 00892b3d  8bc6                 mov eax, esi
// 00892b3f  5e                   pop esi
// 00892b40  5b                   pop ebx
// 00892b41  c20400               ret 4
// copied from an identical function in another client (function ?FindBand@CXTPReBar@@QAEHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPReBar.cpp