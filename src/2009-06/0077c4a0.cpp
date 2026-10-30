// roc 2009-06 0077c4a0  unit: CXTPTabClientWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077c4a0
//
// 0077c4a0  56                   push esi
// 0077c4a1  8bf1                 mov esi, ecx
// 0077c4a3  e848f1ffff           call 0x77b5f0
// 0077c4a8  85c0                 test eax, eax
// 0077c4aa  750c                 jne 0x77c4b8
// 0077c4ac  8b06                 mov eax, dword ptr [esi]
// 0077c4ae  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0077c4b4  6aff                 push -1
// 0077c4b6  ffd2                 call edx
// 0077c4b8  8bce                 mov ecx, esi
// 0077c4ba  e831f1ffff           call 0x77b5f0
// 0077c4bf  85c0                 test eax, eax
// 0077c4c1  7504                 jne 0x77c4c7
// 0077c4c3  5e                   pop esi
// 0077c4c4  c20400               ret 4
// 0077c4c7  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0077c4cd  85c0                 test eax, eax
// 0077c4cf  7515                 jne 0x77c4e6
// 0077c4d1  e81af1ffff           call 0x77b5f0
// 0077c4d6  83e801               sub eax, 1
// 0077c4d9  7813                 js 0x77c4ee
// 0077c4db  3b4670               cmp eax, dword ptr [esi + 0x70]
// 0077c4de  7d0e                 jge 0x77c4ee
// 0077c4e0  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0077c4e3  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0077c4e6  5e                   pop esi
// 0077c4e7  8bc8                 mov ecx, eax
// 0077c4e9  e9d2e4ffff           jmp 0x77a9c0
// 0077c4ee  e8f1c7f9ff           call 0x718ce4
// copied from an identical function in another client (function ?AddItem@CXTPTabClientWnd@@MAEPAVCXTPTabManagerItem@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp