// roc 2011-06 00820ad0  unit: CXTPImageManagerResource::CBitmapDC  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00820ad0
//
// 00820ad0  833900               cmp dword ptr [ecx], 0
// 00820ad3  750c                 jne 0x820ae1
// 00820ad5  83790400             cmp dword ptr [ecx + 4], 0
// 00820ad9  7506                 jne 0x820ae1
// 00820adb  83791400             cmp dword ptr [ecx + 0x14], 0
// 00820adf  740f                 je 0x820af0
// 00820ae1  83791800             cmp dword ptr [ecx + 0x18], 0
// 00820ae5  7506                 jne 0x820aed
// 00820ae7  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 00820aeb  7403                 je 0x820af0
// 00820aed  33c0                 xor eax, eax
// 00820aef  c3                   ret 
// 00820af0  b801000000           mov eax, 1
// 00820af5  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?IsEmpty@CXTPImageManagerIconHandle@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
