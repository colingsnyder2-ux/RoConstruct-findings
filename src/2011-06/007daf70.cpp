// from server: 100% by auto
// roc 2011-06 007daf70  unit: seg_007d0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007daf70
//
// 007daf70  397e10               cmp dword ptr [esi + 0x10], edi
// 007daf73  7509                 jne 0x7daf7e
// 007daf75  89742404             mov dword ptr [esp + 4], esi
// 007daf79  e9a24c0000           jmp 0x7dfc20
// 007daf7e  3b4604               cmp eax, dword ptr [esi + 4]
// 007daf81  7521                 jne 0x7dafa4
// 007daf83  57                   push edi
// 007daf84  56                   push esi
// 007daf85  e8e6390000           call 0x7de970
// 007daf8a  50                   push eax
// 007daf8b  8b4634               mov eax, dword ptr [esi + 0x34]
// 007daf8e  682ce1ab00           push 0xabe12c
// 007daf93  50                   push eax
// 007daf94  e8871efaff           call 0x77ce20
// 007daf99  50                   push eax
// 007daf9a  56                   push esi
// 007daf9b  e8d03a0000           call 0x7dea70
// 007dafa0  83c41c               add esp, 0x1c
// 007dafa3  c3                   ret 
// 007dafa4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007dafa8  50                   push eax
// 007dafa9  51                   push ecx
// 007dafaa  56                   push esi
// 007dafab  e8c0390000           call 0x7de970
// 007dafb0  83c408               add esp, 8
// 007dafb3  50                   push eax
// 007dafb4  57                   push edi
// 007dafb5  56                   push esi
// 007dafb6  e8b5390000           call 0x7de970
// 007dafbb  8b5634               mov edx, dword ptr [esi + 0x34]
// 007dafbe  83c408               add esp, 8
// 007dafc1  50                   push eax
// 007dafc2  6888e1ab00           push 0xabe188
// 007dafc7  52                   push edx
// 007dafc8  e8531efaff           call 0x77ce20
// 007dafcd  50                   push eax
// 007dafce  56                   push esi
// 007dafcf  e89c3a0000           call 0x7dea70
// 007dafd4  83c41c               add esp, 0x1c
// 007dafd7  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
