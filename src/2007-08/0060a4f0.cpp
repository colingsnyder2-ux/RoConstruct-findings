// from server: 72% by colin
struct ConstraintAlign2Axes;

struct Joint {
    char pad[0x88];
    int count;
};

struct RotatePJoint : Joint {
    void putInKernel(void* kernel);
};

struct Kernel {
    void addConstraint(void* c);
};

extern "C" void* __stdcall sub_5A4760(int id);
extern "C" void __stdcall sub_5A4CF0(void* p, void* v);
extern "C" void* __stdcall sub_609150(RotatePJoint* self);

void RotatePJoint::putInKernel(void* kernel)
{
    int id = *(int*)((char*)this + 0x88);
    *(int*)((char*)this + id * 8 + 0x8c) = *(int*)((char*)&kernel + 4);
    id = *(int*)((char*)this + 0x88);
    *(int*)((char*)this + id * 8 + 0x90) = *(int*)((char*)&kernel + 8);
    id = *(int*)((char*)this + 0x88);
    *(int*)((char*)this + id * 4 + 0xac) = (int)kernel;

    void* c = sub_609150(this);
    int v = *(int*)((char*)c + 0x38);
    void* p = (char*)c + 0x34;
    void* r = sub_5A4760((int)kernel);
    *(int*)r = v;
    sub_5A4CF0(p, &kernel);
    *(int*)((char*)this + 0x88) += 1;
}
