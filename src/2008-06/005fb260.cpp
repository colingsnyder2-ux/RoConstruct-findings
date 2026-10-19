// from server: 45% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 40% by colin
// roc 2008-06 005fb260  unit: RBX::Kernel  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb260
//
// 005fb260  6aff                 push -1
// 005fb262  683bf47b00           push 0x7bf43b
// 005fb267  64a100000000         mov eax, dword ptr fs:[0]
// 005fb26d  50                   push eax
// 005fb26e  64892500000000       mov dword ptr fs:[0], esp
// 005fb275  83ec08               sub esp, 8
// 005fb278  53                   push ebx
// 005fb279  55                   push ebp
// 005fb27a  56                   push esi
// 005fb27b  57                   push edi
// 005fb27c  8bd9                 mov ebx, ecx
// 005fb27e  6a34                 push 0x34
// 005fb280  895c2414             mov dword ptr [esp + 0x14], ebx
// 005fb284  e897560a00           call 0x6a0920
// 005fb289  83c404               add esp, 4
// 005fb28c  89442414             mov dword ptr [esp + 0x14], eax
// 005fb290  33f6                 xor esi, esi
// 005fb292  89742420             mov dword ptr [esp + 0x20], esi
// 005fb296  3bc6                 cmp eax, esi
// 005fb298  7410                 je 0x5fb2aa
// 005fb29a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005fb29e  51                   push ecx
// 005fb29f  8bc8                 mov ecx, eax
// 005fb2a1  e85a290500           call 0x64dc00
// 005fb2a6  8bf8                 mov edi, eax
// 005fb2a8  eb02                 jmp 0x5fb2ac
// 005fb2aa  33ff                 xor edi, edi
// 005fb2ac  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005fb2b0  52                   push edx
// 005fb2b1  8bcf                 mov ecx, edi
// 005fb2b3  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005fb2bb  e8802a0500           call 0x64dd40
// 005fb2c0  8b6b10               mov ebp, dword ptr [ebx + 0x10]
// 005fb2c3  8b5d1c               mov ebx, dword ptr [ebp + 0x1c]
// 005fb2c6  85db                 test ebx, ebx
// 005fb2c8  7e3f                 jle 0x5fb309
// 005fb2ca  8b5518               mov edx, dword ptr [ebp + 0x18]
// 005fb2cd  8d4900               lea ecx, [ecx]
// 005fb2d0  8b0a                 mov ecx, dword ptr [edx]
// 005fb2d2  8b470c               mov eax, dword ptr [edi + 0xc]
// 005fb2d5  3b410c               cmp eax, dword ptr [ecx + 0xc]
// 005fb2d8  7527                 jne 0x5fb301
// 005fb2da  d94110               fld dword ptr [ecx + 0x10]
// 005fb2dd  d85f10               fcomp dword ptr [edi + 0x10]
// 005fb2e0  dfe0                 fnstsw ax
// 005fb2e2  f6c444               test ah, 0x44
// 005fb2e5  7a1a                 jp 0x5fb301
// 005fb2e7  d94114               fld dword ptr [ecx + 0x14]
// 005fb2ea  d85f14               fcomp dword ptr [edi + 0x14]
// 005fb2ed  dfe0                 fnstsw ax
// 005fb2ef  f6c444               test ah, 0x44
// 005fb2f2  7a0d                 jp 0x5fb301
// 005fb2f4  d94118               fld dword ptr [ecx + 0x18]
// 005fb2f7  d85f18               fcomp dword ptr [edi + 0x18]
// 005fb2fa  dfe0                 fnstsw ax
// 005fb2fc  f6c444               test ah, 0x44
// 005fb2ff  7b2f                 jnp 0x5fb330
// 005fb301  46                   inc esi
// 005fb302  83c204               add edx, 4
// 005fb305  3bf3                 cmp esi, ebx
// 005fb307  7cc7                 jl 0x5fb2d0
// 005fb309  8b5d1c               mov ebx, dword ptr [ebp + 0x1c]
// 005fb30c  8d7518               lea esi, [ebp + 0x18]
// 005fb30f  8bcf                 mov ecx, edi
// 005fb311  e8faf2ffff           call 0x5fa610
// 005fb316  8918                 mov dword ptr [eax], ebx
// 005fb318  8b4604               mov eax, dword ptr [esi + 4]
// 005fb31b  3b4608               cmp eax, dword ptr [esi + 8]
// 005fb31e  8b0e                 mov ecx, dword ptr [esi]
// 005fb320  7d43                 jge 0x5fb365
// 005fb322  8d0481               lea eax, [ecx + eax*4]
// 005fb325  85c0                 test eax, eax
// 005fb327  7402                 je 0x5fb32b
// 005fb329  8938                 mov dword ptr [eax], edi
// 005fb32b  ff4604               inc dword ptr [esi + 4]
// 005fb32e  eb6a                 jmp 0x5fb39a
// 005fb330  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005fb333  8b04b0               mov eax, dword ptr [eax + esi*4]
// 005fb336  ff4008               inc dword ptr [eax + 8]
// 005fb339  8b17                 mov edx, dword ptr [edi]
// 005fb33b  8b02                 mov eax, dword ptr [edx]
// 005fb33d  6a01                 push 1
// 005fb33f  8bcf                 mov ecx, edi
// 005fb341  ffd0                 call eax
// 005fb343  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fb347  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005fb34a  8b4218               mov eax, dword ptr [edx + 0x18]
// 005fb34d  8b04b0               mov eax, dword ptr [eax + esi*4]
// 005fb350  5f                   pop edi
// 005fb351  5e                   pop esi
// 005fb352  5d                   pop ebp
// 005fb353  5b                   pop ebx
// 005fb354  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fb358  64890d00000000       mov dword ptr fs:[0], ecx
// 005fb35f  83c414               add esp, 0x14
// 005fb362  c20800               ret 8
// 005fb365  8d542428             lea edx, [esp + 0x28]
// 005fb369  3bd1                 cmp edx, ecx
// 005fb36b  7219                 jb 0x5fb386
// 005fb36d  8d0c81               lea ecx, [ecx + eax*4]
// 005fb370  3bd1                 cmp edx, ecx
// 005fb372  7312                 jae 0x5fb386
// 005fb374  8d442428             lea eax, [esp + 0x28]
// 005fb378  50                   push eax
// 005fb379  8bce                 mov ecx, esi
// 005fb37b  897c242c             mov dword ptr [esp + 0x2c], edi
// 005fb37f  e8acf8ffff           call 0x5fac30
// 005fb384  eb14                 jmp 0x5fb39a
// 005fb386  6a00                 push 0
// 005fb388  40                   inc eax
// 005fb389  50                   push eax
// 005fb38a  8bce                 mov ecx, esi
// 005fb38c  e8dff4ffff           call 0x5fa870
// 005fb391  8b4e04               mov ecx, dword ptr [esi + 4]
// 005fb394  8b16                 mov edx, dword ptr [esi]
// 005fb396  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 005fb39a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fb39e  8bc7                 mov eax, edi
// 005fb3a0  5f                   pop edi
// 005fb3a1  5e                   pop esi
// 005fb3a2  5d                   pop ebp
// 005fb3a3  5b                   pop ebx
// 005fb3a4  64890d00000000       mov dword ptr fs:[0], ecx
// 005fb3ab  83c414               add esp, 0x14
// 005fb3ae  c20800               ret 8

struct S_func_005fa610 {
    char pad0[4];
    int m_x;
    int* f();
};

struct S_func_005fa870 {
    int f(int, int);
};

struct S_func_005fac30 {
    int f(int*);
};

struct S_func_0064dc00 {
    int f(int);
};

struct S_func_0064dd40 {
    int f(int);
};

extern "C" void* __cdecl func_006a0920(unsigned int);

struct S_func_005fb260 {
    char pad0[0x10];
    void* m_10;
    int f(int, int);
};

int S_func_005fb260::f(int a, int b)
{
    S_func_0064dc00* p = (S_func_0064dc00*)func_006a0920(0x34);
    S_func_0064dc00* obj = 0;
    if (p) {
        obj = (S_func_0064dc00*)p->f(a);
    }
    S_func_0064dd40* o2 = (S_func_0064dd40*)obj;
    o2->f(b);

    char* kd = (char*)m_10;
    int count = *(int*)(kd + 0x1c);
    int i = 0;
    if (count > 0) {
        int* arr = *(int**)(kd + 0x18);
        do {
            char* c = (char*)arr[i];
            if (*(int*)((char*)obj + 0xc) == *(int*)(c + 0xc)) {
                if (*(float*)(c + 0x10) == *(float*)((char*)obj + 0x10) &&
                    *(float*)(c + 0x14) == *(float*)((char*)obj + 0x14) &&
                    *(float*)(c + 0x18) == *(float*)((char*)obj + 0x18)) {
                    (*(int*)(c + 8))++;
                    (*(void(**)(void*, int))obj)(obj, 1);
                    char* kd2 = (char*)m_10;
                    int* arr2 = *(int**)(kd2 + 0x18);
                    return arr2[i];
                }
            }
            i++;
        } while (i < count);
    }

    int* r = ((S_func_005fa610*)obj)->f();
    *r = count;

    char* vec = (char*)kd + 0x18;
    int sz = *(int*)(vec + 4);
    if (sz < *(int*)(vec + 8)) {
        int* base = *(int**)vec;
        int* slot = base + sz;
        if (slot) *slot = (int)obj;
        (*(int*)(vec + 4))++;
    } else {
        S_func_005fa870* v = (S_func_005fa870*)vec;
        v->f(sz + 1, 0);
        int* base = *(int**)vec;
        int n = *(int*)(vec + 4);
        base[n - 1] = (int)obj;
    }
    return (int)obj;
}
