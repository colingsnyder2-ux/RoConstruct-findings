// roc 2010-06 008829e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008829e0
//
// 008829e0  8b442404             mov eax, dword ptr [esp + 4]
// 008829e4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008829e8  53                   push ebx
// 008829e9  55                   push ebp
// 008829ea  56                   push esi
// 008829eb  57                   push edi
// 008829ec  8bf9                 mov edi, ecx
// 008829ee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008829f2  8b7774               mov esi, dword ptr [edi + 0x74]
// 008829f5  83ee01               sub esi, 1
// 008829f8  894744               mov dword ptr [edi + 0x44], eax
// 008829fb  8b442420             mov eax, dword ptr [esp + 0x20]
// 008829ff  894f48               mov dword ptr [edi + 0x48], ecx
// 00882a02  89574c               mov dword ptr [edi + 0x4c], edx
// 00882a05  894750               mov dword ptr [edi + 0x50], eax
// 00882a08  7837                 js 0x882a41
// 00882a0a  8d9b00000000         lea ebx, [ebx]
// 00882a10  85f6                 test esi, esi
// 00882a12  7c34                 jl 0x882a48
// 00882a14  3b7774               cmp esi, dword ptr [edi + 0x74]
// 00882a17  7d2f                 jge 0x882a48
// 00882a19  83ec10               sub esp, 0x10
// 00882a1c  8bc4                 mov eax, esp
// 00882a1e  33c9                 xor ecx, ecx
// 00882a20  8908                 mov dword ptr [eax], ecx
// 00882a22  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 00882a25  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00882a28  33d2                 xor edx, edx
// 00882a2a  895004               mov dword ptr [eax + 4], edx
// 00882a2d  33db                 xor ebx, ebx
// 00882a2f  33ed                 xor ebp, ebp
// 00882a31  895808               mov dword ptr [eax + 8], ebx
// 00882a34  89680c               mov dword ptr [eax + 0xc], ebp
// 00882a37  e8d4f8ffff           call 0x882310
// 00882a3c  83ee01               sub esi, 1
// 00882a3f  79cf                 jns 0x882a10
// 00882a41  5f                   pop edi
// 00882a42  5e                   pop esi
// 00882a43  5d                   pop ebp
// 00882a44  5b                   pop ebx
// 00882a45  c21000               ret 0x10
// 00882a48  e8ff51f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?SetRect@CXTPTabManagerItem@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp