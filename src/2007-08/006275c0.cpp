// from server: 71% by colin
struct SeparateStage {
    bool f(void* a, void* b);
};

extern "C" int __cdecl sub_5B4E20(void*, void*);

bool SeparateStage::f(void* a, void* b)
{
    char* p1 = (char*)a;
    char* p2 = (char*)b;
    char* esi = *(char**)(p1 + 8);
    char* edi = *(char**)(p1 + 0xc);

    int r = sub_5B4E20(esi, edi);
    bool cl = (r != 0);

    char* eax = *(char**)(esi + 0x20);
    bool b1 = (*(int*)(eax + 0x28) != 0) || (*(int*)eax != 0);

    eax = *(char**)(edi + 0x20);
    bool b2 = (*(int*)(eax + 0x28) != 0) || (*(int*)eax != 0);

    bool result;
    if (!b1 && !b2 && !cl)
        result = true;
    else
        result = false;

    *(char*)b = result ? 1 : 0;

    if (result && *(char*)(esi + 0x70) == 0 && *(char*)(esi + 0x72) != 0 &&
        *(char*)(edi + 0x70) == 0 && *(char*)(edi + 0x72) != 0)
        return true;
    return false;
}
