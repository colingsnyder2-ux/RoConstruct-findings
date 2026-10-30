// roc 2009-12 00722100  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722100
//
// 00722100  8b4104               mov eax, dword ptr [ecx + 4]
// 00722103  8b09                 mov ecx, dword ptr [ecx]
// 00722105  83f801               cmp eax, 1
// 00722108  7517                 jne 0x722121
// 0072210a  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0072210d  a802                 test al, 2
// 0072210f  752b                 jne 0x72213c
// 00722111  83c802               or eax, 2
// 00722114  89413c               mov dword ptr [ecx + 0x3c], eax
// 00722117  8b01                 mov eax, dword ptr [ecx]
// 00722119  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0072211c  6a01                 push 1
// 0072211e  ffd2                 call edx
// 00722120  c3                   ret 
// 00722121  83f802               cmp eax, 2
// 00722124  7516                 jne 0x72213c
// 00722126  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00722129  a804                 test al, 4
// 0072212b  750f                 jne 0x72213c
// 0072212d  83c804               or eax, 4
// 00722130  89413c               mov dword ptr [ecx + 0x3c], eax
// 00722133  8b01                 mov eax, dword ptr [ecx]
// 00722135  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00722138  6a02                 push 2
// 0072213a  ffd2                 call edx
// 0072213c  c3                   ret 
// copied from an identical function in another client (function ??R?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@detail@iostreams@boost@@QBEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp