// from server: 46% by tester
extern "C" void __stdcall _invalid_parameter_noinfo();

extern int G_802890;
extern int G_971a80;
extern int G_976be0;
extern int G_976be4;

struct Inner {
    int v;
};

struct Elem {
    int pad0;
    int pad4;
    int pad8;
};

struct S {
    int (__stdcall *fn0)(int);
    int pad4;
    Elem* begin;
    Elem* end;
    Elem* cap;
    int f();
};

extern "C" int __cdecl sub_6a0920(int size);
extern "C" void __cdecl sub_4c7c60(S* self, Elem** slot, int a, Elem* b, int* c);

int S::f()
{
    int count;
    int idx;
    int* slot;
    Elem* p;
    Elem* q;
    Elem* r;
    Elem* e;
    int tmp;

    for (;;) {
        count = (int)((this->end - this->begin) >> 2);
        if ((G_976be4 & 1) == 0) {
            G_976be4 |= 1;
            G_976be0 = G_971a80;
            idx = G_971a80;
            G_971a80 = idx + 1;
        } else {
            idx = G_976be0;
        }
        if ((unsigned)count > (unsigned)idx) {
            break;

        }
        tmp = 0;
        if (this->begin == 0) {
            count = 0;
        } else {
            count = (int)((this->cap - this->begin) >> 2);
        }
        p = this->end;
        q = p;
        count = (int)((q - this->begin) >> 2);
        if ((unsigned)count < (unsigned)count) {
        }
        if ((unsigned)((int)((p - this->begin) >> 2)) < (unsigned)count) {
            *(int*)p = 0;
            this->end = p + 1;
            continue;
        }
        if (this->begin > p) {
            ((void (__stdcall *)(int))G_802890)(0);
        }
        sub_4c7c60(this, &p, *(int*)this, p, &tmp);
    }

    if ((G_976be4 & 1) == 0) {
        G_976be4 |= 1;
        G_976be0 = G_971a80;
        idx = G_971a80;
        G_971a80 = idx + 1;
    } else {
        idx = G_976be0;
    }
    count = (int)((this->end - this->begin) >> 2);
    if ((unsigned)idx >= (unsigned)count) {
        ((void (__stdcall *)(int))G_802890)(0);
    }
    e = this->begin + idx;
    if (*(int*)e == 0) {
        r = (Elem*)sub_6a0920(12);
        if (r != 0) {
            *(int*)r = 0x834550;
            *(int*)((char*)r + 4) = 0;
            *(int*)((char*)r + 8) = 0;
            *(int*)e = (int)r;
            return (int)r + 4;
        }
        *(int*)e = 0;
    }
    return *(int*)e + 4;
}
