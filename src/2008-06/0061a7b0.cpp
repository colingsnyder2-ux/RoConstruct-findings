// from server: 100% by king_originala
// roc 2008-06 0061a7b0  unit: RBX::Lua::LuaArguments  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a7b0
//
// 0061a7b0  51                   push ecx
// 0061a7b1  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0061a7b4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0061a7b8  8b01                 mov eax, dword ptr [ecx]
// 0061a7ba  8b4008               mov eax, dword ptr [eax + 8]
// 0061a7bd  56                   push esi
// 0061a7be  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061a7c2  52                   push edx
// 0061a7c3  56                   push esi
// 0061a7c4  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0061a7cc  ffd0                 call eax
// 0061a7ce  8bc6                 mov eax, esi
// 0061a7d0  5e                   pop esi
// 0061a7d1  59                   pop ecx
// 0061a7d2  c20800               ret 8

struct Result {
    int value;
    Result(const Result&);
    ~Result();
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual Result get(int) = 0;
};

struct S {
    char padding[24];
    Interface* object;
    Result get(int);
};

Result S::get(int index) {
    return object->get(index);
}
