// roc 2012-06 007504d0  unit: RBX::ContentProvider::UCachedContent::?$AsyncHttpCache  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007504d0
//
// 007504d0  8b4104               mov eax, dword ptr [ecx + 4]
// 007504d3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007504d7  3b4104               cmp eax, dword ptr [ecx + 4]
// 007504da  1bc0                 sbb eax, eax
// 007504dc  f7d8                 neg eax
// 007504de  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??Mconnection@signals@boost@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
