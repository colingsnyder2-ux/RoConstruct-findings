// from server: 44% by colin
struct G3DVector3 {
    float x, y, z;
};

struct G3DCoordinateFrame {
    float r0c0, r0c1, r0c2, r0c3;
    float r1c0, r1c1, r1c2, r1c3;
    float r2c0, r2c1, r2c2, r2c3;
};

struct G3DLightingParameters {
    G3DVector3 color;
    G3DVector3 direction;
    float something;
};

struct G3DRenderDevice {
    void setObjectToWorldMatrix(const G3DCoordinateFrame&);
    void setLighting(const G3DLightingParameters&);
    void setColor(const G3DVector3&);
    void setDepthWrite(bool);
    void setCullFace(int);
    void setBlendMode(int);
    void setTexture(int, void*);
    void setVertexBuffer(void*);
    void drawIndexed(int, int, int);
};

struct TextureId {
    void* ptr;
};

struct Sky {
    char pad0[0x50];
    bool drawCelestialBodies;
    char pad1[0x3e1 - 0x51];
    bool flag3e1;
    char pad2[0x4a8 - 0x3e2];
    G3DCoordinateFrame skyFrame;
    char pad3[0x890 - 0x4e8];
    double something890;
    char pad4[0x78];
    int counter78;
    char pad5[0x70];
    int counter70;
    char pad6[0x3e1 - 0x74];

    void method473780(int);
    void method4739d0(int);
    void method478450(int);
    void method479690();
    void method4796d0();
    void method474560();
    void method475df0(void*);
    void method4744e0(void*);
    void method475050();
    void method732230();
    void method732540(Sky*);
    void method732be0(Sky*, void*);
    void method732fa0(Sky*, void*);
};

struct PartDragger {
    char pad0[0x50];
    bool flag50;

    void method732540(Sky*);
    void method732be0(Sky*, void*);
    void method732fa0(Sky*, void*);
};

extern "C" {
    void __stdcall glColor3fv(const float*);
    void __stdcall glDepthMask(unsigned char);
}

extern float g_8bd12c;
extern float g_8bd130;
extern float g_8bd134;
extern unsigned int g_8bd138;

void PartDragger::method732540(Sky* sky) {
    G3DVector3 color;
    G3DCoordinateFrame frame;
    G3DLightingParameters lighting;
    void* tex;
    void* vb;
    float f;

    sky->method479690();
    sky->method732230();

    if ((g_8bd138 & 1) == 0) {
        g_8bd138 |= 1;
        g_8bd12c = 0.0f;
        g_8bd130 = 0.0f;
        g_8bd134 = 0.0f;
    }

    glColor3fv(&g_8bd12c);

    sky->method474560();
    sky->method475df0(&frame);
    sky->method475050();
    sky->method4744e0(&lighting);

    f = (float)sky->something890;
    color.x = f * *(float*)((char*)sky + 0xc);
    color.y = f * *(float*)((char*)sky + 0x10);
    color.z = f * *(float*)((char*)sky + 0x14);

    sky->skyFrame.r0c0 = color.x;
    sky->skyFrame.r0c1 = color.y;
    sky->skyFrame.r0c2 = color.z;
    sky->skyFrame.r0c3 = 1.0f;

    glDepthMask(1);

    sky->method473780(1);
    sky->counter78 += 1;

    if (sky->flag3e1) {
        sky->counter70 += 1;
        glDepthMask(0);
        sky->flag3e1 = false;
    }

    sky->method4739d0(6);
    sky->method478450(0);

    method732540(sky);

    if (flag50) {
        method732be0(sky, 0);
        method732fa0(sky, 0);
    }

    sky->method4796d0();
}
