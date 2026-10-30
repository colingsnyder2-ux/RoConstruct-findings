// roc 2009-12 008b0a30  unit: CXTPDockingPaneBase  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0a30
//
// 008b0a30  8b442404             mov eax, dword ptr [esp + 4]
// 008b0a34  53                   push ebx
// 008b0a35  56                   push esi
// 008b0a36  8bf1                 mov esi, ecx
// 008b0a38  57                   push edi
// 008b0a39  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008b0a3d  33db                 xor ebx, ebx
// 008b0a3f  c7065472a000         mov dword ptr [esi], 0xa07254
// 008b0a45  897e0c               mov dword ptr [esi + 0xc], edi
// 008b0a48  894618               mov dword ptr [esi + 0x18], eax
// 008b0a4b  895e10               mov dword ptr [esi + 0x10], ebx
// 008b0a4e  e8edfdffff           call 0x8b0840
// 008b0a53  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008b0a59  894e14               mov dword ptr [esi + 0x14], ecx
// 008b0a5c  8d561c               lea edx, [esi + 0x1c]
// 008b0a5f  33c0                 xor eax, eax
// 008b0a61  33c9                 xor ecx, ecx
// 008b0a63  52                   push edx
// 008b0a64  894604               mov dword ptr [esi + 4], eax
// 008b0a67  894e08               mov dword ptr [esi + 8], ecx
// 008b0a6a  ff159cca9800         call dword ptr [0x98ca9c]
// 008b0a70  56                   push esi
// 008b0a71  8d4f44               lea ecx, [edi + 0x44]
// 008b0a74  895e34               mov dword ptr [esi + 0x34], ebx
// 008b0a77  895e30               mov dword ptr [esi + 0x30], ebx
// 008b0a7a  e801310100           call 0x8c3b80
// 008b0a7f  5f                   pop edi
// 008b0a80  895e2c               mov dword ptr [esi + 0x2c], ebx
// 008b0a83  8bc6                 mov eax, esi
// 008b0a85  5e                   pop esi
// 008b0a86  5b                   pop ebx
// 008b0a87  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPDockingPaneBase@@IAE@W4XTPDockingPaneType@@PAVCXTPDockingPaneLayout@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneBase.cpp