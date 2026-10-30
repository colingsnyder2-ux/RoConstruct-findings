// roc 2009-12 007f6140  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6140
//
// 007f6140  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007f6146  8b01                 mov eax, dword ptr [ecx]
// 007f6148  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 007f614e  56                   push esi
// 007f614f  8b742408             mov esi, dword ptr [esp + 8]
// 007f6153  56                   push esi
// 007f6154  ffd2                 call edx
// 007f6156  8bc6                 mov eax, esi
// 007f6158  5e                   pop esi
// 007f6159  c20400               ret 4
// copied from an identical function in another client (function ?GetButtonSize@CXTPControl@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp