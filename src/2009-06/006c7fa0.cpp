// from server: 100% by auto
// roc 2009-06 006c7fa0  unit: seg_006c0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7fa0
//
// 006c7fa0  8b442404             mov eax, dword ptr [esp + 4]
// 006c7fa4  8bc8                 mov ecx, eax
// 006c7fa6  83e13f               and ecx, 0x3f
// 006c7fa9  83f91c               cmp ecx, 0x1c
// 006c7fac  7c15                 jl 0x6c7fc3
// 006c7fae  83f91e               cmp ecx, 0x1e
// 006c7fb1  7e05                 jle 0x6c7fb8
// 006c7fb3  83f922               cmp ecx, 0x22
// 006c7fb6  750b                 jne 0x6c7fc3
// 006c7fb8  25000080ff           and eax, 0xff800000
// 006c7fbd  f7d8                 neg eax
// 006c7fbf  1bc0                 sbb eax, eax
// 006c7fc1  40                   inc eax
// 006c7fc2  c3                   ret 
// 006c7fc3  33c0                 xor eax, eax
// 006c7fc5  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_checkopenop)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
