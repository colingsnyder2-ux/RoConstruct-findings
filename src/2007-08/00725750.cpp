// from server: 100% by auto
// roc 2007-08 00725750  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725750
//
// 00725750  80790400             cmp byte ptr [ecx + 4], 0
// 00725754  740a                 je 0x725760
// 00725756  8b01                 mov eax, dword ptr [ecx]
// 00725758  50                   push eax
// 00725759  ff15fcd27700         call dword ptr [0x77d2fc]
// 0072575f  c3                   ret 
// 00725760  8b09                 mov ecx, dword ptr [ecx]
// 00725762  6aff                 push -1
// 00725764  51                   push ecx
// 00725765  ff15b4d27700         call dword ptr [0x77d2b4]
// 0072576b  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?do_lock@mutex@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
