// from server: 6% by colin
struct G3DVector3 {
    float x, y, z;
};

struct G3DColor4 {
    float r, g, b, a;
};

struct G3DCoordinateFrame {
    float rotation[9];
    G3DVector3 translation;
};

struct Part {
    int type;
    G3DVector3 gridSize;
    G3DColor4 color;
    int surfaceType[6];
    G3DCoordinateFrame coordinateFrame;
};

struct Instance {
    void* vtable;
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct Draw {
    char pad0[0xbc];
    Instance* camera;
    char pad1[4];
    void* selection;
    void* hover;
    char pad2[4];
    bool active;
};

struct DrawAdorn {
    char pad0[0xbc];
    Instance* camera;
    char pad1[4];
    void* selection;
    void* hover;
    char pad2[4];
    bool active;
};

struct DrawPart {
    char pad0[0xbc];
    Instance* camera;
    char pad1[4];
    void* selection;
    void* hover;
    char pad2[4];
    bool active;
};

struct ViewNewPart {
    char pad0[0xbc];
    Instance* camera;
    char pad1[4];
    void* selection;
    void* hover;
    char pad2[4];
    bool active;
    void render();
};

void __cdecl func_00551730();
void __cdecl func_0045ad90();
void __cdecl func_005b6270();
void __cdecl func_006a17c6();
void __cdecl func_004e7ff0();
void __cdecl func_0043d050();
void __cdecl func_0043d0a0();
void __cdecl func_005d9a20();
void __cdecl func_005d8c10();
void __cdecl func_005d8d10();
void __cdecl func_005d8b10();
void __cdecl func_005d8e10();
void __cdecl func_005d8f10();
void __cdecl func_00465210();
void __cdecl func_00562670();
void __cdecl func_005ef840();
void __cdecl func_00598fa0();
void __cdecl func_004e6030();
void __cdecl func_00551920();
void __cdecl func_004f1a60();
void __cdecl func_004f1c60();
void __cdecl func_004d7560();
void __cdecl func_00502a70();
void __cdecl func_004f0820();
void __cdecl func_0059eca0();
void __cdecl func_00514be0();
void __cdecl func_004e5f50();
void __cdecl func_004e5f80();
void __cdecl func_0068ff20();
void __cdecl func_0068fef0();

void ViewNewPart::render()
{
    func_00551730();
    func_0045ad90();
    func_005b6270();
    func_006a17c6();
    func_004e7ff0();
    func_0043d050();
    func_0043d0a0();
    func_005d9a20();
    func_005d8c10();
    func_005d8d10();
    func_005d8b10();
    func_005d8e10();
    func_005d8f10();
    func_00465210();
    func_00562670();
    func_005ef840();
    func_00598fa0();
    func_004e6030();
    func_00551920();
    func_004f1a60();
    func_004f1c60();
    func_004d7560();
    func_00502a70();
    func_004f0820();
    func_0059eca0();
    func_00514be0();
    func_004e5f50();
    func_004e5f80();
    func_0068ff20();
    func_0068fef0();
}
