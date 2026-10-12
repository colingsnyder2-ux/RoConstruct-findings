// from server: 29% by colin
struct Vec8 {
    char* begin;
    char* end;
    char* cap;
};

void* __stdcall make_value_0044f4a0();
void* __cdecl func_0044f4a0();
void __stdcall sub_557330(void*, void*);
void __stdcall sub_4124c0(void*, int, void*);
void __stdcall sub_4025b0(void*, void*);
void __stdcall sub_600660(void*);
void __stdcall sub_572a90(void*, void*, void*);
void __stdcall sub_44f2f0();
void __stdcall sub_44f4a0();
void __cdecl invalid_parameter_noinfo();

struct RBX_VVisit_FactoryProduct_Creator {
    void* method(int);
};

void* RBX_VVisit_FactoryProduct_Creator::method(int a)
{
    void* result;
    void* tmp;
    int idx;
    int count;
    void* p;

    sub_557330((void*)0x96dd78, (void*)0x450880);
    sub_44f4a0();
    idx = (int)func_0044f4a0();

    count = (*(int*)((char*)this + 0x1a0) - *(int*)((char*)this + 0x19c)) >> 3;

    if ((unsigned)(idx + 1) > (unsigned)count) {
        void* local[2];
        local[0] = 0;
        local[1] = 0;
        sub_4124c0((char*)this + 0x190, idx + 1, local);
    } else {
        int n = (*(int*)((char*)this + 0x1a0) - *(int*)((char*)this + 0x19c)) >> 3;
        if (idx >= n) {
            invalid_parameter_noinfo();
        }
        result = *(void**)(*(int*)((char*)this + 0x19c) + idx * 8);
        if (result != 0) {
            return result;
        }
    }

    sub_557330((void*)0x96dd68, (void*)0x450840);
    sub_44f2f0();
    tmp = func_0044f4a0();
    sub_572a90(this, &tmp, (void*)tmp);

    if (tmp == 0) {
        sub_600660(&tmp);
        return 0;
    }

    {
        int n = (*(int*)((char*)this + 0x1a0) - *(int*)((char*)this + 0x19c)) >> 3;
        if (idx >= n) {
            invalid_parameter_noinfo();
        }
        p = (void*)(*(int*)((char*)this + 0x19c) + idx * 8);
        *(void**)p = tmp;
        sub_4025b0((char*)p + 4, &tmp);
        sub_600660(&tmp);
        return tmp;
    }
}
