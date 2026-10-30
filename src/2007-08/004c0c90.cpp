// from server: 44% by tester
struct RakPeer {
    void __cdecl f(void*, void*);
};

extern "C" void __cdecl sub_4BE500(void*, void*);
extern "C" void __cdecl sub_4BBE60(void*, void*, void*, void*);

void RakPeer::f(void* a, void* b)
{
    unsigned int v[8];
    unsigned int w[4];
    unsigned int x[4];
    unsigned int y[4];
    int i;

    sub_4BE500(a, b);

    v[0] = *(unsigned int*)((char*)a + 0);
    v[1] = *(unsigned int*)((char*)a + 4);
    v[2] = *(unsigned int*)((char*)a + 8);
    v[3] = *(unsigned int*)((char*)a + 12);

    for (i = 0; i < 8; i++) {
        w[i] = 0;
    }

    i = 0;
    while (i < 8) {
        unsigned int c = w[i];
        w[i] = c - 1;
        if (c != 0) break;
        i++;
    }

    x[0] = *(unsigned int*)((char*)b + 0);
    x[1] = *(unsigned int*)((char*)b + 4);
    x[2] = *(unsigned int*)((char*)b + 8);
    x[3] = *(unsigned int*)((char*)b + 12);

    y[0] = 0;
    y[1] = 0;
    y[2] = 0;
    y[3] = 0;

    sub_4BBE60(w, x, x, w);

    *(unsigned int*)((char*)a + 0) = x[0];
    *(unsigned int*)((char*)a + 4) = x[1];
    *(unsigned int*)((char*)a + 8) = x[2];
    *(unsigned int*)((char*)a + 12) = x[3];
}
