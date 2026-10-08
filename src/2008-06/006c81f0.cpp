// from server: 100% by auto
// roc 2008-06 006c81f0  unit: CInstanceRecord::CNameItem  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c81f0
//
// 006c81f0  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006c81f7  680ce19700           push 0x97e10c
// 006c81fc  743b                 je 0x6c8239
// 006c81fe  ff15b0218000         call dword ptr [0x8021b0]
// 006c8204  833d14e1970000       cmp dword ptr [0x97e114], 0
// 006c820b  741c                 je 0x6c8229
// 006c820d  e8ce88d5ff           call 0x420ae0
// 006c8212  8b442404             mov eax, dword ptr [esp + 4]
// 006c8216  8b0d08e19700         mov ecx, dword ptr [0x97e108]
// 006c821c  50                   push eax
// 006c821d  6a00                 push 0
// 006c821f  51                   push ecx
// 006c8220  ff15f8218000         call dword ptr [0x8021f8]
// 006c8226  c20400               ret 4
// 006c8229  8b542404             mov edx, dword ptr [esp + 4]
// 006c822d  52                   push edx
// 006c822e  e82387fdff           call 0x6a0956
// 006c8233  83c404               add esp, 4
// 006c8236  c20400               ret 4
// 006c8239  ff15b0218000         call dword ptr [0x8021b0]
// 006c823f  8b442404             mov eax, dword ptr [esp + 4]
// 006c8243  50                   push eax
// 006c8244  e8d786fdff           call 0x6a0920
// 006c8249  83c404               add esp, 4
// 006c824c  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??2?$CXTPHeapObjectT@VCCmdTarget@@VCXTPReportDataAllocator@@@@SGPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
