// roc 2011-06 00820a30  unit: CXTPImageManagerResource::CBitmapDC  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00820a30
//
// 00820a30  33c0                 xor eax, eax
// 00820a32  33d2                 xor edx, edx
// 00820a34  8901                 mov dword ptr [ecx], eax
// 00820a36  894104               mov dword ptr [ecx + 4], eax
// 00820a39  894108               mov dword ptr [ecx + 8], eax
// 00820a3c  89410c               mov dword ptr [ecx + 0xc], eax
// 00820a3f  894110               mov dword ptr [ecx + 0x10], eax
// 00820a42  894114               mov dword ptr [ecx + 0x14], eax
// 00820a45  895118               mov dword ptr [ecx + 0x18], edx
// 00820a48  89411c               mov dword ptr [ecx + 0x1c], eax
// 00820a4b  c7412001000000       mov dword ptr [ecx + 0x20], 1
// 00820a52  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Init@CXTPImageManagerIconHandle@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
