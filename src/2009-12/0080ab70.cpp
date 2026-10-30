// roc 2009-12 0080ab70  unit: CXTPImageManagerResource::CBitmapDC  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ab70
//
// 0080ab70  8bd1                 mov edx, ecx
// 0080ab72  8d8ac0000000         lea ecx, [edx + 0xc0]
// 0080ab78  e823fdffff           call 0x80a8a0
// 0080ab7d  85c0                 test eax, eax
// 0080ab7f  7503                 jne 0x80ab84
// 0080ab81  8bc1                 mov eax, ecx
// 0080ab83  c3                   ret 
// 0080ab84  8bca                 mov ecx, edx
// 0080ab86  e9c5ffffff           jmp 0x80ab50
// copied from an identical function in another client (function ?GetCheckedIcon@CXTPImageManagerIcon@@QAEAAVCXTPImageManagerIconHandle@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp