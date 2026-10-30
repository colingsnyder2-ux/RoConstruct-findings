// roc 2009-12 0080ab90  unit: CXTPImageManagerResource::CBitmapDC  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ab90
//
// 0080ab90  8bd1                 mov edx, ecx
// 0080ab92  8d8ae4000000         lea ecx, [edx + 0xe4]
// 0080ab98  e803fdffff           call 0x80a8a0
// 0080ab9d  85c0                 test eax, eax
// 0080ab9f  7503                 jne 0x80aba4
// 0080aba1  8bc1                 mov eax, ecx
// 0080aba3  c3                   ret 
// 0080aba4  8bca                 mov ecx, edx
// 0080aba6  e9a5ffffff           jmp 0x80ab50
// copied from an identical function in another client (function ?GetPressedIcon@CXTPImageManagerIcon@@QAEAAVCXTPImageManagerIconHandle@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp