// roc 2008-06 006c3d50  unit: CXTPCommandBar  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c3d50
//
// 006c3d50  83ec08               sub esp, 8
// 006c3d53  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 006c3d5a  7509                 jne 0x6c3d65
// 006c3d5c  83b91801000000       cmp dword ptr [ecx + 0x118], 0
// 006c3d63  741b                 je 0x6c3d80
// 006c3d65  8b9114010000         mov edx, dword ptr [ecx + 0x114]
// 006c3d6b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c3d6f  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 006c3d75  8910                 mov dword ptr [eax], edx
// 006c3d77  894804               mov dword ptr [eax + 4], ecx
// 006c3d7a  83c408               add esp, 8
// 006c3d7d  c20400               ret 4
// 006c3d80  8b11                 mov edx, dword ptr [ecx]
// 006c3d82  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 006c3d88  8d0424               lea eax, [esp]
// 006c3d8b  50                   push eax
// 006c3d8c  ffd2                 call edx
// 006c3d8e  8b0424               mov eax, dword ptr [esp]
// 006c3d91  8b542404             mov edx, dword ptr [esp + 4]
// 006c3d95  8d4806               lea ecx, [eax + 6]
// 006c3d98  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c3d9c  83c206               add edx, 6
// 006c3d9f  8908                 mov dword ptr [eax], ecx
// 006c3da1  895004               mov dword ptr [eax + 4], edx
// 006c3da4  83c408               add esp, 8
// 006c3da7  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?GetButtonSize@CXTPCommandBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
