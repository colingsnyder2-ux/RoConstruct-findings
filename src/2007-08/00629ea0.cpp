// from server: 86% by colin
// roc 2007-08 00629ea0  unit: RBX::AssemblyStage  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629ea0
//
// 00629ea0  56                   push esi
// 00629ea1  8b742410             mov esi, dword ptr [esp + 0x10]
// 00629ea5  33c9                 xor ecx, ecx
// 00629ea7  85f6                 test esi, esi
// 00629ea9  b8c9f80000           mov eax, 0xf8c9
// 00629eae  7635                 jbe 0x629ee5
// 00629eb0  8b542408             mov edx, dword ptr [esp + 8]
// 00629eb4  53                   push ebx
// 00629eb5  55                   push ebp
// 00629eb6  57                   push edi
// 00629eb7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00629ebb  eb03                 jmp 0x629ec0
// 00629ebd  8d4900               lea ecx, [ecx]
// 00629ec0  8b2a                 mov ebp, dword ptr [edx]
// 00629ec2  0fb61c39             movzx ebx, byte ptr [ecx + edi]
// 00629ec6  0fafe8               imul ebp, eax
// 00629ec9  69c0b7c60500         imul eax, eax, 0x5c6b7
// 00629ecf  03dd                 add ebx, ebp
// 00629ed1  83c101               add ecx, 1
// 00629ed4  3bce                 cmp ecx, esi
// 00629ed6  891a                 mov dword ptr [edx], ebx
// 00629ed8  72e6                 jb 0x629ec0
// 00629eda  8122ffffff7f         and dword ptr [edx], 0x7fffffff
// 00629ee0  5f                   pop edi
// 00629ee1  5d                   pop ebp
// 00629ee2  5b                   pop ebx
// 00629ee3  5e                   pop esi
// 00629ee4  c3                   ret 
// 00629ee5  8b442408             mov eax, dword ptr [esp + 8]
// 00629ee9  8120ffffff7f         and dword ptr [eax], 0x7fffffff
// 00629eef  5e                   pop esi
// 00629ef0  c3                   ret 

struct S {
    void f(int* a, unsigned char* b, unsigned int n);
};

void S::f(int* a, unsigned char* b, unsigned int n)
{
    unsigned int i = 0;
    unsigned int h = 0xf8c9;
    if (n > 0) {
        do {
            h = (unsigned int)(*a) * h + b[i];
            *a = (int)h;
            i++;
        } while (i < n);
    }
    *a &= 0x7fffffff;
}
