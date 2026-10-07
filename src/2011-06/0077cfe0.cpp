// roc 2011-06 0077cfe0  unit: seg_00770000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077cfe0
//
// 0077cfe0  8b542408             mov edx, dword ptr [esp + 8]
// 0077cfe4  85d2                 test edx, edx
// 0077cfe6  7408                 je 0x77cff0
// 0077cfe8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077cfec  85c9                 test ecx, ecx
// 0077cfee  7504                 jne 0x77cff4
// 0077cff0  33c9                 xor ecx, ecx
// 0077cff2  33d2                 xor edx, edx
// 0077cff4  8b442404             mov eax, dword ptr [esp + 4]
// 0077cff8  895044               mov dword ptr [eax + 0x44], edx
// 0077cffb  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077cfff  89503c               mov dword ptr [eax + 0x3c], edx
// 0077d002  895040               mov dword ptr [eax + 0x40], edx
// 0077d005  884838               mov byte ptr [eax + 0x38], cl
// 0077d008  b801000000           mov eax, 1
// 0077d00d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_sethook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
