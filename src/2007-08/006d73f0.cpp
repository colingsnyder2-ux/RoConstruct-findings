// from server: 57% by colin
// roc 2007-08 006d73f0  unit: CXTRegistryManager  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d73f0

extern "C" {
int __stdcall RegCreateKeyExA(void*, const char*, int, char*, int, int, void*, void*, void*, void*);
int __stdcall RegCloseKey(void*);
}

struct CXTRegistryManager {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int sub_6d73f0(const char*, const char*, int);
};

int CXTRegistryManager::sub_6d73f0(const char* name, const char* sub, int flags) {
    int result = 0;
    int hkey = 0;
    int disp = 0;
    int local = 0;
    int* pthis = (int*)this;
    int (__stdcall *fn)(void*, const char*) = (int (__stdcall *)(void*, const char*))pthis[0];
    int (__stdcall *fn2)(void*, const char*) = (int (__stdcall *)(void*, const char*))((int*)pthis[0])[1];
    int h = fn2(this, name);
    if (h != 0) {
        int r = RegCreateKeyExA((void*)h, sub, 0, 0, 0, 0, 0, (void*)&hkey, (void*)&disp, (void*)&local);
        this->field10 = r;
        if (r != 0) {
            RegCloseKey((void*)h);
            return hkey;
        }
        RegCloseKey((void*)h);
    }
    return 0;
}
