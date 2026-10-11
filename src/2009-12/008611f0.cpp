// from server: 51% by atomic.potato
struct S_func_008611f0 {
    char pad[0x114];
    int f(int a1);
};

struct S_7f3b30 {
    void* p;
    void* q;
    S_7f3b30(void* a, void* b);
    ~S_7f3b30();
};

extern "C" void __stdcall sub_7f3b24(void* p);
extern "C" int __stdcall sub_7f404c(void* p);

int S_func_008611f0::f(int a1)
{
    S_7f3b30 local(*(void**)((char*)this - 0x114), 0);
    int result = sub_7f404c((char*)this - 0x130);
    if (local.p) {
        *(void**)((char*)local.p + 4) = local.q;
    }
    if (local.q) {
        sub_7f3b24(local.q);
    }
    return result;
}
