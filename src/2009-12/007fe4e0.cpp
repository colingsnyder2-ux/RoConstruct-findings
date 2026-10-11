// from server: 29% by atomic.potato
// roc 2009-12 007fe4e0  unit: CXTPPaintManager  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fe4e0

extern "C" void* __cdecl sub_7f3860(unsigned int size);
extern "C" void* __cdecl sub_888070();
extern "C" void* __cdecl sub_883380();
extern "C" void* __cdecl sub_886d80();
extern "C" void* __cdecl sub_885e80();
extern "C" void* __cdecl sub_87eef0();
extern "C" void* __cdecl sub_8771e0();
extern "C" void* __cdecl sub_87c2c0();

struct CXTPPaintManager {
    char pad[0x144];
    int field_144;
    void* __cdecl CreateControl(int type);
};

void* CXTPPaintManager::CreateControl(int type) {
    void* p;
    int idx;
    if (type == 1) {
        p = sub_7f3860(0x45c);
        idx = 0;
        if (p) {
            sub_888070();
            goto done;
        }
    } else if (type == 2) {
        p = sub_7f3860(0x5b0);
        idx = 1;
        if (p) {
            sub_883380();
            goto done;
        }
    } else if (type == 3) {
        p = sub_7f3860(0x4a8);
        idx = 2;
        if (p) {
            sub_886d80();
            goto done;
        }
    } else if (type == 4) {
        p = sub_7f3860(0x5b0);
        idx = 3;
        if (p) {
            sub_885e80();
            goto done;
        }
    } else if (type == 5) {
        p = sub_7f3860(0x64c);
        idx = 4;
        if (p) {
            sub_87eef0();
            goto done;
        }
    } else if (type == 6) {
        p = sub_7f3860(0x6a4);
        idx = 5;
        if (p) {
            sub_8771e0();
            goto done;
        }
    } else {
        p = sub_7f3860(0x460);
        idx = 6;
        if (p) {
            sub_87c2c0();
            goto done;
        }
    }
    p = 0;
done:
    *(int*)((char*)p + 0x144) = type;
    return p;
}
