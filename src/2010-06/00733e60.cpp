// from server: 100% by auto
// roc 2010-06 00733e60  unit: seg_00730000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733e60
//
// 00733e60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00733e64  8b4108               mov eax, dword ptr [ecx + 8]
// 00733e67  83f804               cmp eax, 4
// 00733e6a  7405                 je 0x733e71
// 00733e6c  83f803               cmp eax, 3
// 00733e6f  7504                 jne 0x733e75
// 00733e71  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00733e75  c744240c54dea400     mov dword ptr [esp + 0xc], 0xa4de54
// 00733e7d  894c2408             mov dword ptr [esp + 8], ecx
// 00733e81  e94affffff           jmp 0x733dd0
// library lua-5.1.4/ldebug.c (function _luaG_concaterror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
