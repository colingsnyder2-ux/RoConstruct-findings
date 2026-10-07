// roc 2010-06 00737f60  unit: seg_00730000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737f60
//
// 00737f60  56                   push esi
// 00737f61  57                   push edi
// 00737f62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00737f66  6a01                 push 1
// 00737f68  57                   push edi
// 00737f69  e8f294feff           call 0x721460
// 00737f6e  8bf0                 mov esi, eax
// 00737f70  83c408               add esp, 8
// 00737f73  85f6                 test esi, esi
// 00737f75  7510                 jne 0x737f87
// 00737f77  6808e9a400           push 0xa4e908
// 00737f7c  6a01                 push 1
// 00737f7e  57                   push edi
// 00737f7f  e8acadfeff           call 0x722d30
// 00737f84  83c40c               add esp, 0xc
// 00737f87  57                   push edi
// 00737f88  e8c38ffeff           call 0x720f50
// 00737f8d  83c404               add esp, 4
// 00737f90  48                   dec eax
// 00737f91  8bce                 mov ecx, esi
// 00737f93  e808ffffff           call 0x737ea0
// 00737f98  8bf0                 mov esi, eax
// 00737f9a  85f6                 test esi, esi
// 00737f9c  7d1b                 jge 0x737fb9
// 00737f9e  6a00                 push 0
// 00737fa0  57                   push edi
// 00737fa1  e85a97feff           call 0x721700
// 00737fa6  6afe                 push -2
// 00737fa8  57                   push edi
// 00737fa9  e85290feff           call 0x721000
// 00737fae  83c410               add esp, 0x10
// 00737fb1  5f                   pop edi
// 00737fb2  b802000000           mov eax, 2
// 00737fb7  5e                   pop esi
// 00737fb8  c3                   ret 
// 00737fb9  6a01                 push 1
// 00737fbb  57                   push edi
// 00737fbc  e83f97feff           call 0x721700
// 00737fc1  83c8ff               or eax, 0xffffffff
// 00737fc4  2bc6                 sub eax, esi
// 00737fc6  50                   push eax
// 00737fc7  57                   push edi
// 00737fc8  e83390feff           call 0x721000
// 00737fcd  83c410               add esp, 0x10
// 00737fd0  5f                   pop edi
// 00737fd1  8d4601               lea eax, [esi + 1]
// 00737fd4  5e                   pop esi
// 00737fd5  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_coresume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
