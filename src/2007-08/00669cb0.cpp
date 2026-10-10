// from server: 36% by colin
struct CXTPColorManager {
    void sub_668d70();
    void sub_6684f0(unsigned long, unsigned long, float);
    void sub_668ec0(void*);
    int sub_668930(int);
    void* sub_668770(int);
    void* sub_6686d0(void*);
    void* sub_668f70();
    CXTPColorManager* construct();
};

extern float g_797e9c;
extern float g_787054;
extern float g_79f758;

CXTPColorManager* CXTPColorManager::construct()
{
    sub_668d70();

    int selector;
    if (*(int*)((char*)this + 0x164) != 0)
        selector = 0;
    else
        selector = -1;

    float f1 = g_797e9c;

    if (selector != 0) {
        *(int*)((char*)this + 0x240) = 0x962d00;
        sub_6684f0(0xd68759, 0x962d00, f1);
        f1 = g_797e9c;
        sub_6684f0(0xf5be9e, 0xfadac4, f1);
        f1 = g_797e9c;
        sub_6684f0(0xd68759, 0x962d00, f1);
        f1 = g_787054;
        sub_6684f0(0xfeecdd, 0xe2a981, f1);
        f1 = g_797e9c;
        sub_6684f0(0xffefe3, 0xe4ad87, f1);
        f1 = g_797e9c;
        sub_6684f0(0xf6ddcb, 0xdca179, f1);
        f1 = g_797e9c;
        sub_6684f0(0xffefe3, 0xe7b593, f1);
    }
    else if (selector == 1) {
        *(int*)((char*)this + 0x240) = 0x588060;
        sub_6684f0(0x82c0af, 0x447a63, f1);
        f1 = g_797e9c;
        sub_6684f0(0xa7d9d9, 0xe4f1f2, f1);
        f1 = g_797e9c;
        sub_6684f0(0x6f8e78, 0x435b49, f1);
        f1 = g_79f758;
        sub_6684f0(0xdef7f4, 0x91c6b7, f1);
        f1 = g_79f758;
        sub_6684f0(0xedffff, 0x92c7b8, f1);
        f1 = g_79f758;
        sub_6684f0(0xd1e6e6, 0x78b4a4, f1);
        f1 = g_797e9c;
        sub_6684f0(0xd5f0ec, 0x9fcec2, f1);
    }
    else if (selector == 2) {
        *(int*)((char*)this + 0x240) = 0x947c7c;
        sub_6684f0(0xbfa7a8, 0x916f70, f1);
        f1 = g_797e9c;
        sub_6684f0(0xe5d7d7, 0xf7f3f3, f1);
        f1 = g_797e9c;
        sub_6684f0(0xbfa7a8, 0x977677, f1);
        f1 = g_787054;
        sub_6684f0(0xfff9f9, 0xb79b9c, f1);
        f1 = g_787054;
        sub_6684f0(0xfff9f9, 0xb99d9f, f1);
        f1 = g_787054;
        sub_6684f0(0xe2d7d7, 0x9e7e80, f1);
        f1 = g_797e9c;
        sub_6684f0(0xf1e7e9, 0xcdb9ba, f1);
    }
    else {
        sub_6684f0(0x82c0af, 0x447a63, f1);
        f1 = g_797e9c;
        sub_6684f0(0xa7d9d9, 0xe4f1f2, f1);
        f1 = g_797e9c;
        sub_6684f0(0x6f8e78, 0x435b49, f1);
        f1 = g_79f758;
        sub_6684f0(0xdef7f4, 0x91c6b7, f1);
        f1 = g_79f758;
        sub_6684f0(0xedffff, 0x92c7b8, f1);
        f1 = g_79f758;
        sub_6684f0(0xd1e6e6, 0x78b4a4, f1);
        f1 = g_797e9c;
        sub_6684f0(0xd5f0ec, 0x9fcec2, f1);
    }

    if (sub_668930(0) != 0) {
        void* p1 = sub_668f70();
        void* p2 = sub_668770(0xf);
        sub_668ec0(p2);
        void* p3 = sub_668f70();
        void* p4 = sub_668770(0xf);
        sub_668ec0(p4);
    }

    return this;
}
