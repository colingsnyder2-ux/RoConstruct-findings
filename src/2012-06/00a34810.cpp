// roc 2012-06 00a34810  unit: CRobloxWnd::PartDropTarget  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34810
//
// 00a34810  833d0863e00000       cmp dword ptr [0xe06308], 0
// 00a34817  56                   push esi
// 00a34818  8bf1                 mov esi, ecx
// 00a3481a  0f84f5000000         je 0xa34915
// 00a34820  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00a34826  85c0                 test eax, eax
// 00a34828  0f84e7000000         je 0xa34915
// 00a3482e  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00a34834  57                   push edi
// 00a34835  85c0                 test eax, eax
// 00a34837  744d                 je 0xa34886
// 00a34839  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 00a3483f  6a00                 push 0
// 00a34841  6a00                 push 0
// 00a34843  50                   push eax
// 00a34844  8d7e54               lea edi, [esi + 0x54]
// 00a34847  6a0a                 push 0xa
// 00a34849  8bcf                 mov ecx, edi
// 00a3484b  e820590000           call 0xa3a170
// 00a34850  8bc8                 mov ecx, eax
// 00a34852  e8b91bf9ff           call 0x9c6410
// 00a34857  85c0                 test eax, eax
// 00a34859  0f85b5000000         jne 0xa34914
// 00a3485f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00a34865  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00a3486b  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00a34871  6a00                 push 0
// 00a34873  6a00                 push 0
// 00a34875  50                   push eax
// 00a34876  6a0b                 push 0xb
// 00a34878  8bcf                 mov ecx, edi
// 00a3487a  e8f1580000           call 0xa3a170
// 00a3487f  8bc8                 mov ecx, eax
// 00a34881  e88a1bf9ff           call 0x9c6410
// 00a34886  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a3488b  7472                 je 0xa348ff
// 00a3488d  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 00a34893  8b8af8000000         mov ecx, dword ptr [edx + 0xf8]
// 00a34899  85c9                 test ecx, ecx
// 00a3489b  743d                 je 0xa348da
// 00a3489d  6a00                 push 0
// 00a3489f  e800e2f4ff           call 0x982aa4
// 00a348a4  8d4e54               lea ecx, [esi + 0x54]
// 00a348a7  e8c4580000           call 0xa3a170
// 00a348ac  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00a348b2  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00a348b8  8b5154               mov edx, dword ptr [ecx + 0x54]
// 00a348bb  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00a348c1  8b522c               mov edx, dword ptr [edx + 0x2c]
// 00a348c4  83c154               add ecx, 0x54
// 00a348c7  50                   push eax
// 00a348c8  ffd2                 call edx
// 00a348ca  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00a348d0  c780f800000000000000 mov dword ptr [eax + 0xf8], 0
// 00a348da  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00a348e0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a348e3  6a00                 push 0
// 00a348e5  6a32                 push 0x32
// 00a348e7  6a04                 push 4
// 00a348e9  52                   push edx
// 00a348ea  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a348f0  5f                   pop edi
// 00a348f1  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 00a348fb  5e                   pop esi
// 00a348fc  c20400               ret 4
// 00a348ff  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00a34905  e846efffff           call 0xa33850
// 00a3490a  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 00a34914  5f                   pop edi
// 00a34915  5e                   pop esi
// 00a34916  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindow@CXTPDockingPaneAutoHidePanel@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
