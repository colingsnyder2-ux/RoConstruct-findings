// from server: 100% by auto
// roc 2012-06 0068d000  unit: RBX::Camera  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0068d000
//
// 0068d000  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0068d004  8b542408             mov edx, dword ptr [esp + 8]
// 0068d008  50                   push eax
// 0068d009  8b442408             mov eax, dword ptr [esp + 8]
// 0068d00d  52                   push edx
// 0068d00e  6a00                 push 0
// 0068d010  50                   push eax
// 0068d011  e84afbffff           call 0x68cb60
// 0068d016  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?Create@CXTPStatusBar@@QAEHPAVCWnd@@KI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
