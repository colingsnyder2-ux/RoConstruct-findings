// roc 2011-06 00866700  unit: CXTPTabClientWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00866700
//
// 00866700  56                   push esi
// 00866701  8bf1                 mov esi, ecx
// 00866703  e848f1ffff           call 0x865850
// 00866708  85c0                 test eax, eax
// 0086670a  750c                 jne 0x866718
// 0086670c  8b06                 mov eax, dword ptr [esi]
// 0086670e  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 00866714  6aff                 push -1
// 00866716  ffd2                 call edx
// 00866718  8bce                 mov ecx, esi
// 0086671a  e831f1ffff           call 0x865850
// 0086671f  85c0                 test eax, eax
// 00866721  7504                 jne 0x866727
// 00866723  5e                   pop esi
// 00866724  c20400               ret 4
// 00866727  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0086672d  85c0                 test eax, eax
// 0086672f  7515                 jne 0x866746
// 00866731  e81af1ffff           call 0x865850
// 00866736  83e801               sub eax, 1
// 00866739  7813                 js 0x86674e
// 0086673b  3b4670               cmp eax, dword ptr [esi + 0x70]
// 0086673e  7d0e                 jge 0x86674e
// 00866740  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00866743  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00866746  5e                   pop esi
// 00866747  8bc8                 mov ecx, eax
// 00866749  e9f2e4ffff           jmp 0x864c40
// 0086674e  e8b73bfaff           call 0x80a30a
// copied from an identical function in another client (function ?AddItem@CXTPTabClientWnd@@MAEPAVCXTPTabManagerItem@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp