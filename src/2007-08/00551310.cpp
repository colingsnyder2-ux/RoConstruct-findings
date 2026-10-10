// from server: 56% by colin
extern "C" {
    int __stdcall sub_54BB70(void*, int, int);
    int __stdcall sub_54C760(void*);
    int __stdcall sub_54DA10(void*, void*, void*, void*, int, int);
    void* __stdcall sub_77E518();
    void* __stdcall sub_77E604();
    void* __stdcall sub_77E6D8();
}

struct S {
    char pad0[4];
    void* field4;
    char pad8[0x14];
    unsigned int field1c;
    void method();
};

void S::method()
{
    if ((field1c & 2) != 0)
    {
        char buf[0x60];
        sub_77E518();
        buf[0x3c] = 0;
        buf[0x41] = 0;
        *(int*)(buf + 0x44) = 0;
        *(int*)(buf + 0x48) = 0;
        *(int*)(buf + 0x4c) = 0;
        *(int*)(buf + 0x50) = 0;
        *(int*)(buf + 0x54) = 0x10;
        *(int*)buf = 0x7a793c;
        void* ebx = sub_77E6D8();
        *(int*)(buf + 0x60) = 0;
        if ((field1c & 1) == 0)
        {
            sub_54BB70(buf + 3, -1, -1);
            void* eax = field4;
            void* edi = *(void**)((char*)eax + 4);
            if (edi == eax)
                ((void(*)())ebx)();
            if (edi == field4)
                ((void(*)())ebx)();
            void* ecx = *(void**)((char*)edi + 8);
            void** edx = *(void***)ecx;
            void* fn = edx[0x38 / 4];
            ((void(__stdcall*)(void*))fn)(buf);
        }
        void* eax = field4;
        void* edi = *(void**)eax;
        if (edi == eax)
            ((void(*)())ebx)();
        void* ecx = *(void**)((char*)edi + 8);
        sub_77E604();
        void* eax2 = field4;
        void* edx2 = *(void**)eax2;
        sub_54DA10(buf, this, edx2, this, 2, (int)eax2);
        field1c &= ~2u;
        sub_54C760(buf);
    }
}
