// roc 2011-06 008d38f0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d38f0
//
// 008d38f0  8b442404             mov eax, dword ptr [esp + 4]
// 008d38f4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008d38f8  53                   push ebx
// 008d38f9  55                   push ebp
// 008d38fa  56                   push esi
// 008d38fb  57                   push edi
// 008d38fc  8bf9                 mov edi, ecx
// 008d38fe  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d3902  8b7774               mov esi, dword ptr [edi + 0x74]
// 008d3905  83ee01               sub esi, 1
// 008d3908  894744               mov dword ptr [edi + 0x44], eax
// 008d390b  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d390f  894f48               mov dword ptr [edi + 0x48], ecx
// 008d3912  89574c               mov dword ptr [edi + 0x4c], edx
// 008d3915  894750               mov dword ptr [edi + 0x50], eax
// 008d3918  7837                 js 0x8d3951
// 008d391a  8d9b00000000         lea ebx, [ebx]
// 008d3920  85f6                 test esi, esi
// 008d3922  7c34                 jl 0x8d3958
// 008d3924  3b7774               cmp esi, dword ptr [edi + 0x74]
// 008d3927  7d2f                 jge 0x8d3958
// 008d3929  83ec10               sub esp, 0x10
// 008d392c  8bc4                 mov eax, esp
// 008d392e  33c9                 xor ecx, ecx
// 008d3930  8908                 mov dword ptr [eax], ecx
// 008d3932  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 008d3935  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008d3938  33d2                 xor edx, edx
// 008d393a  895004               mov dword ptr [eax + 4], edx
// 008d393d  33db                 xor ebx, ebx
// 008d393f  33ed                 xor ebp, ebp
// 008d3941  895808               mov dword ptr [eax + 8], ebx
// 008d3944  89680c               mov dword ptr [eax + 0xc], ebp
// 008d3947  e8d4f8ffff           call 0x8d3220
// 008d394c  83ee01               sub esi, 1
// 008d394f  79cf                 jns 0x8d3920
// 008d3951  5f                   pop edi
// 008d3952  5e                   pop esi
// 008d3953  5d                   pop ebp
// 008d3954  5b                   pop ebx
// 008d3955  c21000               ret 0x10
// 008d3958  e8ad69f3ff           call 0x80a30a
// copied from an identical function in another client (function ?SetRect@CXTPTabManagerItem@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp