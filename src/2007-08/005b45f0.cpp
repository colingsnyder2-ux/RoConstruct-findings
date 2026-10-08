// from server: 79% by colin
// roc 2007-08 005b45f0  unit: RBX::Geometry  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b45f0
//
// 005b45f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b45f4  53                   push ebx
// 005b45f5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005b45f9  55                   push ebp
// 005b45fa  56                   push esi
// 005b45fb  33d2                 xor edx, edx
// 005b45fd  8d4900               lea ecx, [ecx]
// 005b4600  85d2                 test edx, edx
// 005b4602  8b442414             mov eax, dword ptr [esp + 0x14]
// 005b4606  7402                 je 0x5b460a
// 005b4608  8bc3                 mov eax, ebx
// 005b460a  8b6c9108             mov ebp, dword ptr [ecx + edx*4 + 8]
// 005b460e  3b6908               cmp ebp, dword ptr [ecx + 8]
// 005b4611  8b30                 mov esi, dword ptr [eax]
// 005b4613  7505                 jne 0x5b461a
// 005b4615  897110               mov dword ptr [ecx + 0x10], esi
// 005b4618  eb03                 jmp 0x5b461d
// 005b461a  897114               mov dword ptr [ecx + 0x14], esi
// 005b461d  83400401             add dword ptr [eax + 4], 1
// 005b4621  83c201               add edx, 1
// 005b4624  83fa02               cmp edx, 2
// 005b4627  8908                 mov dword ptr [eax], ecx
// 005b4629  7cd5                 jl 0x5b4600
// 005b462b  5e                   pop esi
// 005b462c  5d                   pop ebp
// 005b462d  5b                   pop ebx
// 005b462e  c3                   ret 

struct Geometry {
    char pad0[8];
    int m8;
    char padC[4];
    int m10;
    int m14;
    void func_005b45f0(int* a, int* b);
};

void Geometry::func_005b45f0(int* a, int* b)
{
    int* p = a;
    int* q = b;
    int i = 0;
    do {
        int* r = (i != 0) ? q : p;
        int v = *(int*)((char*)this + i * 4 + 8);
        int w = *(int*)r;
        if (v == *(int*)((char*)this + 8))
            *(int*)((char*)this + 0x10) = w;
        else
            *(int*)((char*)this + 0x14) = w;
        r[1] = r[1] + 1;
        i = i + 1;
        *r = (int)this;
    } while (i < 2);
}
