// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SharedPtr {
    void* p;
    void* ctrl;
};

struct InputObject {
    void* vptr;
    long refA;
    long refB;
};

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
};

struct ResizeTool {
    char pad0[0x24];
    SharedPtr target;      // 0x24
    char pad2c[0x04];
    int moveAxis;          // 0x30
    Vector3 movePerp;      // 0x34
    char pad40[0x04];
    int moveDelta;         // 0x44

    void capturedDrag(int axisDelta);
    void findTargetPV(const SharedPtr& inputObject);
    SharedPtr* getTarget();
};

extern "C" void __cdecl sub_51d890(Vector3* out, const Vector3* a, const Vector3* b);
extern "C" void __cdecl sub_5ac2c0(Vector3* out, const Vector3* a, const Vector3* b);
extern "C" void __cdecl sub_5e3b90(ResizeTool* self, Vector3* out, SharedPtr* in);
extern "C" double __cdecl sub_631128(double x);
extern float g_79646c;

SharedPtr* ResizeTool_getTarget(ResizeTool* self);

void ResizeTool::findTargetPV(const SharedPtr& inputObject)
{
    if (this->target.p == 0)
        return;
    if (*((int*)this->target.p + 1) == 0)
        return;

    SharedPtr* t = ResizeTool_getTarget(this);
    void* obj = t->p;
    int* vtable = *(int**)((char*)obj + 0xec);
    int off = *(int*)((char*)vtable + 8);
    void* adj = (char*)obj + off + 0xec;
    int* vt2 = *(int**)adj;
    int (*fn)(void*, Vector3*) = (int (*)(void*, Vector3*))*(int*)vt2;

    Vector3 out;
    fn(adj, &out);

    int axis = this->moveAxis;
    int q = axis / 3;
    int r = axis - q * 3;
    int idx = r;
    float f0 = ((float*)&out)[idx];
    float f1 = ((float*)&out)[idx + 3];
    float f2 = ((float*)&out)[idx + 6];

    int factor = 1 - q * 2;
    float ff = (float)factor;
    Vector3 scaled;
    scaled.x = f0 * ff;
    scaled.y = f1 * ff;
    scaled.z = f2 * ff;

    if (inputObject.p != 0) {
        long old = _InterlockedExchangeAdd((volatile long*)((char*)inputObject.p + 4), -1);
        if (old == 1) {
            void** vt = *(void***)inputObject.p;
            void (*d)(void*) = (void (*)(void*))vt[1];
            d(inputObject.p);
            long old2 = _InterlockedExchangeAdd((volatile long*)((char*)inputObject.p + 8), -1);
            if (old2 == 1) {
                void** vt2b = *(void***)inputObject.p;
                void (*d2)(void*) = (void (*)(void*))vt2b[2];
                d2(inputObject.p);
            }
        }
    }

    Vector3 tmp;
    sub_51d890(&tmp, &scaled, &this->movePerp);

    Vector3 tmp2;
    sub_5e3b90(this, &tmp2, (SharedPtr*)&inputObject);

    Vector3 tmp3;
    sub_5ac2c0(&tmp3, &tmp2, &tmp);

    float dx = tmp.x - this->movePerp.x;
    float dy = tmp.y - this->movePerp.y;
    float dz = tmp.z - this->movePerp.z;

    float dot = dx * tmp3.x + dy * tmp3.y + dz * tmp3.z;

    float delta = dot - (float)this->moveDelta;

    if (delta >= 1.0f) {
        int n = (int)sub_631128((double)delta);
        this->moveDelta += n;
        this->capturedDrag(n);
    } else if (delta <= g_79646c) {
        int n = (int)sub_631128((double)(-delta));
        n = -n;
        this->moveDelta += n;
        this->capturedDrag(n);
    }
}
