// roc 2012-06 00a34960  unit: CRobloxWnd::PartDropTarget  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a34960
//
// 00a34960  83ec10               sub esp, 0x10
// 00a34963  56                   push esi
// 00a34964  57                   push edi
// 00a34965  8bf9                 mov edi, ecx
// 00a34967  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 00a3496d  33f6                 xor esi, esi
// 00a3496f  397008               cmp dword ptr [eax + 8], esi
// 00a34972  7e2e                 jle 0xa349a2
// 00a34974  85f6                 test esi, esi
// 00a34976  7c79                 jl 0xa349f1
// 00a34978  3b7008               cmp esi, dword ptr [eax + 8]
// 00a3497b  7d74                 jge 0xa349f1
// 00a3497d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a34981  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a34985  51                   push ecx
// 00a34986  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00a34989  52                   push edx
// 00a3498a  8b5004               mov edx, dword ptr [eax + 4]
// 00a3498d  51                   push ecx
// 00a3498e  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 00a34991  e8ca840100           call 0xa4ce60
// 00a34996  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 00a3499c  46                   inc esi
// 00a3499d  3b7008               cmp esi, dword ptr [eax + 8]
// 00a349a0  7cd2                 jl 0xa34974
// 00a349a2  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a349a6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a349aa  50                   push eax
// 00a349ab  51                   push ecx
// 00a349ac  8bcf                 mov ecx, edi
// 00a349ae  e8fdfdffff           call 0xa347b0
// 00a349b3  85c0                 test eax, eax
// 00a349b5  742b                 je 0xa349e2
// 00a349b7  8b5720               mov edx, dword ptr [edi + 0x20]
// 00a349ba  a10c63e000           mov eax, dword ptr [0xe0630c]
// 00a349bf  8d4c2408             lea ecx, [esp + 8]
// 00a349c3  51                   push ecx
// 00a349c4  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 00a349cc  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00a349d4  89542414             mov dword ptr [esp + 0x14], edx
// 00a349d8  89442418             mov dword ptr [esp + 0x18], eax
// 00a349dc  ff156420b200         call dword ptr [0xb22064]
// 00a349e2  8bcf                 mov ecx, edi
// 00a349e4  e8f5dcf4ff           call 0x9826de
// 00a349e9  5f                   pop edi
// 00a349ea  5e                   pop esi
// 00a349eb  83c410               add esp, 0x10
// 00a349ee  c20c00               ret 0xc
// 00a349f1  e8cad9f4ff           call 0x9823c0
// copied from an identical function in another client (function ?OnMouseMove@CXTPDockingPaneAutoHidePanel@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp