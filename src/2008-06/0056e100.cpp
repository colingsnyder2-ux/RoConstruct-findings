// from server: 100% by king_originala
// roc 2008-06 0056e100  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e100
//
// 0056e100  51                   push ecx
// 0056e101  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e104  8b01                 mov eax, dword ptr [ecx]
// 0056e106  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056e10a  8b4008               mov eax, dword ptr [eax + 8]
// 0056e10d  56                   push esi
// 0056e10e  52                   push edx
// 0056e10f  c744240800000000     mov dword ptr [esp + 8], 0
// 0056e117  ffd0                 call eax
// 0056e119  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e11d  8d4c2410             lea ecx, [esp + 0x10]
// 0056e121  51                   push ecx
// 0056e122  56                   push esi
// 0056e123  88442418             mov byte ptr [esp + 0x18], al
// 0056e127  e804fd0400           call 0x5bde30
// 0056e12c  83c408               add esp, 8
// 0056e12f  8bc6                 mov eax, esi
// 0056e131  5e                   pop esi
// 0056e132  59                   pop ecx
// 0056e133  c20800               ret 8

struct Result {
    char storage[28];
    Result(const Result&);
    ~Result();
};

Result __cdecl convert(const bool& value);

struct Getter {
    virtual void slot0();
    virtual void slot1();
    virtual bool get(void* instance);
};

struct S {
    char padding[24];
    Getter* getter;

    Result f(void* instance);
};

Result S::f(void* instance)
{
    return convert(getter->get(instance));
}
