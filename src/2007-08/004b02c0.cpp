// from server: 36% by colin
struct Replicator {
    char pad0[4];
    char pad4[8];
    int field0c;
    char pad10[0x7c];
    int field8c;
    void construct();
    int makeDefault();
};

extern "C" void __stdcall sub_4a50e0();
extern "C" int __stdcall sub_4b0240();

void Replicator::construct()
{
    sub_4a50e0();
    *(int*)((char*)this + 0x0) = 0x79d984;
    *(int*)((char*)this + 0x4) = 0x79d978;
    *(int*)((char*)this + 0x10) = 0x79d970;
    *(int*)((char*)this + 0x14) = 0x79d960;
    *(int*)((char*)this + 0x2c) = 0x79d950;
    *(int*)((char*)this + 0x44) = 0x79d940;
    *(int*)((char*)this + 0x5c) = 0x79d930;
    *(int*)((char*)this + 0x74) = 0x79d920;
    *(int*)((char*)this + 0x8c) = 0x79d910;
    field0c = sub_4b0240();
}
