// roc 2011-06 008c5280  unit: CXTPDockingPaneSplitterWnd  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5280
//
// 008c5280  83ec10               sub esp, 0x10
// 008c5283  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c5287  53                   push ebx
// 008c5288  55                   push ebp
// 008c5289  56                   push esi
// 008c528a  8bf1                 mov esi, ecx
// 008c528c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008c5290  57                   push edi
// 008c5291  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008c5295  33d2                 xor edx, edx
// 008c5297  894e5c               mov dword ptr [esi + 0x5c], ecx
// 008c529a  894658               mov dword ptr [esi + 0x58], eax
// 008c529d  897e54               mov dword ptr [esi + 0x54], edi
// 008c52a0  33ed                 xor ebp, ebp
// 008c52a2  39af90000000         cmp dword ptr [edi + 0x90], ebp
// 008c52a8  8d5f20               lea ebx, [edi + 0x20]
// 008c52ab  0f94c2               sete dl
// 008c52ae  8bcb                 mov ecx, ebx
// 008c52b0  895668               mov dword ptr [esi + 0x68], edx
// 008c52b3  e8a8caffff           call 0x8c1d60
// 008c52b8  894660               mov dword ptr [esi + 0x60], eax
// 008c52bb  e880acfbff           call 0x87ff40
// 008c52c0  8b8f90000000         mov ecx, dword ptr [edi + 0x90]
// 008c52c6  8b10                 mov edx, dword ptr [eax]
// 008c52c8  8b5218               mov edx, dword ptr [edx + 0x18]
// 008c52cb  f7d9                 neg ecx
// 008c52cd  1bc9                 sbb ecx, ecx
// 008c52cf  81c1f3260000         add ecx, 0x26f3
// 008c52d5  51                   push ecx
// 008c52d6  8bc8                 mov ecx, eax
// 008c52d8  ffd2                 call edx
// 008c52da  894664               mov dword ptr [esi + 0x64], eax
// 008c52dd  8b03                 mov eax, dword ptr [ebx]
// 008c52df  8b5018               mov edx, dword ptr [eax + 0x18]
// 008c52e2  55                   push ebp
// 008c52e3  55                   push ebp
// 008c52e4  8bcb                 mov ecx, ebx
// 008c52e6  896c2418             mov dword ptr [esp + 0x18], ebp
// 008c52ea  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008c52ee  896c2420             mov dword ptr [esp + 0x20], ebp
// 008c52f2  896c2424             mov dword ptr [esp + 0x24], ebp
// 008c52f6  ffd2                 call edx
// 008c52f8  50                   push eax
// 008c52f9  8d44241c             lea eax, [esp + 0x1c]
// 008c52fd  50                   push eax
// 008c52fe  6800000056           push 0x56000000
// 008c5303  68c066ad00           push 0xad66c0
// 008c5308  68c07fac00           push 0xac7fc0
// 008c530d  8bce                 mov ecx, esi
// 008c530f  e8b64df4ff           call 0x80a0ca
// 008c5314  5f                   pop edi
// 008c5315  5e                   pop esi
// 008c5316  5d                   pop ebp
// 008c5317  5b                   pop ebx
// 008c5318  83c410               add esp, 0x10
// 008c531b  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneSplitterContainer@@PAVCXTPDockingPaneBase@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
