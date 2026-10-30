// from server: 100% by auto
// roc 2008-06 00660820  unit: RBX::FilterStairs  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660820
//
// 00660820  397e10               cmp dword ptr [esi + 0x10], edi
// 00660823  7509                 jne 0x66082e
// 00660825  89742404             mov dword ptr [esp + 4], esi
// 00660829  e9d24d0000           jmp 0x665600
// 0066082e  3b4604               cmp eax, dword ptr [esi + 4]
// 00660831  7521                 jne 0x660854
// 00660833  57                   push edi
// 00660834  56                   push esi
// 00660835  e8d6380000           call 0x664110
// 0066083a  50                   push eax
// 0066083b  8b4634               mov eax, dword ptr [esi + 0x34]
// 0066083e  68c0c48400           push 0x84c4c0
// 00660843  50                   push eax
// 00660844  e87722fcff           call 0x622ac0
// 00660849  50                   push eax
// 0066084a  56                   push esi
// 0066084b  e8c0390000           call 0x664210
// 00660850  83c41c               add esp, 0x1c
// 00660853  c3                   ret 
// 00660854  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00660858  50                   push eax
// 00660859  51                   push ecx
// 0066085a  56                   push esi
// 0066085b  e8b0380000           call 0x664110
// 00660860  83c408               add esp, 8
// 00660863  50                   push eax
// 00660864  57                   push edi
// 00660865  56                   push esi
// 00660866  e8a5380000           call 0x664110
// 0066086b  8b5634               mov edx, dword ptr [esi + 0x34]
// 0066086e  83c408               add esp, 8
// 00660871  50                   push eax
// 00660872  681cc58400           push 0x84c51c
// 00660877  52                   push edx
// 00660878  e84322fcff           call 0x622ac0
// 0066087d  50                   push eax
// 0066087e  56                   push esi
// 0066087f  e88c390000           call 0x664210
// 00660884  83c41c               add esp, 0x1c
// 00660887  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
