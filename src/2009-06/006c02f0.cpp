// roc 2009-06 006c02f0  unit: RBX::Lua::LuaArguments  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c02f0
//
// 006c02f0  6864b1a300           push 0xa3b164
// 006c02f5  ff15a4e18900         call dword ptr [0x89e1a4]
// 006c02fb  c3                   ret 
// library boost-1.34.1/libs\thread\src\tss_hooks.cpp (function ?init_threadmon_mutex@?A0xcd019971@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss_hooks.cpp
