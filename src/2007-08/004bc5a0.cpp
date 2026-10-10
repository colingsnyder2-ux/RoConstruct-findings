// from server: 30% by tester
struct RakPeer {
    char pad[0x10];
    unsigned int field10;
    unsigned int field14;
    unsigned int field18;
    unsigned int field1c;

    void __cdecl method(unsigned int* arg1, unsigned int* arg2);
};

extern "C" void __stdcall sub_630B8C(void*, void*, void*);
extern "C" void __stdcall sub_4B99A0(void*, unsigned int);

void RakPeer::method(unsigned int* arg1, unsigned int* arg2) {
    unsigned int local30[8];
    unsigned int local10[2];
    unsigned int local8;
    unsigned int local4;
    unsigned int localC;
    unsigned int local0;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int* p;
    unsigned int* q;
    unsigned int v;

    for (i = 0; i < 8; ++i) {
        local30[i] = ((unsigned int*)this)[i];
    }

    sub_630B8C(local10, 0, 0);

    for (j = 0; j < 8; ++j) {
        arg2[j] = 0;
    }

    local0 = 0;
    local8 = 0;

    for (k = 0; k < 8; ++k) {
        v = arg1[k];
        local4 = 0x20;
        if (v != 0) {
            while (1) {
                if ((v & 1) != 0) {
                    if (local0 != 0) {
                        sub_4B99A0(local30, local0);
                        local0 = 0;
                    }
                    local10[0] = (unsigned int)local30;
                    local10[1] = 1;
                    p = (unsigned int*)local10[0];
                    q = arg2;
                    {
                        unsigned int carry = 0;
                        unsigned int idx = 0;
                        do {
                            unsigned int a = p[idx];
                            unsigned int b = q[idx];
                            unsigned int sum = a + b + carry;
                            carry = (sum < a) || (carry && sum == a);
                            q[idx] = sum;
                            ++idx;
                        } while (idx < 4);
                    }
                    local0 = local10[0];
                }
                local4 += 0xffff;
                v >>= 1;
                ++local0;
                if (v == 0) break;
            }
        }
        local0 += local4;
    }
}
