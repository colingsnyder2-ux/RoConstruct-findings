// roc 2009-06 007f3c50  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f3c50
//
// 007f3c50  8b442404             mov eax, dword ptr [esp + 4]
// 007f3c54  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f3c58  53                   push ebx
// 007f3c59  55                   push ebp
// 007f3c5a  56                   push esi
// 007f3c5b  57                   push edi
// 007f3c5c  8bf9                 mov edi, ecx
// 007f3c5e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f3c62  8b7774               mov esi, dword ptr [edi + 0x74]
// 007f3c65  83ee01               sub esi, 1
// 007f3c68  894744               mov dword ptr [edi + 0x44], eax
// 007f3c6b  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f3c6f  894f48               mov dword ptr [edi + 0x48], ecx
// 007f3c72  89574c               mov dword ptr [edi + 0x4c], edx
// 007f3c75  894750               mov dword ptr [edi + 0x50], eax
// 007f3c78  7837                 js 0x7f3cb1
// 007f3c7a  8d9b00000000         lea ebx, [ebx]
// 007f3c80  85f6                 test esi, esi
// 007f3c82  7c34                 jl 0x7f3cb8
// 007f3c84  3b7774               cmp esi, dword ptr [edi + 0x74]
// 007f3c87  7d2f                 jge 0x7f3cb8
// 007f3c89  83ec10               sub esp, 0x10
// 007f3c8c  8bc4                 mov eax, esp
// 007f3c8e  33c9                 xor ecx, ecx
// 007f3c90  8908                 mov dword ptr [eax], ecx
// 007f3c92  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 007f3c95  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007f3c98  33d2                 xor edx, edx
// 007f3c9a  895004               mov dword ptr [eax + 4], edx
// 007f3c9d  33db                 xor ebx, ebx
// 007f3c9f  33ed                 xor ebp, ebp
// 007f3ca1  895808               mov dword ptr [eax + 8], ebx
// 007f3ca4  89680c               mov dword ptr [eax + 0xc], ebp
// 007f3ca7  e8d4f8ffff           call 0x7f3580
// 007f3cac  83ee01               sub esi, 1
// 007f3caf  79cf                 jns 0x7f3c80
// 007f3cb1  5f                   pop edi
// 007f3cb2  5e                   pop esi
// 007f3cb3  5d                   pop ebp
// 007f3cb4  5b                   pop ebx
// 007f3cb5  c21000               ret 0x10
// 007f3cb8  e82750f2ff           call 0x718ce4
// copied from an identical function in another client (function ?SetRect@CXTPTabManagerItem@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp