// from server: 100% by auto
// roc 2012-06 00655d50  unit: seg_00650000  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655d50
//
// 00655d50  53                   push ebx
// 00655d51  56                   push esi
// 00655d52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00655d56  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00655d5d  57                   push edi
// 00655d5e  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 00655d64  897c2410             mov dword ptr [esp + 0x10], edi
// 00655d68  0f8581000000         jne 0x655def
// 00655d6e  55                   push ebp
// 00655d6f  33ed                 xor ebp, ebp
// 00655d71  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 00655d77  7e75                 jle 0x655dee
// 00655d79  8d9ee8000000         lea ebx, [esi + 0xe8]
// 00655d7f  90                   nop 
// 00655d80  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00655d87  8b3b                 mov edi, dword ptr [ebx]
// 00655d89  7436                 je 0x655dc1
// 00655d8b  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00655d92  751b                 jne 0x655daf
// 00655d94  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 00655d9b  7541                 jne 0x655dde
// 00655d9d  8b4714               mov eax, dword ptr [edi + 0x14]
// 00655da0  6a00                 push 0
// 00655da2  50                   push eax
// 00655da3  8bc6                 mov eax, esi
// 00655da5  e8d6f5ffff           call 0x655380
// 00655daa  83c408               add esp, 8
// 00655dad  eb2f                 jmp 0x655dde
// 00655daf  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00655db2  6a01                 push 1
// 00655db4  51                   push ecx
// 00655db5  8bc6                 mov eax, esi
// 00655db7  e8c4f5ffff           call 0x655380
// 00655dbc  83c408               add esp, 8
// 00655dbf  eb1d                 jmp 0x655dde
// 00655dc1  8b5714               mov edx, dword ptr [edi + 0x14]
// 00655dc4  6a00                 push 0
// 00655dc6  52                   push edx
// 00655dc7  8bc6                 mov eax, esi
// 00655dc9  e8b2f5ffff           call 0x655380
// 00655dce  8b4718               mov eax, dword ptr [edi + 0x18]
// 00655dd1  6a01                 push 1
// 00655dd3  50                   push eax
// 00655dd4  8bc6                 mov eax, esi
// 00655dd6  e8a5f5ffff           call 0x655380
// 00655ddb  83c410               add esp, 0x10
// 00655dde  45                   inc ebp
// 00655ddf  83c304               add ebx, 4
// 00655de2  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 00655de8  7c96                 jl 0x655d80
// 00655dea  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00655dee  5d                   pop ebp
// 00655def  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00655df5  3b4f1c               cmp ecx, dword ptr [edi + 0x1c]
// 00655df8  742b                 je 0x655e25
// 00655dfa  68dd000000           push 0xdd
// 00655dff  e8bcf2ffff           call 0x6550c0
// 00655e04  83c404               add esp, 4
// 00655e07  bb04000000           mov ebx, 4
// 00655e0c  e81ff3ffff           call 0x655130
// 00655e11  8b9ebc000000         mov ebx, dword ptr [esi + 0xbc]
// 00655e17  e814f3ffff           call 0x655130
// 00655e1c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 00655e22  89571c               mov dword ptr [edi + 0x1c], edx
// 00655e25  5f                   pop edi
// 00655e26  8bc6                 mov eax, esi
// 00655e28  5e                   pop esi
// 00655e29  5b                   pop ebx
// 00655e2a  e931f8ffff           jmp 0x655660
// library jpeg-6b/jcmarker.c (function _write_scan_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
