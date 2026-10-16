// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    unsigned char storage[16];
    String();
    ~String();
    String& operator=(const String&);
    String& operator=(const char*);
    const char* c_str() const;
};

struct Shared {
    unsigned char pad0[4];
    volatile long refcount;
};

struct SharedPtr {
    Shared* px;
    Shared* pi;
    SharedPtr();
    SharedPtr(const SharedPtr&);
    ~SharedPtr();
};

struct List {
    unsigned char pad0[12];
    void* end;
    void* cap;
};

struct Obj {
    unsigned char pad0[0x154];
    List* list;
};

struct Owner {
    unsigned char pad0[0x1b8];
    Shared* sp0;
    Shared* sp1;
    unsigned char pad1[4];
    Obj* obj;
};

struct CSelectionCaption {
    void f();
};

extern "C" void __stdcall sub_803f04(void*);
extern "C" void __stdcall sub_802460(void*);
extern "C" void __stdcall sub_802890(void);
extern "C" void __stdcall sub_80240c(void*, const char*);
extern "C" int __stdcall sub_8023d8(const char*, const String*);
extern "C" void __stdcall sub_80244c(String*, const char*);
extern "C" int __stdcall sub_80236c(const String*, const char*);
extern "C" void __stdcall sub_8032c4(void*, int, int);
extern "C" void __stdcall sub_803ee0(void*, int);
extern "C" void __stdcall sub_802468(String*);
extern "C" void __stdcall sub_803f14(void*);
extern "C" void __stdcall sub_802464(String*);
extern "C" int __stdcall sub_8023cc(const String*, const char*);

void sub_411b40(SharedPtr*);
void sub_413970(void*);
void sub_5773c0(void*);

void CSelectionCaption::f()
{
    Owner* self = reinterpret_cast<Owner*>(this);
    if (self->obj == 0)
        return;

    void* local10;
    sub_803f04(&local10);

    String local30;
    sub_802460(&local30);

    if (self->obj != 0)
    {
        SharedPtr sp;
        sp.px = self->sp0;
        sp.pi = self->sp1;
        if (sp.pi != 0)
            _InterlockedExchangeAdd(&sp.pi->refcount, 1);
        sub_411b40(&sp);

        List* lst = self->obj->list;
        void* first = lst->end;
        void* last = lst->cap;
        if (first > last)
            sub_802890();
        void* begin = lst->end;
        void* end = lst->cap;
        if (begin > end)
            sub_802890();
        void* p = lst->end;
        if (first != 0 && first != p)
            sub_802890();
        if (begin != end)
        {
            void* elem;
            sub_413970(&elem);
            sub_80240c(&local30, (const char*)((char*)*(void**)elem + 0x110));

            sub_413970(&elem);
            int id = (*(int(__thiscall**)(void*))((char*)*(void**)elem + 0x10))(*(void**)elem);

            for (;;)
            {
                List* l2 = self->obj->list;
                void* e2 = l2->cap;
                if (l2->end > e2)
                    sub_802890();
                void* b2 = l2->end;
                if (first == 0)
                {
                    sub_802890();
                    if (begin < (void*)0x10)
                        sub_802890();
                    begin = (char*)begin + 8;
                    if (first != 0 && first == b2)
                        break;
                    sub_802890();
                }
                else
                {
                    if (first == b2)
                        break;
                }
                if (begin == e2)
                {
                    if (id != 0)
                    {
                        if (sub_8023cc(&local30, (const char*)0x80b716))
                        {
                            int n = (int)((char*)self->obj->list->cap - (char*)self->obj->list->end) >> 3;
                            if (n > 1)
                            {
                                String s1;
                                sub_802464(&s1);
                                String s2;
                                sub_802464(&s2);
                                sub_8032c4(&local10, 0xb5, (int)s1.c_str());
                            }
                            else
                            {
                                String s1;
                                sub_802464(&s1);
                                String s2;
                                sub_802464(&s2);
                                sub_8032c4(&local10, 0xb4, (int)s1.c_str());
                            }
                        }
                        else
                        {
                            String s1;
                            sub_802464(&s1);
                            sub_8032c4(&local10, 0xb6, (int)s1.c_str());
                        }
                    }
                    break;
                }
                if (first == 0)
                {
                    sub_802890();
                    if (begin < (void*)0x10)
                        sub_802890();
                }
                void* cur = *(void**)begin;
                if (sub_8023d8((const char*)((char*)cur + 0x110), &local30))
                {
                    sub_80244c(&local30, (const char*)0x80b716);
                    if (id != 0)
                        break;
                }
                if (first == 0)
                {
                    sub_802890();
                    if (begin < (void*)0x10)
                        sub_802890();
                }
                int curid = (*(int(__thiscall**)(void*))((char*)*(void**)begin + 0x10))(*(void**)begin);
                if (curid == id)
                    continue;
                if (sub_80236c(&local30, (const char*)0x80b716))
                    break;
            }

            int n = (int)((char*)self->obj->list->cap - (char*)self->obj->list->end) >> 3;
            sub_8032c4(&local10, 0xb7, n);
        }
        sub_5773c0(&sp);
    }

    void* v = *(void**)self;
    sub_803ee0(&local10, 0);
    (*(void(__thiscall**)(void*, void*))((char*)v + 0x160))(self, &local10);

    sub_802468(&local30);
    sub_803f14(&local10);
}
