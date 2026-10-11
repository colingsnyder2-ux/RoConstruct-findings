// from server: 47% by tester
struct PartInstance;

struct GetSetImpl
{
    static PartInstance* get(PartInstance* p);
};

struct VModelInstance
{
    char pad0[0x108];
    void* vec108;
    char pad10c[0x1e0 - 0x10c];
    int field1e0;

    int count();
    PartInstance* findBest();
};

int VModelInstance::count()
{
    void* v = *(void**)((char*)this + 0x108);
    if (v != 0)
        return 0;
    return (int)((*(char**)((char*)v + 0x10) - *(char**)((char*)v + 0xc)) >> 3);
}

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __cdecl sub_6a17c6(void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_583a40(void*, void*);

PartInstance* VModelInstance::findBest()
{
    if (this->field1e0 != 0)
        return 0;

    float best = *(float*)0x81c3b8;
    PartInstance* result = 0;
    int i = 0;

    int n = this->count();
    if (n > 0)
    {
        do
        {
            void* v = *(void**)((char*)this + 0x108);
            unsigned int sz = (unsigned int)((*(char**)((char*)v + 0x10) - *(char**)((char*)v + 0xc)) >> 3);
            if ((unsigned int)i >= sz)
                _invalid_parameter_noinfo();

            void* elem = *(void**)(*(char**)((char*)v + 0xc) + i * 8);

            void* obj = sub_6a17c6(elem, (void*)0x92907c, (void*)0x947f1c, 0, 0);
            if (obj != 0)
            {
                void** vt = *(void***)obj;
                void* (*fn)(void*) = (void* (*)(void*))vt[0x5c / 4];
                void* r = fn(obj);
                if (r != 0)
                {
                    PartInstance* p = GetSetImpl::get((PartInstance*)r);
                    void** vt2 = *(void***)p;
                    void (*fn2)(void*, void*) = (void (*)(void*, void*))vt2[0x54 / 4];
                    char tmp[16];
                    fn2(p, tmp);
                    float w = *(float*)(tmp + 0xc) - *(float*)(tmp + 0);
                    float h = *(float*)(tmp + 0x14) - *(float*)(tmp + 8);
                    float area = w * h;
                    if (!(area <= best))
                    {
                        best = area;
                        result = p;
                    }
                }
            }

            i++;
        } while ((unsigned int)i < (unsigned int)this->count());
    }

    sub_583a40(this, result);
    return result;
}
