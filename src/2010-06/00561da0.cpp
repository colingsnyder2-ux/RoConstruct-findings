// from server: 100% by auto
// roc 2010-06 00561da0  unit: G3D::_internal::DialogTemplate  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561da0
//
// 00561da0  83ec1c               sub esp, 0x1c
// 00561da3  8b442420             mov eax, dword ptr [esp + 0x20]
// 00561da7  53                   push ebx
// 00561da8  55                   push ebp
// 00561da9  56                   push esi
// 00561daa  8b7018               mov esi, dword ptr [eax + 0x18]
// 00561dad  8b6e04               mov ebp, dword ptr [esi + 4]
// 00561db0  8b1e                 mov ebx, dword ptr [esi]
// 00561db2  89742414             mov dword ptr [esp + 0x14], esi
// 00561db6  85ed                 test ebp, ebp
// 00561db8  7519                 jne 0x561dd3
// 00561dba  50                   push eax
// 00561dbb  8b460c               mov eax, dword ptr [esi + 0xc]
// 00561dbe  ffd0                 call eax
// 00561dc0  83c404               add esp, 4
// 00561dc3  84c0                 test al, al
// 00561dc5  7507                 jne 0x561dce
// 00561dc7  5e                   pop esi
// 00561dc8  5d                   pop ebp
// 00561dc9  5b                   pop ebx
// 00561dca  83c41c               add esp, 0x1c
// 00561dcd  c3                   ret 
// 00561dce  8b1e                 mov ebx, dword ptr [esi]
// 00561dd0  8b6e04               mov ebp, dword ptr [esi + 4]
// 00561dd3  57                   push edi
// 00561dd4  0fb63b               movzx edi, byte ptr [ebx]
// 00561dd7  4d                   dec ebp
// 00561dd8  c1e708               shl edi, 8
// 00561ddb  43                   inc ebx
// 00561ddc  85ed                 test ebp, ebp
// 00561dde  751a                 jne 0x561dfa
// 00561de0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00561de4  8b560c               mov edx, dword ptr [esi + 0xc]
// 00561de7  51                   push ecx
// 00561de8  ffd2                 call edx
// 00561dea  83c404               add esp, 4
// 00561ded  84c0                 test al, al
// 00561def  0f84ab000000         je 0x561ea0
// 00561df5  8b1e                 mov ebx, dword ptr [esi]
// 00561df7  8b6e04               mov ebp, dword ptr [esi + 4]
// 00561dfa  0fb603               movzx eax, byte ptr [ebx]
// 00561dfd  03f8                 add edi, eax
// 00561dff  83ef02               sub edi, 2
// 00561e02  4d                   dec ebp
// 00561e03  43                   inc ebx
// 00561e04  83ff0e               cmp edi, 0xe
// 00561e07  7c0b                 jl 0x561e14
// 00561e09  b80e000000           mov eax, 0xe
// 00561e0e  89442410             mov dword ptr [esp + 0x10], eax
// 00561e12  eb10                 jmp 0x561e24
// 00561e14  33c9                 xor ecx, ecx
// 00561e16  85ff                 test edi, edi
// 00561e18  0f9ec1               setle cl
// 00561e1b  49                   dec ecx
// 00561e1c  23cf                 and ecx, edi
// 00561e1e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00561e22  8bc1                 mov eax, ecx
// 00561e24  33c9                 xor ecx, ecx
// 00561e26  894c2414             mov dword ptr [esp + 0x14], ecx
// 00561e2a  85c0                 test eax, eax
// 00561e2c  7635                 jbe 0x561e63
// 00561e2e  8bff                 mov edi, edi
// 00561e30  85ed                 test ebp, ebp
// 00561e32  751e                 jne 0x561e52
// 00561e34  8b542430             mov edx, dword ptr [esp + 0x30]
// 00561e38  8b460c               mov eax, dword ptr [esi + 0xc]
// 00561e3b  52                   push edx
// 00561e3c  ffd0                 call eax
// 00561e3e  83c404               add esp, 4
// 00561e41  84c0                 test al, al
// 00561e43  745b                 je 0x561ea0
// 00561e45  8b1e                 mov ebx, dword ptr [esi]
// 00561e47  8b6e04               mov ebp, dword ptr [esi + 4]
// 00561e4a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00561e4e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00561e52  8a13                 mov dl, byte ptr [ebx]
// 00561e54  88540c1c             mov byte ptr [esp + ecx + 0x1c], dl
// 00561e58  41                   inc ecx
// 00561e59  4d                   dec ebp
// 00561e5a  43                   inc ebx
// 00561e5b  894c2414             mov dword ptr [esp + 0x14], ecx
// 00561e5f  3bc8                 cmp ecx, eax
// 00561e61  72cd                 jb 0x561e30
// 00561e63  8b542430             mov edx, dword ptr [esp + 0x30]
// 00561e67  8b8a7c010000         mov ecx, dword ptr [edx + 0x17c]
// 00561e6d  2bf8                 sub edi, eax
// 00561e6f  81e9e0000000         sub ecx, 0xe0
// 00561e75  897c2414             mov dword ptr [esp + 0x14], edi
// 00561e79  7442                 je 0x561ebd
// 00561e7b  83e90e               sub ecx, 0xe
// 00561e7e  742a                 je 0x561eaa
// 00561e80  8b02                 mov eax, dword ptr [edx]
// 00561e82  c7401444000000       mov dword ptr [eax + 0x14], 0x44
// 00561e89  8b0a                 mov ecx, dword ptr [edx]
// 00561e8b  8b827c010000         mov eax, dword ptr [edx + 0x17c]
// 00561e91  894118               mov dword ptr [ecx + 0x18], eax
// 00561e94  8b0a                 mov ecx, dword ptr [edx]
// 00561e96  52                   push edx
// 00561e97  8b11                 mov edx, dword ptr [ecx]
// 00561e99  ffd2                 call edx
// 00561e9b  83c404               add esp, 4
// 00561e9e  eb32                 jmp 0x561ed2
// 00561ea0  5f                   pop edi
// 00561ea1  5e                   pop esi
// 00561ea2  5d                   pop ebp
// 00561ea3  32c0                 xor al, al
// 00561ea5  5b                   pop ebx
// 00561ea6  83c41c               add esp, 0x1c
// 00561ea9  c3                   ret 
// 00561eaa  8bc8                 mov ecx, eax
// 00561eac  57                   push edi
// 00561ead  8d442420             lea eax, [esp + 0x20]
// 00561eb1  8bf2                 mov esi, edx
// 00561eb3  e838feffff           call 0x561cf0
// 00561eb8  83c404               add esp, 4
// 00561ebb  eb11                 jmp 0x561ece
// 00561ebd  8bcf                 mov ecx, edi
// 00561ebf  8d7c241c             lea edi, [esp + 0x1c]
// 00561ec3  8bf2                 mov esi, edx
// 00561ec5  e8c6fbffff           call 0x561a90
// 00561eca  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00561ece  8b742418             mov esi, dword ptr [esp + 0x18]
// 00561ed2  891e                 mov dword ptr [esi], ebx
// 00561ed4  896e04               mov dword ptr [esi + 4], ebp
// 00561ed7  85ff                 test edi, edi
// 00561ed9  7e11                 jle 0x561eec
// 00561edb  8b442430             mov eax, dword ptr [esp + 0x30]
// 00561edf  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00561ee2  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00561ee5  57                   push edi
// 00561ee6  50                   push eax
// 00561ee7  ffd2                 call edx
// 00561ee9  83c408               add esp, 8
// 00561eec  5f                   pop edi
// 00561eed  5e                   pop esi
// 00561eee  5d                   pop ebp
// 00561eef  b001                 mov al, 1
// 00561ef1  5b                   pop ebx
// 00561ef2  83c41c               add esp, 0x1c
// 00561ef5  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_interesting_appn)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
