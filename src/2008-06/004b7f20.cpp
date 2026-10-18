// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct type_info {
    bool operator==(const type_info&) const;
};

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
};

struct Node {
    char pad0[0x10];
    unsigned int flags;
    char pad1[0x4];
    void* value;
};

struct Map {
    char pad0[0x8];
    Node* head;
    Node* tail;
};

struct VReplicator {
    int method_a(void*);
    int method_b(void*);
    void run(void* arg1, void* arg2);
};

extern void* g_929644;
extern void* g_973d34;
extern void* g_825178;
extern void* g_825190;
extern void* g_8251b0;

extern "C" void* __cdecl sub_49e890();
extern "C" void* __cdecl sub_4a5b10(void*, char);
extern "C" void* __cdecl sub_4b4bb0();
extern "C" void* __cdecl sub_4b6890(void*, void*, void*);
extern "C" void* __cdecl sub_5693a0(void*, int, void*, void*, void*, void*);
extern "C" void* __cdecl sub_569620(void*);
extern "C" void* __cdecl sub_600660(void*);

void VReplicator::run(void* arg1, void* arg2)
{
    void* self = arg1;
    void* p = *(void**)((char*)self + 0x10);
    void* vt = *(void**)((char*)p + 4);
    void* r = ((void* (__thiscall*)(void*))vt)((char*)self + 0x10);
    int v = this->method_a(r);

    Map* map = (Map*)((char*)self + 0x14);
    Node* n1 = map->head;
    unsigned int idx1 = *(unsigned int*)((char*)n1 + 0x14);
    void* val1 = *(void**)((char*)n1 + 8);
    Node* n2 = map->head;
    unsigned int idx2 = *(unsigned int*)((char*)n2 + 0x18);
    void* val2 = *(void**)((char*)n2 + 8);

    void* cur = (void*)idx1;
    void* end = (void*)idx2;
    void* base = val1;
    void* base2 = val2;

    while (cur != end) {
        Node* node;
        if (base == 0) {
            _invalid_parameter_noinfo();
            node = (Node*)cur;
        } else {
            node = (Node*)base;
        }
        void* elem = node->value;
        void* elem2 = base2;
        unsigned int fl = *(unsigned int*)((char*)elem + 0x10);
        if (((fl >> 1) & 1) && elem != g_973d34) {
            void* t = *(void**)((char*)elem + 0x14);
            void* t2 = *(void**)((char*)t + 8);
            if (((type_info*)t2)->operator==(*(type_info*)g_929644)) {
                sub_4b6890(&elem, 0, arg2);
                void* g = sub_49e890();
                if (*(char*)((char*)g + 0x131) && *(char*)((char*)sub_49e890() + 0x132)) {
                    char buf[16];
                    sub_569620(buf);
                    void* a = *(void**)((char*)elem + 4);
                    a = (char*)a + 4;
                    void* av = (*(unsigned int*)((char*)a + 0x18) >= 0x10) ? *(void**)((char*)a + 4) : (char*)a + 4;
                    void* b = *(void**)((char*)elem + 0x14);
                    b = *(void**)((char*)b + 4);
                    b = (char*)b + 4;
                    void* bv = (*(unsigned int*)((char*)b + 0x18) >= 0x10) ? *(void**)((char*)b + 4) : (char*)b + 4;
                    void* gv = *(void**)g;
                    sub_5693a0(gv, 1, g_8251b0, bv, av, (void*)0);
                    RefCounted* rc = (RefCounted*)elem;
                    if (rc) {
                        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
                            ((void (__thiscall*)(void*))*(void**)((char*)rc->vptr + 4))(rc);
                            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                                ((void (__thiscall*)(void*))*(void**)((char*)rc->vptr + 8))(rc);
                            }
                        }
                    }
                }
            } else if (v) {
                void* vt2 = *(void**)elem;
                if (((char (__thiscall*)(void*, void*, int))*(void**)((char*)vt2 + 0xc))(elem, (char*)v + 0x14, 0x10)) {
                    sub_4a5b10(arg2, 1);
                    void* g = sub_49e890();
                    if (*(char*)((char*)g + 0x131) && *(char*)((char*)sub_49e890() + 0x132)) {
                        char buf[16];
                        sub_569620(buf);
                        void* a = *(void**)((char*)elem + 4);
                        a = (char*)a + 4;
                        void* av = (*(unsigned int*)((char*)a + 0x18) >= 0x10) ? *(void**)((char*)a + 4) : (char*)a + 4;
                        void* b = *(void**)((char*)elem + 0x14);
                        b = *(void**)((char*)b + 4);
                        b = (char*)b + 4;
                        void* bv = (*(unsigned int*)((char*)b + 0x18) >= 0x10) ? *(void**)((char*)b + 4) : (char*)b + 4;
                        void* gv = *(void**)g;
                        sub_5693a0(gv, 1, g_825190, bv, av, (void*)0);
                        sub_600660(buf);
                    }
                }
            } else {
                void* old = *(void**)v;
                sub_4a5b10(arg2, 0);
                sub_4b6890(&elem, 0, arg2);
                void* g = sub_49e890();
                if (*(char*)((char*)g + 0x131) && *(char*)((char*)sub_49e890() + 0x132)) {
                    char buf[16];
                    sub_569620(buf);
                    void* a = *(void**)((char*)elem + 4);
                    a = (char*)a + 4;
                    void* av = (*(unsigned int*)((char*)a + 0x18) >= 0x10) ? *(void**)((char*)a + 4) : (char*)a + 4;
                    void* b = *(void**)((char*)elem + 0x14);
                    b = *(void**)((char*)b + 4);
                    b = (char*)b + 4;
                    void* bv = (*(unsigned int*)((char*)b + 0x18) >= 0x10) ? *(void**)((char*)b + 4) : (char*)b + 4;
                    void* gv = *(void**)g;
                    sub_5693a0(gv, 1, g_825178, bv, av, (void*)((char*)old - (char*)v));
                    RefCounted* rc = (RefCounted*)elem;
                    if (rc) {
                        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
                            ((void (__thiscall*)(void*))*(void**)((char*)rc->vptr + 4))(rc);
                            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                                ((void (__thiscall*)(void*))*(void**)((char*)rc->vptr + 8))(rc);
                            }
                        }
                    }
                }
            }
        }
        if (base == 0) {
            _invalid_parameter_noinfo();
            cur = (char*)cur + 4;
        } else {
            cur = *(void**)base;
        }
    }
}
