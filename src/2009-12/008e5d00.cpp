// roc 2009-12 008e5d00  unit: CXTCaptionButton  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5d00
//
// 008e5d00  56                   push esi
// 008e5d01  8bf1                 mov esi, ecx
// 008e5d03  e828e1f0ff           call 0x7f3e30
// 008e5d08  83f8ff               cmp eax, -1
// 008e5d0b  7506                 jne 0x8e5d13
// 008e5d0d  0bc0                 or eax, eax
// 008e5d0f  5e                   pop esi
// 008e5d10  c20400               ret 4
// 008e5d13  8b06                 mov eax, dword ptr [esi]
// 008e5d15  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008e5d1b  8bce                 mov ecx, esi
// 008e5d1d  ffd2                 call edx
// 008e5d1f  33c0                 xor eax, eax
// 008e5d21  5e                   pop esi
// 008e5d22  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTButton@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp