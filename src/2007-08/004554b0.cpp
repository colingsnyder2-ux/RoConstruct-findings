// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    long refCount;
    long weakCount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct SharedPtr {
    RefCounted* ptr;
};

struct BoundButton {
    int button;
    SharedPtr guiWidget;
};

struct BoundButtonSet {
    BoundButton* begin;
    BoundButton* end;
    BoundButton* capacity;
};

struct NullController {
    char pad[0x134];
    BoundButtonSet boundButtons;
    int method();
};

extern "C" void __stdcall sub_725520(void*, void*, int);
extern "C" void __stdcall sub_402a60(void*, void*);
extern "C" void __stdcall sub_541630(void*, void*);
extern "C" int __cdecl sub_454990();
extern "C" void __cdecl sub_455420(void*);
extern "C" int __cdecl sub_453620();

int NullController::method()
{
    int result = sub_454990();
    if (result != 0)
        return result;

    SharedPtr sp;
    sub_455420(&sp);

    RefCounted* rc = sp.ptr;

    sub_725520((void*)0x8bbf14, (void*)0x453990, 0);

    int idx = sub_453620();

    BoundButton* bb = boundButtons.begin;
    if (bb != 0)
    {
        int count = (int)((char*)boundButtons.end - (char*)boundButtons.begin) >> 3;
        if ((unsigned int)idx >= (unsigned int)count)
            _invalid_parameter_noinfo();
    }
    else
    {
        _invalid_parameter_noinfo();
    }

    BoundButton* slot = boundButtons.begin + idx;
    slot->button = (int)sp.ptr;
    sub_402a60(&slot->guiWidget, &sp);

    sub_541630(rc, this);

    if (rc != 0)
    {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1)
        {
            rc->destroy();
        }
        if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1)
        {
            rc->destroyWeak();
        }
    }

    return (int)rc;
}
