// from server: 45% by colin
struct CXTPDockingPaneMiniWnd {
    void func(int);
};

extern "C" void __stdcall sub_6d8320();
extern "C" void __stdcall sub_6d8130(int);
extern "C" void __stdcall sub_6d8160();
extern "C" void __stdcall sub_6353a0(void*);
extern "C" void __stdcall sub_66fc80(void*);

void CXTPDockingPaneMiniWnd::func(int param)
{
    sub_6d8320();
    sub_6d8130(10);

    int* p = (int*)param;
    int* node = (int*)p[0x48 / 4];
    int local = 0;

    while (node) {
        int* inner = (int*)node[2];
        if (inner[4] == 0) {
            void (__stdcall *fn)(int, void*, void*) = (void (__stdcall *)(int, void*, void*))((*(int**)inner)[0x44 / 4]);
            fn((int)this, &local, 0);
        }
        node = (int*)*node;
    }

    sub_6353a0((void*)p[0x24 / 4]);
    *(int*)((char*)this + 0x24) = *(int*)&local;

    int v = p[0x20 / 4];
    if (v) v += 0x20;
    else v = 0;
    sub_6353a0((void*)v);
    int r = *(int*)&local;
    if (r) r -= 0x20;
    else r = 0;
    *(int*)((char*)this + 0x20) = r;

    int* src = (int*)((char*)p + 0x60);
    int* dst = (int*)((char*)this + 0x60);
    for (int i = 0; i < 4; i++) {
        int val = src[i];
        if (val) {
            sub_6353a0((void*)(val + 0x54));
            int res = *(int*)&local;
            if (res) res -= 0x54;
            else res = 0;
            dst[i] = res;
        }
    }

    int* list = (int*)p[0x2c / 4];
    if (list) {
        int* cur = list;
        do {
            int* next = (int*)*cur;
            int a = cur[2];
            int b = 0, c = 0, d = 0;
            if (a) a += 0x20;
            else a = 0;
            sub_6353a0((void*)a);
            int e = *(int*)&local;
            if (e) e -= 0x20;
            else e = 0;
            int f = cur[4];
            if (f) {
                sub_6353a0((void*)f);
                c = *(int*)&local;
            }
            int g = cur[5];
            if (g) {
                sub_6353a0((void*)g);
                d = *(int*)&local;
            }
            int h = cur[3];
            if (h) {
                sub_6353a0((void*)h);
                b = *(int*)&local;
            }
            sub_66fc80((void*)&e);
            cur = next;
        } while (cur);
    }

    sub_6d8160();
}
