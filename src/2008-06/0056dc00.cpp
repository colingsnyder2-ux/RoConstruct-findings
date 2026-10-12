// from server: 44% by colin
struct S {
    void* field0;
    void* field4;
    void f();
};

extern "C" void* __stdcall func_0056cf40();
extern "C" void* __stdcall func_0056d260(void*);
extern "C" void __stdcall func_0056c790(void*);
extern "C" void* __stdcall func_00415c90(void*, void*);
extern "C" bool __stdcall func_005bed50(void*, void*);
extern "C" void* __stdcall func_00509b10(void*, void*, void*, void*);
extern "C" void __stdcall func_00409d50(void*, void*);
extern "C" void __stdcall func_006a158c(void*, void*);

extern void* G_802878;
extern void* G_929614;
extern void* G_9463a4;
extern void* G_92bef8;
extern void* G_82f71c;
extern void* G_8d1bc8;

void S::f()
{
    void* p = this->field4;
    if (p != 0) {
        void* q = *(void**)p;
        if (q != 0) {
            void* r = (*(void*(**)(void*))q)(q);
            if (!((bool(__stdcall*)(void*, void*))G_802878)(r, &G_9463a4))
                goto fail;
        } else {
            if (!((bool(__stdcall*)(void*, void*))G_802878)(&G_929614, &G_9463a4))
                goto fail;
        }
        if ((char*)this->field4 + 4 != 0)
            return;
    }
fail:
    if (((bool(__stdcall*)(void*, void*))G_802878)(*(void**)((char*)this->field0 + 8), &G_92bef8)) {
        char buf[16];
        void* r = func_00415c90(&this->field4, buf);
        if (func_005bed50(r, buf)) {
            func_0056d260(&this->field4);
            void* v = func_0056cf40();
            this->field0 = v;
            func_0056c790(&this->field4);
            return;
        }
    }
    void* a = func_0056cf40();
    void* b = *(void**)((char*)a + 0xc);
    void* c;
    if (*(unsigned*)((char*)b + 0x1c) < 0x10)
        c = (char*)b + 8;
    else
        c = *(void**)((char*)b + 8);
    void* d = *(void**)((char*)this->field0 + 0xc);
    void* e = (char*)d + 4;
    void* g;
    if (*(unsigned*)((char*)e + 0x18) < 0x10)
        g = (char*)e + 4;
    else
        g = *(void**)((char*)e + 4);
    char buf2[32];
    func_00509b10(buf2, &G_82f71c, g, c);
    char buf3[32];
    func_00409d50(buf3, buf2);
    func_006a158c(&G_8d1bc8, buf3);
}
