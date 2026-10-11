// from server: 62% by atomic.potato
struct T4_006685a0 {
    void* f_006666b0();
    void* f_006679f0();
    void f_004e7a00();
    void f_005d1e50(void*);
    void f_006685a0(void*);
};

void* get_006666b0();
void* get_006679f0(void*);
void call_004e7a00(void*);
void call_005d1e50(void*, void*);

void T4_006685a0::f_006685a0(void* arg)
{
    void* p = get_006666b0();
    if (p) {
        void* q = get_006679f0(p);
        if (q)
            call_004e7a00(q);
        call_005d1e50(arg, p);
    }
}
