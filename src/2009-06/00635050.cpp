// from server: 83% by why2
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_9f0390;
extern bool (__stdcall *type_info_eq_89e9a4)(const type_info*, const type_info*);

struct S {
    void f();
};

void S::f() {
    char* p = *(char**)this;
    void* v = *(void**)(p + 8);
    type_info_eq_89e9a4((const type_info*)v, &type_info_9f0390);
}
