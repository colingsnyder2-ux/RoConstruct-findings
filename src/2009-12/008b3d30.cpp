// roc 2009-12 008b3d30  unit: CXTPDockingPaneSplitterWnd  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3d30
//
// 008b3d30  83ec10               sub esp, 0x10
// 008b3d33  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b3d37  53                   push ebx
// 008b3d38  55                   push ebp
// 008b3d39  56                   push esi
// 008b3d3a  8bf1                 mov esi, ecx
// 008b3d3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b3d40  57                   push edi
// 008b3d41  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008b3d45  33d2                 xor edx, edx
// 008b3d47  894e5c               mov dword ptr [esi + 0x5c], ecx
// 008b3d4a  894658               mov dword ptr [esi + 0x58], eax
// 008b3d4d  897e54               mov dword ptr [esi + 0x54], edi
// 008b3d50  33ed                 xor ebp, ebp
// 008b3d52  39af90000000         cmp dword ptr [edi + 0x90], ebp
// 008b3d58  8d5f20               lea ebx, [edi + 0x20]
// 008b3d5b  0f94c2               sete dl
// 008b3d5e  8bcb                 mov ecx, ebx
// 008b3d60  895668               mov dword ptr [esi + 0x68], edx
// 008b3d63  e8d8caffff           call 0x8b0840
// 008b3d68  894660               mov dword ptr [esi + 0x60], eax
// 008b3d6b  e830abfbff           call 0x86e8a0
// 008b3d70  8b8f90000000         mov ecx, dword ptr [edi + 0x90]
// 008b3d76  8b10                 mov edx, dword ptr [eax]
// 008b3d78  8b5218               mov edx, dword ptr [edx + 0x18]
// 008b3d7b  f7d9                 neg ecx
// 008b3d7d  1bc9                 sbb ecx, ecx
// 008b3d7f  81c1f3260000         add ecx, 0x26f3
// 008b3d85  51                   push ecx
// 008b3d86  8bc8                 mov ecx, eax
// 008b3d88  ffd2                 call edx
// 008b3d8a  894664               mov dword ptr [esi + 0x64], eax
// 008b3d8d  8b03                 mov eax, dword ptr [ebx]
// 008b3d8f  8b5018               mov edx, dword ptr [eax + 0x18]
// 008b3d92  55                   push ebp
// 008b3d93  55                   push ebp
// 008b3d94  8bcb                 mov ecx, ebx
// 008b3d96  896c2418             mov dword ptr [esp + 0x18], ebp
// 008b3d9a  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008b3d9e  896c2420             mov dword ptr [esp + 0x20], ebp
// 008b3da2  896c2424             mov dword ptr [esp + 0x24], ebp
// 008b3da6  ffd2                 call edx
// 008b3da8  50                   push eax
// 008b3da9  8d44241c             lea eax, [esp + 0x1c]
// 008b3dad  50                   push eax
// 008b3dae  6800000056           push 0x56000000
// 008b3db3  68c879a000           push 0xa079c8
// 008b3db8  68b8809f00           push 0x9f80b8
// 008b3dbd  8bce                 mov ecx, esi
// 008b3dbf  e808fbf3ff           call 0x7f38cc
// 008b3dc4  5f                   pop edi
// 008b3dc5  5e                   pop esi
// 008b3dc6  5d                   pop ebp
// 008b3dc7  5b                   pop ebx
// 008b3dc8  83c410               add esp, 0x10
// 008b3dcb  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneSplitterContainer@@PAVCXTPDockingPaneBase@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
