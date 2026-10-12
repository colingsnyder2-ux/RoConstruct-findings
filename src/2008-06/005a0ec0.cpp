// from server: 79% by king_originala
struct Callback {
    virtual void invoke(void* root, int value) = 0;
};

struct S {
    void f(int value, Callback* callback);
};

void S::f(int value, Callback* callback) {
    try {
        void* root = this ? reinterpret_cast<char*>(this) - 0x364 : 0;
        callback->invoke(root, value);
    } catch (...) {
    }
}
