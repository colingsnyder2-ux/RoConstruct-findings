// from server: 66% by atomic.potato
struct S
{
    int f(int);
};

extern "C" void __stdcall MeshPtrCopy(void*, void*);

int S::f(int arg)
{
    MeshPtrCopy((char*)this + 12, (char*)arg);
    return arg;
}
