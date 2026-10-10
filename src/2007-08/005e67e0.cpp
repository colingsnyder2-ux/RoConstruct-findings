// from server: 82% by colin
typedef void (__thiscall *FnPtr)(void*);

struct Sub {
    char pad[0x168];
    int* table;
};

struct Obj {
    void* f0;
    int f4;
    int f8;
    int fC;
    Sub* f10;
};

void Obj_Thunk(Obj* p)
{
    Sub* s = p->f10;
    int* table = s->table;
    int idx = p->f8;
    int off = table[idx];
    off += p->f4;
    FnPtr fn = (FnPtr)p->f0;
    char* base = (char*)s + 0x168;
    fn(base + off);
}
