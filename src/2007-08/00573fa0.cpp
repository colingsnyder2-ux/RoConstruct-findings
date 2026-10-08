// from server: 100% by colin
// roc 2007-08 00573fa0  unit: RBX::PartInstance  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573fa0
//
// 00573fa0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00573fa6  56                   push esi
// 00573fa7  8b7064               mov esi, dword ptr [eax + 0x64]
// 00573faa  8bce                 mov ecx, esi
// 00573fac  e84fc1fbff           call 0x530100
// 00573fb1  8d86a8000000         lea eax, [esi + 0xa8]
// 00573fb7  5e                   pop esi
// 00573fb8  c3                   ret 

struct Primitive;

struct PartInstance {
    char pad[0x1d8];
    Primitive* primitive;
    void* getSomething();
};

struct Primitive {
    char pad0[0x64];
    void* field64;
    char pad1[0xa8 - 0x68];
    char fieldA8;
};

struct Caller00530100 {
    void m();
};

void* PartInstance::getSomething()
{
    Primitive* p = *(Primitive**)((char*)this + 0x1d8);
    void* q = *(void**)((char*)p + 0x64);
    ((Caller00530100*)q)->m();
    return (char*)q + 0xa8;
}
