// from server: 57% by tester
struct IDataState;

struct RunStateVerb {
    char pad[8];
    void* ptrC;
    void doIt(IDataState* dataState);
};

struct AllCanSelectCommand : RunStateVerb {
    void doIt(IDataState* dataState);
};

extern "C" void __cdecl sub_57D250();
extern "C" void __cdecl sub_59DE20(void*, int);
extern "C" void __cdecl sub_58C5C0(void*, void*);

void AllCanSelectCommand::doIt(IDataState* dataState)
{
    sub_57D250();
    void* p = *(void**)((char*)this->ptrC + 0x204);
    sub_59DE20(p, 0);

    char* s = (char*)this->pad + 4;
    char* str;
    if (*(int*)(s + 0x18) < 0x10)
        str = s + 4;
    else
        str = *(char**)(s + 4);

    sub_58C5C0(str, p);

    void** vtbl = *(void***)dataState;
    *(int*)((char*)&dataState + 4) = 1;
    void (*fn)() = (void (*)())*(void**)vtbl;
    fn();
}
