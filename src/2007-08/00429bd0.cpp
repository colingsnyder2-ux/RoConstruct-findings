// from server: 50% by colin
struct ThreadLogManager {
    void* vtable;
    void* field4;
    void* field8;
    ThreadLogManager(const char* name);
};

extern "C" int __stdcall sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_4497A0(void*, void*);

ThreadLogManager::ThreadLogManager(const char* name)
{
    char local[8];
    local[0] = 0;
    if (!sub_4879D0(local)) {
        this->field8 = (void*)0x44A1C0;
        this->vtable = (void*)0x429770;
        void* p = sub_62FEF6(0xC);
        sub_4497A0(p, local);
        this->field4 = p;
    }
    if (local[0]) {
        void (*dtor)(void*, int) = *(void (**)(void*, int))&local[0];
        dtor(*(void**)&local[4], 1);
    }
}
