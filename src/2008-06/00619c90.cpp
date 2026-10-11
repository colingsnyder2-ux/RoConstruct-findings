// from server: 60% by tester
struct DecalTool {
    char pad[0x48];
    void* field48;
    void doAction(void*);
};

extern "C" void __stdcall sub_55a8f0(void*);
extern "C" void __stdcall sub_5ef770(void*, int);
extern "C" int __stdcall sub_615f10(void*, void*, void*);

void DecalTool::doAction(void* arg) {
    void* local8;
    void* local14;
    int result = sub_615f10(this, &local14, &local8);
    if (local8 != 0 && field48 != 0 && result != 0 && *(char*)((char*)local8 + 0x1f0) == 0) {
        sub_55a8f0(local8);
        sub_5ef770(field48, *(int*)((char*)result + 4));
    } else {
        if (field48 != 0) {
            sub_55a8f0(field48);
        }
    }
}
