// from server: 100% by auto
// roc 2007-08 00725700  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725700
//
// 00725700  56                   push esi
// 00725701  8bf1                 mov esi, ecx
// 00725703  c70600000000         mov dword ptr [esi], 0
// 00725709  c6460401             mov byte ptr [esi + 4], 1
// 0072570d  e85effffff           call 0x725670
// 00725712  8906                 mov dword ptr [esi], eax
// 00725714  8bc6                 mov eax, esi
// 00725716  5e                   pop esi
// 00725717  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ??0mutex@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
