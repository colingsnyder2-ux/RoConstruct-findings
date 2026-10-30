// roc 2009-12 00837230  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00837230
//
// 00837230  53                   push ebx
// 00837231  55                   push ebp
// 00837232  8be9                 mov ebp, ecx
// 00837234  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00837238  e8a3f9ffff           call 0x836be0
// 0083723d  33db                 xor ebx, ebx
// 0083723f  399d84000000         cmp dword ptr [ebp + 0x84], ebx
// 00837245  7e56                 jle 0x83729d
// 00837247  56                   push esi
// 00837248  57                   push edi
// 00837249  8da42400000000       lea esp, [esp]
// 00837250  53                   push ebx
// 00837251  8bcd                 mov ecx, ebp
// 00837253  e888dafdff           call 0x814ce0
// 00837258  8bf8                 mov edi, eax
// 0083725a  85ff                 test edi, edi
// 0083725c  7434                 je 0x837292
// 0083725e  6a50                 push 0x50
// 00837260  e8fbc5fbff           call 0x7f3860
// 00837265  83c404               add esp, 4
// 00837268  85c0                 test eax, eax
// 0083726a  740b                 je 0x837277
// 0083726c  8bc8                 mov ecx, eax
// 0083726e  e88de0ffff           call 0x835300
// 00837273  8bf0                 mov esi, eax
// 00837275  eb02                 jmp 0x837279
// 00837277  33f6                 xor esi, esi
// 00837279  56                   push esi
// 0083727a  8bcf                 mov ecx, edi
// 0083727c  e83fe2ffff           call 0x8354c0
// 00837281  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00837285  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00837288  83c104               add ecx, 4
// 0083728b  56                   push esi
// 0083728c  50                   push eax
// 0083728d  e8de390300           call 0x86ac70
// 00837292  43                   inc ebx
// 00837293  3b9d84000000         cmp ebx, dword ptr [ebp + 0x84]
// 00837299  7cb5                 jl 0x837250
// 0083729b  5f                   pop edi
// 0083729c  5e                   pop esi
// 0083729d  5d                   pop ebp
// 0083729e  5b                   pop ebx
// 0083729f  c20400               ret 4
// copied from an identical function in another client (function ?GetDockState@CXTPCommandBars@@IAEXAAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPDockState.cpp