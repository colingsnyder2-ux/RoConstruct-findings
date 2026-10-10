// from server: 91% by colin
struct CXTPPropertyGridItemConstraints {
    int method_00699d00(int);
};

extern "C" int __stdcall sub_00699320(int, int);

int CXTPPropertyGridItemConstraints::method_00699d00(int a) {
    int p = *(int*)((char*)this + 0xb8);
    int q = *(int*)(p + 0x28);
    return sub_00699320(q, a);
}
