// roc 2010-06 00867e20  unit: CXTPDockingPaneSplitterWnd  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00867e20
//
// 00867e20  83ec10               sub esp, 0x10
// 00867e23  8b442418             mov eax, dword ptr [esp + 0x18]
// 00867e27  53                   push ebx
// 00867e28  55                   push ebp
// 00867e29  56                   push esi
// 00867e2a  8bf1                 mov esi, ecx
// 00867e2c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00867e30  57                   push edi
// 00867e31  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00867e35  33d2                 xor edx, edx
// 00867e37  894e5c               mov dword ptr [esi + 0x5c], ecx
// 00867e3a  894658               mov dword ptr [esi + 0x58], eax
// 00867e3d  897e54               mov dword ptr [esi + 0x54], edi
// 00867e40  33ed                 xor ebp, ebp
// 00867e42  39af90000000         cmp dword ptr [edi + 0x90], ebp
// 00867e48  8d5f20               lea ebx, [edi + 0x20]
// 00867e4b  0f94c2               sete dl
// 00867e4e  8bcb                 mov ecx, ebx
// 00867e50  895668               mov dword ptr [esi + 0x68], edx
// 00867e53  e8b8caffff           call 0x864910
// 00867e58  894660               mov dword ptr [esi + 0x60], eax
// 00867e5b  e850aafbff           call 0x8228b0
// 00867e60  8b8f90000000         mov ecx, dword ptr [edi + 0x90]
// 00867e66  8b10                 mov edx, dword ptr [eax]
// 00867e68  8b5218               mov edx, dword ptr [edx + 0x18]
// 00867e6b  f7d9                 neg ecx
// 00867e6d  1bc9                 sbb ecx, ecx
// 00867e6f  81c1f3260000         add ecx, 0x26f3
// 00867e75  51                   push ecx
// 00867e76  8bc8                 mov ecx, eax
// 00867e78  ffd2                 call edx
// 00867e7a  894664               mov dword ptr [esi + 0x64], eax
// 00867e7d  8b03                 mov eax, dword ptr [ebx]
// 00867e7f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00867e82  55                   push ebp
// 00867e83  55                   push ebp
// 00867e84  8bcb                 mov ecx, ebx
// 00867e86  896c2418             mov dword ptr [esp + 0x18], ebp
// 00867e8a  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00867e8e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00867e92  896c2424             mov dword ptr [esp + 0x24], ebp
// 00867e96  ffd2                 call edx
// 00867e98  50                   push eax
// 00867e99  8d44241c             lea eax, [esp + 0x1c]
// 00867e9d  50                   push eax
// 00867e9e  6800000056           push 0x56000000
// 00867ea3  68b0bca600           push 0xa6bcb0
// 00867ea8  6878c3a500           push 0xa5c378
// 00867ead  8bce                 mov ecx, esi
// 00867eaf  e858fbf3ff           call 0x7a7a0c
// 00867eb4  5f                   pop edi
// 00867eb5  5e                   pop esi
// 00867eb6  5d                   pop ebp
// 00867eb7  5b                   pop ebx
// 00867eb8  83c410               add esp, 0x10
// 00867ebb  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneSplitterContainer@@PAVCXTPDockingPaneBase@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
