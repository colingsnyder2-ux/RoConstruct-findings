// roc 2009-12 0069f720  unit: std::strstream  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f720
//
// 0069f720  56                   push esi
// 0069f721  8b742408             mov esi, dword ptr [esp + 8]
// 0069f725  57                   push edi
// 0069f726  6a00                 push 0
// 0069f728  6a02                 push 2
// 0069f72a  56                   push esi
// 0069f72b  e840b00e00           call 0x78a770
// 0069f730  8bf8                 mov edi, eax
// 0069f732  a1782bb600           mov eax, dword ptr [0xb62b78]
// 0069f737  50                   push eax
// 0069f738  6a01                 push 1
// 0069f73a  56                   push esi
// 0069f73b  e820af0e00           call 0x78a660
// 0069f740  56                   push esi
// 0069f741  57                   push edi
// 0069f742  50                   push eax
// 0069f743  e8a85b0f00           call 0x7952f0
// 0069f748  83c424               add esp, 0x24
// 0069f74b  5f                   pop edi
// 0069f74c  5e                   pop esi
// 0069f74d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
