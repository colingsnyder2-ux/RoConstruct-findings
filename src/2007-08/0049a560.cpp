// from server: 70% by colin
// roc 2007-08 0049a560  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049a560

extern "C" int __stdcall sub_5F20F0(int, int, int);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_88FC30;
extern bool (__stdcall *func_77E708)(const type_info*, const type_info*);

int __cdecl sub_49A560(int a1, int a2, int a3) {
    if (a3 == 2) {
        int result = func_77E708(&type_info_88FC30, (const type_info*)a2) ? 0 : a2;
        return result;
    }
    char local = 0;
    return sub_5F20F0(a1, a2, *(int*)&local);
}
