// from server: 62% by atomic.potato
struct CVideoStreamFilter
{
};

void __cdecl f(void* p)
{
    struct V
    {
        void (*g)();
    };

    V* q = *(V**)((char*)p - 8);
    q->g();
}
