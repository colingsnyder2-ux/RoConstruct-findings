// roc 2012-06 00a347b0  unit: CRobloxWnd::PartDropTarget  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a347b0
//
// 00a347b0  56                   push esi
// 00a347b1  57                   push edi
// 00a347b2  8bf9                 mov edi, ecx
// 00a347b4  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 00a347ba  33f6                 xor esi, esi
// 00a347bc  397008               cmp dword ptr [eax + 8], esi
// 00a347bf  7e31                 jle 0xa347f2
// 00a347c1  85f6                 test esi, esi
// 00a347c3  7c3c                 jl 0xa34801
// 00a347c5  3b7008               cmp esi, dword ptr [eax + 8]
// 00a347c8  7d37                 jge 0xa34801
// 00a347ca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a347ce  8b4004               mov eax, dword ptr [eax + 4]
// 00a347d1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a347d5  51                   push ecx
// 00a347d6  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00a347d9  8d04b0               lea eax, [eax + esi*4]
// 00a347dc  52                   push edx
// 00a347dd  e8ce820100           call 0xa4cab0
// 00a347e2  85c0                 test eax, eax
// 00a347e4  7513                 jne 0xa347f9
// 00a347e6  8b87b0000000         mov eax, dword ptr [edi + 0xb0]
// 00a347ec  46                   inc esi
// 00a347ed  3b7008               cmp esi, dword ptr [eax + 8]
// 00a347f0  7ccf                 jl 0xa347c1
// 00a347f2  5f                   pop edi
// 00a347f3  33c0                 xor eax, eax
// 00a347f5  5e                   pop esi
// 00a347f6  c20800               ret 8
// 00a347f9  8b4040               mov eax, dword ptr [eax + 0x40]
// 00a347fc  5f                   pop edi
// 00a347fd  5e                   pop esi
// 00a347fe  c20800               ret 8
// 00a34801  e8badbf4ff           call 0x9823c0
// copied from an identical function in another client (function ?HitTest@CXTPDockingPaneAutoHidePanel@@QBEPAVCXTPDockingPane@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp