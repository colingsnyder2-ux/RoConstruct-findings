// roc 2009-12 007f70e0  unit: CRobloxControlColorSelector  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f70e0
//
// 007f70e0  83b96c01000000       cmp dword ptr [ecx + 0x16c], 0
// 007f70e7  7509                 jne 0x7f70f2
// 007f70e9  83b97001000000       cmp dword ptr [ecx + 0x170], 0
// 007f70f0  7418                 je 0x7f710a
// 007f70f2  8b916c010000         mov edx, dword ptr [ecx + 0x16c]
// 007f70f8  8b442404             mov eax, dword ptr [esp + 4]
// 007f70fc  8910                 mov dword ptr [eax], edx
// 007f70fe  8b8970010000         mov ecx, dword ptr [ecx + 0x170]
// 007f7104  894804               mov dword ptr [eax + 4], ecx
// 007f7107  c20400               ret 4
// 007f710a  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007f7110  8b11                 mov edx, dword ptr [ecx]
// 007f7112  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 007f7118  56                   push esi
// 007f7119  8b742408             mov esi, dword ptr [esp + 8]
// 007f711d  56                   push esi
// 007f711e  ffd0                 call eax
// 007f7120  8bc6                 mov eax, esi
// 007f7122  5e                   pop esi
// 007f7123  c20400               ret 4
// copied from an identical function in another client (function ?GetIconSize@CXTPControl@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp