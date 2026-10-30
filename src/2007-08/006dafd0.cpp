// roc 2007-08 006dafd0  unit: CXTPReportControl::CReportDropTarget  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dafd0
//
// 006dafd0  83ec10               sub esp, 0x10
// 006dafd3  53                   push ebx
// 006dafd4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006dafd8  55                   push ebp
// 006dafd9  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006dafdd  56                   push esi
// 006dafde  57                   push edi
// 006dafdf  8bf9                 mov edi, ecx
// 006dafe1  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 006dafe7  33f6                 xor esi, esi
// 006dafe9  397008               cmp dword ptr [eax + 8], esi
// 006dafec  7e2a                 jle 0x6db018
// 006dafee  8bff                 mov edi, edi
// 006daff0  85f6                 test esi, esi
// 006daff2  7c6e                 jl 0x6db062
// 006daff4  3b7008               cmp esi, dword ptr [eax + 8]
// 006daff7  7d69                 jge 0x6db062
// 006daff9  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006daffc  8b5004               mov edx, dword ptr [eax + 4]
// 006dafff  53                   push ebx
// 006db000  55                   push ebp
// 006db001  51                   push ecx
// 006db002  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 006db005  e8e63b0200           call 0x6febf0
// 006db00a  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 006db010  83c601               add esi, 1
// 006db013  3b7008               cmp esi, dword ptr [eax + 8]
// 006db016  7cd8                 jl 0x6daff0
// 006db018  53                   push ebx
// 006db019  55                   push ebp
// 006db01a  8bcf                 mov ecx, edi
// 006db01c  e8effdffff           call 0x6dae10
// 006db021  85c0                 test eax, eax
// 006db023  742c                 je 0x6db051
// 006db025  8b4720               mov eax, dword ptr [edi + 0x20]
// 006db028  8b0d94888b00         mov ecx, dword ptr [0x8b8894]
// 006db02e  8d542410             lea edx, [esp + 0x10]
// 006db032  52                   push edx
// 006db033  c744241410000000     mov dword ptr [esp + 0x14], 0x10
// 006db03b  c744241803000000     mov dword ptr [esp + 0x18], 3
// 006db043  8944241c             mov dword ptr [esp + 0x1c], eax
// 006db047  894c2420             mov dword ptr [esp + 0x20], ecx
// 006db04b  ff1544d07700         call dword ptr [0x77d044]
// 006db051  8bcf                 mov ecx, edi
// 006db053  e8e651f5ff           call 0x63023e
// 006db058  5f                   pop edi
// 006db059  5e                   pop esi
// 006db05a  5d                   pop ebp
// 006db05b  5b                   pop ebx
// 006db05c  83c410               add esp, 0x10
// 006db05f  c20c00               ret 0xc
// 006db062  e8b94ef5ff           call 0x62ff20
// copied from an identical function in another client (function ?OnMouseMove@CXTPDockingPaneAutoHidePanel@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp