// roc 2009-06 0076a6f0  unit: CXTPControls  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076a6f0
//
// 0076a6f0  57                   push edi
// 0076a6f1  8bf9                 mov edi, ecx
// 0076a6f3  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0076a6f6  85c0                 test eax, eax
// 0076a6f8  7507                 jne 0x76a701
// 0076a6fa  83c8ff               or eax, 0xffffffff
// 0076a6fd  5f                   pop edi
// 0076a6fe  c21400               ret 0x14
// 0076a701  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0076a705  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076a709  56                   push esi
// 0076a70a  8d3411               lea esi, [ecx + edx]
// 0076a70d  83faff               cmp edx, -1
// 0076a710  7507                 jne 0x76a719
// 0076a712  3bca                 cmp ecx, edx
// 0076a714  7503                 jne 0x76a719
// 0076a716  8d70ff               lea esi, [eax - 1]
// 0076a719  53                   push ebx
// 0076a71a  55                   push ebp
// 0076a71b  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0076a71f  f7dd                 neg ebp
// 0076a721  1bed                 sbb ebp, ebp
// 0076a723  83e5e0               and ebp, 0xffffffe0
// 0076a726  83c520               add ebp, 0x20
// 0076a729  83cd08               or ebp, 8
// 0076a72c  33db                 xor ebx, ebx
// 0076a72e  3bf1                 cmp esi, ecx
// 0076a730  7516                 jne 0x76a748
// 0076a732  5d                   pop ebp
// 0076a733  5b                   pop ebx
// 0076a734  8bc6                 mov eax, esi
// 0076a736  5e                   pop esi
// 0076a737  5f                   pop edi
// 0076a738  c21400               ret 0x14
// 0076a73b  eb03                 jmp 0x76a740
// 0076a73d  8d4900               lea ecx, [ecx]
// 0076a740  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076a744  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076a748  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0076a74b  3bf0                 cmp esi, eax
// 0076a74d  7c1d                 jl 0x76a76c
// 0076a74f  83f9ff               cmp ecx, -1
// 0076a752  7509                 jne 0x76a75d
// 0076a754  83fa01               cmp edx, 1
// 0076a757  0f84c6000000         je 0x76a823
// 0076a75d  85db                 test ebx, ebx
// 0076a75f  0f85be000000         jne 0x76a823
// 0076a765  33f6                 xor esi, esi
// 0076a767  8d5e01               lea ebx, [esi + 1]
// 0076a76a  eb25                 jmp 0x76a791
// 0076a76c  85f6                 test esi, esi
// 0076a76e  7d21                 jge 0x76a791
// 0076a770  83f9ff               cmp ecx, -1
// 0076a773  7508                 jne 0x76a77d
// 0076a775  3bd1                 cmp edx, ecx
// 0076a777  0f84a6000000         je 0x76a823
// 0076a77d  85db                 test ebx, ebx
// 0076a77f  0f859e000000         jne 0x76a823
// 0076a785  8d70ff               lea esi, [eax - 1]
// 0076a788  bb01000000           mov ebx, 1
// 0076a78d  85f6                 test esi, esi
// 0076a78f  7c1c                 jl 0x76a7ad
// 0076a791  3bf0                 cmp esi, eax
// 0076a793  7d18                 jge 0x76a7ad
// 0076a795  85f6                 test esi, esi
// 0076a797  0f8c90000000         jl 0x76a82d
// 0076a79d  3bf0                 cmp esi, eax
// 0076a79f  0f8d88000000         jge 0x76a82d
// 0076a7a5  8b4728               mov eax, dword ptr [edi + 0x28]
// 0076a7a8  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0076a7ab  eb02                 jmp 0x76a7af
// 0076a7ad  33c9                 xor ecx, ecx
// 0076a7af  8b11                 mov edx, dword ptr [ecx]
// 0076a7b1  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0076a7b7  55                   push ebp
// 0076a7b8  ffd0                 call eax
// 0076a7ba  85c0                 test eax, eax
// 0076a7bc  744e                 je 0x76a80c
// 0076a7be  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0076a7c3  741c                 je 0x76a7e1
// 0076a7c5  85f6                 test esi, esi
// 0076a7c7  7c0d                 jl 0x76a7d6
// 0076a7c9  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0076a7cc  7d08                 jge 0x76a7d6
// 0076a7ce  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0076a7d1  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0076a7d4  eb02                 jmp 0x76a7d8
// 0076a7d6  33c0                 xor eax, eax
// 0076a7d8  f680d400000002       test byte ptr [eax + 0xd4], 2
// 0076a7df  752b                 jne 0x76a80c
// 0076a7e1  837c242000           cmp dword ptr [esp + 0x20], 0
// 0076a7e6  0f8446ffffff         je 0x76a732
// 0076a7ec  85f6                 test esi, esi
// 0076a7ee  7c0d                 jl 0x76a7fd
// 0076a7f0  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 0076a7f3  7d08                 jge 0x76a7fd
// 0076a7f5  8b5728               mov edx, dword ptr [edi + 0x28]
// 0076a7f8  8b04b2               mov eax, dword ptr [edx + esi*4]
// 0076a7fb  eb02                 jmp 0x76a7ff
// 0076a7fd  33c0                 xor eax, eax
// 0076a7ff  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 0076a806  0f8426ffffff         je 0x76a732
// 0076a80c  03742418             add esi, dword ptr [esp + 0x18]
// 0076a810  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0076a814  0f8526ffffff         jne 0x76a740
// 0076a81a  5d                   pop ebp
// 0076a81b  5b                   pop ebx
// 0076a81c  8bc6                 mov eax, esi
// 0076a81e  5e                   pop esi
// 0076a81f  5f                   pop edi
// 0076a820  c21400               ret 0x14
// 0076a823  5d                   pop ebp
// 0076a824  5b                   pop ebx
// 0076a825  5e                   pop esi
// 0076a826  83c8ff               or eax, 0xffffffff
// 0076a829  5f                   pop edi
// 0076a82a  c21400               ret 0x14
// 0076a82d  e8b2e4faff           call 0x718ce4
// copied from an identical function in another client (function ?GetNext@CXTPControls@@QBEJJHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp