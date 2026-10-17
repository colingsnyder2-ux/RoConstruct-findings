// from server: 24% by colin
struct SoundId {
    char pad0[0x11c];
    void* begin;
    void* end;
    void* cap;
    char pad1[0x134 - 0x128];
    void* owner;
    void* owner2;
    void construct(const float* pos);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __stdcall invalid_parameter();
extern "C" void __stdcall mfc798();

struct Node {
    Node* left;
    Node* right;
    Node* parent;
    char color;
    char pad[3];
    void* key;
    void* value;
};

struct Tree {
    Node* header;
    unsigned int count;
};

void* __cdecl sub_6A0920(unsigned int);
void sub_43A320(void*, void*, void*);
void sub_420110(void*, void*);
void sub_43B390(void*, void*, unsigned int, void*, void*);
void* __cdecl sub_576F00(unsigned int);
long __cdecl sub_5773C0(void*, void*);
void sub_58C5C0(void*, void*);
void sub_5A2FE0(void*);

void SoundId::construct(const float* pos)
{
    Tree local;
    local.header = 0;
    local.count = 0;

    void* p = sub_6A0920(4);
    if (p) {
        *(void**)p = &local;
    } else {
        p = 0;
    }
    local.header = (Node*)p;
    local.count = 0;

    void* owner = this->owner;
    void* e = this->end;
    void* beg = this->begin;

    void* i = beg;
    while (i != e) {
        void* key = *(void**)i;
        void* out;
        sub_43A320((char*)owner + 0x218, &out, &key);
        Node* n = (Node*)out;
        void* val = *(void**)((char*)n + 0x1c);
        void* valend = *(void**)((char*)n + 0x20);
        while (val != valend) {
            sub_420110(&local, val);
            val = (char*)val + 8;
        }
        i = (char*)i + 4;
    }

    float x = pos[0];
    float y = pos[1];
    float z = pos[2];

    struct {
        void* fn;
        void* a;
        void* b;
        void* c;
        void* d;
        float x, y, z;
    } args;
    args.fn = (void*)0x43A1D0;
    args.a = 0;
    args.b = this;
    args.c = (void*)0x71F210;
    args.d = (void*)local.header;
    args.x = x;
    args.y = y;
    args.z = z;

    void* tmp;
    sub_43B390(&tmp, local.header, local.count, &args, 0);

    void* o = this->owner;
    if (*(void**)((char*)o + 0x198)) {
        void* s = sub_576F00(0x10);
        *(void**)s = 0;
        *(void**)((char*)s + 4) = 0;
        *(void**)((char*)s + 8) = 0;
        void* o2 = this->owner2;
        void* h = *(void**)((char*)o2 + 4);
        void* r = (void*)((char*)h + 4);
        mfc798();
        void* o3 = this->owner;
        void* v = *(void**)((char*)o3 + 0x198);
        sub_58C5C0(r, v);
        void* o4 = this->owner;
        void* v2 = *(void**)((char*)o4 + 0x198);
        void** vt = *(void***)((char*)v2 + 0x1f0);
        void* fn = vt[0];
        ((void(__thiscall*)(void*, int))fn)((char*)v2 + 0x1f0, 1);
        sub_5773C0(s, 0);
    }

    sub_5A2FE0(&local);
}
