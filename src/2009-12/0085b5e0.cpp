// from server: 52% by atomic.potato
typedef unsigned long DWORD;
typedef int (__thiscall *GetIndexProc)(void *, int);
typedef void (__thiscall *GetItemProc)(void *, int);
typedef void (__thiscall *ReleaseProc)(void *);

extern "C" int __stdcall StatusBar_GetIndex(void *, int);
extern "C" int StatusBar_GetItem(void *, int);
extern "C" void ReleaseObject(void *);

struct CXTPStatusBar
{
    int f();
};

int CXTPStatusBar::f()
{
    int index;
    int item;
    index = StatusBar_GetIndex(this, 0);
    if (index < 0)
        return 0;
    item = StatusBar_GetItem(this, index);
    ReleaseObject((void *)(item + 0x30));
    return index;
}
