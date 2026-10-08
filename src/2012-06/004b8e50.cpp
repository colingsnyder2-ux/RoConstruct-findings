// from server: 100% by auto
// roc 2012-06 004b8e50  unit: CSourceStream  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b8e50
//
// 004b8e50  8b01                 mov eax, dword ptr [ecx]
// 004b8e52  85c0                 test eax, eax
// 004b8e54  7407                 je 0x4b8e5d
// 004b8e56  50                   push eax
// 004b8e57  ff15e821b200         call dword ptr [0xb221e8]
// 004b8e5d  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPRegistryManager.cpp (function ??1CHKey@CXTPRegistryManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPRegistryManager.cpp
