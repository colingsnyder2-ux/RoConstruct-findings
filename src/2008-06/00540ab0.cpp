// from server: 77% by king_originala
#pragma optimize("", off)

struct WeakReferenceCountedPointer
{
    ~WeakReferenceCountedPointer();
};

struct Bucket : WeakReferenceCountedPointer
{
    void clear();
    ~Bucket();
};

Bucket::~Bucket()
{
    clear();
}
