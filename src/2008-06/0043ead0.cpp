// from server: 20% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad[3];
    int key;
};

struct Tree {
    Node* header;
    unsigned int size;
};

struct Map {
    Tree tree;
};

struct Inner {
    char pad0[0x198];
    void* ptr198;
    char pad1[0x54];
    void* ptr1f0;
};

struct VTable {
    void* slots[1];
};

struct Obj1f0 {
    VTable* vt;
};

struct Operation {
    void (__thiscall *apply)(void*, void*, int*);
    char* object;
    int displacement;
    void* (__thiscall *get)(void*);
    int unused;
    int value;
};

struct ContentItem {
    char pad0[0x124];
    void* begin;
    char pad1[0x8];
    void* end;
    char pad2[0x4];
    void* cap;
    char pad3[0x4];
    void* field13c;
    void* field140;
    void method(char* arg);
};

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

void* __cdecl sub_6a0920(int);
void __cdecl sub_43a320(void*, void*);
void __cdecl sub_420110(void*, void*);
Operation __cdecl sub_43c940(int, char*, int, char*, Operation);
void* __cdecl sub_576f00(void*);
long __cdecl sub_5773c0(void*, void*);
void __cdecl sub_58c5c0(void*, void*);
void __cdecl sub_5a2fe0(void*);

void ContentItem::method(char* arg)
{
    void* local68;
    void* local5c;
    void* local58;
    void* local54;
    void* local4c;
    void* local48;
    void* local38;
    void* local3c;
    void* local30;
    void* local34;
    void* local2c;
    void* local28;
    void* local24;
    void* local20;
    void* local18;
    void* local50;
    void* localb0;
    void* localb4;
    void* localb8;
    char local38b;
    void* local7c;

    void** p = (void**)sub_6a0920(4);
    if (p) {
        *p = &local68;
    } else {
        p = 0;
    }
    local68 = p;
    local5c = 0;
    local58 = 0;
    local54 = 0;

    Inner* inner = (Inner*)field13c;
    void* v230 = *(void**)((char*)inner + 0x230);
    void* v218 = *(void**)((char*)inner + 0x218);
    void* v134 = end;

    local38 = v230;
    local3c = v218;

    if ((unsigned int)cap > (unsigned int)v134) {
        _invalid_parameter_noinfo();
    }

    void* v124 = begin;
    local30 = v134;
    void* v130 = cap;
    local34 = v124;

    if ((unsigned int)v130 > (unsigned int)end) {
        _invalid_parameter_noinfo();
    }

    void* edi = begin;
    void* esi = v130;
    local2c = edi;
    local28 = esi;

    while (1) {
        if (edi != 0 && edi == local34) {
        } else {
            _invalid_parameter_noinfo();
        }
        if (esi == local30) {
            break;
        }
        if (edi != 0) {
            edi = *(void**)edi;
        }
        if ((unsigned int)esi < *(unsigned int*)((char*)edi + 0x10)) {
            _invalid_parameter_noinfo();
        }
        void* edx = *(void**)esi;
        Inner* in2 = (Inner*)field13c;
        local18 = edx;
        sub_43a320((char*)in2 + 0x218, &local4c);
        void* edi2 = local4c;
        if (edi2 != 0 && edi2 == local3c) {
        } else {
            _invalid_parameter_noinfo();
        }
        void* esi2 = local48;
        if (esi2 == local38) {
            break;
        }
        if (edi2 != 0) {
            edi2 = *(void**)edi2;
        }
        if (esi2 != *(void**)((char*)0 + 0x18)) {
            _invalid_parameter_noinfo();
        }
        void* ebx = *(void**)((char*)esi2 + 0x1c);
        if ((unsigned int)ebx > *(unsigned int*)((char*)esi2 + 0x20)) {
            _invalid_parameter_noinfo();
        }
        void* eax = *(void**)((char*)esi2 + 0x10);
        local20 = ebx;
        local24 = eax;
        if (edi2 != 0) {
            edi2 = *(void**)edi2;
        }
        if (esi2 == *(void**)((char*)edi2 + 0x18)) {
            _invalid_parameter_noinfo();
        }
        void* edi3 = *(void**)((char*)esi2 + 0x20);
        if ((unsigned int)*(void**)((char*)esi2 + 0x1c) > (unsigned int)edi3) {
            _invalid_parameter_noinfo();
        }
        void* esi3 = *(void**)((char*)esi2 + 0x10);
        while (1) {
            if (eax != 0 && eax == esi3) {
            } else {
                _invalid_parameter_noinfo();
            }
            if (local20 == edi3) {
                break;
            }
            if (eax != 0) {
                eax = *(void**)eax;
            }
            if ((unsigned int)local20 < *(unsigned int*)((char*)eax + 0x10)) {
                _invalid_parameter_noinfo();
            }
            sub_420110(&local68, local20);
            if (eax != 0) {
                eax = *(void**)eax;
            }
            if ((unsigned int)local20 < *(unsigned int*)((char*)eax + 0x10)) {
                _invalid_parameter_noinfo();
            }
            local20 = (char*)local20 + 8;
        }
        if (local2c != 0) {
        } else {
            _invalid_parameter_noinfo();
        }
        if ((unsigned int)local28 < *(unsigned int*)((char*)local2c + 0x10)) {
            _invalid_parameter_noinfo();
        }
        local28 = (char*)local28 + 4;
        edi = local2c;
        esi = local28;
    }

    char dl = *arg;
    void* edi4 = local48;
    local7c = 0;
    void* eax2 = local58;
    void* ecx2 = local5c;
    local38b = dl;
    void* arg2 = eax2;
    if ((unsigned int)ecx2 > (unsigned int)eax2) {
        _invalid_parameter_noinfo();
        eax2 = local58;
        ecx2 = local5c;
    }
    void* edx2 = local68;
    local4c = edx2;
    local18 = ecx2;
    if ((unsigned int)ecx2 > (unsigned int)eax2) {
        _invalid_parameter_noinfo();
    }

    Operation op;
    op.apply = (void (__thiscall*)(void*, void*, int*))0x43a1d0;
    op.object = (char*)local7c;
    op.displacement = (int)this;
    op.get = (void* (__thiscall*)(void*))0x71f210;
    op.unused = (int)edi4;
    op.value = (int)local38b;

    sub_43c940((int)local68, (char*)local4c, (int)local18, (char*)arg2, op);

    Inner* in3 = (Inner*)field13c;
    if (in3->ptr198 != 0) {
        local50 = 0;
        local4c = 0;
        local48 = 0;
        sub_576f00(in3->ptr198);
        void* v140 = field140;
        void* eax3 = *(void**)((char*)v140 + 4);
        void* ecx3 = (char*)eax3 + 4;
        void* r = ((void* (__thiscall*)(void*))*(void**)0x802464)(ecx3);
        Inner* in4 = (Inner*)field13c;
        sub_58c5c0(r, in4->ptr198);
        Inner* in5 = (Inner*)field13c;
        Obj1f0* o = (Obj1f0*)((char*)in5->ptr198 + 0x1f0);
        VTable* vt = o->vt;
        void (*fn)(void*, int) = (void (*)(void*, int))vt->slots[0];
        fn(o, 1);
        sub_5773c0(&local50, 0);
    }
    sub_5a2fe0(&local68);
}
