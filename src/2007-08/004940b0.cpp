// from server: 77% by colin
// roc 2007-08 004940b0  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004940b0

struct type_info {
    bool operator==(const type_info& rhs) const;
};

extern type_info type_info_88ebf8;

extern "C" int __cdecl func_5f20f0(int a, int b, int c);

struct RBX_GenericSlotAdapter {
};

int __cdecl compare(int a, int b)
{
    if (b == 2) {
        int v = a;
        bool eq = type_info_88ebf8.operator==(*(const type_info*)v);
        return eq ? v : 0;
    }
    return func_5f20f0(a, b, 0);
}
