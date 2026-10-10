// from server: 77% by colin
struct PropBase {
    void* m_value;
    void* m_getter;
    void* m_setter;
    unsigned m_attributes;
    unsigned m_seenAttributes;
    void* m_extra18;
    void* m_extra1c;
};

struct PropHolder {
    void* m_a;
    void* m_b;
    void* m_c;
    void* m_d;
    void* m_e;
    void* m_f;
    void* m_g;
    void* m_h;
    void* m_i;
    void* m_j;
    void* m_k;
    void* m_l;
    void* m_m;
    void* m_n;
    void* m_o;
    void* m_p;
    void* m_q;
    void* m_r;
    void* m_s;
    void* m_t;
    void* m_u;
    void* m_v;
    void* m_w;
    void* m_x;
    void* m_y;
    void* m_z;
};

struct PropOwner {
    char pad[0x18];
    PropHolder* m_holder;
};

struct PropTarget {
    char pad[4];
    void* m_a;
    void* m_b;
};

struct PropValue {
    short x;
    short y;
};

extern "C" void* __cdecl operator_new(unsigned size);
extern "C" void __cdecl PropList_Init(void* p);

struct PropClass {
    void Set(PropTarget* target, PropValue* value);
};

void PropClass::Set(PropTarget* target, PropValue* value)
{
    PropBase* first;
    PropBase* second;
    PropOwner* owner;
    PropValue local;
    void* mem;
    unsigned tag1;
    unsigned tag2;

    tag1 = *(unsigned*)0x8c2294;
    mem = operator_new(0x20);
    if (mem != 0) {
        ((unsigned*)mem)[0] = 0;
        ((unsigned*)mem)[1] = 0;
        ((unsigned*)mem)[2] = 0;
        ((unsigned*)mem)[3] = tag1;
        ((unsigned*)mem)[4] = 0;
        ((unsigned*)mem)[6] = 0;
        ((unsigned*)mem)[7] = 0;
        first = (PropBase*)mem;
    } else {
        first = 0;
    }

    if (target->m_b == 0) {
        target->m_a = first;
    } else {
        *(PropBase**)target->m_b = first;
    }
    target->m_b = first;

    tag2 = *(unsigned*)0x8c22e4;
    mem = operator_new(0x20);
    if (mem != 0) {
        ((unsigned*)mem)[0] = 0;
        ((unsigned*)mem)[1] = 0;
        ((unsigned*)mem)[2] = 0;
        ((unsigned*)mem)[3] = tag2;
        ((unsigned*)mem)[4] = 0;
        ((unsigned*)mem)[6] = 0;
        ((unsigned*)mem)[7] = 0;
        second = (PropBase*)mem;
    } else {
        second = 0;
    }

    if (target->m_b == 0) {
        target->m_a = second;
    } else {
        *(PropBase**)target->m_b = second;
    }
    target->m_b = second;

    owner = (PropOwner*)this;
    ((void (__thiscall*)(void*, PropValue*))((*(void***)owner->m_holder)[1]))(owner->m_holder, &local);

    PropList_Init((char*)first + 0xc);
    *(int*)((char*)first + 0x14) = local.x;
    *(int*)((char*)first + 0x10) = 5;

    PropList_Init((char*)second + 0xc);
    *(int*)((char*)second + 0x14) = local.y;
    *(int*)((char*)second + 0x10) = 5;
}
