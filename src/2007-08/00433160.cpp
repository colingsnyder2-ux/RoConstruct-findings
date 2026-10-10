// from server: 47% by colin
struct RBXName {
    void* data;
};

struct CreatorBase {
    virtual void destroy(char);
};

struct Creator : CreatorBase {
    void* field0;
    void* field4;
    char field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
    void* field28;
    void* field2C;

    Creator(void* a, void* b, void* c, void* d);
};

extern "C" void __stdcall LeaveCriticalSection(void*);
extern "C" int __stdcall PeekMessageA(void*, void*, unsigned int, unsigned int, unsigned int);

extern void* g_77ec40;
extern void* g_77d2f8;
extern void* g_8b5188;

void sub_41d870(void*, void*);

Creator::Creator(void* a, void* b, void* c, void* d)
{
    void* local0;
    char local4;
    void* local8;
    void* localC;
    void* local10;
    void* local14;
    void* local18;
    void* local1C;
    void* local20;
    void* local24;
    void* local28;
    void* local2C;
    void* local30;
    void* local34;
    void* local38;
    void* local3C;
    void* local40;
    void* local44;
    void* local48;

    local0 = (char*)this + 0x2c;
    local4 = 0;
    sub_41d870(&local0, &local4);

    local8 = this->field4;

    while (PeekMessageA(&local10, 0, 0x465, 0x465, 1)) {
        if (local10) {
            void** vt = *(void***)local10;
            void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
            fn(local10, 1);
        }
        local8 = this->field4;
    }

    if (local4) {
        LeaveCriticalSection(local0);
    }

    *(int*)local48 = 0;
}
