// from server: 40% by colin
struct UserInputBase {
    void onSteppedTouchInput(int);
};

struct Vector3 {
    float x, y, z;
};

struct RbxRay {
    Vector3 origin;
    Vector3 direction;
};

struct InputObject {
    void* vtable;
    void release();
};

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __cdecl sub_474F70(void*, void*);
extern "C" void __cdecl sub_4E0180(Vector3*, Vector3*, Vector3*);
extern "C" void __cdecl sub_457DD0(void*);

extern float g_float_797E9C;

void UserInputBase::onSteppedTouchInput(int param)
{
    InputObject* obj = 0;

    void* vtable = *(void**)this;
    void (__thiscall *fn1)(void*, void*, int) = *(void (__thiscall**)(void*, void*, int))((char*)vtable + 4);
    fn1(this, &obj, param);

    if (obj) {
        void* tmp = 0;
        sub_474F70(&tmp, &obj);

        Vector3 corners[4];
        void (__thiscall *fn2)(void*, Vector3*) = *(void (__thiscall**)(void*, Vector3*))((char*)*(void**)param + 0x1c);
        fn2((void*)param, corners);

        float f = g_float_797E9C;
        Vector3 a, b, c, d;
        a.x = corners[0].x * f;
        a.y = corners[0].y * f;
        a.z = corners[0].z * f;
        b.x = corners[1].x * f;
        b.y = corners[1].y * f;
        b.z = corners[1].z * f;
        c.x = corners[2].x * f;
        c.y = corners[2].y * f;
        c.z = corners[2].z * f;
        d.x = corners[3].x * f;
        d.y = corners[3].y * f;
        d.z = corners[3].z * f;

        Vector3 out1, out2;
        sub_4E0180(&out1, &a, &b);
        sub_4E0180(&out2, &c, &d);

        Vector3 origin, dir;
        void (__thiscall *fn3)(void*, Vector3*) = *(void (__thiscall**)(void*, Vector3*))((char*)*(void**)this + 0);
        fn3(this, &origin);
        origin.x += out1.x;
        origin.y += out1.y;
        origin.z += out1.z;

        dir.x = out2.x;
        dir.y = out2.y;
        dir.z = out2.z;

        RbxRay ray;
        ray.origin = origin;
        ray.direction = dir;

        void* tmp2 = 0;
        sub_474F70(&tmp2, &obj);

        void (__thiscall *fn4)(void*, int) = *(void (__thiscall**)(void*, int))((char*)*(void**)param + 0x18);
        fn4((void*)param, 0);

        Vector3 one;
        one.x = 1.0f;
        one.y = 1.0f;
        one.z = 1.0f;

        void (__thiscall *fn5)(void*, Vector3*, Vector3*) = *(void (__thiscall**)(void*, Vector3*, Vector3*))((char*)*(void**)param + 0x28);
        fn5((void*)param, &one, &ray.origin);

        void* tmp3 = 0;
        void (__thiscall *fn6)(void*, int) = *(void (__thiscall**)(void*, int))((char*)*(void**)param + 0x18);
        fn6((void*)param, 0);
    }

    if (obj) {
        if (InterlockedDecrement((int*)((char*)obj + 4)) == 0) {
            sub_457DD0(obj);
            if (obj) {
                void (__thiscall *fn7)(void*, int) = *(void (__thiscall**)(void*, int))((char*)*(void**)obj + 0);
                fn7(obj, 1);
            }
        }
    }
}
