// from server: 92% by colin
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct Object
{
    virtual void slot0() = 0;
    virtual void action(int) = 0;
};

struct RestoreFlag
{
    unsigned char* flag;
    unsigned char previous;

    RestoreFlag(unsigned char*);
    ~RestoreFlag();
};

inline RestoreFlag::RestoreFlag(unsigned char* p)
    : flag(p), previous(*p)
{
    *p = 1;
}

inline RestoreFlag::~RestoreFlag()
{
    *flag = previous;
}

struct CRobloxTreeCtrl
{
    char pad[0x20];
    void* hwnd;
    char pad2[0x94 - 0x24];
    Object* obj;
    char pad3[0xb8 - 0x98];
    unsigned char flag;

    void func();
};

void CRobloxTreeCtrl::func()
{
    RestoreFlag restore(&flag);
    if (hwnd)
    {
        SendMessageA(hwnd, 0x1101, 0, 0xffff0000);
        if (obj)
        {
            obj->action(1);
            obj = 0;
        }
    }
}
