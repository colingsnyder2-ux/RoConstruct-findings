// roc 2008-06 00594c90  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594c90
//
// 00594c90  56                   push esi
// 00594c91  8bf1                 mov esi, ecx
// 00594c93  c70600000000         mov dword ptr [esi], 0
// 00594c99  c6460401             mov byte ptr [esi + 4], 1
// 00594c9d  e86effffff           call 0x594c10
// 00594ca2  8906                 mov dword ptr [esi], eax
// 00594ca4  8bc6                 mov eax, esi
// 00594ca6  5e                   pop esi
// 00594ca7  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ??0mutex@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
