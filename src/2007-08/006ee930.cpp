// from server: 69% by colin
struct PaneBase;

struct PaneList {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    void* field10;
    void* field14;
    int field18;

    void method_6e4770(void*);
    void method_6306ac(void*);
    void* method_6306a6();
};

extern "C" void __stdcall sub_68b860(void*, void*, int);

void PaneList::method_6e4770(void* arg) {
    PaneBase* p = (PaneBase*)arg;
    int flags = *(int*)((char*)p + 0x18);
    if ((~flags) & 1) {
        method_6306ac((void*)fieldC);
        void* node = field4;
        while (node != 0) {
            sub_68b860(p, (char*)node + 8, 1);
            node = *(void**)node;
        }
    } else {
        void* v = method_6306a6();
        int count = (int)v;
        if (count != 0) {
            do {
                void* tmp;
                sub_68b860(p, &tmp, 1);
                method_6e4770(tmp);
                count--;
            } while (count != 0);
        }
    }
}
