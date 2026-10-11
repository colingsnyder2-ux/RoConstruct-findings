// from server: 47% by atomic.potato
struct VChunk
{
    int a;
    int b;
};

extern "C" VChunk* sub_54e320(VChunk*, int, int);

struct WeakReferenceCountedPointer
{
    VChunk value;
    VChunk* f(VChunk*, int, int);
};

VChunk* WeakReferenceCountedPointer::f(VChunk* out, int a, int b)
{
    VChunk temporary;
    VChunk* p = sub_54e320(&temporary, b, a);
    out->a = p->a;
    out->b = p->b;
    return out;
}
