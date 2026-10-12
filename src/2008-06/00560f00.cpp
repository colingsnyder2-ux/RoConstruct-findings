// from server: 84% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

struct ContentProvider;

struct DescribedNonCreatable {
    void* field0;
    void* field4;
    void* field8;
    char pad[4];
    void* field10;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl sub_55F6A0(void*, void*);
extern "C" void __cdecl sub_6A067A(void*);
extern "C" void* __cdecl sub_6A0920(unsigned int);
extern "C" bool __cdecl sub_802878(const type_info*, const type_info*);

extern type_info type_info_944430;

void __cdecl sub_560F00(int mode, DescribedNonCreatable** out, DescribedNonCreatable** in)
{
    if (mode == 0) {
        DescribedNonCreatable* src = *out;
        void* p = sub_6A0920(0x28);
        DescribedNonCreatable* obj = (DescribedNonCreatable*)p;
        sub_55F6A0(obj, src);
        *in = obj;
        return;
    }
    if (mode == 1) {
        DescribedNonCreatable* obj = *in;
        void* p = obj->field8;
        if (p != 0) {
            void (*fn)(void*, void*, int) = *(void (**)(void*, void*, int))p;
            if (fn != 0) {
                fn(obj->field10, obj->field10, 1);
            }
            obj->field8 = 0;
        }
        sub_6A067A(obj);
        *in = 0;
        return;
    }
    DescribedNonCreatable* obj = *in;
    if (sub_802878((const type_info*)obj->field0, &type_info_944430)) {
        *in = *out;
    } else {
        *in = 0;
    }
}
