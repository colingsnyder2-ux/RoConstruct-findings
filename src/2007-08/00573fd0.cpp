// from server: 100% by colin
// roc 2007-08 00573fd0  unit: RBX::PartInstance  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573fd0
//
// 00573fd0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00573fd6  56                   push esi
// 00573fd7  8b7064               mov esi, dword ptr [eax + 0x64]
// 00573fda  8bce                 mov ecx, esi
// 00573fdc  e81fc1fbff           call 0x530100
// 00573fe1  8d86b4000000         lea eax, [esi + 0xb4]
// 00573fe7  5e                   pop esi
// 00573fe8  c3                   ret 

struct Primitive;

struct PartInstance {
    char pad[0x1d8];
    Primitive* primitive;
    void* getSomething();
};

struct Primitive {
    char pad0[0x64];
    void* field64;
};

struct Caller00530100 {
    void m();
};

void* PartInstance::getSomething()
{
    Primitive* p = *(Primitive**)((char*)this + 0x1d8);
    void* q = *(void**)((char*)p + 0x64);
    ((Caller00530100*)q)->m();
    return (char*)q + 0xb4;
}
