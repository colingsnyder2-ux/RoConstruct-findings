// from server: 28% by atomic.potato
struct Vec3 { float x, y, z; };

struct CylinderBuilder {
    char pad0[4];
    void build();
};

extern "C" void __stdcall sub_5ec220(void*, void*);
extern "C" void* __stdcall sub_6a0956(int);
extern "C" void* __stdcall sub_509ba0();
extern "C" void __stdcall sub_4fdbd0(void*, void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_548000(void*, void*, void*, int);
extern "C" void __stdcall sub_500eb0(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_548640(void*);
extern "C" void __stdcall sub_6a094a(void*);

extern float g_819bac;

void CylinderBuilder::build()
{
    char buf[0x84];
    void** verts;
    int i, j;
    int nRows, nCols;
    float uStep, vStep;
    float u0, v0;
    float uCur, vCur;
    float uAcc, vAcc;
    float du, dv;
    float tmp1, tmp2, tmp3;
    float f1, f2;
    Vec3 pt;
    Vec3 pt2;
    Vec3 pt3;
    int total;

    sub_5ec220(&buf[0x60], (char*)this + 4);

    tmp1 = *(float*)&buf[0x64];
    if (tmp1 < 0) tmp1 = -tmp1;
    tmp2 = *(float*)&buf[0x68];
    if (tmp2 < 0) tmp2 = -tmp2;
    tmp3 = *(float*)&buf[0x6c];
    if (tmp3 < 0) tmp3 = -tmp3;

    nRows = *(short*)((char*)&buf[0] + 0x38);
    nCols = *(short*)((char*)&buf[0] + 0x3a);

    {
        float a = *(float*)((char*)&buf[0] + 0x18) - *(float*)((char*)&buf[0] + 0x10);
        float b = *(float*)((char*)&buf[0] + 0x1c) - *(float*)((char*)&buf[0] + 0x14);
        float c = *(float*)((char*)&buf[0] + 0x2c);
        float d = *(float*)((char*)&buf[0] + 0x30);
        uStep = a / (float)(nRows + 1);
        vStep = b / (float)(nCols + 1);
        du = c / (float)(nRows + 1);
        dv = d / (float)(nCols + 1);
    }

    total = (nRows + 1) * (nCols + 1);
    verts = (void**)sub_6a0956(total * 4);

    u0 = *(float*)((char*)&buf[0] + 0x10);
    v0 = *(float*)((char*)&buf[0] + 0x24);

    for (i = 0; i <= nRows; i++) {
        uCur = *(float*)((char*)&buf[0] + 0x14);
        vCur = *(float*)((char*)&buf[0] + 0x28);
        for (j = 0; j <= nCols; j++) {
            float uu = u0;
            float vv = vCur;
            float ww = *(float*)((char*)&buf[0] + 0x20);
            pt.x = uu;
            pt.y = vv;
            pt.z = ww;
            pt2.x = uu;
            pt2.y = vv;
            pt2.z = 1.0f;
            sub_4fdbd0((char*)&buf[0] + 8, &pt, &pt2, &pt3, &pt, &pt2);
            {
                float* r = (float*)sub_509ba0();
                if (r[0] == *(float*)((char*)&buf[0] + 0x2c) &&
                    r[1] == *(float*)((char*)&buf[0] + 0x30)) {
                    f1 = *(float*)((char*)&buf[0] + 0x24);
                    f2 = *(float*)((char*)&buf[0] + 0x28);
                } else {
                    f1 = pt.x;
                    f2 = pt.y;
                }
                f1 *= g_819bac;
                f2 *= g_819bac;
                sub_5ec220(&buf[0x54], &f1);
                sub_5ec220(&buf[0x68], &f2);
                sub_548000(&buf[0x90], &buf[0x60], &buf[0x54], 1);
                uAcc += *(float*)&buf[0x60];
                vAcc += *(float*)&buf[0x68];
                verts[(nCols + 1) * i + j] = (void*)0;
            }
            uCur += uStep;
            vCur += vStep;
        }
        u0 += du;
        v0 += dv;
    }

    for (i = 0; i < nRows; i++) {
        for (j = 0; j < nCols; j++) {
            int a = (nCols + 1) * i + j;
            int b = a + 1;
            int c = a + (nCols + 1);
            int d = c + 1;
            sub_500eb0((char*)&buf[0] + 8, verts[a], verts[b], verts[c], verts[d]);
        }
    }

    for (i = 0; i < total; i++) {
        sub_548640(verts[i]);
    }
    sub_6a094a(verts);
}
