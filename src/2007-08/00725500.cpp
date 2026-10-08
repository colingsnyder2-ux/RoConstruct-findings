// from server: 100% by auto
// roc 2007-08 00725500  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725500
//
// 00725500  8b442404             mov eax, dword ptr [esp + 4]
// 00725504  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00725507  81e1fff9ffff         and ecx, 0xfffff9ff
// 0072550d  81c900080000         or ecx, 0x800
// 00725513  894810               mov dword ptr [eax + 0x10], ecx
// 00725516  c3                   ret 
// library boost-1.34.1/libs\thread\src\once.cpp (function ?hex@std@@YAAAVios_base@1@AAV21@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/once.cpp
