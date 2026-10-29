// from server: 23% by tester
struct RakPeer {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    bool method(unsigned int* a, unsigned int* b);
};

extern "C" bool __cdecl sub_4b97f0(unsigned int*, unsigned int*);
extern "C" void __cdecl sub_4b9db0(unsigned int*, unsigned int);

bool RakPeer::method(unsigned int* a, unsigned int* b) {
    unsigned int v[4];
    unsigned int w[4];
    unsigned int shift;
    unsigned int i;
    unsigned int j;

    v[0] = field_0;
    v[1] = field_4;
    v[2] = field_8;
    v[3] = field_c;

    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    b[3] = a[3];

    shift = 1;

    if ((int)v[3] < 0) {
        if (!sub_4b97f0(v, b)) {
            return false;
        }
    } else {
        if (!sub_4b97f0(v, b)) {
            return false;
        }
        i = 3;
        while (i > 0 && b[i] == 0) {
            i--;
        }
        j = i;
        while (j >= 0 && v[j] == 0) {
            j--;
        }
        if (i != j) {
            unsigned int s = (i - j) << 5;
            sub_4b9db0(v, s);
            shift = s + 1;
        }
    }

    while ((int)v[3] >= 0) {
        i = 3;
        while (i >= 0) {
            if (b[i] > v[i]) break;
            if (b[i] < v[i]) goto done;
            i--;
        }
        if (i < 0) goto done;
        {
            unsigned int t = v[0];
            shift++;
            v[0] = v[0] + v[0];
            v[1] = (v[1] << 1) | (t >> 31);
            t = v[2];
            v[2] = (v[2] << 1) | (v[1] >> 31);
            v[3] = (v[3] << 1) | (t >> 31);
        }
    }

done:
    while (1) {
        i = 3;
        while (i >= 0) {
            if (v[i] > b[i]) goto shift_right;
            if (v[i] < b[i]) break;
            i--;
        }
        if (i < 0) {
            if (shift == 0) return true;
            shift--;
            {
                unsigned int t = v[3];
                v[3] >>= 1;
                v[2] = (v[2] >> 1) | (t << 31);
                t = v[1];
                v[1] = (v[1] >> 1) | (v[2] << 31);
                v[0] = (v[0] >> 1) | (t << 31);
            }
            continue;
        }
        break;
    }

shift_right:
    {
        unsigned int t = v[3];
        v[3] >>= 1;
        v[2] = (v[2] >> 1) | (t << 31);
        t = v[1];
        v[1] = (v[1] >> 1) | (v[2] << 31);
        v[0] = (v[0] >> 1) | (t << 31);
        shift--;
    }
    goto done;
}
