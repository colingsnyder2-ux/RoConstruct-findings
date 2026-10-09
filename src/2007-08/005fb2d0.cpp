// from server: 71% by colin
// roc 2007-08 005fb2d0  unit: RBX::LeftMotorTool  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb2d0
//
// 005fb2d0  56                   push esi
// 005fb2d1  8b742408             mov esi, dword ptr [esp + 8]
// 005fb2d5  8b0e                 mov ecx, dword ptr [esi]
// 005fb2d7  e8848af7ff           call 0x573d60
// 005fb2dc  6a07                 push 7
// 005fb2de  8bce                 mov ecx, esi
// 005fb2e0  e88bdffbff           call 0x5b9270
// 005fb2e5  6a01                 push 1
// 005fb2e7  8bce                 mov ecx, esi
// 005fb2e9  e8d2dffbff           call 0x5b92c0
// 005fb2ee  d90514cf7b00         fld dword ptr [0x7bcf14]
// 005fb2f4  51                   push ecx
// 005fb2f5  8bce                 mov ecx, esi
// 005fb2f7  d91c24               fstp dword ptr [esp]
// 005fb2fa  e881e0fbff           call 0x5b9380
// 005fb2ff  d905b07e7900         fld dword ptr [0x797eb0]
// 005fb305  51                   push ecx
// 005fb306  8bce                 mov ecx, esi
// 005fb308  d91c24               fstp dword ptr [esp]
// 005fb30b  e840e1fbff           call 0x5b9450
// 005fb310  8b0e                 mov ecx, dword ptr [esi]
// 005fb312  e8698af7ff           call 0x573d80
// 005fb317  5e                   pop esi
// 005fb318  c20400               ret 4

struct SurfaceTool {
    void setSurfaceType(int);
    void setSurfaceId(int);
    void setSurfaceParamA(float);
    void setSurfaceParamB(float);
};

struct LeftMotorTool {
    void doAction(SurfaceTool* surface);
};

extern float g_motorParamA;
extern float g_motorParamB;

void LeftMotorTool::doAction(SurfaceTool* surface)
{
    ((SurfaceTool*)*(void**)surface)->setSurfaceType(7);
    surface->setSurfaceId(1);
    surface->setSurfaceParamA(g_motorParamA);
    surface->setSurfaceParamB(g_motorParamB);
    ((SurfaceTool*)*(void**)surface)->setSurfaceId(1);
}
