// from server: 65% by colin
// roc 2007-08 005e9a30  unit: RBX::VFlagStand::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e9a30

struct RBXName;
struct Instance;

struct VFlagStand {
    char pad[0x1d8];
    void* creators;
    void* findCreator(RBXName* name);
    void* nextCreator(void* prev);
    int checkInstance(Instance* inst);
};

extern "C" void* __cdecl sub_573d40(void*);
extern "C" int __cdecl sub_630d36(void*, void*, void*, int, void*);

extern char sFlag[];
extern char sInstance[];

int VFlagStand::checkInstance(Instance* inst) {
    void* it = findCreator((RBXName*)0);
    if (it == 0)
        return 0;
    int i = 0;
    char* p = (char*)it + 8;
    do {
        void* obj = sub_573d40(*(void**)p);
        void* v = *(void**)((char*)obj + 0xbc);
        int r = sub_630d36(v, sInstance, sFlag, 0, 0);
        if (r != 0)
            return r;
        i++;
        p += 4;
    } while (i < 2);
    it = nextCreator(it);
    if (it != 0)
        return checkInstance(inst);
    return 0;
}
