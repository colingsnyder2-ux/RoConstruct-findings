// from server: 78% by Cezant64gamejr
extern "C" void __stdcall call_target(int, int, int);

struct VCRect {
    void CArray();
};

void VCRect::CArray() {
    int a = 0;
    int b = -1;
    int c = 9;
    call_target(a, b, c);
}
