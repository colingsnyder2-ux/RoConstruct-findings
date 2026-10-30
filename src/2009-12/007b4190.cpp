// roc 2009-12 007b4190  unit: RBX::MotorJoint  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b4190
//
// 007b4190  56                   push esi
// 007b4191  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b4195  33c9                 xor ecx, ecx
// 007b4197  b8c9f80000           mov eax, 0xf8c9
// 007b419c  85f6                 test esi, esi
// 007b419e  7633                 jbe 0x7b41d3
// 007b41a0  8b542408             mov edx, dword ptr [esp + 8]
// 007b41a4  53                   push ebx
// 007b41a5  55                   push ebp
// 007b41a6  57                   push edi
// 007b41a7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007b41ab  eb03                 jmp 0x7b41b0
// 007b41ad  8d4900               lea ecx, [ecx]
// 007b41b0  8b2a                 mov ebp, dword ptr [edx]
// 007b41b2  0fb61c39             movzx ebx, byte ptr [ecx + edi]
// 007b41b6  0fafe8               imul ebp, eax
// 007b41b9  69c0b7c60500         imul eax, eax, 0x5c6b7
// 007b41bf  03dd                 add ebx, ebp
// 007b41c1  41                   inc ecx
// 007b41c2  891a                 mov dword ptr [edx], ebx
// 007b41c4  3bce                 cmp ecx, esi
// 007b41c6  72e8                 jb 0x7b41b0
// 007b41c8  8122ffffff7f         and dword ptr [edx], 0x7fffffff
// 007b41ce  5f                   pop edi
// 007b41cf  5d                   pop ebp
// 007b41d0  5b                   pop ebx
// 007b41d1  5e                   pop esi
// 007b41d2  c3                   ret 
// 007b41d3  8b442408             mov eax, dword ptr [esp + 8]
// 007b41d7  8120ffffff7f         and dword ptr [eax], 0x7fffffff
// 007b41dd  5e                   pop esi
// 007b41de  c3                   ret 
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