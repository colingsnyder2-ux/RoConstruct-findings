// roc 2009-06 006d6e00  unit: RBX::MotorJoint  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d6e00
//
// 006d6e00  56                   push esi
// 006d6e01  8b742410             mov esi, dword ptr [esp + 0x10]
// 006d6e05  33c9                 xor ecx, ecx
// 006d6e07  b8c9f80000           mov eax, 0xf8c9
// 006d6e0c  85f6                 test esi, esi
// 006d6e0e  7633                 jbe 0x6d6e43
// 006d6e10  8b542408             mov edx, dword ptr [esp + 8]
// 006d6e14  53                   push ebx
// 006d6e15  55                   push ebp
// 006d6e16  57                   push edi
// 006d6e17  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006d6e1b  eb03                 jmp 0x6d6e20
// 006d6e1d  8d4900               lea ecx, [ecx]
// 006d6e20  8b2a                 mov ebp, dword ptr [edx]
// 006d6e22  0fb61c39             movzx ebx, byte ptr [ecx + edi]
// 006d6e26  0fafe8               imul ebp, eax
// 006d6e29  69c0b7c60500         imul eax, eax, 0x5c6b7
// 006d6e2f  03dd                 add ebx, ebp
// 006d6e31  41                   inc ecx
// 006d6e32  891a                 mov dword ptr [edx], ebx
// 006d6e34  3bce                 cmp ecx, esi
// 006d6e36  72e8                 jb 0x6d6e20
// 006d6e38  8122ffffff7f         and dword ptr [edx], 0x7fffffff
// 006d6e3e  5f                   pop edi
// 006d6e3f  5d                   pop ebp
// 006d6e40  5b                   pop ebx
// 006d6e41  5e                   pop esi
// 006d6e42  c3                   ret 
// 006d6e43  8b442408             mov eax, dword ptr [esp + 8]
// 006d6e47  8120ffffff7f         and dword ptr [eax], 0x7fffffff
// 006d6e4d  5e                   pop esi
// 006d6e4e  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAXPAIPBEI@Z)

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