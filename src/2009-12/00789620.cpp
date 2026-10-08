// roc 2009-12 00789620  unit: RBX::UniversalTool  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00789620
//
// 00789620  8b442408             mov eax, dword ptr [esp + 8]
// 00789624  53                   push ebx
// 00789625  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00789629  56                   push esi
// 0078962a  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0078962d  57                   push edi
// 0078962e  33ff                 xor edi, edi
// 00789630  83f807               cmp eax, 7
// 00789633  0f87b1000000         ja 0x7896ea
// 00789639  ff2485f4967800       jmp dword ptr [eax*4 + 0x7896f4]
// 00789640  8bc7                 mov eax, edi
// 00789642  5f                   pop edi
// 00789643  c74640fdffffff       mov dword ptr [esi + 0x40], 0xfffffffd
// 0078964a  5e                   pop esi
// 0078964b  5b                   pop ebx
// 0078964c  c3                   ret 
// 0078964d  8b4644               mov eax, dword ptr [esi + 0x44]
// 00789650  894640               mov dword ptr [esi + 0x40], eax
// 00789653  8bc7                 mov eax, edi
// 00789655  5f                   pop edi
// 00789656  5e                   pop esi
// 00789657  5b                   pop ebx
// 00789658  c3                   ret 
// 00789659  53                   push ebx
// 0078965a  e831460400           call 0x7cdc90
// 0078965f  83c404               add esp, 4
// 00789662  8bc7                 mov eax, edi
// 00789664  5f                   pop edi
// 00789665  5e                   pop esi
// 00789666  5b                   pop ebx
// 00789667  c3                   ret 
// 00789668  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0078966b  c1ef0a               shr edi, 0xa
// 0078966e  8bc7                 mov eax, edi
// 00789670  5f                   pop edi
// 00789671  5e                   pop esi
// 00789672  5b                   pop ebx
// 00789673  c3                   ret 
// 00789674  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00789677  81e7ff030000         and edi, 0x3ff
// 0078967d  8bc7                 mov eax, edi
// 0078967f  5f                   pop edi
// 00789680  5e                   pop esi
// 00789681  5b                   pop ebx
// 00789682  c3                   ret 
// 00789683  8b442418             mov eax, dword ptr [esp + 0x18]
// 00789687  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0078968a  c1e00a               shl eax, 0xa
// 0078968d  3bc1                 cmp eax, ecx
// 0078968f  7709                 ja 0x78969a
// 00789691  8bd1                 mov edx, ecx
// 00789693  2bd0                 sub edx, eax
// 00789695  895640               mov dword ptr [esi + 0x40], edx
// 00789698  eb03                 jmp 0x78969d
// 0078969a  897e40               mov dword ptr [esi + 0x40], edi
// 0078969d  394e40               cmp dword ptr [esi + 0x40], ecx
// 007896a0  774b                 ja 0x7896ed
// 007896a2  53                   push ebx
// 007896a3  e868450400           call 0x7cdc10
// 007896a8  83c404               add esp, 4
// 007896ab  807e1500             cmp byte ptr [esi + 0x15], 0
// 007896af  740e                 je 0x7896bf
// 007896b1  8b4640               mov eax, dword ptr [esi + 0x40]
// 007896b4  3b4644               cmp eax, dword ptr [esi + 0x44]
// 007896b7  76e9                 jbe 0x7896a2
// 007896b9  8bc7                 mov eax, edi
// 007896bb  5f                   pop edi
// 007896bc  5e                   pop esi
// 007896bd  5b                   pop ebx
// 007896be  c3                   ret 
// 007896bf  bf01000000           mov edi, 1
// 007896c4  8bc7                 mov eax, edi
// 007896c6  5f                   pop edi
// 007896c7  5e                   pop esi
// 007896c8  5b                   pop ebx
// 007896c9  c3                   ret 
// 007896ca  8b7e50               mov edi, dword ptr [esi + 0x50]
// 007896cd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007896d1  8bc7                 mov eax, edi
// 007896d3  5f                   pop edi
// 007896d4  894e50               mov dword ptr [esi + 0x50], ecx
// 007896d7  5e                   pop esi
// 007896d8  5b                   pop ebx
// 007896d9  c3                   ret 
// 007896da  8b7e54               mov edi, dword ptr [esi + 0x54]
// 007896dd  8b542418             mov edx, dword ptr [esp + 0x18]
// 007896e1  8bc7                 mov eax, edi
// 007896e3  5f                   pop edi
// 007896e4  895654               mov dword ptr [esi + 0x54], edx
// 007896e7  5e                   pop esi
// 007896e8  5b                   pop ebx
// 007896e9  c3                   ret 
// 007896ea  83cfff               or edi, 0xffffffff
// 007896ed  8bc7                 mov eax, edi
// 007896ef  5f                   pop edi
// 007896f0  5e                   pop esi
// 007896f1  5b                   pop ebx
// 007896f2  c3                   ret 
// 007896f3  90                   nop 
// 007896f4  40                   inc eax
// 007896f5  96                   xchg esi, eax
// 007896f6  7800                 js 0x7896f8
// 007896f8  4d                   dec ebp
// 007896f9  96                   xchg esi, eax
// 007896fa  7800                 js 0x7896fc
// 007896fc  59                   pop ecx
// 007896fd  96                   xchg esi, eax
// 007896fe  7800                 js 0x789700
// 00789700  6896780074           push 0x74007896
// 00789705  96                   xchg esi, eax
// 00789706  7800                 js 0x789708
// 00789708  83967800ca9678       adc dword ptr [esi - 0x6935ff88], 0x78
// 0078970f  00da                 add dl, bl
// 00789711  96                   xchg esi, eax
// 00789712  7800                 js 0x789714
// library lua-5.1.4/lapi.c (function _lua_gc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
