// roc 2008-06 0075ce90  unit: CXTPDockingPaneMiniWnd  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ce90
//
// 0075ce90  83ec2c               sub esp, 0x2c
// 0075ce93  56                   push esi
// 0075ce94  57                   push edi
// 0075ce95  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0075ce99  817f14f4240000       cmp dword ptr [edi + 0x14], 0x24f4
// 0075cea0  8bf1                 mov esi, ecx
// 0075cea2  740a                 je 0x75ceae
// 0075cea4  5f                   pop edi
// 0075cea5  33c0                 xor eax, eax
// 0075cea7  5e                   pop esi
// 0075cea8  83c42c               add esp, 0x2c
// 0075ceab  c20400               ret 4
// 0075ceae  55                   push ebp
// 0075ceaf  e88cf8ffff           call 0x75c740
// 0075ceb4  8be8                 mov ebp, eax
// 0075ceb6  85ed                 test ebp, ebp
// 0075ceb8  0f84d8000000         je 0x75cf96
// 0075cebe  53                   push ebx
// 0075cebf  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0075cec5  c786f000000001000000 mov dword ptr [esi + 0xf0], 1
// 0075cecf  e8cc050000           call 0x75d4a0
// 0075ced4  8b4f04               mov ecx, dword ptr [edi + 4]
// 0075ced7  8b5708               mov edx, dword ptr [edi + 8]
// 0075ceda  8bd8                 mov ebx, eax
// 0075cedc  8b07                 mov eax, dword ptr [edi]
// 0075cede  8944242c             mov dword ptr [esp + 0x2c], eax
// 0075cee2  8b470c               mov eax, dword ptr [edi + 0xc]
// 0075cee5  894c2430             mov dword ptr [esp + 0x30], ecx
// 0075cee9  56                   push esi
// 0075ceea  8d4c2414             lea ecx, [esp + 0x14]
// 0075ceee  89542438             mov dword ptr [esp + 0x38], edx
// 0075cef2  8944243c             mov dword ptr [esp + 0x3c], eax
// 0075cef6  e8d5abf9ff           call 0x6f7ad0
// 0075cefb  8bce                 mov ecx, esi
// 0075cefd  e896f00500           call 0x7bbf98
// 0075cf02  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0075cf06  a900004000           test eax, 0x400000
// 0075cf0b  51                   push ecx
// 0075cf0c  8d442430             lea eax, [esp + 0x30]
// 0075cf10  741a                 je 0x75cf2c
// 0075cf12  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0075cf16  2b542438             sub edx, dword ptr [esp + 0x38]
// 0075cf1a  2b542430             sub edx, dword ptr [esp + 0x30]
// 0075cf1e  52                   push edx
// 0075cf1f  50                   push eax
// 0075cf20  ff15682d8000         call dword ptr [0x802d68]
// 0075cf26  8b442434             mov eax, dword ptr [esp + 0x34]
// 0075cf2a  eb10                 jmp 0x75cf3c
// 0075cf2c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0075cf30  52                   push edx
// 0075cf31  50                   push eax
// 0075cf32  ff15682d8000         call dword ptr [0x802d68]
// 0075cf38  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0075cf3c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0075cf40  6a00                 push 0
// 0075cf42  6a00                 push 0
// 0075cf44  894c2430             mov dword ptr [esp + 0x30], ecx
// 0075cf48  c7471801000000       mov dword ptr [edi + 0x18], 1
// 0075cf4f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075cf52  6885000000           push 0x85
// 0075cf57  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0075cf5b  8b2d142e8000         mov ebp, dword ptr [0x802e14]
// 0075cf61  51                   push ecx
// 0075cf62  89442434             mov dword ptr [esp + 0x34], eax
// 0075cf66  ffd5                 call ebp
// 0075cf68  8b13                 mov edx, dword ptr [ebx]
// 0075cf6a  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 0075cf70  8d442420             lea eax, [esp + 0x20]
// 0075cf74  50                   push eax
// 0075cf75  6a05                 push 5
// 0075cf77  8bcb                 mov ecx, ebx
// 0075cf79  ffd2                 call edx
// 0075cf7b  c7471800000000       mov dword ptr [edi + 0x18], 0
// 0075cf82  8b7620               mov esi, dword ptr [esi + 0x20]
// 0075cf85  5b                   pop ebx
// 0075cf86  85f6                 test esi, esi
// 0075cf88  740c                 je 0x75cf96
// 0075cf8a  6a00                 push 0
// 0075cf8c  6a00                 push 0
// 0075cf8e  6885000000           push 0x85
// 0075cf93  56                   push esi
// 0075cf94  ffd5                 call ebp
// 0075cf96  5d                   pop ebp
// 0075cf97  5f                   pop edi
// 0075cf98  b801000000           mov eax, 1
// 0075cf9d  5e                   pop esi
// 0075cf9e  83c42c               add esp, 0x2c
// 0075cfa1  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnCaptionButtonDown@CXTPDockingPaneMiniWnd@@MAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp
