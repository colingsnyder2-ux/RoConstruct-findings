// from server: 51% by atomic.potato
struct RotatePJoint
{
    int f();
};

extern "C" int __stdcall Ball(int, int);

int RotatePJoint::f()
{
    return Ball((int)this + 0xcc, 0);
}
