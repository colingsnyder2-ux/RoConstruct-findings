// roc 2007-08 00716120  unit: CXTCaptionPopupWnd  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716120
//
// 00716120  6aff                 push -1
// 00716122  680dad7600           push 0x76ad0d
// 00716127  64a100000000         mov eax, dword ptr fs:[0]
// 0071612d  50                   push eax
// 0071612e  51                   push ecx
// 0071612f  56                   push esi
// 00716130  57                   push edi
// 00716131  a188518b00           mov eax, dword ptr [0x8b5188]
// 00716136  33c4                 xor eax, esp
// 00716138  50                   push eax
// 00716139  8d442410             lea eax, [esp + 0x10]
// 0071613d  64a300000000         mov dword ptr fs:[0], eax
// 00716143  8bf1                 mov esi, ecx
// 00716145  8974240c             mov dword ptr [esp + 0xc], esi
// 00716149  e88ca4f1ff           call 0x6305da
// 0071614e  33ff                 xor edi, edi
// 00716150  8d4e60               lea ecx, [esi + 0x60]
// 00716153  897c2418             mov dword ptr [esp + 0x18], edi
// 00716157  c7066cf07d00         mov dword ptr [esi], 0x7df06c
// 0071615d  e83e94f8ff           call 0x69f5a0
// 00716162  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00716168  c644241801           mov byte ptr [esp + 0x18], 1
// 0071616d  e82e90f8ff           call 0x69f1a0
// 00716172  8d8ea0020000         lea ecx, [esi + 0x2a0]
// 00716178  c644241802           mov byte ptr [esp + 0x18], 2
// 0071617d  e8dec10000           call 0x722360
// 00716182  8d8ea8020000         lea ecx, [esi + 0x2a8]
// 00716188  c644241803           mov byte ptr [esp + 0x18], 3
// 0071618d  e8cec10000           call 0x722360
// 00716192  8bce                 mov ecx, esi
// 00716194  c644241804           mov byte ptr [esp + 0x18], 4
// 00716199  897e58               mov dword ptr [esi + 0x58], edi
// 0071619c  897e5c               mov dword ptr [esi + 0x5c], edi
// 0071619f  897e54               mov dword ptr [esi + 0x54], edi
// 007161a2  e889f9ffff           call 0x715b30
// 007161a7  8bc6                 mov eax, esi
// 007161a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007161ad  64890d00000000       mov dword ptr fs:[0], ecx
// 007161b4  59                   pop ecx
// 007161b5  5f                   pop edi
// 007161b6  5e                   pop esi
// 007161b7  83c410               add esp, 0x10
// 007161ba  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionPopupWnd@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionPopupWnd.cpp