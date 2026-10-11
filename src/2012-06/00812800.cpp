// from server: 73% by atomic.potato
extern void* g_00bc6954;
extern void* g_00bc671c;
extern void* g_00bc6710;
extern void* g_00bc6704;
extern void* g_00bc66f8;
extern void* g_00bc66cc;

struct FactoryProduct_00812800 {
    void* f_0;
    void* f_4;
    char pad_8[16];
    void* f_18;
    void* f_1c;
    char pad_20[96];
    void* f_80;
    char pad_84[40];
    void* f_ac;
    void init();

};

void FactoryProduct_00812800::init() {
    f_ac = g_00bc6954;
    f_0 = g_00bc671c;
    f_4 = g_00bc6710;
    f_18 = g_00bc6704;
    f_1c = g_00bc66f8;
    f_80 = g_00bc66cc;
}
