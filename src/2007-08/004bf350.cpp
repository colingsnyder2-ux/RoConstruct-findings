// from server: 45% by tester
struct RakPeer {
    char pad0[4];
    char field_0x4;
    char pad1[3];
    unsigned short field_0x8;
    char pad2[0x222];
    void* field_0x22c;
    void* method_0x4bcb80(void*, void*, void*, void*);

    bool method_0x4bf350(void* a, void* b);
};

struct BoundFuncDesc {
    int field_0;
    unsigned short field_4;
    bool equals(BoundFuncDesc* other);
};

struct SomeClass {
    char pad0[0x18];
    void* method_0x4c76f0();
};

extern "C" void* __stdcall sub_4b8610(void* dst, void* src);
extern "C" void* __stdcall sub_4c76f0(void* p);

void* g_8bed90;

bool RakPeer::method_0x4bf350(void* a, void* b) {
    BoundFuncDesc local;
    local.field_0 = 0;
    local.field_4 = 0;
    if (local.equals((BoundFuncDesc*)0x892f5c)) {
        unsigned short i = 0;
        bool found = false;
        while (i < field_0x8) {
            char* entry = (char*)field_0x22c + i * 0x840;
            if (entry[0] != 0) {
                void* r = ((SomeClass*)(entry + 0x18))->method_0x4c76f0();
                if (!found) {
                    int* dst = (int*)&g_8bed90;
                    int* src = (int*)r;
                    for (int k = 0; k < 0x32; k++) {
                        dst[k] = src[k];
                    }
                    found = true;
                } else {
                    sub_4b8610(&g_8bed90, r);
                }
            }
            i++;
        }
        return &g_8bed90;
    } else {
        void* r = method_0x4bcb80(a, b, 0, 0);
        if (r != 0 && field_0x4 == 0) {
            return ((SomeClass*)((char*)r + 0x18))->method_0x4c76f0();
        }
        return 0;
    }
}
