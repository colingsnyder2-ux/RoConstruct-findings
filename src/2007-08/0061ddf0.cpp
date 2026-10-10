// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct std_string {
    void ctor(const char*);
    void dtor();
};

struct Child {
    char pad0[4];
    volatile long refCount;
    volatile long weakRefCount;
    char pad1[0x124 - 12];
    unsigned char flag124;
};

struct ChildArray {
    Child** begin;
    Child** end;
};

struct Container {
    char pad0[4];
    ChildArray* array;
};

struct ScoreHud {
    char pad0[0x108];
    Container* container;
    int method();
};

extern bool __fastcall findChild(Child*, std_string*);

int ScoreHud::method()
{
    bool foundA = false;
    bool foundB = false;
    int result = 0;

    Container* c = this->container;
    ChildArray* arr = c->array;

    unsigned int i = 0;
    if (arr->begin != 0) {
        unsigned int count = (unsigned int)(((char*)arr->end - (char*)arr->begin) >> 3);
        if (count > 0) {
            do {
                Child* child = arr->begin[i];
                std_string s;
                s.ctor("leaderstats");
                bool r = findChild(child, &s);
                s.dtor();
                if (r) {
                    foundA = true;
                }
                if (child->flag124 == 0) {
                    foundB = true;
                }
                i++;
            } while (i < (unsigned int)(((char*)arr->end - (char*)arr->begin) >> 3));
        }
    }

    if (foundA) result = 1;
    if (foundB) result = 3;
    if (foundA && foundB) result = 2;

    if (arr != 0) {
        if (_InterlockedExchangeAdd(&arr->begin[0]->refCount, -1) == 1) {
        }
    }

    return result;
}
