// roc 2007-08 006174c0  unit: seg_00610000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006174c0
//
// 006174c0  56                   push esi
// 006174c1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006174c5  81fe01010000         cmp esi, 0x101
// 006174cb  7d3d                 jge 0x61750a
// 006174cd  56                   push esi
// 006174ce  ff15f8e77700         call dword ptr [0x77e7f8]
// 006174d4  83c404               add esp, 4
// 006174d7  85c0                 test eax, eax
// 006174d9  56                   push esi
// 006174da  7417                 je 0x6174f3
// 006174dc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006174e0  8b4834               mov ecx, dword ptr [eax + 0x34]
// 006174e3  6850397c00           push 0x7c3950
// 006174e8  51                   push ecx
// 006174e9  e8a279ffff           call 0x60ee90
// 006174ee  83c40c               add esp, 0xc
// 006174f1  5e                   pop esi
// 006174f2  c3                   ret 
// 006174f3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006174f7  8b4234               mov eax, dword ptr [edx + 0x34]
// 006174fa  684c397c00           push 0x7c394c
// 006174ff  50                   push eax
// 00617500  e88b79ffff           call 0x60ee90
// 00617505  83c40c               add esp, 0xc
// 00617508  5e                   pop esi
// 00617509  c3                   ret 
// 0061750a  8b04b5ac347c00       mov eax, dword ptr [esi*4 + 0x7c34ac]
// 00617511  5e                   pop esi
// 00617512  c3                   ret 
// copied from an identical function in another client (function _luaX_token2str)

// roc-cl: 50727
// roc-lang: c
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: lua-5.1-dll llex.c