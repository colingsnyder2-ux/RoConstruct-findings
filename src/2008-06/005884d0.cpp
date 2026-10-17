// from server: 32% by colin
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    unsigned int key;
    unsigned char reserved[57];
    unsigned char nil;
};

struct Iterator {
    void* owner;
    Node* node;
};

struct Map {
    char pad[4];
    Iterator end;
    Iterator begin;
};

struct Inner {
    char pad0[0xc];
    int count;
    void* ptr;
};

struct Item {
    char pad0[0x10];
    Inner inner;
};

struct Entry {
    char pad0[0xc];
    int count;
    void* ptr;
};

struct Outer {
    char pad0[0x4];
    void* ptr;
};

struct Vtbl {
    void* slots[6];
};

struct Obj {
    Vtbl* vtbl;
};

struct S {
    int f(void* arg);
};

extern "C" void __cdecl _invalid_parameter_noinfo();

int S::f(void* arg)
{
    Obj* self = (Obj*)this;
    Vtbl* vt = self->vtbl;
    void* ebp = *(void**)((char*)vt + 0x15c);
    void* ecx_val = *(void**)((char*)vt + 0x160);
    unsigned char flag = (*(unsigned int*)arg == 0x973d34) ? 1 : 0;

    void* saved_ebp = ebp;
    void* saved_ecx = ecx_val;

    for (;;) {
        Obj* o = (Obj*)arg;
        Vtbl* v = o->vtbl;
        void* esi = *(void**)((char*)v + 0x14c);
        void* eax = *(void**)((char*)v + 0x138);

        if (saved_ebp != 0 && saved_ebp == eax) {
            // equal
        } else {
            _invalid_parameter_noinfo();
        }

        void* edi = saved_ecx;
        if (edi == esi) {
            return 0;
        }

        if (saved_ebp == 0) {
            _invalid_parameter_noinfo();
        }

        void* esi2 = *(void**)((char*)edi + 4);
        saved_ecx = esi2;

        void* eax2;
        if (saved_ebp != 0) {
            eax2 = *(void**)saved_ebp;
        } else {
            eax2 = 0;
        }

        if (esi2 == *(void**)((char*)eax2 + 0x14)) {
            _invalid_parameter_noinfo();
        }

        void* edi2 = *(void**)((char*)arg + 4);

        if (saved_ebp != 0) {
            eax2 = *(void**)saved_ebp;
        } else {
            _invalid_parameter_noinfo();
            eax2 = 0;
        }

        if (esi2 == *(void**)((char*)eax2 + 0x14)) {
            _invalid_parameter_noinfo();
        }

        void* esi3 = *(void**)((char*)esi2 + 8);

        Iterator it1;
        Iterator it2;
        ((void(__thiscall*)(void*, Iterator*, Iterator*))0x587ce0)(esi3, &it1, &it2);

        void* edi3 = it1.node;
        void* ebx = *(void**)((char*)esi3 + 0x18);
        void* esi4 = *(void**)esi3;

        if (edi3 != 0 && edi3 != esi4) {
            _invalid_parameter_noinfo();
        }

        void* esi5 = it2.node;
        if (esi5 == ebx) {
            continue;
        }

        if (edi3 != 0) {
            edi3 = *(void**)edi3;
        } else {
            _invalid_parameter_noinfo();
        }

        if (esi5 == *(void**)((char*)edi3 + 0x18)) {
            _invalid_parameter_noinfo();
        }

        void* edi4 = (char*)esi5 + 0x10;
        if (edi4 == 0) {
            continue;
        }

        void* argp = *(void**)((char*)arg + 0x10);
        Iterator it3;
        void* esi6 = (char*)edi4 + 0x18;
        ((void(__thiscall*)(void*, Iterator*, void*))0x591bd0)(esi6, &it3, argp);

        void* ebp2 = it3.owner;
        void* ebx2 = *(void**)((char*)esi6 + 0x18);
        void* esi7 = *(void**)esi6;

        if (ebp2 != 0 && ebp2 != esi7) {
            _invalid_parameter_noinfo();
        }

        void* esi8 = it3.node;
        if (esi8 != ebx2) {
            if (ebp2 != 0) {
                ebp2 = *(void**)ebp2;
            } else {
                _invalid_parameter_noinfo();
            }

            if (esi8 == *(void**)((char*)ebp2 + 0x18)) {
                _invalid_parameter_noinfo();
            }

            void* ecx3 = *(void**)((char*)esi8 + 0xc);
            void* edx3 = *(void**)((char*)esi8 + 0x10);
            void* eax3 = *(void**)((char*)esi8 + 0x14);

            if (eax3 != 0) {
                void* vt3 = *(void**)eax3;
                void* fn = *(void**)((char*)vt3 + 8);
                ((void(__thiscall*)(void*))fn)(eax3);
            } else {
                eax3 = 0;
            }

            void* edi5 = *(void**)((char*)edi4 + 4);
            void* eax4 = 0;
            if (edi5 != 0) {
                eax4 = (char*)edi5 + 0x14;
            }

            void* vt4 = *(void**)ecx3;
            void* fn2 = *(void**)((char*)vt4 + 0x14);
            ((void(__thiscall*)(void*, void*, void*))fn2)(ecx3, eax4, &eax3);

            if (ecx3 != 0) {
                void* vt5 = *(void**)ecx3;
                void* fn3 = *(void**)vt5;
                ((void(__thiscall*)(void*, int))fn3)(ecx3, 1);
            }
            return 0;
        }

        if (flag == 0) {
            continue;
        }

        if (*(int*)((char*)edi4 + 0xc) != 1) {
            continue;
        }

        void* ecx4 = *(void**)((char*)edi4 + 0x10);
        void* edx4 = *(void**)((char*)arg + 4);
        ((void(__thiscall*)(void*, void*))0x55a8f0)(edx4, ecx4);
        return 0;
    }
}
