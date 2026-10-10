// from server: 89% by tester
struct SpawnerService {
    void* field0;
    void* field4;
    void* field8;
    void construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g);
};

extern "C" bool __cdecl func_004879d0(void*);
extern "C" void* __cdecl func_0062fef6(unsigned int);

void SpawnerService::construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g)
{
    if (func_004879d0(&a))
        return;

    this->field8 = (void*)0x5fa560;
    this->field0 = (void*)0x5a02f0;

    void* p = func_0062fef6(0x18);
    if (p)
    {
        *(void**)p = a;
        *(void**)((char*)p + 4) = b;
        *(void**)((char*)p + 8) = c;
        *(void**)((char*)p + 12) = d;
        *(void**)((char*)p + 16) = e;
        *(void**)((char*)p + 20) = f;
    }
    this->field4 = p;
}
