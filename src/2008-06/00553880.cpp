// from server: 37% by colin
struct RBX_RenderBase_AggregateChunk {
    char pad[8];
    void sub_5538B0(int, int, int, int, int, int);
    void f(int, int, int, int, int);
};

void RBX_RenderBase_AggregateChunk::f(int a, int b, int c, int d, int e) {
    sub_5538B0(a, b, c, d, e, (int)(this->pad + 8));
}
