// from server: 52% by atomic.potato
extern "C" int __cdecl G1_func_008c62c0(void*);
extern "C" int G1_func_007f3b4e(void*);
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct S_func_0085b080 {
    int f(void*);
};

int S_func_0085b080::f(void* p)
{
    int x;
    int y;
    x = G1_func_008c62c0(p);
    y = G1_func_007f3b4e(this);
    SendMessageA((void*)*(int*)((char*)y + 32), 273, (unsigned int)x, 0);
    return 0;
}
