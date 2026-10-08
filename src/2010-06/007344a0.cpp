// from server: 100% by auto
// roc 2010-06 007344a0  unit: seg_00730000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007344a0
//
// 007344a0  53                   push ebx
// 007344a1  56                   push esi
// 007344a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007344a6  57                   push edi
// 007344a7  6a05                 push 5
// 007344a9  6a01                 push 1
// 007344ab  56                   push esi
// 007344ac  e8efe9feff           call 0x722ea0
// 007344b1  6a01                 push 1
// 007344b3  56                   push esi
// 007344b4  e807cffeff           call 0x7213c0
// 007344b9  6a06                 push 6
// 007344bb  6a02                 push 2
// 007344bd  56                   push esi
// 007344be  8bd8                 mov ebx, eax
// 007344c0  e8dbe9feff           call 0x722ea0
// 007344c5  bf01000000           mov edi, 1
// 007344ca  83c420               add esp, 0x20
// 007344cd  3bdf                 cmp ebx, edi
// 007344cf  7c41                 jl 0x734512
// 007344d1  6a02                 push 2
// 007344d3  56                   push esi
// 007344d4  e837ccfeff           call 0x721110
// 007344d9  57                   push edi
// 007344da  56                   push esi
// 007344db  e850d0feff           call 0x721530
// 007344e0  57                   push edi
// 007344e1  6a01                 push 1
// 007344e3  56                   push esi
// 007344e4  e857d3feff           call 0x721840
// 007344e9  6a01                 push 1
// 007344eb  6a02                 push 2
// 007344ed  56                   push esi
// 007344ee  e87dd7feff           call 0x721c70
// 007344f3  6aff                 push -1
// 007344f5  56                   push esi
// 007344f6  e845ccfeff           call 0x721140
// 007344fb  83c430               add esp, 0x30
// 007344fe  85c0                 test eax, eax
// 00734500  7516                 jne 0x734518
// 00734502  6afe                 push -2
// 00734504  56                   push esi
// 00734505  e856cafeff           call 0x720f60
// 0073450a  47                   inc edi
// 0073450b  83c408               add esp, 8
// 0073450e  3bfb                 cmp edi, ebx
// 00734510  7ebf                 jle 0x7344d1
// 00734512  5f                   pop edi
// 00734513  5e                   pop esi
// 00734514  33c0                 xor eax, eax
// 00734516  5b                   pop ebx
// 00734517  c3                   ret 
// 00734518  5f                   pop edi
// 00734519  5e                   pop esi
// 0073451a  b801000000           mov eax, 1
// 0073451f  5b                   pop ebx
// 00734520  c3                   ret 
// library lua-5.1.4/ltablib.c (function _foreachi)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
