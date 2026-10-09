// from server: 74% by colin
// roc 2007-08 004b1440  unit: RBX::Network::VReplicator::BoundFuncDesc  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b1440

extern "C" int __cdecl sub_630d36(const char*, const char*, int, const char*, int);
extern "C" int __cdecl sub_630b9e(void*, const char*);
extern "C" void* __stdcall sub_77e710(const char*);

struct BoundFuncDesc {
    char pad[0x28];
    int (__fastcall *fn)(void*);
    int field2c;
    int method(int a, int b);
};

int BoundFuncDesc::method(int a, int b)
{
    int r = sub_630d36((const char*)0x88209c, (const char*)0x88f84c, 0, (const char*)a, 0);
    if (r == 0) {
        void* p = sub_77e710((const char*)0x786e04);
        r = sub_630b9e(p, (const char*)0x841e0c);
    }
    int ecx = this->field2c + r;
    return this->fn((void*)ecx);
}
