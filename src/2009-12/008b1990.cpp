// roc 2009-12 008b1990  unit: CXTPDockingPaneTabbedContainer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1990
//
// 008b1990  57                   push edi
// 008b1991  8bf9                 mov edi, ecx
// 008b1993  e868f5ffff           call 0x8b0f00
// 008b1998  6a01                 push 1
// 008b199a  ff1530cc9800         call dword ptr [0x98cc30]
// 008b19a0  6685c0               test ax, ax
// 008b19a3  7d43                 jge 0x8b19e8
// 008b19a5  8b87a4010000         mov eax, dword ptr [edi + 0x1a4]
// 008b19ab  56                   push esi
// 008b19ac  6a00                 push 0
// 008b19ae  6a00                 push 0
// 008b19b0  50                   push eax
// 008b19b1  8d7754               lea esi, [edi + 0x54]
// 008b19b4  6a11                 push 0x11
// 008b19b6  8bce                 mov ecx, esi
// 008b19b8  e883eeffff           call 0x8b0840
// 008b19bd  8bc8                 mov ecx, eax
// 008b19bf  e85c6bf8ff           call 0x838520
// 008b19c4  85c0                 test eax, eax
// 008b19c6  751f                 jne 0x8b19e7
// 008b19c8  8bce                 mov ecx, esi
// 008b19ca  e871eeffff           call 0x8b0840
// 008b19cf  8b8824010000         mov ecx, dword ptr [eax + 0x124]
// 008b19d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b19d9  8b11                 mov edx, dword ptr [ecx]
// 008b19db  8b5204               mov edx, dword ptr [edx + 4]
// 008b19de  50                   push eax
// 008b19df  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b19e3  50                   push eax
// 008b19e4  56                   push esi
// 008b19e5  ffd2                 call edx
// 008b19e7  5e                   pop esi
// 008b19e8  5f                   pop edi
// 008b19e9  c20800               ret 8
// copied from an identical function in another client (function ?OnCaptionLButtonDown@CXTPDockingPaneTabbedContainer@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp