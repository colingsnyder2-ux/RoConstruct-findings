// from server: 100% by auto
// roc 2012-06 00999080  unit: CXTPImageManagerResource::CBitmapDC  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999080
//
// 00999080  33c0                 xor eax, eax
// 00999082  33d2                 xor edx, edx
// 00999084  8901                 mov dword ptr [ecx], eax
// 00999086  894104               mov dword ptr [ecx + 4], eax
// 00999089  894108               mov dword ptr [ecx + 8], eax
// 0099908c  89410c               mov dword ptr [ecx + 0xc], eax
// 0099908f  894110               mov dword ptr [ecx + 0x10], eax
// 00999092  894114               mov dword ptr [ecx + 0x14], eax
// 00999095  895118               mov dword ptr [ecx + 0x18], edx
// 00999098  89411c               mov dword ptr [ecx + 0x1c], eax
// 0099909b  c7412001000000       mov dword ptr [ecx + 0x20], 1
// 009990a2  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Init@CXTPImageManagerIconHandle@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
