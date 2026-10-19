// from server: 88% by TrollStein
struct CSelectionTreeCtrl {
    void __cdecl Unk(int* out, int first, int last, int a, int b, int c, int d);
};

void CSelectionTreeCtrl::Unk(int* out, int first, int last, int a, int b, int c, int d) {
    if (first != last) {
        int* q = (int*)(a + c);
        do {
            ((void (__thiscall *)(int*, int))b)(q, first);
            first += 8;
        } while (first != last);
    }
    out[0] = b;
    out[1] = a;
    out[2] = c;
    out[3] = d;
}
