// roc 2009-06 006c8b00  unit: seg_006c0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8b00
//
// 006c8b00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c8b04  8b4108               mov eax, dword ptr [ecx + 8]
// 006c8b07  83f804               cmp eax, 4
// 006c8b0a  7405                 je 0x6c8b11
// 006c8b0c  83f803               cmp eax, 3
// 006c8b0f  7504                 jne 0x6c8b15
// 006c8b11  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c8b15  c744240c10c38e00     mov dword ptr [esp + 0xc], 0x8ec310
// 006c8b1d  894c2408             mov dword ptr [esp + 8], ecx
// 006c8b21  e94affffff           jmp 0x6c8a70
// library lua-5.1.4/ldebug.c (function _luaG_concaterror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
