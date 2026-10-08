// from server: 100% by auto
// roc 2007-08 00725790  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725790
//
// 00725790  80790400             cmp byte ptr [ecx + 4], 0
// 00725794  740c                 je 0x7257a2
// 00725796  8b01                 mov eax, dword ptr [ecx]
// 00725798  89442404             mov dword ptr [esp + 4], eax
// 0072579c  ff25fcd27700         jmp dword ptr [0x77d2fc]
// 007257a2  8b09                 mov ecx, dword ptr [ecx]
// 007257a4  6aff                 push -1
// 007257a6  51                   push ecx
// 007257a7  ff15b4d27700         call dword ptr [0x77d2b4]
// 007257ad  c20400               ret 4
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?do_lock@mutex@boost@@AAEXAAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
