// from server: 31% by tester
struct Chunk {
    int a;
    int b;
};

struct S {
    Chunk data;
    Chunk get(int);
};

extern "C" Chunk* __stdcall helper(Chunk* self, int x);

Chunk S::get(int x) {
    Chunk tmp;
    tmp.a = this->data.a;
    tmp.b = this->data.b;
    Chunk* p = helper(&tmp, x);
    Chunk result;
    result.a = p->a;
    result.b = p->b;
    return result;
}
