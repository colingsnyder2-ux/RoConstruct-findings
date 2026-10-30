// from server: 100% by tester
// roc 2008-06 006ac2f0  unit: CRobloxControlColorSelector  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ac2f0
//
// 006ac2f0  83b96c01000000       cmp dword ptr [ecx + 0x16c], 0
// 006ac2f7  7509                 jne 0x6ac302
// 006ac2f9  83b97001000000       cmp dword ptr [ecx + 0x170], 0
// 006ac300  7418                 je 0x6ac31a
// 006ac302  8b916c010000         mov edx, dword ptr [ecx + 0x16c]
// 006ac308  8b442404             mov eax, dword ptr [esp + 4]
// 006ac30c  8910                 mov dword ptr [eax], edx
// 006ac30e  8b8970010000         mov ecx, dword ptr [ecx + 0x170]
// 006ac314  894804               mov dword ptr [eax + 4], ecx
// 006ac317  c20400               ret 4
// 006ac31a  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006ac320  8b11                 mov edx, dword ptr [ecx]
// 006ac322  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 006ac328  56                   push esi
// 006ac329  8b742408             mov esi, dword ptr [esp + 8]
// 006ac32d  56                   push esi
// 006ac32e  ffd0                 call eax
// 006ac330  8bc6                 mov eax, esi
// 006ac332  5e                   pop esi
// 006ac333  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControl.cpp (function ?GetIconSize@CXTPControl@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp
