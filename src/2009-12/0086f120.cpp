// from server: 62% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    while (*(int*)((char*)this + 0x10) > 0)
    {
        void* p = *(void**)((char*)this + 0x0c);
        void** v = *(void***)p;
        void (**fn)(void*) = (void (**)(void*))(*(void***)v + 0x188);
        (*fn)(v);
    }
    return 0;
}
