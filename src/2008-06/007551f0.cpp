// from server: 46% by colin
struct CXTPDockingPaneBase;

struct InnerMap {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    InnerMap(int);
    ~InnerMap();
};

struct CXTPDockingPaneBase {
    char pad[0x2c];
    void* field2c;
    char pad2[0x90 - 0x30];
    void* field90;
    void* find(void*);
    void insert(int, void*, void*);
    int func(int, void*, void*);
};

extern "C" void* __stdcall sub_6a0944();
extern "C" void* __stdcall sub_7a0790(void*);

int CXTPDockingPaneBase::func(int a, void* b, void* c)
{
    InnerMap map(10);
    void* v = 0;
    void* p = *(void**)c;
    void* q = *(void**)((char*)p + 0xc);
    ((void (__stdcall*)(void*, int, void**))q)(c, 0, &v);
    if (v != 0) {
        void* r = *(void**)((char*)v + 8);
        if (r == 0) {
            r = sub_6a0944();
        }
        void* s = *(void**)((char*)r + 8);
        void* t;
        if (s != 0) {
            t = (char*)s - 0x20;
        } else {
            t = 0;
        }
        void* u = this->find(t);
        if (u != 0 && *(void**)((char*)u + 8) != 0) {
            void* w = this->field90;
            if (w != 0) {
                void* x = w;
                do {
                    void* y = *(void**)((char*)x + 8);
                    x = *(void**)x;
                    void* z;
                    if (y != 0) {
                        z = (char*)y - 0x54;
                    } else {
                        z = 0;
                    }
                    void* aa = sub_7a0790((char*)z + 0x54);
                    if (aa != 0) {
                        void* ab = (char*)aa - 0x20;
                        if (ab != 0) {
                            void* ac = this->find(ab);
                            if (ac != 0 && *(void**)((char*)ac + 8) == *(void**)((char*)u + 8)) {
                                this->insert(2, &v, z);
                                return 1;
                            }
                        }
                    }
                } while (x != 0);
            }
        }
    }
    return 0;
}
