// from server: 100% by king_originala
// roc 2008-06 0061efc0  unit: RBX::Lua::LuaArguments  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061efc0
//
// 0061efc0  64a100000000         mov eax, dword ptr fs:[0]
// 0061efc6  6aff                 push -1
// 0061efc8  68b9fe7c00           push 0x7cfeb9
// 0061efcd  50                   push eax
// 0061efce  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061efd2  64892500000000       mov dword ptr fs:[0], esp
// 0061efd9  8b08                 mov ecx, dword ptr [eax]
// 0061efdb  8b11                 mov edx, dword ptr [ecx]
// 0061efdd  8b4204               mov eax, dword ptr [edx + 4]
// 0061efe0  83ec44               sub esp, 0x44
// 0061efe3  56                   push esi
// 0061efe4  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0061efe8  56                   push esi
// 0061efe9  ffd0                 call eax
// 0061efeb  85c0                 test eax, eax
// 0061efed  7423                 je 0x61f012
// 0061efef  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0061eff3  50                   push eax
// 0061eff4  51                   push ecx
// 0061eff5  e8d6abf8ff           call 0x5a9bd0
// 0061effa  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0061effe  83c408               add esp, 8
// 0061f001  b801000000           mov eax, 1
// 0061f006  5e                   pop esi
// 0061f007  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f00e  83c450               add esp, 0x50
// 0061f011  c3                   ret 
// 0061f012  56                   push esi
// 0061f013  8d542408             lea edx, [esp + 8]
// 0061f017  68f0458400           push 0x8445f0
// 0061f01c  52                   push edx
// 0061f01d  e8eeaaeeff           call 0x509b10
// 0061f022  83c40c               add esp, 0xc
// 0061f025  50                   push eax
// 0061f026  8d4c2424             lea ecx, [esp + 0x24]
// 0061f02a  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0061f032  e819addeff           call 0x409d50
// 0061f037  68c81b8d00           push 0x8d1bc8
// 0061f03c  8d442424             lea eax, [esp + 0x24]
// 0061f040  50                   push eax
// 0061f041  e846250800           call 0x6a158c

struct Text {
    char storage[28];
    ~Text();
};

struct Error {
    char storage[40];
    Error(const Text&);
    Error(const Error&);
    ~Error();
};

struct EnumType;

struct EnumVTable {
    void* first;
    void* (__thiscall *find)(EnumType*, const char*);
};

struct EnumType {
    EnumVTable* table;
};

extern Text __cdecl format(const char*, ...);
extern void __cdecl assign(void*, void*);

int __cdecl convert(EnumType** type, const char* name, void* result)
{
    void* item = (*type)->table->find(*type, name);
    if (item) {
        assign(result, item);
        return 1;
    }
    throw Error(format("%s is not a valid EnumItem", name));
}
