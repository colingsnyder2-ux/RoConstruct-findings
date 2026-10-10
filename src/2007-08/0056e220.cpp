// from server: 47% by colin
// roc 2007-08 0056e220  unit: RBX::VContentId::?$holder  size: 272 bytes

extern "C" {
    int __cdecl _except_handler3();
}

typedef unsigned int DWORD;

struct std_string {
    char pad[0x1c];
};

struct ContentId {
    void* vtable;
    std_string id;
};

struct type_info;

extern "C" {
    int __stdcall type_info_equals(const type_info* self, const type_info* other);
}

struct VContentIdHolder {
    void* vtable;
    void* ptr;
    ContentId* content;

    int method();
};

extern "C" {
    int __cdecl sub_411770(void* a, void* b);
    int __cdecl sub_412dc0(void* a, void* b);
    int __cdecl sub_5017c0(void* a, void* b, void* c, void* d);
    int __cdecl sub_534a20(void* a);
    int __cdecl sub_56d920();
    int __cdecl sub_56e1e0(void* a, void* b);
    int __cdecl sub_580c60(void* a, void* b);
    int __cdecl sub_630b9e(void* a, void* b);
}

extern void* g_77e708;
extern void* g_8827c8;
extern void* g_8827f8;
extern void* g_8999a8;
extern void* g_7aa03c;
extern void* g_8410c0;

int VContentIdHolder::method()
{
    void* ebx = g_77e708;
    ContentId* self = this->content;
    void* esi = (char*)this + 4;

    if (esi != 0) {
        void* ecx = *(void**)esi;
        void* eax;
        if (ecx != 0) {
            void* vt = *(void**)ecx;
            void* fn = *(void**)((char*)vt + 4);
            eax = ((void*(*)(void*))fn)(ecx);
        } else {
            eax = g_8827c8;
        }
        int r = ((int(__stdcall*)(void*, void*))ebx)(eax, g_8999a8);
        if ((char)r != 0) {
            void* p = *(void**)esi;
            p = (char*)p + 8;
            if (p != 0) {
                goto done;
            }
        }
    }

    {
        void* eax = *(void**)self;
        void* fn = *(void**)((char*)eax + 8);
        int r = ((int(__stdcall*)(void*, void*))ebx)(fn, g_8827f8);
        if ((char)r != 0) {
            char buf[0x4c];
            sub_411770(buf, esi);
            int r2 = sub_580c60(buf, 0);
            if ((char)r2 != 0) {
                sub_56e1e0(esi, buf);
                int v = sub_56d920();
                *(void**)self = (void*)v;
                sub_534a20(esi);
                goto done;
            }
        }
    }

    {
        int v = sub_56d920();
        void* eax = *(void**)((char*)v + 0xc);
        void* ecx;
        if (*(DWORD*)((char*)eax + 0x1c) >= 0x10) {
            ecx = *(void**)((char*)eax + 8);
        } else {
            ecx = (char*)eax + 8;
        }
        void* eax2 = *(void**)self;
        void* eax3 = *(void**)((char*)eax2 + 0xc);
        eax3 = (char*)eax3 + 4;
        void* eax4;
        if (*(DWORD*)((char*)eax3 + 0x18) >= 0x10) {
            eax4 = *(void**)((char*)eax3 + 4);
        } else {
            eax4 = (char*)eax3 + 4;
        }
        char buf[0x4c];
        sub_5017c0(buf, g_7aa03c, eax4, ecx);
        sub_412dc0(buf, 0);
        sub_630b9e(buf, g_8410c0);
    }

done:
    return 0;
}
