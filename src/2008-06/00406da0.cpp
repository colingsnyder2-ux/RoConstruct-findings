// from server: 100% by colin
// roc 2008-06 00406da0  unit: boost::thread_exception  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406da0
//
// 00406da0  55                   push ebp
// 00406da1  8bec                 mov ebp, esp
// 00406da3  6aff                 push -1
// 00406da5  68a0ce7b00           push 0x7bcea0
// 00406daa  64a100000000         mov eax, dword ptr fs:[0]
// 00406db0  50                   push eax
// 00406db1  64892500000000       mov dword ptr fs:[0], esp
// 00406db8  83ec10               sub esp, 0x10
// 00406dbb  53                   push ebx
// 00406dbc  56                   push esi
// 00406dbd  57                   push edi
// 00406dbe  8965f0               mov dword ptr [ebp - 0x10], esp
// 00406dc1  33db                 xor ebx, ebx
// 00406dc3  bf0e000780           mov edi, 0x8007000e
// 00406dc8  6a34                 push 0x34
// 00406dca  897dec               mov dword ptr [ebp - 0x14], edi
// 00406dcd  895de8               mov dword ptr [ebp - 0x18], ebx
// 00406dd0  895dfc               mov dword ptr [ebp - 4], ebx
// 00406dd3  e8489b2900           call 0x6a0920
// 00406dd8  8bf0                 mov esi, eax
// 00406dda  83c404               add esp, 4
// 00406ddd  3bf3                 cmp esi, ebx
// 00406ddf  743f                 je 0x406e20
// 00406de1  8bce                 mov ecx, esi
// 00406de3  e8783d0600           call 0x46ab60
// 00406de8  c7066cae8000         mov dword ptr [esi], 0x80ae6c
// 00406dee  c7460458ae8000       mov dword ptr [esi + 4], 0x80ae58
// 00406df5  c7460840ae8000       mov dword ptr [esi + 8], 0x80ae40
// 00406dfc  c7461024ae8000       mov dword ptr [esi + 0x10], 0x80ae24
// 00406e03  c7461818ae8000       mov dword ptr [esi + 0x18], 0x80ae18
// 00406e0a  c7461c0cae8000       mov dword ptr [esi + 0x1c], 0x80ae0c
// 00406e11  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00406e17  8b01                 mov eax, dword ptr [ecx]
// 00406e19  8b5004               mov edx, dword ptr [eax + 4]
// 00406e1c  ffd2                 call edx
// 00406e1e  eb02                 jmp 0x406e22
// 00406e20  33f6                 xor esi, esi
// 00406e22  83cbff               or ebx, 0xffffffff
// 00406e25  895dfc               mov dword ptr [ebp - 4], ebx
// 00406e28  85f6                 test esi, esi
// 00406e2a  7438                 je 0x406e64
// 00406e2c  ff4620               inc dword ptr [esi + 0x20]
// 00406e2f  8bce                 mov ecx, esi
// 00406e31  e88a470600           call 0x46b5c0
// 00406e36  015e20               add dword ptr [esi + 0x20], ebx
// 00406e39  8bf8                 mov edi, eax
// 00406e3b  85ff                 test edi, edi
// 00406e3d  7425                 je 0x406e64
// 00406e3f  8b4610               mov eax, dword ptr [esi + 0x10]
// 00406e42  8b5014               mov edx, dword ptr [eax + 0x14]
// 00406e45  8d4e10               lea ecx, [esi + 0x10]
// 00406e48  6a01                 push 1
// 00406e4a  ffd2                 call edx
// 00406e4c  33f6                 xor esi, esi
// 00406e4e  eb14                 jmp 0x406e64

struct __RocExc { long status; __RocExc(const __RocExc&); ~__RocExc(); };
// from server: 97% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern const unsigned long table0[];
extern const unsigned long table1[];
extern const unsigned long table2[];
extern const unsigned long table4[];
extern const unsigned long table6[];
extern const unsigned long table7[];

struct Module
{
    virtual void unused();
    virtual void lock();
};

extern Module* module;

struct Interface
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void destroy(int);
};

struct S
{
    const unsigned long* v0;
    const unsigned long* v1;
    const unsigned long* v2;
    unsigned long field0c;
    const unsigned long* v4;
    unsigned long field14;
    const unsigned long* v6;
    const unsigned long* v7;
    long references;
    unsigned long remaining[4];

    S() throw();
    void initialize();
    long construct();
};

__forceinline S::S() throw()
{
    initialize();
    v0 = table0;
    v1 = table1;
    v2 = table2;
    v4 = table4;
    v6 = table6;
    v7 = table7;
    module->lock();
}

long func_00406da0(S** result)
{
    long status = (long)0x8007000e;
    S* object = 0;

    try
    {
        object = new S;
    }
    catch (__RocExc __rocExc)
    {
    }

    if (object != 0)
    {
        ++object->references;
        status = object->construct();
        --object->references;

        if (status != 0)
        {
            reinterpret_cast<Interface*>(&object->v4)->destroy(1);
            object = 0;
        }
    }

    *result = object;
    return status;
}
