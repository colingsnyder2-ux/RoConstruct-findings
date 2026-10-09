// from server: 79% by colin
// roc 2007-08 005fb280  unit: RBX::RightMotorTool  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb280
//
// 005fb280  56                   push esi
// 005fb281  8b742408             mov esi, dword ptr [esp + 8]
// 005fb285  8b0e                 mov ecx, dword ptr [esi]
// 005fb287  e8d48af7ff           call 0x573d60
// 005fb28c  6a07                 push 7
// 005fb28e  8bce                 mov ecx, esi
// 005fb290  e8dbdffbff           call 0x5b9270
// 005fb295  6a02                 push 2
// 005fb297  8bce                 mov ecx, esi
// 005fb299  e822e0fbff           call 0x5b92c0
// 005fb29e  d90514cf7b00         fld dword ptr [0x7bcf14]
// 005fb2a4  51                   push ecx
// 005fb2a5  8bce                 mov ecx, esi
// 005fb2a7  d91c24               fstp dword ptr [esp]
// 005fb2aa  e8d1e0fbff           call 0x5b9380
// 005fb2af  d905b07e7900         fld dword ptr [0x797eb0]
// 005fb2b5  51                   push ecx
// 005fb2b6  8bce                 mov ecx, esi
// 005fb2b8  d91c24               fstp dword ptr [esp]
// 005fb2bb  e890e1fbff           call 0x5b9450
// 005fb2c0  8b0e                 mov ecx, dword ptr [esi]
// 005fb2c2  e8b98af7ff           call 0x573d80
// 005fb2c7  5e                   pop esi
// 005fb2c8  c20400               ret 4

struct SurfaceTool {
    void setVerb(int);
    void setStickyVerb(int);
    void setCursorName(float);
    void setCursor(float);
};

struct RightMotorTool {
    void construct(SurfaceTool*);
};

extern float g_float_7bcf14;
extern float g_float_797eb0;

void RightMotorTool::construct(SurfaceTool* t)
{
    ((SurfaceTool*)*(void**)t)->setVerb(7);
    t->setVerb(7);
    t->setStickyVerb(2);
    t->setCursorName(g_float_7bcf14);
    t->setCursor(g_float_797eb0);
    ((SurfaceTool*)*(void**)t)->setVerb(7);
}
