// from server: 73% by atomic.potato
// roc 2009-12 00642850  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00642850

extern "C" int __stdcall sub_98B768(int, int);

struct S {
};

void* __cdecl f(void* arg) {
    if (arg == 0) {
        return 0;
    }
    int* p = *(int**)arg;
    int v;
    if (p != 0) {
        v = (*(int (__thiscall**)(int*))((char*)*p + 4))(p);
    } else {
        v = 0xb0030c;
    }
    if (sub_98B768(v, 0xb2b85c) == 0) {
        return 0;
    }
    return (char*)*(int**)arg + 4;
}
