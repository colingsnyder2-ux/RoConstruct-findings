// roc 2008-06 006ab450  unit: CRobloxControlColorSelector  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab450
//
// 006ab450  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006ab456  8b01                 mov eax, dword ptr [ecx]
// 006ab458  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 006ab45e  56                   push esi
// 006ab45f  8b742408             mov esi, dword ptr [esp + 8]
// 006ab463  56                   push esi
// 006ab464  ffd2                 call edx
// 006ab466  8bc6                 mov eax, esi
// 006ab468  5e                   pop esi
// 006ab469  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?GetButtonSize@CXTPControl@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
