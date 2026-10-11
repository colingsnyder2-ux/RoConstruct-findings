// from server: 22% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void* vptr;
    long refCount;
};

struct Selection
{
    void removeFilteredSelection(void*);
};

struct FilteredSelection
{
    char pad[0x1f4];
    Selection* rootSelection;
    void* filteredSelection;

    void setRootSelection(Selection*);
};

extern "C" void* __cdecl sub_618a40(void*, void*);
extern "C" void __cdecl sub_4025b0(void*, void*);
extern "C" void __cdecl sub_40db00(void*, const char*);

void FilteredSelection::setRootSelection(Selection* sel)
{
    if (rootSelection == sel)
        return;

    void* tmp = 0;
    sub_618a40(&tmp, sel);

    Selection* old = rootSelection;
    rootSelection = *(Selection**)&tmp;
    sub_4025b0(&filteredSelection, (char*)&tmp + 4);

    if (tmp)
    {
        RefCounted* rc = (RefCounted*)tmp;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1)
        {
            void** vt = (void**)rc->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(rc);
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1)
            {
                void** vt2 = (void**)rc->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(rc);
            }
        }
    }

    sub_40db00(this, (const char*)0x97a538);
}
