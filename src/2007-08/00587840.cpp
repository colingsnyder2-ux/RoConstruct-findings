// from server: 86% by colin
struct EnumDescriptor {
    bool isEnum();
};

extern "C" int __cdecl sub_62fbea(int*, int*);

bool EnumDescriptor::isEnum() {
    int* p = *(int**)((char*)this + 0xf4);
    if (p == 0) {
        return false;
    }
    int local;
    int result = sub_62fbea(p, &local);
    return (result - 0x24) != 0;
}
