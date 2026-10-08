// from server: 100% by auto
// roc 2008-06 006bb2c0  unit: CXTPImageManagerResource::CBitmapDC  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bb2c0
//
// 006bb2c0  833900               cmp dword ptr [ecx], 0
// 006bb2c3  750c                 jne 0x6bb2d1
// 006bb2c5  83790400             cmp dword ptr [ecx + 4], 0
// 006bb2c9  7506                 jne 0x6bb2d1
// 006bb2cb  83791400             cmp dword ptr [ecx + 0x14], 0
// 006bb2cf  740f                 je 0x6bb2e0
// 006bb2d1  83791800             cmp dword ptr [ecx + 0x18], 0
// 006bb2d5  7506                 jne 0x6bb2dd
// 006bb2d7  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 006bb2db  7403                 je 0x6bb2e0
// 006bb2dd  33c0                 xor eax, eax
// 006bb2df  c3                   ret 
// 006bb2e0  b801000000           mov eax, 1
// 006bb2e5  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?IsEmpty@CXTPImageManagerIconHandle@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
