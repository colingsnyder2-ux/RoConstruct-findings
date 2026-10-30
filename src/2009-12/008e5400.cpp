// roc 2009-12 008e5400  unit: CXTCaptionButton  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5400
//
// 008e5400  f644240804           test byte ptr [esp + 8], 4
// 008e5405  56                   push esi
// 008e5406  8bf1                 mov esi, ecx
// 008e5408  7509                 jne 0x8e5413
// 008e540a  e821eaf0ff           call 0x7f3e30
// 008e540f  5e                   pop esi
// 008e5410  c20800               ret 8
// 008e5413  8b442408             mov eax, dword ptr [esp + 8]
// 008e5417  50                   push eax
// 008e5418  e813100400           call 0x926430
// 008e541d  85c0                 test eax, eax
// 008e541f  740d                 je 0x8e542e
// 008e5421  8b16                 mov edx, dword ptr [esi]
// 008e5423  50                   push eax
// 008e5424  8b82a0010000         mov eax, dword ptr [edx + 0x1a0]
// 008e542a  8bce                 mov ecx, esi
// 008e542c  ffd0                 call eax
// 008e542e  b801000000           mov eax, 1
// 008e5433  5e                   pop esi
// 008e5434  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp