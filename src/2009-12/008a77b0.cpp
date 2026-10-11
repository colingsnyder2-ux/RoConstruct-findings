// from server: 28% by atomic.potato
extern "C" {
    long __stdcall RegOpenKeyExA(void*, const char*, unsigned long, unsigned long, void**);
    long __stdcall RegCreateKeyExA(void*, const char*, unsigned long, char*, unsigned long, unsigned long, void*, void**, unsigned long*);
    long __stdcall RegCloseKey(void*);
}

struct CXTRegistryManager {
    int f(int);
    char pad0[4];
    void* hKey1;
    void* hKey2;
    void* hKey3;
    void* hKey4;
    int g();
};

int CXTRegistryManager::f(int arg) {
    char buf1[4];
    char buf2[4];
    char buf3[4];
    char buf4[4];
    int result;
    void* hKey;
    void* hSubKey;
    int* p1;
    int* p2;
    int* p3;

    if (!g())
        return 0;

    p1 = 0;
    p2 = 0;
    p3 = 0;

    result = RegOpenKeyExA(hKey1, (const char*)0x99f5b0, 0, 0x20019, &hKey);
    hKey4 = (void*)result;
    if (result != 0) {
        if (p1) RegCloseKey(p1);
        if (p2) RegCloseKey(p2);
        return 0;
    }

    result = RegCreateKeyExA(hKey2, (const char*)0x99f5b0, 0, 0, 0, 0x20019, 0, &hSubKey, 0);
    hKey4 = (void*)result;
    if (result != 0) {
        if (p1) RegCloseKey(p1);
        if (p2) RegCloseKey(p2);
        return 0;
    }

    result = RegCreateKeyExA(hKey3, (const char*)0x99f5b0, 0, 0, 0, 0x20019, 0, &hSubKey, 0);
    hKey4 = (void*)result;
    if (result != 0) {
        if (p1) RegCloseKey(p1);
        if (p2) RegCloseKey(p2);
        return 0;
    }

    if (p1) RegCloseKey(p1);
    if (p2) RegCloseKey(p2);
    return 0;
}
