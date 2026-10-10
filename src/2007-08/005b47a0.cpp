// from server: 68% by colin
struct Geometry {
    char pad0[0x1c];
    int m_field1C;
    int m_field20;
    char pad24[0x44];
    int m_field68;
};

struct Obj {
    int m_field0;
    char pad4[0x1c];
    int m_field20;
    char pad24[0x4];
    int m_field28;
};

extern "C" void __stdcall sub_005a95f0(int, Geometry*, Geometry*);

void sub_005b47a0(Geometry* self, Geometry* other)
{
    int r = ((char (__thiscall*)(int))*(int*)(*(int*)(self->m_field68) + 4))(self->m_field68);
    Obj* a = (Obj*)self->m_field20;
    Obj* b = (Obj*)other->m_field20;
    if (r != 0) {
        if ((a->m_field28 != 0 || a->m_field0 != 0) &&
            (b->m_field28 == 0 && b->m_field0 == 0)) {
            sub_005a95f0(self->m_field1C, self, other);
        }
    }

    int r2 = ((char (__thiscall*)(int))*(int*)(*(int*)(other->m_field68) + 4))(other->m_field68);
    Obj* c = (Obj*)other->m_field20;
    Obj* d = (Obj*)self->m_field20;
    if (r2 != 0) {
        if ((c->m_field28 != 0 || c->m_field0 != 0) &&
            (d->m_field28 == 0 && d->m_field0 == 0)) {
            sub_005a95f0(other->m_field1C, other, self);
        }
    }
}
