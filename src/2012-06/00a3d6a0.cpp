// roc 2012-06 00a3d6a0  unit: CXTPDockingPaneSplitterWnd  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d6a0
//
// 00a3d6a0  83ec10               sub esp, 0x10
// 00a3d6a3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3d6a7  53                   push ebx
// 00a3d6a8  55                   push ebp
// 00a3d6a9  56                   push esi
// 00a3d6aa  8bf1                 mov esi, ecx
// 00a3d6ac  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a3d6b0  57                   push edi
// 00a3d6b1  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a3d6b5  33d2                 xor edx, edx
// 00a3d6b7  894e5c               mov dword ptr [esi + 0x5c], ecx
// 00a3d6ba  894658               mov dword ptr [esi + 0x58], eax
// 00a3d6bd  897e54               mov dword ptr [esi + 0x54], edi
// 00a3d6c0  33ed                 xor ebp, ebp
// 00a3d6c2  39af90000000         cmp dword ptr [edi + 0x90], ebp
// 00a3d6c8  8d5f20               lea ebx, [edi + 0x20]
// 00a3d6cb  0f94c2               sete dl
// 00a3d6ce  8bcb                 mov ecx, ebx
// 00a3d6d0  895668               mov dword ptr [esi + 0x68], edx
// 00a3d6d3  e898caffff           call 0xa3a170
// 00a3d6d8  894660               mov dword ptr [esi + 0x60], eax
// 00a3d6db  e810aefbff           call 0x9f84f0
// 00a3d6e0  8b8f90000000         mov ecx, dword ptr [edi + 0x90]
// 00a3d6e6  8b10                 mov edx, dword ptr [eax]
// 00a3d6e8  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a3d6eb  f7d9                 neg ecx
// 00a3d6ed  1bc9                 sbb ecx, ecx
// 00a3d6ef  81c1f3260000         add ecx, 0x26f3
// 00a3d6f5  51                   push ecx
// 00a3d6f6  8bc8                 mov ecx, eax
// 00a3d6f8  ffd2                 call edx
// 00a3d6fa  894664               mov dword ptr [esi + 0x64], eax
// 00a3d6fd  8b03                 mov eax, dword ptr [ebx]
// 00a3d6ff  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a3d702  55                   push ebp
// 00a3d703  55                   push ebp
// 00a3d704  8bcb                 mov ecx, ebx
// 00a3d706  896c2418             mov dword ptr [esp + 0x18], ebp
// 00a3d70a  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a3d70e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00a3d712  896c2424             mov dword ptr [esp + 0x24], ebp
// 00a3d716  ffd2                 call edx
// 00a3d718  50                   push eax
// 00a3d719  8d44241c             lea eax, [esp + 0x1c]
// 00a3d71d  50                   push eax
// 00a3d71e  6800000056           push 0x56000000
// 00a3d723  68581dc200           push 0xc21d58
// 00a3d728  68b836c100           push 0xc136b8
// 00a3d72d  8bce                 mov ecx, esi
// 00a3d72f  e8524af4ff           call 0x982186
// 00a3d734  5f                   pop edi
// 00a3d735  5e                   pop esi
// 00a3d736  5d                   pop ebp
// 00a3d737  5b                   pop ebx
// 00a3d738  83c410               add esp, 0x10
// 00a3d73b  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneSplitterContainer@@PAVCXTPDockingPaneBase@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
