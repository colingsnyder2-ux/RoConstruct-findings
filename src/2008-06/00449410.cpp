// from server: 100% by king_originala
// roc 2008-06 00449410  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449410
//
// 00449410  51                   push ecx
// 00449411  8bc1                 mov eax, ecx
// 00449413  8b08                 mov ecx, dword ptr [eax]
// 00449415  8b4004               mov eax, dword ptr [eax + 4]
// 00449418  8b11                 mov edx, dword ptr [ecx]
// 0044941a  8b521c               mov edx, dword ptr [edx + 0x1c]
// 0044941d  56                   push esi
// 0044941e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00449422  50                   push eax
// 00449423  56                   push esi
// 00449424  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0044942c  ffd2                 call edx
// 0044942e  8bc6                 mov eax, esi
// 00449430  5e                   pop esi
// 00449431  59                   pop ecx
// 00449432  c20400               ret 4

struct Result {
    Result(const Result&);
    ~Result();
    int value;
};

struct Interface {
    virtual void f0() = 0;
    virtual void f1() = 0;
    virtual void f2() = 0;
    virtual void f3() = 0;
    virtual void f4() = 0;
    virtual void f5() = 0;
    virtual void f6() = 0;
    virtual Result get(int) = 0;
};

struct S {
    Interface* object;
    int argument;
    Result get();
};

Result S::get() {
    return object->get(argument);
}
