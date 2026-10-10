// from server: 94% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" int __cdecl sub_631392(int);

struct Inner318 {
    int field_318;
};

struct Inner188 {
    char pad[0x188];
    Inner318* ptr188;
};

struct Outer {
    char pad[0xc];
    Inner188* ptr_c;
};

struct VModelSetPrimaryPartTool {
    bool isEnabled() const;
};

bool VModelSetPrimaryPartTool::isEnabled() const {
    Inner188* p = *(Inner188**)((char*)this + 0xc);
    Inner318* q = *(Inner318**)((char*)p + 0x188);
    int v = *(int*)((char*)q + 0x318);
    if (v != 0) {
        int r = sub_631392(v);
        return ((const type_info*)0x8a53a8)->operator==(*(const type_info*)r);
    }
    return false;
}
