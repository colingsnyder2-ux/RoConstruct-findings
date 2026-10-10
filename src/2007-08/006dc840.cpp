// from server: 30% by colin
struct CMap {
    char pad0[0xe8];
    char field_e8[0x14];
    char field_fc[0x28];
    char field_124[4];
    char field_128[4];
    char field_12c[8];
    char field_134[8];
    char field_13c[4];
    char field_140[0x100];
};

extern "C" {
    void __stdcall sub_738c22();
    void __stdcall sub_6dc650();
    void __stdcall sub_6dc690();
    void __stdcall sub_630238();
    void __stdcall sub_6b3010();
    void __stdcall sub_62ff02();
    void __stdcall sub_630a1e();
    void* __stdcall LoadCursorA(void*, const char*);
    int __stdcall SystemParametersInfoA(unsigned, unsigned, void*, unsigned);
    void* __stdcall CreateFontIndirectA(void*);
}

extern unsigned char g_8b5188;
extern void* g_77ddac;
extern void* g_77ee0c;
extern void* g_77d14c;
extern void* g_77ec20;

CMap* CMap_ctor(CMap* self) {
    char buf[0x44];
    void* seh;
    void* cursor;
    void* font;
    unsigned val;
    int i;

    seh = *(void**)&g_8b5188;
    *(void**)(buf + 0x40) = (void*)((unsigned)seh ^ (unsigned)&buf[0x40]);

    sub_738c22();

    *(void**)self = (void*)0x7d946c;

    sub_6dc650();
    sub_6dc690();

    (*(void(__stdcall*)(void*))g_77ddac)((char*)self + 0x124);
    (*(void(__stdcall*)(void*))g_77ddac)((char*)self + 0x128);

    *(void**)((char*)self + 0x130) = 0;
    *(void**)((char*)self + 0x12c) = (void*)0x794a08;
    *(void**)((char*)self + 0x138) = 0;
    *(void**)((char*)self + 0x134) = (void*)0x794a08;

    buf[0x6c - 0x58] = 6;
    (*(int(__stdcall*)(unsigned, unsigned, void*, unsigned))g_77ee0c)(0x1f, 0x3c, buf + 0x1c, 0);

    *(unsigned*)(buf + 0x2c - 0x18) = 0x190;
    val = (*(unsigned(__stdcall*)(void*))g_77d14c)(buf + 0x18);
    sub_630238();

    *(unsigned*)(buf + 0x2c - 0x18) = 0x2bc;
    val = (*(unsigned(__stdcall*)(void*))g_77d14c)(buf + 0x18);
    sub_630238();

    sub_6b3010();
    (*(void(__stdcall*)(void*, unsigned))0)(0, 0x24f5);

    sub_6b3010();
    (*(void(__stdcall*)(void*, unsigned))0)(0, 0x24f6);

    *(void**)((char*)self + 0x110) = 0;
    *(void**)((char*)self + 0xe4) = 0;
    *(void**)((char*)self + 0x13c) = 0;
    *(void**)((char*)self + 0x120) = 0;
    *(void**)((char*)self + 0x11c) = 0;

    sub_62ff02();

    cursor = LoadCursorA(0, (const char*)0x7f89);
    *(void**)((char*)self + 0x114) = cursor;
    if (cursor == 0) {
        sub_6b3010();
        (*(void(__stdcall*)(void*, unsigned))0)(0, 0x26f5);
    }

    sub_62ff02();
    font = LoadCursorA(0, (const char*)0x7f00);
    *(void**)((char*)self + 0x118) = font;

    return self;
}
