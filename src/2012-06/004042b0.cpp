// roc 2012-06 004042b0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004042b0
//
// 004042b0  8b442404             mov eax, dword ptr [esp + 4]
// 004042b4  85c0                 test eax, eax
// 004042b6  7e0a                 jle 0x4042c2
// 004042b8  25ffff0000           and eax, 0xffff
// 004042bd  0d00000780           or eax, 0x80070000
// 004042c2  c3                   ret 
// library xtp-15.2.1/Source\Controls\Shell\XTPTaskbarManager.cpp (function _HRESULT_FROM_WIN32)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPTaskbarManager.cpp
