// roc 2008-06 006bb220  unit: CXTPImageManagerResource::CBitmapDC  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bb220
//
// 006bb220  33c0                 xor eax, eax
// 006bb222  33d2                 xor edx, edx
// 006bb224  8901                 mov dword ptr [ecx], eax
// 006bb226  894104               mov dword ptr [ecx + 4], eax
// 006bb229  894108               mov dword ptr [ecx + 8], eax
// 006bb22c  89410c               mov dword ptr [ecx + 0xc], eax
// 006bb22f  894110               mov dword ptr [ecx + 0x10], eax
// 006bb232  894114               mov dword ptr [ecx + 0x14], eax
// 006bb235  895118               mov dword ptr [ecx + 0x18], edx
// 006bb238  89411c               mov dword ptr [ecx + 0x1c], eax
// 006bb23b  c7412001000000       mov dword ptr [ecx + 0x20], 1
// 006bb242  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?Init@CXTPImageManagerIconHandle@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
