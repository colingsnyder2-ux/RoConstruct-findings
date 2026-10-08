// from server: 100% by auto
// roc 2011-06 0056a640  unit: seg_00560000  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a640
//
// 0056a640  53                   push ebx
// 0056a641  56                   push esi
// 0056a642  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056a646  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0056a64d  57                   push edi
// 0056a64e  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0056a654  897c2410             mov dword ptr [esp + 0x10], edi
// 0056a658  0f8581000000         jne 0x56a6df
// 0056a65e  55                   push ebp
// 0056a65f  33ed                 xor ebp, ebp
// 0056a661  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 0056a667  7e75                 jle 0x56a6de
// 0056a669  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0056a66f  90                   nop 
// 0056a670  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0056a677  8b3b                 mov edi, dword ptr [ebx]
// 0056a679  7436                 je 0x56a6b1
// 0056a67b  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0056a682  751b                 jne 0x56a69f
// 0056a684  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0056a68b  7541                 jne 0x56a6ce
// 0056a68d  8b4714               mov eax, dword ptr [edi + 0x14]
// 0056a690  6a00                 push 0
// 0056a692  50                   push eax
// 0056a693  8bc6                 mov eax, esi
// 0056a695  e8d6f5ffff           call 0x569c70
// 0056a69a  83c408               add esp, 8
// 0056a69d  eb2f                 jmp 0x56a6ce
// 0056a69f  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0056a6a2  6a01                 push 1
// 0056a6a4  51                   push ecx
// 0056a6a5  8bc6                 mov eax, esi
// 0056a6a7  e8c4f5ffff           call 0x569c70
// 0056a6ac  83c408               add esp, 8
// 0056a6af  eb1d                 jmp 0x56a6ce
// 0056a6b1  8b5714               mov edx, dword ptr [edi + 0x14]
// 0056a6b4  6a00                 push 0
// 0056a6b6  52                   push edx
// 0056a6b7  8bc6                 mov eax, esi
// 0056a6b9  e8b2f5ffff           call 0x569c70
// 0056a6be  8b4718               mov eax, dword ptr [edi + 0x18]
// 0056a6c1  6a01                 push 1
// 0056a6c3  50                   push eax
// 0056a6c4  8bc6                 mov eax, esi
// 0056a6c6  e8a5f5ffff           call 0x569c70
// 0056a6cb  83c410               add esp, 0x10
// 0056a6ce  45                   inc ebp
// 0056a6cf  83c304               add ebx, 4
// 0056a6d2  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 0056a6d8  7c96                 jl 0x56a670
// 0056a6da  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056a6de  5d                   pop ebp
// 0056a6df  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0056a6e5  3b4f1c               cmp ecx, dword ptr [edi + 0x1c]
// 0056a6e8  742b                 je 0x56a715
// 0056a6ea  68dd000000           push 0xdd
// 0056a6ef  e8bcf2ffff           call 0x5699b0
// 0056a6f4  83c404               add esp, 4
// 0056a6f7  bb04000000           mov ebx, 4
// 0056a6fc  e81ff3ffff           call 0x569a20
// 0056a701  8b9ebc000000         mov ebx, dword ptr [esi + 0xbc]
// 0056a707  e814f3ffff           call 0x569a20
// 0056a70c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 0056a712  89571c               mov dword ptr [edi + 0x1c], edx
// 0056a715  5f                   pop edi
// 0056a716  8bc6                 mov eax, esi
// 0056a718  5e                   pop esi
// 0056a719  5b                   pop ebx
// 0056a71a  e931f8ffff           jmp 0x569f50
// library jpeg-6b/jcmarker.c (function _write_scan_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
