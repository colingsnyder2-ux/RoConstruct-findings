// from server: 51% by colin
struct S {
};

extern "C" int __stdcall g_strcmp(const void*, const void*);

void __cdecl f(void* a, void* b, void* c, void* d)
{
    char* p = (char*)c;
    char* q = (char*)d;
    while (p != q) {
        if (g_strcmp(p + 8, q) == 0)
            break;
        p = *(char**)p;
    }
    *(void**)a = b;
    *((void**)a + 1) = p;
}
