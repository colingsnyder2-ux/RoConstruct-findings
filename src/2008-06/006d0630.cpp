// from server: 100% by auto
// roc 2008-06 006d0630  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0630
//
// 006d0630  56                   push esi
// 006d0631  57                   push edi
// 006d0632  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d0636  8bf1                 mov esi, ecx
// 006d0638  85ff                 test edi, edi
// 006d063a  7d05                 jge 0x6d0641
// 006d063c  e80303fdff           call 0x6a0944
// 006d0641  3b7e08               cmp edi, dword ptr [esi + 8]
// 006d0644  7c0b                 jl 0x6d0651
// 006d0646  6aff                 push -1
// 006d0648  8d4701               lea eax, [edi + 1]
// 006d064b  50                   push eax
// 006d064c  e88fefffff           call 0x6cf5e0
// 006d0651  8b4e04               mov ecx, dword ptr [esi + 4]
// 006d0654  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d0658  8b4204               mov eax, dword ptr [edx + 4]
// 006d065b  8b74f904             mov esi, dword ptr [ecx + edi*8 + 4]
// 006d065f  8d0cf9               lea ecx, [ecx + edi*8]
// 006d0662  894104               mov dword ptr [ecx + 4], eax
// 006d0665  85c0                 test eax, eax
// 006d0667  740a                 je 0x6d0673
// 006d0669  83c004               add eax, 4
// 006d066c  50                   push eax
// 006d066d  ff15b0218000         call dword ptr [0x8021b0]
// 006d0673  85f6                 test esi, esi
// 006d0675  7407                 je 0x6d067e
// 006d0677  8bce                 mov ecx, esi
// 006d0679  e86605fdff           call 0x6a0be4
// 006d067e  5f                   pop edi
// 006d067f  5e                   pop esi
// 006d0680  c20800               ret 8
// library xtp-11.2.2/Source\Calendar\XTPCalendarControl.cpp (function ?SetAtGrow@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarResource@@@@AAV1@@@QAEXHAAV?$CXTPSmartPtrInternalT@VCXTPCalendarResource@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarControl.cpp
