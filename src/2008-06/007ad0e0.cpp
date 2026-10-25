// from server: 100% by king_originala
// roc 2008-06 007ad0e0  unit: RBX::RenderNew::Material::Level  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad0e0
//
// 007ad0e0  64a100000000         mov eax, dword ptr fs:[0]
// 007ad0e6  6aff                 push -1
// 007ad0e8  6818b57c00           push 0x7cb518
// 007ad0ed  50                   push eax
// 007ad0ee  64892500000000       mov dword ptr fs:[0], esp
// 007ad0f5  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ad0f9  83c10c               add ecx, 0xc
// 007ad0fc  50                   push eax
// 007ad0fd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007ad105  e896bedeff           call 0x598fa0
// 007ad10a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ad10e  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 007ad116  85c0                 test eax, eax
// 007ad118  7427                 je 0x7ad141
// 007ad11a  83c004               add eax, 4
// 007ad11d  50                   push eax
// 007ad11e  ff15ac218000         call dword ptr [0x8021ac]
// 007ad124  85c0                 test eax, eax
// 007ad126  7519                 jne 0x7ad141
// 007ad128  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ad12c  e85fdccaff           call 0x45ad90
// 007ad131  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ad135  85c9                 test ecx, ecx
// 007ad137  7408                 je 0x7ad141
// 007ad139  8b11                 mov edx, dword ptr [ecx]
// 007ad13b  8b02                 mov eax, dword ptr [edx]
// 007ad13d  6a01                 push 1
// 007ad13f  ffd0                 call eax
// 007ad141  8b0c24               mov ecx, dword ptr [esp]
// 007ad144  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad14b  83c40c               add esp, 0xc
// 007ad14e  c20400               ret 4

extern "C" long (__stdcall *InterlockedDecrement)(volatile long*);

struct Object {
    virtual ~Object();
    volatile long references;
    void dispose();
};

struct Pointer {
    Object* value;
    ~Pointer();
    Pointer& assign(Object*);
};

__forceinline Pointer::~Pointer()
{
    if (value && InterlockedDecrement(&value->references) == 0) {
        value->dispose();
        delete value;
    }
}

struct S {
    unsigned char padding[12];
    Pointer member;
    void f(Pointer p);
};

void S::f(Pointer p)
{
    Pointer& destination = member;
    destination.assign(p.value);
}
