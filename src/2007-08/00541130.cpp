// from server: 58% by colin
// roc 2007-08 00541130  unit: RBX::VInstance::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00541130

extern "C" int __cdecl sub_630D36(const char*, const char*, int, int, int);
extern "C" int __cdecl sub_630B9E(void*, const char*);
extern "C" void* __stdcall sub_77E710(const char*);

struct BoundFuncDesc {
    int construct(int, int);
};

int BoundFuncDesc::construct(int a, int b)
{
    int result = sub_630D36((const char*)0x88209c, (const char*)0x881f4c, 0, a, 0);
    if (result == 0) {
        void* p;
        sub_77E710((const char*)0x786e04);
        sub_630B9E(&p, (const char*)0x841e0c);
    }
    return 0;
}
