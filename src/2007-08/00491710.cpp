// from server: 61% by colin
struct PersistentDataStore {
    int field0;
    int field4;
    int field8;
    char pad_c[0xc];
    int field18;
    int field1c;
    PersistentDataStore(int, int, int, int, int, int, int, int);
};

struct Str {
    char buf[0x18];
    ~Str();
};

extern "C" void __stdcall sub_491480(int, int, int);

PersistentDataStore::PersistentDataStore(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    Str local;
    field0 = 0;
    field4 = 0;
    field8 = 0;
    sub_491480((int)(this + 1), a1, (int)&local);
    field18 = 0;
    field1c = 0;
    local.~Str();
}
