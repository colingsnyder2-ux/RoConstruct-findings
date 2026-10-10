// from server: 97% by colin
struct type_info;

extern "C" int __cdecl sub_631392(int);

extern "C" void __stdcall sub_77E708(const type_info*);

extern type_info type_info_8A55C4;

struct VFillTool {
    char pad[0xc];
    void* field_c;
    bool isEnabled() const;
};

bool VFillTool::isEnabled() const {
    char* p = *(char**)((char*)this + 0xc);
    char* q = *(char**)(p + 0x188);
    int v = *(int*)(q + 0x318);
    if (v != 0) {
        int r = sub_631392(v);
        sub_77E708(&type_info_8A55C4);
        return true;
    }
    return false;
}
