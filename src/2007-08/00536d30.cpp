// from server: 74% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct S {
    int* begin;
    int* end;
    int f();
};

int S::f() {
    int count;
    if (begin == 0) {
        count = 0;
    } else {
        count = (int)(end - begin);
    }

    static unsigned int state = 0;
    static int cached = 0;
    static int counter = 0;

    if ((state & 1) == 0) {
        cached = counter;
        counter++;
        state |= 1;
    }

    if ((unsigned int)count > (unsigned int)cached) {
        if ((state & 1) == 0) {
            cached = counter;
            counter++;
            state |= 1;
        }

        int idx = cached;
        int n;
        if (begin == 0) {
            n = 0;
        } else {
            n = (int)(end - begin);
        }
        if ((unsigned int)idx >= (unsigned int)n) {
            _invalid_parameter_noinfo();
        }
        if (begin[idx] != 0) {
            return 1;
        }
    }
    return 0;
}
