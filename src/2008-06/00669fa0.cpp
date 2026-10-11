// from server: 29% by atomic.potato
extern "C" {
    void* __stdcall func_8025c8();
    void* __stdcall func_8025c4();
    void __stdcall func_8025a4();
    void __stdcall func_802564();
    void __stdcall func_802890();
    void __stdcall func_802468();
}

void __stdcall sub_64fd00(void*, void*);
void* __stdcall sub_4a2fa0();

struct TreeStage {
    char pad0[0x18];
    int field18;
    int field0;
    bool func(int, int, int, int, int, int, int);
};

bool TreeStage::func(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char buf1[8];
    char buf2[8];
    int v;
    bool result;

    func_8025c8();
    v = 0;
    func_8025c4();
    func_8025a4();
    sub_64fd00(buf2, buf1);
    func_802564();
    int saved = field18;
    int saved2 = field0;
    void* p = sub_4a2fa0();
    result = false;
    func_802890();
    result = (*(int*)((char*)p + 4) != saved);
    func_802468();
    return result;
}
