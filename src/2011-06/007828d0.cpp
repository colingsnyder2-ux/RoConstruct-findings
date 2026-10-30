// from server: 100% by auto
// roc 2011-06 007828d0  unit: seg_00780000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007828d0
//
// 007828d0  56                   push esi
// 007828d1  8b742408             mov esi, dword ptr [esp + 8]
// 007828d5  682482ab00           push 0xab8224
// 007828da  6a02                 push 2
// 007828dc  56                   push esi
// 007828dd  e8be0efeff           call 0x7637a0
// 007828e2  6a01                 push 1
// 007828e4  56                   push esi
// 007828e5  e836fcfdff           call 0x762520
// 007828ea  6a01                 push 1
// 007828ec  6a00                 push 0
// 007828ee  56                   push esi
// 007828ef  e88c07feff           call 0x763080
// 007828f4  6aff                 push -1
// 007828f6  56                   push esi
// 007828f7  e854fcfdff           call 0x762550
// 007828fc  83c428               add esp, 0x28
// 007828ff  85c0                 test eax, eax
// 00782901  750e                 jne 0x782911
// 00782903  8b442410             mov eax, dword ptr [esp + 0x10]
// 00782907  c70000000000         mov dword ptr [eax], 0
// 0078290d  33c0                 xor eax, eax
// 0078290f  5e                   pop esi
// 00782910  c3                   ret 
// 00782911  6aff                 push -1
// 00782913  56                   push esi
// 00782914  e8e7fcfdff           call 0x762600
// 00782919  83c408               add esp, 8
// 0078291c  85c0                 test eax, eax
// 0078291e  741a                 je 0x78293a
// 00782920  6a03                 push 3
// 00782922  56                   push esi
// 00782923  e838fbfdff           call 0x762460
// 00782928  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078292c  51                   push ecx
// 0078292d  6a03                 push 3
// 0078292f  56                   push esi
// 00782930  e82bfefdff           call 0x762760
// 00782935  83c414               add esp, 0x14
// 00782938  5e                   pop esi
// 00782939  c3                   ret 
// 0078293a  68fc81ab00           push 0xab81fc
// 0078293f  56                   push esi
// 00782940  e8cb0dfeff           call 0x763710
// 00782945  83c408               add esp, 8
// 00782948  33c0                 xor eax, eax
// 0078294a  5e                   pop esi
// 0078294b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _generic_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
