// from server: 100% by auto
// roc 2012-06 00429dc0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00429dc0
//
// 00429dc0  8b01                 mov eax, dword ptr [ecx]
// 00429dc2  3b442404             cmp eax, dword ptr [esp + 4]
// 00429dc6  7511                 jne 0x429dd9
// 00429dc8  8b4904               mov ecx, dword ptr [ecx + 4]
// 00429dcb  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 00429dcf  7508                 jne 0x429dd9
// 00429dd1  b801000000           mov eax, 1
// 00429dd6  c20800               ret 8
// 00429dd9  33c0                 xor eax, eax
// 00429ddb  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlGallery.cpp (function ??8CPoint@@QBEHUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlGallery.cpp
