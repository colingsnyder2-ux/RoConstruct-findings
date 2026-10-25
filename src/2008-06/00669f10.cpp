// from server: 100% by king_originala
// roc 2008-06 00669f10  unit: RBX::TreeStage  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669f10
//
// 00669f10  56                   push esi
// 00669f11  8b742410             mov esi, dword ptr [esp + 0x10]
// 00669f15  33c9                 xor ecx, ecx
// 00669f17  b8c9f80000           mov eax, 0xf8c9
// 00669f1c  85f6                 test esi, esi
// 00669f1e  7633                 jbe 0x669f53
// 00669f20  8b542408             mov edx, dword ptr [esp + 8]
// 00669f24  53                   push ebx
// 00669f25  55                   push ebp
// 00669f26  57                   push edi
// 00669f27  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00669f2b  eb03                 jmp 0x669f30
// 00669f2d  8d4900               lea ecx, [ecx]
// 00669f30  8b2a                 mov ebp, dword ptr [edx]
// 00669f32  0fb61c39             movzx ebx, byte ptr [ecx + edi]
// 00669f36  0fafe8               imul ebp, eax
// 00669f39  69c0b7c60500         imul eax, eax, 0x5c6b7
// 00669f3f  03dd                 add ebx, ebp
// 00669f41  41                   inc ecx
// 00669f42  891a                 mov dword ptr [edx], ebx
// 00669f44  3bce                 cmp ecx, esi
// 00669f46  72e8                 jb 0x669f30
// 00669f48  8122ffffff7f         and dword ptr [edx], 0x7fffffff
// 00669f4e  5f                   pop edi
// 00669f4f  5d                   pop ebp
// 00669f50  5b                   pop ebx
// 00669f51  5e                   pop esi
// 00669f52  c3                   ret 
// 00669f53  8b442408             mov eax, dword ptr [esp + 8]
// 00669f57  8120ffffff7f         and dword ptr [eax], 0x7fffffff
// 00669f5d  5e                   pop esi
// 00669f5e  c3                   ret 

void func_00669f10(unsigned int* hash, const unsigned char* data, unsigned int length)
{
    unsigned int a = 63689;
    for (unsigned int i = 0; i < length; ++i)
    {
        *hash = *hash * a + data[i];
        a *= 378551;
    }
    *hash &= 0x7fffffff;
}
