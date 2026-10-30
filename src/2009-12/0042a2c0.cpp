// roc 2009-12 0042a2c0  unit: CWrapperView  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042a2c0
//
// 0042a2c0  8b09                 mov ecx, dword ptr [ecx]
// 0042a2c2  85c9                 test ecx, ecx
// 0042a2c4  7409                 je 0x42a2cf
// 0042a2c6  8b01                 mov eax, dword ptr [ecx]
// 0042a2c8  8b5004               mov edx, dword ptr [eax + 4]
// 0042a2cb  6a01                 push 1
// 0042a2cd  ffd2                 call edx
// 0042a2cf  c3                   ret 
// copied from an identical function in another client (function ??1CSettingsStoreSP@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/afxbasepane.cpp