// from server: 24% by colin
extern "C" void __stdcall invalid_parameter_noinfo();

struct GuardBase {
    int a;
    int b;
    GuardBase();
    ~GuardBase();
    void acquire(void*);
};

struct Guard : GuardBase {
    int c;
    Guard(void* p);
};

struct EnumDescriptor;

struct Item {
    char pad000[4];
    void* field04;
    char pad008[8];
    void* field10;
    void* field14;
    char pad018[0x100];
    void* field118;
    char pad11c[0xdc];
    int field1f8;

    void destroy(unsigned int flags);
};

void Item::destroy(unsigned int flags) {
    char found = 0;
    void* it = field10;
    void* end = field14;

    if (it > end)
        invalid_parameter_noinfo();

    void* base = field04;
    void* cur = it;
    void* last = end;

    if (field10 > last)
        invalid_parameter_noinfo();

    void* b2 = field04;
    if (base != 0 && base != b2)
        invalid_parameter_noinfo();

    if (cur == last) {
        EnumDescriptor* owner = (EnumDescriptor*)((char*)this - 0x118);
        *(int*)((char*)owner + 0xe0) = (found == 0) ? 1 : 0;
        return;
    }

    while (cur != last) {
        void* node = cur;
        if (base != 0)
            node = *(void**)base;

        void* item = *(void**)node;

        Guard g(item);

        void* inner = *(void**)((char*)node + 0x10);
        void* innerEnd = *(void**)((char*)node + 0x20);
        void* innerCur = *(void**)((char*)node + 0x1c);

        if (innerCur > innerEnd)
            invalid_parameter_noinfo();

        void* innerBase = *(void**)((char*)node + 0x10);
        if (inner != 0 && inner != innerBase)
            invalid_parameter_noinfo();

        while (innerCur != innerEnd) {
            void* e = innerCur;
            if (inner != 0)
                e = *(void**)inner;

            void* val = *(void**)e;

            if (found) {
                EnumDescriptor* owner = (EnumDescriptor*)((char*)this - 0x118);
                void* fn = *(void**)((char*)owner + 0xf8);
                bool ok = ((bool (__thiscall*)(EnumDescriptor*, void*, void*))fn)(owner, &val, 0);
                if (!ok) {
                    invalid_parameter_noinfo();
                }
            } else {
                EnumDescriptor* owner = (EnumDescriptor*)((char*)this - 0x118);
                void* fn = *(void**)((char*)owner + 0xf4);
                ((void (__thiscall*)(EnumDescriptor*, void*))fn)(owner, &val);
            }

            found = 1;
            innerCur = (char*)innerCur + 8;
        }

        cur = (char*)cur + 4;
    }

    EnumDescriptor* owner = (EnumDescriptor*)((char*)this - 0x118);
    *(int*)((char*)owner + 0xe0) = (found == 0) ? 1 : 0;
}
