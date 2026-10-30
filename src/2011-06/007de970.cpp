// roc 2011-06 007de970  unit: seg_007d0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007de970
//
// 007de970  56                   push esi
// 007de971  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007de975  81fe01010000         cmp esi, 0x101
// 007de97b  7d3d                 jge 0x7de9ba
// 007de97d  56                   push esi
// 007de97e  ff150408a400         call dword ptr [0xa40804]
// 007de984  83c404               add esp, 4
// 007de987  56                   push esi
// 007de988  85c0                 test eax, eax
// 007de98a  7417                 je 0x7de9a3
// 007de98c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007de990  8b4834               mov ecx, dword ptr [eax + 0x34]
// 007de993  6850e5ab00           push 0xabe550
// 007de998  51                   push ecx
// 007de999  e882e4f9ff           call 0x77ce20
// 007de99e  83c40c               add esp, 0xc
// 007de9a1  5e                   pop esi
// 007de9a2  c3                   ret 
// 007de9a3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007de9a7  8b4234               mov eax, dword ptr [edx + 0x34]
// 007de9aa  684ce5ab00           push 0xabe54c
// 007de9af  50                   push eax
// 007de9b0  e86be4f9ff           call 0x77ce20
// 007de9b5  83c40c               add esp, 0xc
// 007de9b8  5e                   pop esi
// 007de9b9  c3                   ret 
// 007de9ba  8b04b5ace0ab00       mov eax, dword ptr [esi*4 + 0xabe0ac]
// 007de9c1  5e                   pop esi
// 007de9c2  c3                   ret 
// copied from an identical function in another client (function _luaX_token2str)

// roc-cl: 21022
// roc-lang: c
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: lua-5.1-dll llex.c