// roc 2008-06 00628620  unit: seg_00620000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00628620
//
// 00628620  56                   push esi
// 00628621  8b742408             mov esi, dword ptr [esp + 8]
// 00628625  689c568400           push 0x84569c
// 0062862a  6a02                 push 2
// 0062862c  56                   push esi
// 0062862d  e8be86feff           call 0x610cf0
// 00628632  6a01                 push 1
// 00628634  56                   push esi
// 00628635  e89697feff           call 0x611dd0
// 0062863a  6a01                 push 1
// 0062863c  6a00                 push 0
// 0062863e  56                   push esi
// 0062863f  e8dca2feff           call 0x612920
// 00628644  6aff                 push -1
// 00628646  56                   push esi
// 00628647  e8b497feff           call 0x611e00
// 0062864c  83c428               add esp, 0x28
// 0062864f  85c0                 test eax, eax
// 00628651  750e                 jne 0x628661
// 00628653  8b442410             mov eax, dword ptr [esp + 0x10]
// 00628657  c70000000000         mov dword ptr [eax], 0
// 0062865d  33c0                 xor eax, eax
// 0062865f  5e                   pop esi
// 00628660  c3                   ret 
// 00628661  6aff                 push -1
// 00628663  56                   push esi
// 00628664  e84798feff           call 0x611eb0
// 00628669  83c408               add esp, 8
// 0062866c  85c0                 test eax, eax
// 0062866e  741a                 je 0x62868a
// 00628670  6a03                 push 3
// 00628672  56                   push esi
// 00628673  e89896feff           call 0x611d10
// 00628678  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0062867c  51                   push ecx
// 0062867d  6a03                 push 3
// 0062867f  56                   push esi
// 00628680  e88b99feff           call 0x612010
// 00628685  83c414               add esp, 0x14
// 00628688  5e                   pop esi
// 00628689  c3                   ret 
// 0062868a  6874568400           push 0x845674
// 0062868f  56                   push esi
// 00628690  e8cb85feff           call 0x610c60
// 00628695  83c408               add esp, 8
// 00628698  33c0                 xor eax, eax
// 0062869a  5e                   pop esi
// 0062869b  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _generic_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
