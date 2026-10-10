// from server: 44% by colin
struct CPen {
    void* field0;
    int GetWidth();
};

extern "C" int __stdcall GetObjectA(void*, int, void*);
extern "C" void* __cdecl sub_682050();
extern "C" void __cdecl sub_6304c0(void*);
extern "C" void __cdecl sub_6304a2(void*, int, int, int, int, int);
extern "C" void* __cdecl sub_63062e(void*, void*);
extern "C" void __cdecl sub_41fb40(void*, void*);
extern "C" void* __cdecl sub_62ff02(void*, int, int);
extern "C" void* __cdecl sub_648ec0(void*);
extern "C" void __cdecl sub_6304ba(void*);

int CPen::GetWidth()
{
    if (this->field0 == 0)
        return 0;

    void* v = sub_682050();

    char buf[24];
    if (!GetObjectA(this->field0, 24, buf))
        return 0;
    if (*(void**)(buf + 8) == 0)
        return 0;
    if (*(void**)(buf + 4) == 0)
        return 0;

    char local[8];
    sub_6304c0(local);

    sub_6304a2(local, *(int*)(buf + 8), *(int*)(buf + 4), 0x19, 0, 1);

    void* a = sub_63062e(this->field0, v);
    sub_41fb40(local, a);

    void* b = sub_62ff02(*(void**)(local + 4), 0, 0);
    void* c = *(void**)((char*)b + 0x94);
    void* d = *(void**)c;
    int result = (int)sub_648ec0(d);

    sub_6304ba(local);
    return result;
}
