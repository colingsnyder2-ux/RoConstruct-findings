// roc 2009-12 007f65b0  unit: CXTPPropertyGridItem  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f65b0
//
// 007f65b0  e8bbf6ffff           call 0x7f5c70
// 007f65b5  83785c00             cmp dword ptr [eax + 0x5c], 0
// 007f65b9  b801000000           mov eax, 1
// 007f65be  7503                 jne 0x7f65c3
// 007f65c0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 007f65c3  c3                   ret 
// copied from an identical function in another client (function ?GetEnabled@CXTPControlAction@@QBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp