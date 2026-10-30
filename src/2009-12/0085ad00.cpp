// roc 2009-12 0085ad00  unit: CXTPStatusBarPane  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085ad00
//
// 0085ad00  8b4164               mov eax, dword ptr [ecx + 0x64]
// 0085ad03  83f8ff               cmp eax, -1
// 0085ad06  7413                 je 0x85ad1b
// 0085ad08  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 0085ad0b  6a00                 push 0
// 0085ad0d  50                   push eax
// 0085ad0e  e8cdfaffff           call 0x85a7e0
// 0085ad13  8bc8                 mov ecx, eax
// 0085ad15  e8664efbff           call 0x80fb80
// 0085ad1a  c3                   ret 
// 0085ad1b  33c0                 xor eax, eax
// 0085ad1d  c3                   ret 
// copied from an identical function in another client (function ?GetImage@CXTPStatusBarPane@@UBEPAVCXTPImageManagerIcon@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp