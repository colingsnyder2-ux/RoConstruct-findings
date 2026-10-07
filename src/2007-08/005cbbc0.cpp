// roc 2007-08 005cbbc0  unit: seg_005c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cbbc0
//
// 005cbbc0  56                   push esi
// 005cbbc1  8b742408             mov esi, dword ptr [esp + 8]
// 005cbbc5  6a05                 push 5
// 005cbbc7  6a01                 push 1
// 005cbbc9  56                   push esi
// 005cbbca  e80137ffff           call 0x5bf2d0
// 005cbbcf  6a02                 push 2
// 005cbbd1  56                   push esi
// 005cbbd2  e84937ffff           call 0x5bf320
// 005cbbd7  6a02                 push 2
// 005cbbd9  56                   push esi
// 005cbbda  e8b119ffff           call 0x5bd590
// 005cbbdf  6a01                 push 1
// 005cbbe1  56                   push esi
// 005cbbe2  e87922ffff           call 0x5bde60
// 005cbbe7  83c424               add esp, 0x24
// 005cbbea  b801000000           mov eax, 1
// 005cbbef  5e                   pop esi
// 005cbbf0  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_rawget)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
