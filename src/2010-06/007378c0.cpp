// from server: 100% by auto
// roc 2010-06 007378c0  unit: seg_00730000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007378c0
//
// 007378c0  56                   push esi
// 007378c1  8b742408             mov esi, dword ptr [esp + 8]
// 007378c5  687ce8a400           push 0xa4e87c
// 007378ca  6a02                 push 2
// 007378cc  56                   push esi
// 007378cd  e85eacfeff           call 0x722530
// 007378d2  6a01                 push 1
// 007378d4  56                   push esi
// 007378d5  e83698feff           call 0x721110
// 007378da  6a01                 push 1
// 007378dc  6a00                 push 0
// 007378de  56                   push esi
// 007378df  e88ca3feff           call 0x721c70
// 007378e4  6aff                 push -1
// 007378e6  56                   push esi
// 007378e7  e85498feff           call 0x721140
// 007378ec  83c428               add esp, 0x28
// 007378ef  85c0                 test eax, eax
// 007378f1  750e                 jne 0x737901
// 007378f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 007378f7  c70000000000         mov dword ptr [eax], 0
// 007378fd  33c0                 xor eax, eax
// 007378ff  5e                   pop esi
// 00737900  c3                   ret 
// 00737901  6aff                 push -1
// 00737903  56                   push esi
// 00737904  e8e798feff           call 0x7211f0
// 00737909  83c408               add esp, 8
// 0073790c  85c0                 test eax, eax
// 0073790e  741a                 je 0x73792a
// 00737910  6a03                 push 3
// 00737912  56                   push esi
// 00737913  e83897feff           call 0x721050
// 00737918  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073791c  51                   push ecx
// 0073791d  6a03                 push 3
// 0073791f  56                   push esi
// 00737920  e82b9afeff           call 0x721350
// 00737925  83c414               add esp, 0x14
// 00737928  5e                   pop esi
// 00737929  c3                   ret 
// 0073792a  6854e8a400           push 0xa4e854
// 0073792f  56                   push esi
// 00737930  e86babfeff           call 0x7224a0
// 00737935  83c408               add esp, 8
// 00737938  33c0                 xor eax, eax
// 0073793a  5e                   pop esi
// 0073793b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _generic_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
