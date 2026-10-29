// roc 2011-06 007ab1d0  unit: RBX::CornerWedgePoly  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ab1d0
//
// 007ab1d0  56                   push esi
// 007ab1d1  8b742410             mov esi, dword ptr [esp + 0x10]
// 007ab1d5  33c9                 xor ecx, ecx
// 007ab1d7  b8c9f80000           mov eax, 0xf8c9
// 007ab1dc  85f6                 test esi, esi
// 007ab1de  7633                 jbe 0x7ab213
// 007ab1e0  8b542408             mov edx, dword ptr [esp + 8]
// 007ab1e4  53                   push ebx
// 007ab1e5  55                   push ebp
// 007ab1e6  57                   push edi
// 007ab1e7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007ab1eb  eb03                 jmp 0x7ab1f0
// 007ab1ed  8d4900               lea ecx, [ecx]
// 007ab1f0  8b2a                 mov ebp, dword ptr [edx]
// 007ab1f2  0fb61c39             movzx ebx, byte ptr [ecx + edi]
// 007ab1f6  0fafe8               imul ebp, eax
// 007ab1f9  69c0b7c60500         imul eax, eax, 0x5c6b7
// 007ab1ff  03dd                 add ebx, ebp
// 007ab201  41                   inc ecx
// 007ab202  891a                 mov dword ptr [edx], ebx
// 007ab204  3bce                 cmp ecx, esi
// 007ab206  72e8                 jb 0x7ab1f0
// 007ab208  8122ffffff7f         and dword ptr [edx], 0x7fffffff
// 007ab20e  5f                   pop edi
// 007ab20f  5d                   pop ebp
// 007ab210  5b                   pop ebx
// 007ab211  5e                   pop esi
// 007ab212  c3                   ret 
// 007ab213  8b442408             mov eax, dword ptr [esp + 8]
// 007ab217  8120ffffff7f         and dword ptr [eax], 0x7fffffff
// 007ab21d  5e                   pop esi
// 007ab21e  c3                   ret 
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