// from server: 97% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

struct Sub {
    char pad[0x318];
    type_info* field318;
};

struct Mid {
    char pad[0x188];
    Sub* field188;
};

struct Outer {
    char pad[0xc];
    Mid* fieldC;
    bool check();
};

extern "C" type_info* __cdecl sub_631392(type_info*);
extern "C" bool (__stdcall *off_77E708)(type_info*, const type_info*);
extern type_info type_info_8A592C;

bool Outer::check() {
    type_info* t = fieldC->field188->field318;
    if (t) {
        type_info* r = sub_631392(t);
        return off_77E708(r, &type_info_8A592C);
    }
    return false;
}
