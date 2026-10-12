// from server: 85% by colin
struct EventHandler {
    void clear();
    int f(int a1);
};

extern "C" void __cdecl sub_6A067A(void*);

int EventHandler::f(int a1)
{
    int* p = (int*)a1;
    p[10] -= 1;
    if (p[10] == 0) {
        int* q = (int*)p[2];
        if (q != 0) {
            int (*fn)(void*, void*, int) = (int (*)(void*, void*, int))q[0];
            if (fn != 0) {
                fn((void*)(p + 4), (void*)(p + 4), 1);
            }
            p[2] = 0;
        }
        sub_6A067A(p);
        return 0;
    }
    return p[10];
}
