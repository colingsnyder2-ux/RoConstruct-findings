// from server: 100% by colin
// roc 2008-06 0051e9d0  unit: seg_00510000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e9d0
//
// 0051e9d0  56                   push esi
// 0051e9d1  8b742408             mov esi, dword ptr [esp + 8]
// 0051e9d5  8b06                 mov eax, dword ptr [esi]
// 0051e9d7  8b4808               mov ecx, dword ptr [eax + 8]
// 0051e9da  56                   push esi
// 0051e9db  ffd1                 call ecx
// 0051e9dd  56                   push esi
// 0051e9de  e8cdccffff           call 0x51b6b0
// 0051e9e3  83c408               add esp, 8
// 0051e9e6  6a01                 push 1
// 0051e9e8  ff15f4278000         call dword ptr [0x8027f4]
// 0051e9ee  5e                   pop esi
// library g3d-6.09-ijg-dll/jerror.c (function _error_exit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jerror.c
