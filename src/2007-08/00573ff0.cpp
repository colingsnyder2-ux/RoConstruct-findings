// from server: 100% by colin
// roc 2007-08 00573ff0  unit: RBX::PartInstance  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573ff0
//
// 00573ff0  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00573ff6  56                   push esi
// 00573ff7  8b7064               mov esi, dword ptr [eax + 0x64]
// 00573ffa  8bce                 mov ecx, esi
// 00573ffc  e8ffc0fbff           call 0x530100
// 00574001  8d86c0000000         lea eax, [esi + 0xc0]
// 00574007  5e                   pop esi
// 00574008  c3                   ret 

struct Primitive;

struct PartInstance {
    char pad[0x1d8];
    Primitive* primitive;
    void* getPrimitiveSomething();
};

struct Primitive {
    char pad[0x64];
    void* field64;
    char pad2[0xc0 - 0x68];
    char fieldC0;
};

struct Caller00530100 {
    void m();
};

extern Caller00530100 G00530100;

void* PartInstance::getPrimitiveSomething()
{
    Primitive* p = *(Primitive**)((char*)this + 0x1d8);
    void* q = *(void**)((char*)p + 0x64);
    ((Caller00530100*)q)->m();
    return (char*)q + 0xc0;
}
