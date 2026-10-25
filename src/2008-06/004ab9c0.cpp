// from server: 100% by colin
// roc 2008-06 004ab9c0  unit: RBX::Network::Replicator  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ab9c0
//
// 004ab9c0  6aff                 push -1
// 004ab9c2  68b0827c00           push 0x7c82b0
// 004ab9c7  64a100000000         mov eax, dword ptr fs:[0]
// 004ab9cd  50                   push eax
// 004ab9ce  64892500000000       mov dword ptr fs:[0], esp
// 004ab9d5  83ec30               sub esp, 0x30
// 004ab9d8  56                   push esi
// 004ab9d9  8bf1                 mov esi, ecx
// 004ab9db  8b86302d0000         mov eax, dword ptr [esi + 0x2d30]
// 004ab9e1  6a00                 push 0
// 004ab9e3  50                   push eax
// 004ab9e4  8d4c2424             lea ecx, [esp + 0x24]
// 004ab9e8  e893851100           call 0x5c3f80
// 004ab9ed  8b86382d0000         mov eax, dword ptr [esi + 0x2d38]
// 004ab9f3  6a00                 push 0
// 004ab9f5  50                   push eax
// 004ab9f6  8d4c240c             lea ecx, [esp + 0xc]
// 004ab9fa  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004aba02  e879851100           call 0x5c3f80
// 004aba07  8b8e802b0000         mov ecx, dword ptr [esi + 0x2b80]
// 004aba0d  8b01                 mov eax, dword ptr [ecx]
// 004aba0f  8b542444             mov edx, dword ptr [esp + 0x44]
// 004aba13  8b4008               mov eax, dword ptr [eax + 8]
// 004aba16  52                   push edx
// 004aba17  c644244001           mov byte ptr [esp + 0x40], 1
// 004aba1c  ffd0                 call eax
// 004aba1e  8d4c2404             lea ecx, [esp + 4]
// 004aba22  8bf0                 mov esi, eax
// 004aba24  c644243c00           mov byte ptr [esp + 0x3c], 0
// 004aba29  e8a2881100           call 0x5c42d0
// 004aba2e  8d4c241c             lea ecx, [esp + 0x1c]
// 004aba32  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 004aba3a  e891881100           call 0x5c42d0
// 004aba3f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004aba43  8bc6                 mov eax, esi
// 004aba45  5e                   pop esi
// 004aba46  64890d00000000       mov dword ptr fs:[0], ecx
// 004aba4d  83c43c               add esp, 0x3c
// 004aba50  c20400               ret 4

struct Scope
{
    const char* name;
    void* previous;
    bool enabled;
    double startTime;

    Scope(const char*, bool);
    ~Scope();
};

struct Target;
struct TargetTable
{
    void* unused[2];
    int (__thiscall* invoke)(Target*, int);
};

struct Target
{
    TargetTable* table;
};

struct S_func_004ab9c0
{
    char pad0[0x2B80];
    Target* target;
    char pad1[0x1AC];
    const char* scopeName1;
    char pad2[4];
    const char* scopeName2;

    int f(int value);
};

int S_func_004ab9c0::f(int value)
{
    Scope first(scopeName1, false);
    const char* name2 = scopeName2;
    Scope second(name2, false);
    Target* t = target;
    TargetTable* tbl = t->table;
    int (__thiscall* fn)(Target*, int) = tbl->invoke;
    return fn(t, value);
}
