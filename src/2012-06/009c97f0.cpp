// roc 2012-06 009c97f0  unit: CXTPToolBar::CControlButtonExpand  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c97f0
//
// 009c97f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c97f4  85c9                 test ecx, ecx
// 009c97f6  7445                 je 0x9c983d
// 009c97f8  0fb701               movzx eax, word ptr [ecx]
// 009c97fb  6685c0               test ax, ax
// 009c97fe  7443                 je 0x9c9843
// 009c9800  6683f803             cmp ax, 3
// 009c9804  7442                 je 0x9c9848
// 009c9806  6683f802             cmp ax, 2
// 009c980a  7442                 je 0x9c984e
// 009c980c  ba03400000           mov edx, 0x4003
// 009c9811  663bc2               cmp ax, dx
// 009c9814  7506                 jne 0x9c981c
// 009c9816  83790800             cmp dword ptr [ecx + 8], 0
// 009c981a  7539                 jne 0x9c9855
// 009c981c  ba02400000           mov edx, 0x4002
// 009c9821  663bc2               cmp ax, dx
// 009c9824  7506                 jne 0x9c982c
// 009c9826  83790800             cmp dword ptr [ecx + 8], 0
// 009c982a  7531                 jne 0x9c985d
// 009c982c  ba0c400000           mov edx, 0x400c
// 009c9831  663bc2               cmp ax, dx
// 009c9834  7507                 jne 0x9c983d
// 009c9836  8b4908               mov ecx, dword ptr [ecx + 8]
// 009c9839  85c9                 test ecx, ecx
// 009c983b  75bb                 jne 0x9c97f8
// 009c983d  83c8ff               or eax, 0xffffffff
// 009c9840  c20400               ret 4
// 009c9843  33c0                 xor eax, eax
// 009c9845  c20400               ret 4
// 009c9848  8b4108               mov eax, dword ptr [ecx + 8]
// 009c984b  c20400               ret 4
// 009c984e  0fbf4108             movsx eax, word ptr [ecx + 8]
// 009c9852  c20400               ret 4
// 009c9855  8b4108               mov eax, dword ptr [ecx + 8]
// 009c9858  8b00                 mov eax, dword ptr [eax]
// 009c985a  c20400               ret 4
// 009c985d  8b4908               mov ecx, dword ptr [ecx + 8]
// 009c9860  0fbf01               movsx eax, word ptr [ecx]
// 009c9863  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetChildIndex@CXTPAccessible@@IAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
