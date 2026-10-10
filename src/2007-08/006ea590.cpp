// from server: 73% by colin
struct CXTPDockingPaneOffice2003Theme
{
    char pad[0x10];
    void* field_10;
    int field_14;
    int field_18;
    int field_1c;
    int func_006ea560();
    void func_006e5460();
    int func_006ea590(int, int);
};

extern "C" int __stdcall PtInRect(const void*, int, int);
extern "C" int __stdcall TrackMouseEvent(void*);

int CXTPDockingPaneOffice2003Theme::func_006ea590(int a, int b)
{
    int (__stdcall *fn)(void*, int, int) = (int (__stdcall *)(void*, int, int))0x77ed94;
    int result;

    result = fn(this, a, b);
    if (result == 0)
    {
        if (this->field_1c != 0)
        {
            this->field_1c = 0;
            func_006e5460();
        }
    }

    if (this->field_1c == 0)
    {
        result = fn(this, a, b);
        if (result != 0)
        {
            if (func_006ea560() != 0)
            {
                void* p = this->field_10;
                int vtable = *(int*)p;
                int (*getRect)(void*) = *(int (**)(void*))(vtable + 0x20);
                int rect[4];
                rect[0] = 0x10;
                rect[1] = 2;
                rect[2] = getRect(p);
                rect[3] = 0;
                TrackMouseEvent(rect);
                this->field_1c = 1;
                func_006e5460();
                return 1;
            }
        }
    }

    return 0;
}
