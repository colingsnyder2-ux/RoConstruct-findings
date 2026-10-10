// from server: 26% by colin
struct Vector3 {
    float x, y, z;
};

struct CFrame {
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
    float x, y, z;
};

struct BodyMover {
    char pad0[0xfc];
    float m_maxForce;
    float m_maxTorque;
    float m_maxSpeed;
    float m_maxAngularSpeed;
    char pad1[0x110 - 0x10c];
    CFrame m_cf;
    void computeForce(float dt, void* world);
};

extern "C" double __cdecl fabs_helper(double);
extern "C" void __cdecl func_00509460(double, double, double);
extern "C" int __cdecl func_005094b0(double, double);
extern "C" void __cdecl func_00509640(void*, void*, int);
extern "C" void __cdecl func_005095d0(void*, void*);
extern "C" void __cdecl func_005099a0(void*, void*);
extern "C" void __cdecl func_00530100(void*);
extern "C" void __cdecl func_005aad40(void*, void*);
extern "C" void __cdecl func_0061a510(void*);
extern "C" void* __cdecl func_00625100(void*);

void BodyMover::computeForce(float dt, void* world)
{
    float f104 = *(float*)((char*)this + 0x104);
    float f10c = *(float*)((char*)this + 0x10c);
    float f100 = *(float*)((char*)this + 0x100);
    float ffc = *(float*)((char*)this + 0xfc);

    if (f104 != 0.0f) {
        double d = (double)f104;
        double ad = (d < 0) ? -d : d;
        func_00509460(ad, 0.0, 0.0);
        if (ad > 0.0) {
            goto cont;
        }
    }
    if (func_005094b0((double)f10c, 0.0)) {
        return;
    }
cont:
    {
        void* p = *(void**)((char*)world + 4);
        void* q = *(void**)((char*)p + 4);
        void* r = *(void**)((char*)q + 0x20);
        float* src;
        if (r) {
            src = (float*)((char*)r + 0x8c);
        } else {
            static int init = 0;
            static float gx, gy, gz;
            if (!(init & 1)) {
                init |= 1;
                gx = 0.0f;
                gy = 0.0f;
                gz = 0.0f;
            }
            src = &gx;
        }
        float vx = src[0];
        float vy = src[1];
        float vz = src[2];

        CFrame cf;
        func_00509640(&cf, &vx, 1);
        func_00530100(world);

        Vector3 out;
        func_005099a0((char*)world + 0x84, &out);

        float a = out.x * vx + out.y * vy + out.z * vz;
        float b = out.x * cf.r00 + out.y * cf.r10 + out.z * cf.r20;
        float c = out.x * cf.r01 + out.y * cf.r11 + out.z * cf.r21;
        float d = out.x * cf.r02 + out.y * cf.r12 + out.z * cf.r22;

        void* e = *(void**)((char*)p + 0x1c);
        void* mat;
        if (e) {
            mat = func_00625100(e);
        } else {
            mat = (char*)p + 0x58;
        }
        CFrame cf2;
        func_005095d0(&cf2, mat);
        Vector3 v2;
        func_005aad40(&v2, &cf2);

        float t1 = v2.x * v2.y * ffc;
        float t2 = v2.x * v2.z * ffc;

        func_00530100(world);
        Vector3 out2;
        func_005099a0((char*)world + 0x84, &out2);

        float e1 = out2.x * vx + out2.y * vy + out2.z * vz;
        float e2 = out2.x * cf.r00 + out2.y * cf.r10 + out2.z * cf.r20;
        float e3 = out2.x * cf.r01 + out2.y * cf.r11 + out2.z * cf.r21;
        float e4 = out2.x * cf.r02 + out2.y * cf.r12 + out2.z * cf.r22;

        float diff1 = (e1 > 0) ? e1 : -e1;
        float diff2 = (e2 > 0) ? e2 : -e2;

        float f1 = (t1 > diff1) ? t1 : diff1;
        float f2 = (t2 > diff2) ? t2 : diff2;

        func_00530100(world);
        func_00530100(world);

        Vector3 out3;
        func_005099a0((char*)world + 0x84, &out3);

        float g1 = out3.x * (*(float*)((char*)world + 0xc0)) + out3.y * (*(float*)((char*)world + 0xc4)) + out3.z * (*(float*)((char*)world + 0xc8));
        float g2 = out3.x * cf.r00 + out3.y * cf.r10 + out3.z * cf.r20;
        float g3 = out3.x * cf.r01 + out3.y * cf.r11 + out3.z * cf.r21;
        float g4 = out3.x * cf.r02 + out3.y * cf.r12 + out3.z * cf.r22;

        void* e2p = *(void**)((char*)p + 0x1c);
        void* mat2;
        if (e2p) {
            mat2 = func_00625100(e2p);
        } else {
            mat2 = (char*)p + 0x58;
        }
        CFrame cf3;
        func_005095d0(&cf3, mat2);
        Vector3 v3;
        func_005aad40(&v3, &cf3);

        float h1 = f100 * v3.x * g1;
        float h2 = f100 * v3.y * g2;

        float r1 = f1 - h1;
        float r2 = f2 - h2;

        func_00530100(world);

        Vector3 out4;
        func_005099a0((char*)world + 0x84, &out4);

        float i1 = out4.x * vx + out4.y * vy + out4.z * vz;
        float i2 = out4.x * cf.r00 + out4.y * cf.r10 + out4.z * cf.r20;
        float i3 = out4.x * cf.r01 + out4.y * cf.r11 + out4.z * cf.r21;
        float i4 = out4.x * cf.r02 + out4.y * cf.r12 + out4.z * cf.r22;

        float j1 = i1 - v2.x;
        float j2 = i2 - v2.y;
        float j3 = i3 - v2.z;

        void* e3p = *(void**)((char*)q + 0x20);
        if (e3p) {
            if (*(char*)((char*)e3p + 4)) {
                func_0061a510(e3p);
            }
            *(float*)((char*)e3p + 0x8c) += j1;
            *(float*)((char*)e3p + 0x90) += j2;
            *(float*)((char*)e3p + 0x94) += j3;
        }
    }
}
