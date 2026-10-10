// from server: 83% by why2
struct VAuthoringSettingsBoundPropGetSet {
    int get(int a, int b);
};

extern "C" int __fastcall sub_43dbe0(int);

int VAuthoringSettingsBoundPropGetSet::get(int a, int b) {
    int p = *(int*)((char*)this + 0x8c);
    if (p != 0) {
        return sub_43dbe0(p);
    }
    return 0;
}
