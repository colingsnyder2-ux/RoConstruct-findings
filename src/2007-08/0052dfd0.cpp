// from server: 60% by colin
struct Notifier {
    void destroy();
};

extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __cdecl sub_5B7430(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_725720(void*);
extern "C" void __cdecl sub_726440(void*);
extern "C" void __cdecl sub_726890(void*);
extern "C" void __cdecl sub_5402B0(void*);

void Notifier::destroy()
{
    char* self = (char*)this;

    *(int*)(self + 0x00) = 0x7a4a2c;
    *(int*)(self + 0x04) = 0x7a4a24;
    *(int*)(self + 0x10) = 0x7a4a1c;
    *(int*)(self + 0x14) = 0x7a4a0c;
    *(int*)(self + 0x2c) = 0x7a49fc;
    *(int*)(self + 0x44) = 0x7a49ec;
    *(int*)(self + 0x5c) = 0x7a49dc;
    *(int*)(self + 0x74) = 0x7a49cc;
    *(int*)(self + 0x8c) = 0x7a49bc;
    *(int*)(self + 0xe8) = 0x7a49ac;
    *(int*)(self + 0x100) = 0x7a499c;
    *(int*)(self + 0x118) = 0x7a498c;
    *(int*)(self + 0x130) = 0x7a497c;

    {
        char* p = self + 0x19c;
        int* v = *(int**)(self + 0x1a0);
        int n = *v;
        int tmp = 9;
        sub_5B7430(p, &tmp, (void*)n, (void*)v, p);
        sub_62FC62(*(void**)(p + 4));
        *(int*)(p + 4) = 0;
        *(int*)(p + 8) = 0;
    }

    sub_725720(self + 0x194);

    {
        void* p = *(void**)(self + 0x190);
        if (p != 0) {
            sub_726440(p);
            sub_62FC62(p);
        }
    }

    sub_726890(self + 0x174);
    sub_726890(self + 0x15c);
    sub_725720(self + 0x150);

    *(int*)(self + 0x130) = 0x7a496c;
    {
        void* p = *(void**)(self + 0x138);
        if (p != 0) {
            sub_62FC62(p);
        }
    }
    *(int*)(self + 0x138) = 0;
    *(int*)(self + 0x13c) = 0;
    *(int*)(self + 0x140) = 0;

    *(int*)(self + 0x118) = 0x7a495c;
    {
        void* p = *(void**)(self + 0x120);
        if (p != 0) {
            sub_62FC62(p);
        }
    }
    *(int*)(self + 0x120) = 0;
    *(int*)(self + 0x124) = 0;
    *(int*)(self + 0x128) = 0;

    *(int*)(self + 0x100) = 0x7a494c;
    {
        void* p = *(void**)(self + 0x108);
        if (p != 0) {
            sub_62FC62(p);
        }
    }
    *(int*)(self + 0x108) = 0;
    *(int*)(self + 0x10c) = 0;
    *(int*)(self + 0x110) = 0;

    *(int*)(self + 0xe8) = 0x7a493c;
    {
        void* p = *(void**)(self + 0xf0);
        if (p != 0) {
            sub_62FC62(p);
        }
    }
    *(int*)(self + 0xf0) = 0;
    *(int*)(self + 0xf4) = 0;
    *(int*)(self + 0xf8) = 0;

    *(int*)(self + 0x00) = 0x7a48ec;
    *(int*)(self + 0x04) = 0x7a48e0;
    *(int*)(self + 0x10) = 0x7a48d8;
    *(int*)(self + 0x14) = 0x7a48c8;
    *(int*)(self + 0x2c) = 0x7a48b8;
    *(int*)(self + 0x44) = 0x7a48a8;
    *(int*)(self + 0x5c) = 0x7a4898;
    *(int*)(self + 0x74) = 0x7a4888;
    *(int*)(self + 0x8c) = 0x7a4878;

    sub_5402B0(self);
}
