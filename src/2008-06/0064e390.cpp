// from server: 100% by king_originala
// roc 2008-06 0064e390  unit: RBX::P8Camera::?$GetSetImpl  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e390
//
// 0064e390  6aff                 push -1
// 0064e392  6868e37c00           push 0x7ce368
// 0064e397  64a100000000         mov eax, dword ptr fs:[0]
// 0064e39d  50                   push eax
// 0064e39e  64892500000000       mov dword ptr fs:[0], esp
// 0064e3a5  51                   push ecx
// 0064e3a6  56                   push esi
// 0064e3a7  8bf1                 mov esi, ecx
// 0064e3a9  57                   push edi
// 0064e3aa  89742408             mov dword ptr [esp + 8], esi
// 0064e3ae  e88d5bf3ff           call 0x583f40
// 0064e3b3  8bf8                 mov edi, eax
// 0064e3b5  e83604fbff           call 0x5fe7f0
// 0064e3ba  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064e3be  8b542420             mov edx, dword ptr [esp + 0x20]
// 0064e3c2  51                   push ecx
// 0064e3c3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064e3c7  52                   push edx
// 0064e3c8  51                   push ecx
// 0064e3c9  57                   push edi
// 0064e3ca  50                   push eax
// 0064e3cb  8bce                 mov ecx, esi
// 0064e3cd  e87ee2f1ff           call 0x56c650
// 0064e3d2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0064e3d6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064e3da  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0064e3de  52                   push edx
// 0064e3df  50                   push eax
// 0064e3e0  51                   push ecx
// 0064e3e1  8d54243c             lea edx, [esp + 0x3c]
// 0064e3e5  52                   push edx
// 0064e3e6  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0064e3ee  c706f8b28400         mov dword ptr [esi], 0x84b2f8
// 0064e3f4  c74618f0b28400       mov dword ptr [esi + 0x18], 0x84b2f0
// 0064e3fb  e820feffff           call 0x64e220
// 0064e400  8b08                 mov ecx, dword ptr [eax]
// 0064e402  c70000000000         mov dword ptr [eax], 0
// 0064e408  8b442440             mov eax, dword ptr [esp + 0x40]
// 0064e40c  83c410               add esp, 0x10
// 0064e40f  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0064e412  85c0                 test eax, eax
// 0064e414  7409                 je 0x64e41f
// 0064e416  50                   push eax
// 0064e417  e85e220500           call 0x6a067a
// 0064e41c  83c404               add esp, 4
// 0064e41f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064e423  5f                   pop edi
// 0064e424  8bc6                 mov eax, esi
// 0064e426  5e                   pop esi
// 0064e427  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e42e  83c410               add esp, 0x10
// 0064e431  c21800               ret 0x18

extern int __cdecl func_00583f40();
extern int __cdecl func_005fe7f0();
extern void __cdecl func_006a067a(void *);

struct Owner
{
    void *p;
    ~Owner();
    void *release();
};

inline Owner::~Owner()
{
    if (p)
        func_006a067a(p);
}

inline void *Owner::release()
{
    void *q = p;
    p = 0;
    return q;
}

extern Owner __cdecl func_0064e220(int, int, int);

struct Base
{
    unsigned long words[7];
    Base(int, int, int);
    void func_0056c650(int, int, int, int, int);
    ~Base();
};

inline Base::Base(int a, int b, int f)
{
    int first = func_00583f40();
    int second = func_005fe7f0();
    func_0056c650(second, first, a, b, f);
}

struct S : Base
{
    void *value;
    S(int, int, int, int, int, int);
};

S::S(int a, int b, int c, int d, int e, int f)
    : Base(a, b, f)
{
    words[0] = 0x0084b2f8;
    words[6] = 0x0084b2f0;
    value = func_0064e220(c, d, e).release();
}
