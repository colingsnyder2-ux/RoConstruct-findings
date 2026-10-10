// from server: 75% by why2
struct S {
    void get(int* out);
};

void S::get(int* out) {
    *out = *(int*)((char*)this + 0x2a);
}
