// roc 2009-12 008f41b0  unit: CXTCaptionButtonTheme  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f41b0
//
// 008f41b0  8b01                 mov eax, dword ptr [ecx]
// 008f41b2  8b5014               mov edx, dword ptr [eax + 0x14]
// 008f41b5  56                   push esi
// 008f41b6  8b742408             mov esi, dword ptr [esp + 8]
// 008f41ba  56                   push esi
// 008f41bb  ffd2                 call edx
// 008f41bd  85c0                 test eax, eax
// 008f41bf  7409                 je 0x8f41ca
// 008f41c1  b801000000           mov eax, 1
// 008f41c6  5e                   pop esi
// 008f41c7  c20400               ret 4
// 008f41ca  8b06                 mov eax, dword ptr [esi]
// 008f41cc  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 008f41d2  8bce                 mov ecx, esi
// 008f41d4  ffd2                 call edx
// 008f41d6  a803                 test al, 3
// 008f41d8  b800000000           mov eax, 0
// 008f41dd  0f95c0               setne al
// 008f41e0  5e                   pop esi
// 008f41e1  c20400               ret 4
// copied from an identical function in another client (function ?CanHilite@CXTButtonTheme@@UAEHPAVCXTButton@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp