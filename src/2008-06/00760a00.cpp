// roc 2008-06 00760a00  unit: CXTPDockingPaneSplitterWnd  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760a00
//
// 00760a00  83ec10               sub esp, 0x10
// 00760a03  8b442418             mov eax, dword ptr [esp + 0x18]
// 00760a07  53                   push ebx
// 00760a08  55                   push ebp
// 00760a09  56                   push esi
// 00760a0a  8bf1                 mov esi, ecx
// 00760a0c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00760a10  57                   push edi
// 00760a11  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00760a15  33d2                 xor edx, edx
// 00760a17  894e5c               mov dword ptr [esi + 0x5c], ecx
// 00760a1a  894658               mov dword ptr [esi + 0x58], eax
// 00760a1d  897e54               mov dword ptr [esi + 0x54], edi
// 00760a20  33ed                 xor ebp, ebp
// 00760a22  39af90000000         cmp dword ptr [edi + 0x90], ebp
// 00760a28  8d5f20               lea ebx, [edi + 0x20]
// 00760a2b  0f94c2               sete dl
// 00760a2e  8bcb                 mov ecx, ebx
// 00760a30  895668               mov dword ptr [esi + 0x68], edx
// 00760a33  e868caffff           call 0x75d4a0
// 00760a38  894660               mov dword ptr [esi + 0x60], eax
// 00760a3b  e800f0fbff           call 0x71fa40
// 00760a40  8b8f90000000         mov ecx, dword ptr [edi + 0x90]
// 00760a46  8b10                 mov edx, dword ptr [eax]
// 00760a48  8b5218               mov edx, dword ptr [edx + 0x18]
// 00760a4b  f7d9                 neg ecx
// 00760a4d  1bc9                 sbb ecx, ecx
// 00760a4f  81c1f3260000         add ecx, 0x26f3
// 00760a55  51                   push ecx
// 00760a56  8bc8                 mov ecx, eax
// 00760a58  ffd2                 call edx
// 00760a5a  894664               mov dword ptr [esi + 0x64], eax
// 00760a5d  8b03                 mov eax, dword ptr [ebx]
// 00760a5f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00760a62  55                   push ebp
// 00760a63  55                   push ebp
// 00760a64  8bcb                 mov ecx, ebx
// 00760a66  896c2418             mov dword ptr [esp + 0x18], ebp
// 00760a6a  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00760a6e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00760a72  896c2424             mov dword ptr [esp + 0x24], ebp
// 00760a76  ffd2                 call edx
// 00760a78  50                   push eax
// 00760a79  8d44241c             lea eax, [esp + 0x1c]
// 00760a7d  50                   push eax
// 00760a7e  6800000056           push 0x56000000
// 00760a83  6820658600           push 0x866520
// 00760a88  68b86b8500           push 0x856bb8
// 00760a8d  8bce                 mov ecx, esi
// 00760a8f  e85efcf3ff           call 0x6a06f2
// 00760a94  5f                   pop edi
// 00760a95  5e                   pop esi
// 00760a96  5d                   pop ebp
// 00760a97  5b                   pop ebx
// 00760a98  83c410               add esp, 0x10
// 00760a9b  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneSplitterContainer@@PAVCXTPDockingPaneBase@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
