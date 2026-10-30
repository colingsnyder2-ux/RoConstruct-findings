// roc 2012-06 00a4bc20  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4bc20
//
// 00a4bc20  8b442404             mov eax, dword ptr [esp + 4]
// 00a4bc24  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a4bc28  53                   push ebx
// 00a4bc29  55                   push ebp
// 00a4bc2a  56                   push esi
// 00a4bc2b  57                   push edi
// 00a4bc2c  8bf9                 mov edi, ecx
// 00a4bc2e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a4bc32  8b7774               mov esi, dword ptr [edi + 0x74]
// 00a4bc35  83ee01               sub esi, 1
// 00a4bc38  894744               mov dword ptr [edi + 0x44], eax
// 00a4bc3b  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a4bc3f  894f48               mov dword ptr [edi + 0x48], ecx
// 00a4bc42  89574c               mov dword ptr [edi + 0x4c], edx
// 00a4bc45  894750               mov dword ptr [edi + 0x50], eax
// 00a4bc48  7837                 js 0xa4bc81
// 00a4bc4a  8d9b00000000         lea ebx, [ebx]
// 00a4bc50  85f6                 test esi, esi
// 00a4bc52  7c34                 jl 0xa4bc88
// 00a4bc54  3b7774               cmp esi, dword ptr [edi + 0x74]
// 00a4bc57  7d2f                 jge 0xa4bc88
// 00a4bc59  83ec10               sub esp, 0x10
// 00a4bc5c  8bc4                 mov eax, esp
// 00a4bc5e  33c9                 xor ecx, ecx
// 00a4bc60  8908                 mov dword ptr [eax], ecx
// 00a4bc62  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 00a4bc65  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00a4bc68  33d2                 xor edx, edx
// 00a4bc6a  895004               mov dword ptr [eax + 4], edx
// 00a4bc6d  33db                 xor ebx, ebx
// 00a4bc6f  33ed                 xor ebp, ebp
// 00a4bc71  895808               mov dword ptr [eax + 8], ebx
// 00a4bc74  89680c               mov dword ptr [eax + 0xc], ebp
// 00a4bc77  e8d4f8ffff           call 0xa4b550
// 00a4bc7c  83ee01               sub esi, 1
// 00a4bc7f  79cf                 jns 0xa4bc50
// 00a4bc81  5f                   pop edi
// 00a4bc82  5e                   pop esi
// 00a4bc83  5d                   pop ebp
// 00a4bc84  5b                   pop ebx
// 00a4bc85  c21000               ret 0x10
// 00a4bc88  e83367f3ff           call 0x9823c0
// copied from an identical function in another client (function ?SetRect@CXTPTabManagerItem@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp