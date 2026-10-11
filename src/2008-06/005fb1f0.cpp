// from server: 77% by colin
// roc 2008-06 005fb1f0  unit: RBX::Kernel  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb1f0
//
// 005fb1f0  53                   push ebx
// 005fb1f1  56                   push esi
// 005fb1f2  57                   push edi
// 005fb1f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005fb1f7  8bf1                 mov esi, ecx
// 005fb1f9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005fb1fc  57                   push edi
// 005fb1fd  e84efeffff           call 0x5fb050
// 005fb202  6a00                 push 0
// 005fb204  6a00                 push 0
// 005fb206  8d4e14               lea ecx, [esi + 0x14]
// 005fb209  e862f4ffff           call 0x5fa670
// 005fb20e  8b7610               mov esi, dword ptr [esi + 0x10]
// 005fb211  8bcf                 mov ecx, edi
// 005fb213  83c624               add esi, 0x24
// 005fb216  e8f5f3ffff           call 0x5fa610
// 005fb21b  8b18                 mov ebx, dword ptr [eax]
// 005fb21d  8b06                 mov eax, dword ptr [esi]
// 005fb21f  8b4e04               mov ecx, dword ptr [esi + 4]
// 005fb222  8b4c88fc             mov ecx, dword ptr [eax + ecx*4 - 4]
// 005fb226  890c98               mov dword ptr [eax + ebx*4], ecx
// 005fb229  e8e2f3ffff           call 0x5fa610
// 005fb22e  8918                 mov dword ptr [eax], ebx
// 005fb230  8b5604               mov edx, dword ptr [esi + 4]
// 005fb233  6a00                 push 0
// 005fb235  4a                   dec edx
// 005fb236  52                   push edx
// 005fb237  8bce                 mov ecx, esi
// 005fb239  e832f4ffff           call 0x5fa670
// 005fb23e  8bcf                 mov ecx, edi
// 005fb240  e8cbf3ffff           call 0x5fa610
// 005fb245  5f                   pop edi
// 005fb246  5e                   pop esi
// 005fb247  c700ffffffff         mov dword ptr [eax], 0xffffffff
// 005fb24d  5b                   pop ebx
// 005fb24e  c20400               ret 4

struct S_func_005fa610 {
    char pad0[4];
    int m_x;
    int* f();
};

struct S_func_005fa670 {
    char pad0[4];
    int m_x;
    int* f();
    void g(int, int);
};

struct S_func_005fb050 {
    char pad0[4];
    int m_x;
    void h(int);
};

struct Kernel {
    char pad0[0x10];
    S_func_005fb050* m_field10;
    S_func_005fa670 m_field14;
    void step(int);
};

void Kernel::step(int a)
{
    m_field10->h(a);
    m_field14.g(0, 0);
    S_func_005fa670* p = (S_func_005fa670*)((char*)m_field10 + 0x24);
    int* r = ((S_func_005fa610*)a)->f();
    int ebx = *r;
    int* eax = p->f();
    int ecx = p->m_x;
    ecx = eax[ecx - 1];
    eax[ebx] = ecx;
    r = ((S_func_005fa610*)a)->f();
    *r = ebx;
    int edx = p->m_x;
    edx--;
    p->g(edx, 0);
    r = ((S_func_005fa610*)a)->f();
    *r = -1;
}
