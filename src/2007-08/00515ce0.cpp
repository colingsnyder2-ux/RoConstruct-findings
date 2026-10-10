// from server: 45% by colin
extern "C" int __cdecl sprintf(char* buffer, const char* format, ...);

struct S {
    int f(int* a);
};

int S::f(int* a) {
    int* p = (int*)*a;
    int ecx = p[5];
    int esi;
    if (ecx > 0 && ecx <= p[29]) {
        esi = ((int*)p[28])[ecx];
    } else {
        esi = p[30];
        if (esi != 0 && ecx >= p[31] && ecx <= p[32]) {
            esi = ((int*)esi)[ecx - p[31]];
        }
    }
    if (esi == 0) {
        p[6] = ecx;
        esi = ((int*)p[28])[0];
    }
    char* edx = (char*)esi;
    char cl = *edx;
    if (cl != 0) {
        while (1) {
            edx++;
            if (cl == 0x25) {
                if (*edx == 0x73) {
                    sprintf((char*)a[2], (const char*)esi, (char*)p + 0x18);
                    return 0;
                }
                break;
            }
            cl = *edx;
            if (cl == 0) break;
        }
    }
    sprintf((char*)a[2], (const char*)esi, p[6], p[7], p[8], p[9], p[10], p[11], p[12], p[13]);
    return 0;
}
