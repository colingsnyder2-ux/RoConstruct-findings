// roc 2010-06 0075c160  unit: RBX::RightAngleRampPoly  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075c160
//
// 0075c160  56                   push esi
// 0075c161  8b742410             mov esi, dword ptr [esp + 0x10]
// 0075c165  33c9                 xor ecx, ecx
// 0075c167  b8c9f80000           mov eax, 0xf8c9
// 0075c16c  85f6                 test esi, esi
// 0075c16e  7633                 jbe 0x75c1a3
// 0075c170  8b542408             mov edx, dword ptr [esp + 8]
// 0075c174  53                   push ebx
// 0075c175  55                   push ebp
// 0075c176  57                   push edi
// 0075c177  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0075c17b  eb03                 jmp 0x75c180
// 0075c17d  8d4900               lea ecx, [ecx]
// 0075c180  8b2a                 mov ebp, dword ptr [edx]
// 0075c182  0fb61c39             movzx ebx, byte ptr [ecx + edi]
// 0075c186  0fafe8               imul ebp, eax
// 0075c189  69c0b7c60500         imul eax, eax, 0x5c6b7
// 0075c18f  03dd                 add ebx, ebp
// 0075c191  41                   inc ecx
// 0075c192  891a                 mov dword ptr [edx], ebx
// 0075c194  3bce                 cmp ecx, esi
// 0075c196  72e8                 jb 0x75c180
// 0075c198  8122ffffff7f         and dword ptr [edx], 0x7fffffff
// 0075c19e  5f                   pop edi
// 0075c19f  5d                   pop ebp
// 0075c1a0  5b                   pop ebx
// 0075c1a1  5e                   pop esi
// 0075c1a2  c3                   ret 
// 0075c1a3  8b442408             mov eax, dword ptr [esp + 8]
// 0075c1a7  8120ffffff7f         and dword ptr [eax], 0x7fffffff
// 0075c1ad  5e                   pop esi
// 0075c1ae  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00669f10@@YAXPAIPBEI@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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