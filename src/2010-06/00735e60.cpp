// roc 2010-06 00735e60  unit: seg_00730000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735e60
//
// 00735e60  57                   push edi
// 00735e61  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00735e64  83ff20               cmp edi, 0x20
// 00735e67  7c11                 jl 0x735e7a
// 00735e69  8b4608               mov eax, dword ptr [esi + 8]
// 00735e6c  6890e3a400           push 0xa4e390
// 00735e71  50                   push eax
// 00735e72  e829c6feff           call 0x7224a0
// 00735e77  83c408               add esp, 8
// 00735e7a  8b542408             mov edx, dword ptr [esp + 8]
// 00735e7e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00735e82  52                   push edx
// 00735e83  895cfe10             mov dword ptr [esi + edi*8 + 0x10], ebx
// 00735e87  894cfe14             mov dword ptr [esi + edi*8 + 0x14], ecx
// 00735e8b  53                   push ebx
// 00735e8c  47                   inc edi
// 00735e8d  56                   push esi
// 00735e8e  897e0c               mov dword ptr [esi + 0xc], edi
// 00735e91  e80a010000           call 0x735fa0
// 00735e96  83c40c               add esp, 0xc
// 00735e99  5f                   pop edi
// 00735e9a  85c0                 test eax, eax
// 00735e9c  7503                 jne 0x735ea1
// 00735e9e  ff4e0c               dec dword ptr [esi + 0xc]
// 00735ea1  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _start_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
