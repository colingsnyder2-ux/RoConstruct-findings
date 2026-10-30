// roc 2009-12 0079e920  unit: seg_00790000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079e920
//
// 0079e920  83ec08               sub esp, 8
// 0079e923  55                   push ebp
// 0079e924  56                   push esi
// 0079e925  8b742414             mov esi, dword ptr [esp + 0x14]
// 0079e929  57                   push edi
// 0079e92a  6a0a                 push 0xa
// 0079e92c  6a02                 push 2
// 0079e92e  56                   push esi
// 0079e92f  e8ecbffeff           call 0x78a920
// 0079e934  8bf8                 mov edi, eax
// 0079e936  83c40c               add esp, 0xc
// 0079e939  83ff0a               cmp edi, 0xa
// 0079e93c  7539                 jne 0x79e977
// 0079e93e  6a01                 push 1
// 0079e940  56                   push esi
// 0079e941  e8fabdfeff           call 0x78a740
// 0079e946  6a01                 push 1
// 0079e948  56                   push esi
// 0079e949  e8b2a0feff           call 0x788a00
// 0079e94e  83c410               add esp, 0x10
// 0079e951  85c0                 test eax, eax
// 0079e953  0f84c3000000         je 0x79ea1c
// 0079e959  6a01                 push 1
// 0079e95b  56                   push esi
// 0079e95c  e88fa1feff           call 0x788af0
// 0079e961  dd1c24               fstp qword ptr [esp]
// 0079e964  56                   push esi
// 0079e965  e8f6a3feff           call 0x788d60
// 0079e96a  83c40c               add esp, 0xc
// 0079e96d  8d47f7               lea eax, [edi - 9]
// 0079e970  5f                   pop edi
// 0079e971  5e                   pop esi
// 0079e972  5d                   pop ebp
// 0079e973  83c408               add esp, 8
// 0079e976  c3                   ret 
// 0079e977  53                   push ebx
// 0079e978  6a00                 push 0
// 0079e97a  6a01                 push 1
// 0079e97c  56                   push esi
// 0079e97d  e8eebdfeff           call 0x78a770
// 0079e982  83c40c               add esp, 0xc
// 0079e985  83ff02               cmp edi, 2
// 0079e988  8bd8                 mov ebx, eax
// 0079e98a  7c05                 jl 0x79e991
// 0079e98c  83ff24               cmp edi, 0x24
// 0079e98f  7e10                 jle 0x79e9a1
// 0079e991  68a0b49e00           push 0x9eb4a0
// 0079e996  6a02                 push 2
// 0079e998  56                   push esi
// 0079e999  e8e2bbfeff           call 0x78a580
// 0079e99e  83c40c               add esp, 0xc
// 0079e9a1  57                   push edi
// 0079e9a2  8d442414             lea eax, [esp + 0x14]
// 0079e9a6  50                   push eax
// 0079e9a7  53                   push ebx
// 0079e9a8  ff152cb99800         call dword ptr [0x98b92c]
// 0079e9ae  8be8                 mov ebp, eax
// 0079e9b0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079e9b4  83c40c               add esp, 0xc
// 0079e9b7  3bd8                 cmp ebx, eax
// 0079e9b9  5b                   pop ebx
// 0079e9ba  7460                 je 0x79ea1c
// 0079e9bc  0fb608               movzx ecx, byte ptr [eax]
// 0079e9bf  8b3d24b89800         mov edi, dword ptr [0x98b824]
// 0079e9c5  51                   push ecx
// 0079e9c6  ffd7                 call edi
// 0079e9c8  83c404               add esp, 4
// 0079e9cb  85c0                 test eax, eax
// 0079e9cd  7417                 je 0x79e9e6
// 0079e9cf  90                   nop 
// 0079e9d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079e9d4  40                   inc eax
// 0079e9d5  8944240c             mov dword ptr [esp + 0xc], eax
// 0079e9d9  0fb610               movzx edx, byte ptr [eax]
// 0079e9dc  52                   push edx
// 0079e9dd  ffd7                 call edi
// 0079e9df  83c404               add esp, 4
// 0079e9e2  85c0                 test eax, eax
// 0079e9e4  75ea                 jne 0x79e9d0
// 0079e9e6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079e9ea  803800               cmp byte ptr [eax], 0
// 0079e9ed  752d                 jne 0x79ea1c
// 0079e9ef  896c2410             mov dword ptr [esp + 0x10], ebp
// 0079e9f3  db442410             fild dword ptr [esp + 0x10]
// 0079e9f7  85ed                 test ebp, ebp
// 0079e9f9  7d06                 jge 0x79ea01
// 0079e9fb  dc05d0449a00         fadd qword ptr [0x9a44d0]
// 0079ea01  83ec08               sub esp, 8
// 0079ea04  dd1c24               fstp qword ptr [esp]
// 0079ea07  56                   push esi
// 0079ea08  e853a3feff           call 0x788d60
// 0079ea0d  83c40c               add esp, 0xc
// 0079ea10  5f                   pop edi
// 0079ea11  5e                   pop esi
// 0079ea12  b801000000           mov eax, 1
// 0079ea17  5d                   pop ebp
// 0079ea18  83c408               add esp, 8
// 0079ea1b  c3                   ret 
// 0079ea1c  56                   push esi
// 0079ea1d  e81ea3feff           call 0x788d40
// 0079ea22  83c404               add esp, 4
// 0079ea25  5f                   pop edi
// 0079ea26  5e                   pop esi
// 0079ea27  b801000000           mov eax, 1
// 0079ea2c  5d                   pop ebp
// 0079ea2d  83c408               add esp, 8
// 0079ea30  c3                   ret 
// copied from an identical function in another client (function _luaB_tonumber)

// roc-cl: 21022
// roc-lang: c
// roc-flags: /O2 /GS /MD
// roc-lib: lua-5.1-dll lbaselib.c