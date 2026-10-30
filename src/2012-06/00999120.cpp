// from server: 100% by auto
// roc 2012-06 00999120  unit: CXTPImageManagerResource::CBitmapDC  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999120
//
// 00999120  833900               cmp dword ptr [ecx], 0
// 00999123  750c                 jne 0x999131
// 00999125  83790400             cmp dword ptr [ecx + 4], 0
// 00999129  7506                 jne 0x999131
// 0099912b  83791400             cmp dword ptr [ecx + 0x14], 0
// 0099912f  740f                 je 0x999140
// 00999131  83791800             cmp dword ptr [ecx + 0x18], 0
// 00999135  7506                 jne 0x99913d
// 00999137  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 0099913b  7403                 je 0x999140
// 0099913d  33c0                 xor eax, eax
// 0099913f  c3                   ret 
// 00999140  b801000000           mov eax, 1
// 00999145  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?IsEmpty@CXTPImageManagerIconHandle@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
