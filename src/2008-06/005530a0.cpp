// from server: 26% by atomic.potato
struct Chunk {
    int a;
    int b;
};

struct Helper {
    Chunk* f(int);
};

Chunk* Helper::f(int) {
    return 0;
}

struct S {
    Chunk data;
    Chunk get(int);
};

Chunk S::get(int x) {
    Helper h;
    Chunk* p = h.f(x);
    return *p;
}
