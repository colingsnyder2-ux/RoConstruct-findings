// roc 2009-12 0080ab50  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ab50
//
// 0080ab50  8bd1                 mov edx, ecx
// 0080ab52  8d8a9c000000         lea ecx, [edx + 0x9c]
// 0080ab58  e843fdffff           call 0x80a8a0
// 0080ab5d  85c0                 test eax, eax
// 0080ab5f  8bc1                 mov eax, ecx
// 0080ab61  7403                 je 0x80ab66
// 0080ab63  8d4230               lea eax, [edx + 0x30]
// 0080ab66  c3                   ret 
// copied from an identical function in another client (function ?GetHotIcon@CXTPImageManagerIcon@@QAEAAVCXTPImageManagerIconHandle@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp