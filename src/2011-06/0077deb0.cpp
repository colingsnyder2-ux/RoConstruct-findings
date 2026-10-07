// roc 2011-06 0077deb0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077deb0
//
// 0077deb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077deb4  8b4108               mov eax, dword ptr [ecx + 8]
// 0077deb7  83f804               cmp eax, 4
// 0077deba  7405                 je 0x77dec1
// 0077debc  83f803               cmp eax, 3
// 0077debf  7504                 jne 0x77dec5
// 0077dec1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0077dec5  c744240c9477ab00     mov dword ptr [esp + 0xc], 0xab7794
// 0077decd  894c2408             mov dword ptr [esp + 8], ecx
// 0077ded1  e94affffff           jmp 0x77de20
// library lua-5.1.4/ldebug.c (function _luaG_concaterror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
