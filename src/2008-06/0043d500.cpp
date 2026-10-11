// from server: 88% by colin
extern "C" void __cdecl free(void *p);

struct CXTPPropertyGridItemBool
{
    void Destructor();
    void* Cleanup();
};

void* CXTPPropertyGridItemBool::Cleanup()
{
    if (*(void **)((char *)this + 0x130))
    {
        free(*(void **)((char *)this + 0x130));
    }
    void *p = *(void **)((char *)this + 0x124);
    *(void **)((char *)this + 0x130) = 0;
    *(void **)((char *)this + 0x134) = 0;
    *(void **)((char *)this + 0x138) = 0;
    free(p);
    Destructor();

    return this;
}
