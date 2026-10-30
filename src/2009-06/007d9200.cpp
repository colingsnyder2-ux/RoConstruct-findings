// roc 2009-06 007d9200  unit: CXTPDockingPaneSplitterWnd  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d9200
//
// 007d9200  83ec10               sub esp, 0x10
// 007d9203  8b442418             mov eax, dword ptr [esp + 0x18]
// 007d9207  53                   push ebx
// 007d9208  55                   push ebp
// 007d9209  56                   push esi
// 007d920a  8bf1                 mov esi, ecx
// 007d920c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007d9210  57                   push edi
// 007d9211  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007d9215  33d2                 xor edx, edx
// 007d9217  894e5c               mov dword ptr [esi + 0x5c], ecx
// 007d921a  894658               mov dword ptr [esi + 0x58], eax
// 007d921d  897e54               mov dword ptr [esi + 0x54], edi
// 007d9220  33ed                 xor ebp, ebp
// 007d9222  39af90000000         cmp dword ptr [edi + 0x90], ebp
// 007d9228  8d5f20               lea ebx, [edi + 0x20]
// 007d922b  0f94c2               sete dl
// 007d922e  8bcb                 mov ecx, ebx
// 007d9230  895668               mov dword ptr [esi + 0x68], edx
// 007d9233  e8c8caffff           call 0x7d5d00
// 007d9238  894660               mov dword ptr [esi + 0x60], eax
// 007d923b  e8001ffcff           call 0x79b140
// 007d9240  8b8f90000000         mov ecx, dword ptr [edi + 0x90]
// 007d9246  8b10                 mov edx, dword ptr [eax]
// 007d9248  8b5218               mov edx, dword ptr [edx + 0x18]
// 007d924b  f7d9                 neg ecx
// 007d924d  1bc9                 sbb ecx, ecx
// 007d924f  81c1f3260000         add ecx, 0x26f3
// 007d9255  51                   push ecx
// 007d9256  8bc8                 mov ecx, eax
// 007d9258  ffd2                 call edx
// 007d925a  894664               mov dword ptr [esi + 0x64], eax
// 007d925d  8b03                 mov eax, dword ptr [ebx]
// 007d925f  8b5018               mov edx, dword ptr [eax + 0x18]
// 007d9262  55                   push ebp
// 007d9263  55                   push ebp
// 007d9264  8bcb                 mov ecx, ebx
// 007d9266  896c2418             mov dword ptr [esp + 0x18], ebp
// 007d926a  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007d926e  896c2420             mov dword ptr [esp + 0x20], ebp
// 007d9272  896c2424             mov dword ptr [esp + 0x24], ebp
// 007d9276  ffd2                 call edx
// 007d9278  50                   push eax
// 007d9279  8d44241c             lea eax, [esp + 0x1c]
// 007d927d  50                   push eax
// 007d927e  6800000056           push 0x56000000
// 007d9283  6858759000           push 0x907558
// 007d9288  68107c8f00           push 0x8f7c10
// 007d928d  8bce                 mov ecx, esi
// 007d928f  e810f8f3ff           call 0x718aa4
// 007d9294  5f                   pop edi
// 007d9295  5e                   pop esi
// 007d9296  5d                   pop ebp
// 007d9297  5b                   pop ebx
// 007d9298  83c410               add esp, 0x10
// 007d929b  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneSplitterContainer@@PAVCXTPDockingPaneBase@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
