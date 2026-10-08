// roc 2007-03 00513660  unit: seg_00510000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513660
//
// 00513660  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00513664  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00513668  50                   push eax
// 00513669  51                   push ecx
// 0051366a  e8b1ffffff           call 0x513620
// 0051366f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00513673  83c404               add esp, 4
// 00513676  50                   push eax
// 00513677  52                   push edx
// 00513678  e863ffffff           call 0x5135e0
// 0051367d  83c40c               add esp, 0xc
// 00513680  c3                   ret 
// library jpeg-6b/jcparam.c (function _jpeg_set_quality)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
