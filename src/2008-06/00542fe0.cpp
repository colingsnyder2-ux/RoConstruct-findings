// from server: 37% by colin
struct VChunk {
    bool sub_540ED0(void*);
    void* sub_54F140(void*);
    void* sub_5409B0(void*);
    void sub_544F60();
    void sub_544730(void*, void*, void*);
    void sub_544780(void*, void*, void*);
    void* sub_545730(void*, void*);
    bool sub_540F20(void*);
    void* method(void*, void*, void*, void*, void*);
};

void* VChunk::method(void* a, void* b, void* c, void* d, void* e) {
    void* local8;
    void* local10;
    void* local18;
    void* local20;

    sub_54F140(&local8);
    if (sub_540ED0(&b)) {
        sub_5409B0(&local10);
        if (sub_540ED0(&d)) {
            sub_544F60();
            sub_54F140(a);
            return a;
        }
    }
    while (sub_540F20(&d)) {
        sub_545730(&local18, 0);
        sub_544780(&local20, *(void**)local18, *((void**)local18 + 1));
    }
    sub_544730(a, b, c);
    return a;
}
