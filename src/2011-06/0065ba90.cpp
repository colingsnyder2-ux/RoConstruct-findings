// from server: 100% by auto
// roc 2011-06 0065ba90  unit: RBX::ContentProvider::UCachedContent::?$AsyncHttpCache  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065ba90
//
// 0065ba90  8b4104               mov eax, dword ptr [ecx + 4]
// 0065ba93  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065ba97  3b4104               cmp eax, dword ptr [ecx + 4]
// 0065ba9a  1bc0                 sbb eax, eax
// 0065ba9c  f7d8                 neg eax
// 0065ba9e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??Mconnection@signals@boost@@QBE_NABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
