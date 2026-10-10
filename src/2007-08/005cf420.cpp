// from server: 58% by colin
// roc 2007-08 005cf420  unit: RBX::IStage  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cf420

extern "C" {
    int __cdecl sub_599700();
    int __cdecl sub_630d60();
}

extern float dword_797B38;
extern float dword_797B34;
extern float dword_797988;
extern int dword_8C6844;
extern int dword_8C6848;

struct IStage {
    int field_0;
    int field_4;
    int field_8;
    int sub_5CF420(int a, int b);
};

int IStage::sub_5CF420(int a, int b)
{
    int old = this->field_4;
    this->field_4 = a;

    int ebx;
    if (!(dword_8C6848 & 1)) {
        dword_8C6848 |= 1;
        ebx = 10;
        dword_8C6844 = ebx;
    } else {
        ebx = dword_8C6844;
    }

    int ecx = this->field_8;
    int edi = this->field_4;

    if (edi > ecx) {
        if (ecx != 0) {
            this->field_8 = a;
            sub_599700();
            return 0;
        }
        if (edi < ebx) {
            this->field_8 = ebx;
            sub_599700();
            return 0;
        }

        float f = dword_797B38;
        unsigned int eax = (unsigned int)ecx;
        eax += eax;
        eax += eax;
        if (eax > 0x61A80) {
            f = dword_797B34;
        } else if (eax > 0xFA00) {
            f = dword_797988;
        }

        int tmp = ecx;
        int result;
        {
            int imul_tmp = tmp;
            result = (int)(f * (float)imul_tmp);
        }
        result = sub_630d60() - tmp + edi;
        this->field_8 = result;
        int g = dword_8C6844;
        if (result < g) {
            this->field_8 = g;
        }
        sub_599700();
        return 0;
    }

    int eax2 = ecx / 3;
    if (edi > eax2) {
        if (b != 0 && edi > ebx) {
            if (edi >= old) {
                edi = old;
            }
            sub_599700();
        }
    }
    return 0;
}
