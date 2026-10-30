// from server: 100% by auto
// roc 2008-06 00663360  unit: RBX::FilterStairs  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663360
//
// 00663360  53                   push ebx
// 00663361  56                   push esi
// 00663362  8bf0                 mov esi, eax
// 00663364  8b4610               mov eax, dword ptr [esi + 0x10]
// 00663367  05fefeffff           add eax, 0xfffffefe
// 0066336c  57                   push edi
// 0066336d  8b7e04               mov edi, dword ptr [esi + 4]
// 00663370  83f813               cmp eax, 0x13
// 00663373  0f87e2000000         ja 0x66345b
// 00663379  0fb68090346600       movzx eax, byte ptr [eax + 0x663490]
// 00663380  ff248568346600       jmp dword ptr [eax*4 + 0x663468]
// 00663387  57                   push edi
// 00663388  8bc6                 mov eax, esi
// 0066338a  e841faffff           call 0x662dd0
// 0066338f  83c404               add esp, 4
// 00663392  5f                   pop edi
// 00663393  5e                   pop esi
// 00663394  33c0                 xor eax, eax
// 00663396  5b                   pop ebx
// 00663397  c3                   ret 
// 00663398  57                   push edi
// 00663399  8bc6                 mov eax, esi
// 0066339b  e8d0efffff           call 0x662370
// 006633a0  83c404               add esp, 4
// 006633a3  5f                   pop edi
// 006633a4  5e                   pop esi
// 006633a5  33c0                 xor eax, eax
// 006633a7  5b                   pop ebx
// 006633a8  c3                   ret 
// 006633a9  56                   push esi
// 006633aa  e851220000           call 0x665600
// 006633af  8bc6                 mov eax, esi
// 006633b1  e84aedffff           call 0x662100
// 006633b6  8bc7                 mov eax, edi
// 006633b8  6803010000           push 0x103
// 006633bd  bf06010000           mov edi, 0x106
// 006633c2  e859d4ffff           call 0x660820
// 006633c7  83c408               add esp, 8
// 006633ca  5f                   pop edi
// 006633cb  5e                   pop esi
// 006633cc  33c0                 xor eax, eax
// 006633ce  5b                   pop ebx
// 006633cf  c3                   ret 
// 006633d0  57                   push edi
// 006633d1  8bc6                 mov eax, esi
// 006633d3  e858f8ffff           call 0x662c30
// 006633d8  83c404               add esp, 4
// 006633db  5f                   pop edi
// 006633dc  5e                   pop esi
// 006633dd  33c0                 xor eax, eax
// 006633df  5b                   pop ebx
// 006633e0  c3                   ret 
// 006633e1  57                   push edi
// 006633e2  8bde                 mov ebx, esi
// 006633e4  e8b7f0ffff           call 0x6624a0
// 006633e9  83c404               add esp, 4
// 006633ec  5f                   pop edi
// 006633ed  5e                   pop esi
// 006633ee  33c0                 xor eax, eax
// 006633f0  5b                   pop ebx
// 006633f1  c3                   ret 
// 006633f2  e899fdffff           call 0x663190
// 006633f7  5f                   pop edi
// 006633f8  5e                   pop esi
// 006633f9  33c0                 xor eax, eax
// 006633fb  5b                   pop ebx
// 006633fc  c3                   ret 
// 006633fd  56                   push esi
// 006633fe  e8fd210000           call 0x665600
// 00663403  83c404               add esp, 4
// 00663406  817e1009010000       cmp dword ptr [esi + 0x10], 0x109
// 0066340d  7516                 jne 0x663425
// 0066340f  56                   push esi
// 00663410  e8eb210000           call 0x665600
// 00663415  83c404               add esp, 4
// 00663418  8bde                 mov ebx, esi
// 0066341a  e871faffff           call 0x662e90
// 0066341f  5f                   pop edi
// 00663420  5e                   pop esi
// 00663421  33c0                 xor eax, eax
// 00663423  5b                   pop ebx
// 00663424  c3                   ret 
// 00663425  8bc6                 mov eax, esi
// 00663427  e864fbffff           call 0x662f90
// 0066342c  5f                   pop edi
// 0066342d  5e                   pop esi
// 0066342e  33c0                 xor eax, eax
// 00663430  5b                   pop ebx
// 00663431  c3                   ret 
// 00663432  8bc6                 mov eax, esi
// 00663434  e807feffff           call 0x663240
// 00663439  5f                   pop edi
// 0066343a  5e                   pop esi
// 0066343b  b801000000           mov eax, 1
// 00663440  5b                   pop ebx
// 00663441  c3                   ret 
// 00663442  56                   push esi
// 00663443  e8b8210000           call 0x665600
// 00663448  83c404               add esp, 4
// 0066344b  8bc6                 mov eax, esi
// 0066344d  e8beeeffff           call 0x662310
// 00663452  5f                   pop edi
// 00663453  5e                   pop esi
// 00663454  b801000000           mov eax, 1
// 00663459  5b                   pop ebx
// 0066345a  c3                   ret 
// 0066345b  8bc6                 mov eax, esi
// 0066345d  e87efdffff           call 0x6631e0
// 00663462  5f                   pop edi
// 00663463  5e                   pop esi
// 00663464  33c0                 xor eax, eax
// 00663466  5b                   pop ebx
// 00663467  c3                   ret 
// 00663468  42                   inc edx
// 00663469  3466                 xor al, 0x66
// 0066346b  00a9336600d0         add byte ptr [ecx - 0x2fff99cd], ch
// 00663471  336600               xor esp, dword ptr [esi]
// 00663474  f2336600             xor esp, dword ptr [esi]
// 00663478  8733                 xchg dword ptr [ebx], esi
// 0066347a  6600fd               add ch, bh
// 0066347d  336600               xor esp, dword ptr [esi]
// 00663480  e133                 loope 0x6634b5
// 00663482  660032               add byte ptr [edx], dh
// 00663485  3466                 xor al, 0x66
// 00663487  00983366005b         add byte ptr [eax + 0x5b006633], bl
// 0066348d  3466                 xor al, 0x66
// 0066348f  0000                 add byte ptr [eax], al
// 00663491  0109                 add dword ptr [ecx], ecx
// 00663493  0909                 or dword ptr [ecx], ecx
// 00663495  0902                 or dword ptr [edx], eax
// 00663497  030409               add eax, dword ptr [ecx + ecx]
// 0066349a  0509090906           add eax, 0x6090909
// 0066349f  07                   pop es
// 006634a0  0909                 or dword ptr [ecx], ecx
// 006634a2  0908                 or dword ptr [eax], ecx
// library lua-5.1.4/lparser.c (function _statement)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
