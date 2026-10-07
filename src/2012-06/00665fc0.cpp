// roc 2012-06 00665fc0  unit: seg_00660000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00665fc0
//
// 00665fc0  55                   push ebp
// 00665fc1  8baba8010000         mov ebp, dword ptr [ebx + 0x1a8]
// 00665fc7  56                   push esi
// 00665fc8  33f6                 xor esi, esi
// 00665fca  397364               cmp dword ptr [ebx + 0x64], esi
// 00665fcd  7e3a                 jle 0x666009
// 00665fcf  57                   push edi
// 00665fd0  8d7d34               lea edi, [ebp + 0x34]
// 00665fd3  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 00665fd6  33c0                 xor eax, eax
// 00665fd8  85f6                 test esi, esi
// 00665fda  7e1a                 jle 0x665ff6
// 00665fdc  8d5520               lea edx, [ebp + 0x20]
// 00665fdf  90                   nop 
// 00665fe0  3b0a                 cmp ecx, dword ptr [edx]
// 00665fe2  740a                 je 0x665fee
// 00665fe4  40                   inc eax
// 00665fe5  83c204               add edx, 4
// 00665fe8  3bc6                 cmp eax, esi
// 00665fea  7cf4                 jl 0x665fe0
// 00665fec  eb08                 jmp 0x665ff6
// 00665fee  8b448534             mov eax, dword ptr [ebp + eax*4 + 0x34]
// 00665ff2  85c0                 test eax, eax
// 00665ff4  7507                 jne 0x665ffd
// 00665ff6  8bc3                 mov eax, ebx
// 00665ff8  e843ffffff           call 0x665f40
// 00665ffd  8907                 mov dword ptr [edi], eax
// 00665fff  46                   inc esi
// 00666000  83c704               add edi, 4
// 00666003  3b7364               cmp esi, dword ptr [ebx + 0x64]
// 00666006  7ccb                 jl 0x665fd3
// 00666008  5f                   pop edi
// 00666009  5e                   pop esi
// 0066600a  5d                   pop ebp
// 0066600b  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_odither_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
