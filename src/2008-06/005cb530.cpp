// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Vec3 { float x, y, z; };

struct Controller {
    char pad0[0xc];
    void* field_c;
    char pad10[0xc];
    int field_1c;
    void update(float dt);
};

struct BoundButton {
    char pad0[0x10];
    bool b0, b1, b2, b3, b4, b5, b6, b7, b8;
};

extern "C" {
    void* __cdecl func_0049aca0(void*);
    void* __cdecl func_00491e50(void*);
    void* __cdecl func_0045af00(void*, void*);
    void* __cdecl func_005d9a20(void*);
    void* __cdecl func_005caba0(void*);
    void* __cdecl func_005cab00(void*, void*);
    void* __cdecl func_005ce960(void*, void*);
    void* __cdecl func_005a0160(void*);
    void* __cdecl func_005ca400(void*);
    void* __cdecl func_005ca3c0(void*);
    void* __cdecl func_005ca3e0(void*);
    void* __cdecl func_005ca390(void*);
    void* __cdecl func_005187f0(void*);
    void* __cdecl func_00518470(void*, float);
    void* __cdecl func_005dbf80(void*, void*);
    void* __cdecl func_005ccb00(void*);
    void* __cdecl func_005dc230(void*, int);
    void* __cdecl func_005dc270(void*, int);
    void* __cdecl func_005dc2b0(void*, int);
    void* __cdecl func_005cc810(void*, float);
}

extern float g_826e70;
extern float g_827494;
extern float g_8378c0;
extern float g_81c3b8;
extern float g_8135c4;

void Controller::update(float dt) {
    void* a = func_005caba0((char*)this - 0xc);
    void* tmp = 0;
    void* b = func_005cab00((char*)this + 0xc, &tmp);
    void* ebp = *(void**)b;
    if (tmp) {
        long* refs = (long*)((char*)tmp + 4);
        if (_InterlockedExchangeAdd(refs, -1) == 1) {
            void** vt = *(void***)tmp;
            ((void(__thiscall*)(void*))vt[1])(tmp);
            long* refs2 = (long*)((char*)tmp + 8);
            if (_InterlockedExchangeAdd(refs2, -1) == 1) {
                void** vt2 = *(void***)tmp;
                ((void(__thiscall*)(void*))vt2[2])(tmp);
            }
        }
    }
    void* edi = func_0049aca0(ebp);
    if (ebp == edi) {
        ebp = func_005d9a20(edi);
    } else {
        ebp = 0;
    }
    void* eax = func_00491e50(edi);
    if (a == 0 || ebp == 0 || eax == 0) return;

    void* ecx = (char*)eax + 0x288;
    void** vt = *(void***)ecx;
    void* edi2 = ((void*(__thiscall*)(void*))vt[1])(ecx);

    BoundButton bb;
    bb.b0 = bb.b1 = bb.b2 = bb.b3 = bb.b4 = bb.b5 = bb.b6 = bb.b7 = bb.b8 = 0;
    func_005ce960(a, &bb);

    if (bb.b0 || bb.b1) {
        if (bb.b2 || bb.b3) {
            float f = *(float*)func_005ca3e0(&bb);
            f *= dt;
            f *= g_8378c0;
            func_005cc810(edi2, f);
            this->field_1c++;
        } else {
            this->field_1c = 0;
        }
        float scale;
        if (bb.b0) scale = 1.0f;
        else if (bb.b1) scale = g_81c3b8;
        else scale = 0.0f;
        Vec3 v;
        func_0045af00(edi2, &v);
        func_005187f0(&v);
        func_00518470(&v, g_826e70);
        Vec3 out;
        out.x = v.x * scale;
        out.y = v.y * scale;
        out.z = v.z * scale;
        func_005dbf80(ebp, &out);
    } else {
        if (!bb.b2 && !bb.b3) {
            this->field_1c = 0;
        } else {
            float f = *(float*)func_005ca3e0(&bb);
            f *= dt;
            f *= g_8378c0;
            func_005cc810(edi2, f);
            this->field_1c++;
        }
        float scale;
        if (bb.b0) scale = 1.0f;
        else if (bb.b1) scale = g_81c3b8;
        else scale = 0.0f;
        Vec3 v;
        func_0045af00(edi2, &v);
        func_005187f0(&v);
        func_00518470(&v, g_826e70);
        Vec3 out;
        out.x = v.x * scale;
        out.y = v.y * scale;
        out.z = v.z * scale;
        func_005dbf80(ebp, &out);
    }

    if (func_005ccb00(edi2)) {
        func_005dc230(ebp, 1);
    } else {
        func_005dc230(ebp, 0);
    }

    if (bb.b8) {
        func_005dc2b0(ebp, 0);
        func_005dc270(ebp, 1);
    }
    func_005ca390(a);
}
