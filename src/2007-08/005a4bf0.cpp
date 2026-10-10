// from server: 44% by colin
// roc 2007-08 005a4bf0  unit: RBX::Humanoid  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4bf0

extern float flt_797b38;
extern float flt_797b34;
extern float flt_797988;
extern int dword_8c5758;
extern int dword_8c575c;

extern "C" int __cdecl func_630d60(float);

struct Humanoid {
    char pad0[4];
    int field_4;
    int field_8;
    void sub_599700(int);

    void setField(int value, char flag);
};

void Humanoid::sub_599700(int)
{
}

void Humanoid::setField(int value, char flag)
{
    int old = field_4;
    field_4 = value;

    int limit;
    if (!(dword_8c575c & 1)) {
        dword_8c575c |= 1;
        limit = 10;
        dword_8c5758 = limit;
    } else {
        limit = dword_8c5758;
    }

    int cur = field_8;
    int target = field_4;

    if (target > cur) {
        if (cur == 0) {
            field_8 = value;
            sub_599700(old);
            return;
        }
        if (target < limit) {
            field_8 = limit;
            sub_599700(old);
            return;
        }
        float f;
        unsigned int scaled = (unsigned int)cur * 4;
        if (scaled > 0x61a80) {
            f = flt_797b34;
        } else if (scaled > 0xfa00) {
            f = flt_797988;
        } else {
            f = flt_797b38;
        }
        int tmp = cur;
        float prod = f * (float)tmp;
        int rounded = func_630d60(prod);
        int result = rounded - cur + target;
        field_8 = result;
        int lim = dword_8c5758;
        if (result < lim)
            field_8 = lim;
        sub_599700(old);
        return;
    }

    int third = cur / 3;
    if (target > third && flag != 0 && target > limit && target < old) {
        if (target >= old)
            target = old;
        sub_599700(target);
    }
}
