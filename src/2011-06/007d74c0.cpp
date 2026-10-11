// from server: 60% by atomic.potato
extern "C" int __cdecl sprintf(char*, const char*, ...);
extern "C" int __cdecl sub_7da220(int, char*, int);

struct S {
    double value;
    int type;
};

int __cdecl sub_7d74c0(S* out, S* in) {
    if (in->type != 3)
        return 0;
    char buf[32];
    sprintf(buf, "%.14g", in->value);
    int len = 0;
    while (buf[len]) len++;
    out->type = 4;
    out->value = 0;
    sub_7da220(*(int*)&out->value, buf, len);
    return 1;
}
