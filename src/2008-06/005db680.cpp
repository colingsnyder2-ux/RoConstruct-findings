// from server: 37% by colin
struct Vec3 { float x, y, z; };

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
};

struct Humanoid {
    char pad0[0x104];
    Obj* obj104;
    char pad1[0x1a8 - 0x108];
    float f1a8;
    float f1ac;
    void func(Obj* a, Obj* b);
};

extern "C" {
    float g_8163a4;
    float g_819ba4;
    float g_819bac;
    float g_81e37c;
    float g_8222f0;
    float g_83d7e0;
}

double __cdecl sqrt(double);

Obj* func_5d8a10();
Obj* func_598cb0(Obj*);
void func_510d00(Obj*, Vec3*, Vec3*, Vec3*);
Obj* func_5107b0(Obj*, Vec3*);
Obj* func_49ab50(Obj*);
void func_5d6180(Obj*, Vec3*, Obj*);
Obj* func_514a60();
Obj* func_5149f0();
Obj* func_5185d0(Vec3*, Vec3*, Vec3*, int, int, int, int, double, Vec3*);
Obj* func_5d7560();
void func_4f35d0(Vec3*, Vec3*, Vec3*, Vec3*);
Obj* func_5148b0();

void Humanoid::func(Obj* a, Obj* b)
{
    Obj* o = func_5d8a10();
    if (!o) return;

    Obj* r = func_598cb0(o);
    Vec3 p;
    p.x = *(float*)((char*)r + 0x24);
    p.y = *(float*)((char*)r + 0x28);
    p.z = *(float*)((char*)r + 0x2c);
    p.z += g_81e37c;

    Vec3 tmp;
    (*(void (__thiscall**)(Obj*, Vec3*))(*(char**)a + 0x10))(a, &tmp);

    Vec3 v1, v2;
    func_510d00(b, &v1, &p, &tmp);
    Obj* q = func_5107b0(b, &v2);

    float dx = *(float*)((char*)q + 0x24) - p.x;
    float dy = *(float*)((char*)q + 0x28) - p.y;
    float dz = *(float*)((char*)q + 0x2c) - p.z;
    float dist = dx*dx + dy*dy + dz*dz;
    dist = (float)sqrt(dist);

    if (g_8163a4 >= dist) return;
    if (g_83d7e0 >= *(float*)((char*)o + 0x1e8)) return;

    int mode = 8;
    if (g_8222f0 < dist) {
        mode = 0xc;
    } else if (g_819ba4 == dist) {
        mode = 0xa;
    }

    Obj* sp = func_49ab50(a);
    Vec3 v3;
    if (sp) {
        func_5d6180(sp, &v3, a);
    } else {
        Obj* t = func_514a60();
        v3 = *(Vec3*)t;
    }

    Obj* t2 = func_5149f0();
    Vec3 v4 = *(Vec3*)t2;

    Vec3 v9;
    v9.x = 1.0f;
    v9.y = 1.0f;
    v9.z = 1.0f;

    Vec3 v10;
    func_5185d0(&v10, &v1, &v2, mode, 2, 3, 0, (double)mode, &v9);

    Obj* o2 = *(Obj**)a;
    void (__thiscall* fn)(Obj*, Vec3*, Obj*, Vec3*) = *(void (__thiscall**)(Obj*, Vec3*, Obj*, Vec3*))((char*)o2 + 0x34);
    fn(a, &v10, obj104, &v4);

    float f = (float)mode;
    float half = f * g_819bac;
    float ratio = f1a8 / f1ac;

    Vec3 v11;
    v11.x = v1.x - half;
    v11.y = v1.y + half;
    v11.z = v1.z;

    Vec3 v12;
    v12.x = v2.x - half;
    v12.y = v2.y + half;
    v12.z = v2.z;

    Vec3 v13;
    v13.x = v11.x + ratio;
    v13.y = v11.y + ratio;
    v13.z = v11.z + ratio;

    Vec3 v14;
    v14.x = v12.x + ratio;
    v14.y = v12.y + ratio;
    v14.z = v12.z + ratio;

    Obj* t3 = func_5d7560();
    Vec3 v15 = *(Vec3*)t3;

    Vec3 v17;
    v17.x = 1.0f;
    v17.y = 1.0f;
    v17.z = 1.0f;

    Vec3 v18;
    func_4f35d0(&v18, &v15, &v13, &v17);

    void (__thiscall* fn2)(Obj*, Vec3*, Vec3*) = *(void (__thiscall**)(Obj*, Vec3*, Vec3*))((char*)*(Obj**)a + 0x2c);
    fn2(a, &v18, &v14);

    Obj* t4 = func_5148b0();
    Vec3 v19 = *(Vec3*)t4;

    Vec3 v21;
    v21.x = 1.0f;
    v21.y = 1.0f;
    v21.z = 1.0f;

    Vec3 v22;
    func_4f35d0(&v22, &v19, &v11, &v21);

    void (__thiscall* fn3)(Obj*, Vec3*, Vec3*) = *(void (__thiscall**)(Obj*, Vec3*, Vec3*))((char*)*(Obj**)a + 0x2c);
    fn3(a, &v22, &v12);
}
