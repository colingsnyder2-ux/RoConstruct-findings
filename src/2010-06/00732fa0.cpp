// roc 2010-06 00732fa0  unit: lua_exception  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732fa0
//
// 00732fa0  8b542408             mov edx, dword ptr [esp + 8]
// 00732fa4  85d2                 test edx, edx
// 00732fa6  7408                 je 0x732fb0
// 00732fa8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00732fac  85c9                 test ecx, ecx
// 00732fae  7504                 jne 0x732fb4
// 00732fb0  33c9                 xor ecx, ecx
// 00732fb2  33d2                 xor edx, edx
// 00732fb4  8b442404             mov eax, dword ptr [esp + 4]
// 00732fb8  895044               mov dword ptr [eax + 0x44], edx
// 00732fbb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00732fbf  89503c               mov dword ptr [eax + 0x3c], edx
// 00732fc2  895040               mov dword ptr [eax + 0x40], edx
// 00732fc5  884838               mov byte ptr [eax + 0x38], cl
// 00732fc8  b801000000           mov eax, 1
// 00732fcd  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_sethook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
