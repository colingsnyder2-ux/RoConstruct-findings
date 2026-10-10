// from server: 48% by colin
// roc 2010-06 00604f60  unit: RBX::VWorkspace::?$RefPropDescriptor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00604f60

extern "C" int __cdecl sub_7A8BEA(void* a, void* b, void* c, void* d, void* e);
extern "C" void __cdecl sub_46A180(void* p);

struct Instance {
    Instance* findFirstChildOfType(const char* typeName);
};

struct RefPropDescriptor {
};

Instance* __cdecl findInstance(Instance* root)
{
    Instance* cur = root;
    if (cur == 0)
        return 0;
    for (;;) {
        int r = sub_7A8BEA(cur, 0, (void*)0xb78e40, (void*)0xb7cc50, 0);
        if (r != 0) {
            sub_46A180((void*)r);
            return 0;
        }
        cur = *(Instance**)((char*)cur + 0x4c);
        if (cur == 0)
            return 0;
    }
}
