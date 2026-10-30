// roc 2011-06 00780380  unit: lua_exception  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00780380
//
// 00780380  55                   push ebp
// 00780381  8bec                 mov ebp, esp
// 00780383  83e4c0               and esp, 0xffffffc0
// 00780386  83ec34               sub esp, 0x34
// 00780389  53                   push ebx
// 0078038a  56                   push esi
// 0078038b  57                   push edi
// 0078038c  ff159409a400         call dword ptr [0xa40994]
// 00780392  99                   cdq 
// 00780393  b9ff7f0000           mov ecx, 0x7fff
// 00780398  f7f9                 idiv ecx
// 0078039a  8b7d08               mov edi, dword ptr [ebp + 8]
// 0078039d  57                   push edi
// 0078039e  89542434             mov dword ptr [esp + 0x34], edx
// 007803a2  db442434             fild dword ptr [esp + 0x34]
// 007803a6  dc0de8fba700         fmul qword ptr [0xa7fbe8]
// 007803ac  dd5c243c             fstp qword ptr [esp + 0x3c]
// 007803b0  e8ab1ffeff           call 0x762360
// 007803b5  83c404               add esp, 4
// 007803b8  83e800               sub eax, 0
// 007803bb  0f84ad000000         je 0x78046e
// 007803c1  83e801               sub eax, 1
// 007803c4  7469                 je 0x78042f
// 007803c6  83e801               sub eax, 1
// 007803c9  7415                 je 0x7803e0
// 007803cb  68bc7bab00           push 0xab7bbc
// 007803d0  57                   push edi
// 007803d1  e83a33feff           call 0x763710
// 007803d6  83c408               add esp, 8
// 007803d9  5f                   pop edi
// 007803da  5e                   pop esi
// 007803db  5b                   pop ebx
// 007803dc  8be5                 mov esp, ebp
// 007803de  5d                   pop ebp
// 007803df  c3                   ret 
// 007803e0  6a01                 push 1
// 007803e2  57                   push edi
// 007803e3  e8e83efeff           call 0x7642d0
// 007803e8  8bd8                 mov ebx, eax
// 007803ea  6a02                 push 2
// 007803ec  57                   push edi
// 007803ed  895c2444             mov dword ptr [esp + 0x44], ebx
// 007803f1  e8da3efeff           call 0x7642d0
// 007803f6  8bf0                 mov esi, eax
// 007803f8  83c410               add esp, 0x10
// 007803fb  3bde                 cmp ebx, esi
// 007803fd  7e10                 jle 0x78040f
// 007803ff  68a87bab00           push 0xab7ba8
// 00780404  6a02                 push 2
// 00780406  57                   push edi
// 00780407  e8943bfeff           call 0x763fa0
// 0078040c  83c40c               add esp, 0xc
// 0078040f  2bf3                 sub esi, ebx
// 00780411  46                   inc esi
// 00780412  89742430             mov dword ptr [esp + 0x30], esi
// 00780416  db442430             fild dword ptr [esp + 0x30]
// 0078041a  83ec08               sub esp, 8
// 0078041d  dc4c2440             fmul qword ptr [esp + 0x40]
// 00780421  dd1c24               fstp qword ptr [esp]
// 00780424  e8ddb40800           call 0x80b906
// 00780429  da44243c             fiadd dword ptr [esp + 0x3c]
// 0078042d  eb46                 jmp 0x780475
// 0078042f  6a01                 push 1
// 00780431  57                   push edi
// 00780432  e8993efeff           call 0x7642d0
// 00780437  83c408               add esp, 8
// 0078043a  83f801               cmp eax, 1
// 0078043d  89442434             mov dword ptr [esp + 0x34], eax
// 00780441  7d10                 jge 0x780453
// 00780443  68a87bab00           push 0xab7ba8
// 00780448  6a01                 push 1
// 0078044a  57                   push edi
// 0078044b  e8503bfeff           call 0x763fa0
// 00780450  83c40c               add esp, 0xc
// 00780453  db442434             fild dword ptr [esp + 0x34]
// 00780457  83ec08               sub esp, 8
// 0078045a  dc4c2440             fmul qword ptr [esp + 0x40]
// 0078045e  dd1c24               fstp qword ptr [esp]
// 00780461  e8a0b40800           call 0x80b906
// 00780466  dc058862a600         fadd qword ptr [0xa66288]
// 0078046c  eb07                 jmp 0x780475
// 0078046e  dd442438             fld qword ptr [esp + 0x38]
// 00780472  83ec08               sub esp, 8
// 00780475  dd1c24               fstp qword ptr [esp]
// 00780478  57                   push edi
// 00780479  e8a224feff           call 0x762920
// 0078047e  83c40c               add esp, 0xc
// 00780481  5f                   pop edi
// 00780482  5e                   pop esi
// 00780483  b801000000           mov eax, 1
// 00780488  5b                   pop ebx
// 00780489  8be5                 mov esp, ebp
// 0078048b  5d                   pop ebp
// 0078048c  c3                   ret 
// copied from an identical function in another client (function _math_random)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /fp:fast
// roc-lib: lua-5.1.2-dll lmathlib.c