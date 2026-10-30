// roc 2009-12 008ab170  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab170
//
// 008ab170  83ec10               sub esp, 0x10
// 008ab173  56                   push esi
// 008ab174  57                   push edi
// 008ab175  8bf9                 mov edi, ecx
// 008ab177  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 008ab17d  33f6                 xor esi, esi
// 008ab17f  397008               cmp dword ptr [eax + 8], esi
// 008ab182  7e2e                 jle 0x8ab1b2
// 008ab184  85f6                 test esi, esi
// 008ab186  7c79                 jl 0x8ab201
// 008ab188  3b7008               cmp esi, dword ptr [eax + 8]
// 008ab18b  7d74                 jge 0x8ab201
// 008ab18d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ab191  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ab195  51                   push ecx
// 008ab196  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008ab199  52                   push edx
// 008ab19a  8b5004               mov edx, dword ptr [eax + 4]
// 008ab19d  51                   push ecx
// 008ab19e  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 008ab1a1  e89a480200           call 0x8cfa40
// 008ab1a6  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 008ab1ac  46                   inc esi
// 008ab1ad  3b7008               cmp esi, dword ptr [eax + 8]
// 008ab1b0  7cd2                 jl 0x8ab184
// 008ab1b2  8b442424             mov eax, dword ptr [esp + 0x24]
// 008ab1b6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ab1ba  50                   push eax
// 008ab1bb  51                   push ecx
// 008ab1bc  8bcf                 mov ecx, edi
// 008ab1be  e8fdfdffff           call 0x8aafc0
// 008ab1c3  85c0                 test eax, eax
// 008ab1c5  742b                 je 0x8ab1f2
// 008ab1c7  8b5720               mov edx, dword ptr [edi + 0x20]
// 008ab1ca  a1bc8eb600           mov eax, dword ptr [0xb68ebc]
// 008ab1cf  8d4c2408             lea ecx, [esp + 8]
// 008ab1d3  51                   push ecx
// 008ab1d4  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 008ab1dc  c744241003000000     mov dword ptr [esp + 0x10], 3
// 008ab1e4  89542414             mov dword ptr [esp + 0x14], edx
// 008ab1e8  89442418             mov dword ptr [esp + 0x18], eax
// 008ab1ec  ff1564b09800         call dword ptr [0x98b064]
// 008ab1f2  8bcf                 mov ecx, edi
// 008ab1f4  e8378cf4ff           call 0x7f3e30
// 008ab1f9  5f                   pop edi
// 008ab1fa  5e                   pop esi
// 008ab1fb  83c410               add esp, 0x10
// 008ab1fe  c20c00               ret 0xc
// 008ab201  e80689f4ff           call 0x7f3b0c
// copied from an identical function in another client (function ?OnMouseMove@CXTPDockingPaneAutoHidePanel@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp