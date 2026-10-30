// from server: 100% by auto
// roc 2012-06 00668580  unit: seg_00660000  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00668580
//
// 00668580  56                   push esi
// 00668581  57                   push edi
// 00668582  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00668586  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00668589  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 0066858f  8b11                 mov edx, dword ptr [ecx]
// 00668591  8bb75c010000         mov esi, dword ptr [edi + 0x15c]
// 00668597  895610               mov dword ptr [esi + 0x10], edx
// 0066859a  8944240c             mov dword ptr [esp + 0xc], eax
// 0066859e  8b4718               mov eax, dword ptr [edi + 0x18]
// 006685a1  8b4804               mov ecx, dword ptr [eax + 4]
// 006685a4  894e14               mov dword ptr [esi + 0x14], ecx
// 006685a7  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 006685ae  7414                 je 0x6685c4
// 006685b0  837e4400             cmp dword ptr [esi + 0x44], 0
// 006685b4  750e                 jne 0x6685c4
// 006685b6  8b5648               mov edx, dword ptr [esi + 0x48]
// 006685b9  52                   push edx
// 006685ba  8bc6                 mov eax, esi
// 006685bc  e8cffbffff           call 0x668190
// 006685c1  83c404               add esp, 4
// 006685c4  53                   push ebx
// 006685c5  33db                 xor ebx, ebx
// 006685c7  399f00010000         cmp dword ptr [edi + 0x100], ebx
// 006685cd  7e2c                 jle 0x6685fb
// 006685cf  55                   push ebp
// 006685d0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006685d4  8b449d00             mov eax, dword ptr [ebp + ebx*4]
// 006685d8  668b10               mov dx, word ptr [eax]
// 006685db  668b4c2414           mov cx, word ptr [esp + 0x14]
// 006685e0  66d3fa               sar dx, cl
// 006685e3  6a01                 push 1
// 006685e5  0fbfc2               movsx eax, dx
// 006685e8  50                   push eax
// 006685e9  e892f9ffff           call 0x667f80
// 006685ee  43                   inc ebx
// 006685ef  83c408               add esp, 8
// 006685f2  3b9f00010000         cmp ebx, dword ptr [edi + 0x100]
// 006685f8  7cda                 jl 0x6685d4
// 006685fa  5d                   pop ebp
// 006685fb  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006685fe  8b5610               mov edx, dword ptr [esi + 0x10]
// 00668601  8911                 mov dword ptr [ecx], edx
// 00668603  8b4718               mov eax, dword ptr [edi + 0x18]
// 00668606  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00668609  894804               mov dword ptr [eax + 4], ecx
// 0066860c  8bbfbc000000         mov edi, dword ptr [edi + 0xbc]
// 00668612  5b                   pop ebx
// 00668613  85ff                 test edi, edi
// 00668615  7416                 je 0x66862d
// 00668617  837e4400             cmp dword ptr [esi + 0x44], 0
// 0066861b  750d                 jne 0x66862a
// 0066861d  8b5648               mov edx, dword ptr [esi + 0x48]
// 00668620  42                   inc edx
// 00668621  83e207               and edx, 7
// 00668624  897e44               mov dword ptr [esi + 0x44], edi
// 00668627  895648               mov dword ptr [esi + 0x48], edx
// 0066862a  ff4e44               dec dword ptr [esi + 0x44]
// 0066862d  5f                   pop edi
// 0066862e  b001                 mov al, 1
// 00668630  5e                   pop esi
// 00668631  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_DC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
