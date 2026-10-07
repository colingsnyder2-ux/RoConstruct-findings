// roc 2008-06 00626be0  unit: seg_00620000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626be0
//
// 00626be0  57                   push edi
// 00626be1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00626be4  83ff20               cmp edi, 0x20
// 00626be7  7c11                 jl 0x626bfa
// 00626be9  8b4608               mov eax, dword ptr [esi + 8]
// 00626bec  68c8518400           push 0x8451c8
// 00626bf1  50                   push eax
// 00626bf2  e869a0feff           call 0x610c60
// 00626bf7  83c408               add esp, 8
// 00626bfa  8b542408             mov edx, dword ptr [esp + 8]
// 00626bfe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00626c02  52                   push edx
// 00626c03  895cfe10             mov dword ptr [esi + edi*8 + 0x10], ebx
// 00626c07  894cfe14             mov dword ptr [esi + edi*8 + 0x14], ecx
// 00626c0b  53                   push ebx
// 00626c0c  47                   inc edi
// 00626c0d  56                   push esi
// 00626c0e  897e0c               mov dword ptr [esi + 0xc], edi
// 00626c11  e80a010000           call 0x626d20
// 00626c16  83c40c               add esp, 0xc
// 00626c19  5f                   pop edi
// 00626c1a  85c0                 test eax, eax
// 00626c1c  7503                 jne 0x626c21
// 00626c1e  ff4e0c               dec dword ptr [esi + 0xc]
// 00626c21  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _start_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
