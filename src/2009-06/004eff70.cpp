// from server: 23% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Node {
    char pad0[8];
    Node* next;
    char pad1[8];
    int size;
    char pad2[4];
    void* data;
};

struct Container {
    char pad0[4];
    Node* head;
    char pad1[8];
    Node* tail;
};

struct Item {
    char pad0[0x14];
    Container* c14;
    Container c18;
};

struct Helper {
    char pad0[4];
    void* ptr;
};

extern "C" {
    void* __cdecl sub_4cff90();
    void __cdecl sub_4dc740(void*, int);
    void* __cdecl sub_4eba70();
    void __cdecl sub_4edeb0(void*, void*, void*);
    void __cdecl sub_5e1a60(void*, int, const char*, void*, void*, ...);
    void __cdecl sub_5e1cc0(void*);
    void __cdecl sub_6247b0(void*);
    void __cdecl sub_89e9ac();
    bool __cdecl sub_89e9a4(void*, void*);
}

struct S {
    void f(void* a, void* b);
};

void S::f(void* a, void* b)
{
    Item* self = (Item*)this;
    void* arg1 = a;
    void* arg2 = b;

    void* v = self->c14->head->data;
    void* r = sub_4eba70();
    (void)r;

    Container* c = &self->c18;
    Node* n = c->head;
    int sz = n->size;
    void* d1 = n->data;
    Node* n2 = c->head;
    int sz2 = n2->size;
    void* d2 = n2->data;

    if (d1 != 0 && d1 != d2) {
        sub_89e9ac();
    }

    if (sz == sz2) {
        return;
    }

    while (1) {
        if (d1 == 0) {
            sub_89e9ac();
            void* p = 0;
            if (sz >= *(int*)((char*)p + 0x10)) {
                sub_89e9ac();
            }
            void* e = *(void**)n;
            Helper h;
            h.ptr = e;
            void* t = *(void**)((char*)e + 0x10);
            unsigned int flag = (unsigned int)t >> 1;
            if ((flag & 1) == 0) break;
            if (e == (void*)0xa43d3c) break;
            void* edi = (char*)e + 0x14;
            void* q = *(void**)edi;
            void* qq = *(void**)((char*)q + 8);
            if (!sub_89e9a4((void*)0x9dc304, qq)) {
                if (r != 0) {
                    void* edx = *(void**)e;
                    void* fn = *(void**)((char*)edx + 0xc);
                    void* tmp = (char*)r + 0x18;
                    bool ok = ((bool(__thiscall*)(void*, void*, void*))fn)(e, &self->c18, tmp);
                    if (ok) {
                        sub_4dc740(arg2, 1);
                        void* g = sub_4cff90();
                        if (*((char*)g + 0x8d) == 0) break;
                        g = sub_4cff90();
                        if (*((char*)g + 0x8e) == 0) break;
                        char buf[16];
                        sub_5e1cc0(buf);
                        Node* nn = c->head;
                        void* dd;
                        if (nn->size < 0x10) {
                            dd = (char*)nn + 4;
                        } else {
                            dd = nn->data;
                        }
                        void* q2 = *(void**)edi;
                        void* q3 = *(void**)((char*)q2 + 4);
                        void* dd2;
                        if (*(int*)((char*)q3 + 0x18) < 0x10) {
                            dd2 = (char*)q3 + 4;
                        } else {
                            dd2 = *(void**)((char*)q3 + 4);
                        }
                        void* vv = *(void**)e;
                        sub_5e1a60(vv, 1, (const char*)0x8c7944, dd2, dd);
                        sub_6247b0(buf);
                        break;
                    }
                }
                void* ebp = *(void**)arg2;
                sub_4dc740(arg2, 0);
                sub_4edeb0(r, 0, arg2);
                void* g = sub_4cff90();
                if (*((char*)g + 0x8d) == 0) break;
                g = sub_4cff90();
                if (*((char*)g + 0x8e) == 0) break;
                char buf[16];
                sub_5e1cc0(buf);
                Node* nn = c->head;
                void* dd;
                if (nn->size < 0x10) {
                    dd = (char*)nn + 4;
                } else {
                    dd = nn->data;
                }
                void* q2 = *(void**)edi;
                void* q3 = *(void**)((char*)q2 + 4);
                void* dd2;
                if (*(int*)((char*)q3 + 0x18) < 0x10) {
                    dd2 = (char*)q3 + 4;
                } else {
                    dd2 = *(void**)((char*)q3 + 4);
                }
                void* vv = *(void**)e;
                int diff = (int)arg2 - (int)ebp;
                sub_5e1a60(vv, 1, (const char*)0x8c792c, dd2, dd, diff);
                break;
            }
            sub_4edeb0(r, 0, &h);
            void* g = sub_4cff90();
            if (*((char*)g + 0x8d) == 0) break;
            g = sub_4cff90();
            if (*((char*)g + 0x8e) == 0) break;
            char buf[16];
            sub_5e1cc0(buf);
            Node* nn = c->head;
            void* dd;
            if (nn->size < 0x10) {
                dd = (char*)nn + 4;
            } else {
                dd = nn->data;
            }
            void* q2 = *(void**)edi;
            void* q3 = *(void**)((char*)q2 + 4);
            void* dd2;
            if (*(int*)((char*)q3 + 0x18) < 0x10) {
                dd2 = (char*)q3 + 4;
            } else {
                dd2 = *(void**)((char*)q3 + 4);
            }
            void* vv = *(void**)e;
            sub_5e1a60(vv, 1, (const char*)0x8c7964, dd2, dd);
            break;
        }
        void* e = *(void**)d1;
        d1 = e;
    }

    if (d1 == 0) {
        sub_89e9ac();
        void* p = 0;
        if (sz >= *(int*)((char*)p + 0x10)) {
            sub_89e9ac();
        }
        d1 = (char*)d1 + 4;
    } else {
        d1 = *(void**)d1;
    }
}
