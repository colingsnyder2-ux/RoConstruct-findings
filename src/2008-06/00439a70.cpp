// from server: 48% by tester
// roc 2008-06 00439a70  unit: CSelectionPropGrid  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439a70

struct Str_00437ea0 { int words[8]; };

struct X_00437ea0 {
    char pad[0xac];
    Str_00437ea0 value;
    Str_00437ea0* copy(Str_00437ea0* out);
};

struct Inner_00439a70 {
    char pad[0x28];
    int count;
};

struct Mid_00439a70 {
    char pad[0xc0];
    Inner_00439a70* inner;
};

struct Obj_00439a70 {
    char pad[0x134];
    void* field134;
};

struct CSelectionPropGrid {
    char pad[0x19c];
    int field19c;
    char pad2[0x1b4 - 0x1a0];
    int field1b4;

    int method_00439a70(Obj_00439a70* obj);
    void sub_00803ee0();
};

extern "C" void* __stdcall sub_00712420(int index);
extern "C" int __stdcall sub_00712790(void* p, int a, void* b);

extern "C" int __stdcall sub_00802ff0();
extern "C" void __stdcall sub_00803f14();

void* sub_00438630(CSelectionPropGrid* self, void* arg);
void sub_004213a0(void* self, void* arg);
void* sub_005644a0(void* self, void* arg);

int CSelectionPropGrid::method_00439a70(Obj_00439a70* obj)
{
    void* v = sub_00438630(this, *(void**)((char*)obj->field134 + 8));
    Mid_00439a70* mid = (Mid_00439a70*)v;
    int i = 0;
    if (mid->inner->count > 0) {
        do {
            void* a = sub_00712420(i);
            Str_00437ea0 s1;
            ((X_00437ea0*)a)->copy(&s1);
            Str_00437ea0 s2;
            ((X_00437ea0*)obj)->copy(&s2);
            sub_00803ee0();
            int r = sub_00802ff0();
            bool less = r < 0;
            sub_00803f14();
            sub_00803f14();
            if (less)
                break;
            i++;
        } while (i < mid->inner->count);
    }
    sub_00712790(v, i, obj);
    void* p = obj->field134;
    void* tmp = p;
    sub_005644a0((char*)this + 0x1b4, &tmp);
    void* esi = (char*)obj + 0x114;
    *(void**)&tmp = esi;
    sub_004213a0((char*)this + 0x19c, &tmp);
    return 0;
}
