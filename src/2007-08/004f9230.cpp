// from server: 1% by colin
struct G3D_LightingParameters {
    char pad[0x2ec];
};

struct G3D_Color3 {
    float r, g, b;
};

struct G3D_Color4 {
    float r, g, b, a;
};

struct RefCounted {
    void AddRef();
    void Release();
};

extern "C" {
    long __stdcall InterlockedDecrement(long volatile*);
}

struct Sky;

struct Lighting {
    char pad0[0x2ec];
    G3D_LightingParameters skyParameters;
    char pad1[0x10];
    G3D_Color3 clearColor;
    float clearAlpha;
    G3D_Color3 shadowColor;
    G3D_Color3 fogColor;
    float fogStart;
    float fogEnd;
    char pad2[0x2c];
    void* sky;

    void constructor(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

void sub_474f70(void*, int);
void sub_4f7660(void*, void*);
void sub_4f8fa0(void*);
void sub_50ab80(void*, void*, void*, void*, void*, void*);
void sub_4f85c0(void*, void*);
void sub_4f8040(void*, void*);
void sub_4f84e0(void*, void*);
void sub_457dd0(void*);

void Lighting::constructor(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63, int a64, int a65, int a66, int a67, int a68, int a69)
{
}
