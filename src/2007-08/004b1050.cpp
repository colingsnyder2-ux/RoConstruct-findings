// from server: 44% by colin
// roc 2007-08 004b1050  unit: RBX::Network::VReplicator::?$SignalDesc  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b1050

struct std_string {
    std_string(const std_string&);
    ~std_string();
};

extern "C" void* __cdecl sub_570270(int);
extern "C" void __cdecl sub_4b0490(void*, const void*);
extern "C" void __stdcall sub_77e69c(void*, const void*);
extern "C" void __stdcall sub_77e6ac(void*);

struct VReplicator {
    void* addSignalDesc(int, int, int, int, int, int, int, int, int, const std_string*);
};

void* VReplicator::addSignalDesc(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, const std_string* src)
{
    char buf[0x1c];
    void* p = sub_570270(a1);
    if (p) {
        sub_77e69c(buf, src);
        sub_4b0490((char*)p + 0x10, buf);
    }
    sub_77e6ac(buf);
    return p;
}
