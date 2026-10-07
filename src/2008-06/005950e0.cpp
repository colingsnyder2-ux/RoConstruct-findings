// roc 2008-06 005950e0  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005950e0
//
// 005950e0  c6411c01             mov byte ptr [ecx + 0x1c], 1
// 005950e4  e9d75ae8ff           jmp 0x41abc0
// library boost-1.34.1/libs\signals\src\trackable.cpp (function ??1trackable@signals@boost@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/trackable.cpp
