// roc 2009-12 0087a210  unit: CXTPControlGalleryPaintManager  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087a210
//
// 0087a210  8b442404             mov eax, dword ptr [esp + 4]
// 0087a214  85c0                 test eax, eax
// 0087a216  7c11                 jl 0x87a229
// 0087a218  3b4108               cmp eax, dword ptr [ecx + 8]
// 0087a21b  7d0c                 jge 0x87a229
// 0087a21d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0087a220  8d0440               lea eax, [eax + eax*2]
// 0087a223  8d04c1               lea eax, [ecx + eax*8]
// 0087a226  c20400               ret 4
// 0087a229  e8de98f7ff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetAt@?$CArray@UGALLERYITEM_POSITION@CXTPControlGallery@@AAU12@@@QBEABUGALLERYITEM_POSITION@CXTPControlGallery@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp