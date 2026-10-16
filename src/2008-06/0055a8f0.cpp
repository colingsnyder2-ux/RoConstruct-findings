// from server: 39% by colin
struct Instance;

struct Instance {
    char pad0[0x104];
    Instance* parent;
    char padE4[0xE4];
    char pad108b[0x108 - 0xE4 - 4];

    void setParent(Instance* newParent);
};

struct String {
    char buf[0x1C];
    String();
    String(const char*);
    ~String();
};

extern "C" {
    void __stdcall sub_5574d0(void* out, Instance* self);
    void __stdcall sub_509b10(String* out, const char* fmt, const char* arg1, const char* arg2);
    void __stdcall sub_409d50(void* out, void* in);
    void __stdcall sub_6a158c(void* a, void* b);
    int __stdcall sub_4c9c50(Instance* p);
    int __stdcall sub_5574b0(Instance* p);
    void __stdcall sub_558370(void* a, void* b, void* c);
    void __stdcall sub_49add0(void* a);
    void __stdcall sub_68ff20(void* a, void* b);
    void __stdcall sub_68fef0(void* a, void* b);
    void __stdcall sub_438b30(void* a, void* b, void* c, void* d, void* e, void* f);
    void __stdcall sub_439480(void* a, void* b, void* c);
    void __stdcall sub_456e80(void* a);
    void __stdcall sub_4116f0(void* a, void* b);
    void __stdcall sub_49d200(void* a, void* b);
    void __stdcall sub_618a40(void* a, void* b);
    void __stdcall sub_558590(void* a);
    void __stdcall sub_420110(void* a, void* b);
    void __stdcall sub_558220(void* a, void* b, void* c);
    void __stdcall sub_5584c0(void* a);
    void __stdcall sub_40db00(void* a, void* b);
    void __stdcall sub_600660(void* a);
    void __stdcall sub_42af90(void* a, void* b);
}

void Instance::setParent(Instance* newParent) {
    Instance* oldParent = this->parent;
    if (newParent == oldParent) {
        return;
    }
    if (this == newParent) {
        String msg;
        sub_5574d0(&msg, this);
        const char* name = (*(int*)(msg.buf + 0x18) >= 0x10) ? *(const char**)(msg.buf + 4) : msg.buf + 4;
        String full;
        sub_509b10(&full, "Attempt to set %s as its own parent", name, 0);
        msg.~String();
        void* ex = 0;
        sub_409d50(&ex, &full);
        sub_6a158c(&ex, (void*)0x8d1bc8);
    }
    if (sub_4c9c50(newParent)) {
        String a;
        sub_5574d0(&a, newParent);
        String b;
        sub_5574d0(&b, this);
        const char* an = (*(int*)(a.buf + 0x18) >= 0x10) ? *(const char**)(a.buf + 4) : a.buf + 4;
        const char* bn = (*(int*)(b.buf + 0x18) >= 0x10) ? *(const char**)(b.buf + 4) : b.buf + 4;
        String full;
        sub_509b10(&full, "Attempt to set parent of %s to %s results in circular reference", an, bn);
        b.~String();
        a.~String();
        void* ex = 0;
        sub_409d50(&ex, &full);
        sub_6a158c(&ex, (void*)0x8d1bc8);
    }
    void* tmp;
    sub_618a40(&tmp, oldParent);
    sub_42af90((char*)this + 0xe4, &tmp);
    if (tmp) {
        if (!sub_5574b0(newParent)) {
            sub_558370(&tmp, tmp, newParent);
        }
        (*(void(__thiscall**)(void*, Instance*))tmp)(tmp, this);
        sub_49add0((char*)tmp + 0x108);
        void* v = *(void**)tmp;
        void* a1;
        sub_68ff20(v, &a1);
        void* a2;
        sub_68fef0(v, &a2);
        void* r;
        sub_438b30(&r, a1, a2, *(void**)tmp, *(void**)((char*)tmp + 4), 0);
        void* r2;
        sub_439480(&r2, *(void**)r, *(void**)((char*)r + 4));
        if (*(int*)((char*)tmp + 0x10) - *(int*)((char*)tmp + 0xc) == 0) {
            sub_456e80((char*)tmp + 0x108);
        }
        this->parent = 0;
        void* p = tmp ? (char*)tmp + 0x14 : 0;
        void* s;
        sub_4116f0(&s, &tmp);
        sub_49d200((void*)0x973c6c, p);
        void* s2;
        sub_618a40(&s2, this);
        sub_558590((char*)tmp + 0x44);
        (*(void(__thiscall**)(void*, Instance*))tmp)(tmp, this);
        if (*(int*)((char*)tmp + 0x108) == 0 ||
            (*(int*)((char*)tmp + 0x10) - *(int*)((char*)tmp + 0xc)) >> 3 == 0) {
            (*(void(__thiscall**)(void*))tmp)(tmp);
        }
    }
    if (newParent) {
        sub_49add0((char*)newParent + 0x108);
        void* v = *(void**)newParent;
        sub_420110(v, &tmp);
    }
    this->parent = newParent;
    if (newParent) {
        (*(void(__thiscall**)(void*, Instance*))newParent)(newParent, this);
        if (!sub_5574b0(newParent)) {
            sub_558220(this, newParent, 0);
        }
        void* s;
        sub_618a40(&s, this);
        sub_5584c0((char*)newParent + 0x24);
        void* s2;
        sub_4116f0(&s2, &tmp);
        sub_49d200((void*)0x973e90, (char*)newParent + 0x14);
    }
    (*(void(__thiscall**)(Instance*, void*))this)(this, &tmp);
    sub_40db00(this, (void*)0x973d34);
    sub_600660(&tmp);
    sub_600660(&tmp);
}
