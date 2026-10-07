// roc 2009-06 006c7c40  unit: seg_006c0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7c40
//
// 006c7c40  8b542408             mov edx, dword ptr [esp + 8]
// 006c7c44  85d2                 test edx, edx
// 006c7c46  7408                 je 0x6c7c50
// 006c7c48  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c7c4c  85c9                 test ecx, ecx
// 006c7c4e  7504                 jne 0x6c7c54
// 006c7c50  33c9                 xor ecx, ecx
// 006c7c52  33d2                 xor edx, edx
// 006c7c54  8b442404             mov eax, dword ptr [esp + 4]
// 006c7c58  895044               mov dword ptr [eax + 0x44], edx
// 006c7c5b  8b542410             mov edx, dword ptr [esp + 0x10]
// 006c7c5f  89503c               mov dword ptr [eax + 0x3c], edx
// 006c7c62  895040               mov dword ptr [eax + 0x40], edx
// 006c7c65  884838               mov byte ptr [eax + 0x38], cl
// 006c7c68  b801000000           mov eax, 1
// 006c7c6d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_sethook)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
