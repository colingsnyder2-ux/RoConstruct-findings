// from server: 67% by colin
struct CXTPRibbonBar {
    void sub_6ACD50(int);
};

struct CXTPRibbonBarData {
    int field0;
    int field4;
    int field8;
    int fieldC;
};

extern "C" void __stdcall Sleep(unsigned long);
extern "C" int __stdcall PlaySoundA(const char*, void*, unsigned long);

extern CXTPRibbonBarData* sub_6ACD20();

extern void* g_77ef1c;
extern void* g_77d220;

void CXTPRibbonBar::sub_6ACD50(int arg) {
    CXTPRibbonBarData* p = sub_6ACD20();
    CXTPRibbonBarData* q = sub_6ACD20();
    void* fn = g_77ef1c;
    if (q->fieldC == 0) {
        void* fn2 = g_77d220;
        while (1) {
            int v = p->field0;
            if (v == 1) {
                ((void (__stdcall*)(int, int, const char*))fn)(0x12002, 0, (const char*)0x7d5560);
                p->field0 = 0;
            } else if (v == 2) {
                ((void (__stdcall*)(int, int, const char*))fn)(0x12002, v - 1, (const char*)0x7d556c);
                p->field0 = 0;
            }
            ((void (__stdcall*)(int))fn2)(5);
            q = sub_6ACD20();
            if (q->fieldC != 0) {
                break;
            }
        }
    }
    ((void (__stdcall*)(int, int, int))fn)(0x40, 0, 0);
}
