// from server: 91% by colin
// roc 2007-08 00555e60  unit: RBX::GuiRoot  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00555e60
//
// 00555e60  8b442404             mov eax, dword ptr [esp + 4]
// 00555e64  d905641e8c00         fld dword ptr [0x8c1e64]
// 00555e6a  d918                 fstp dword ptr [eax]
// 00555e6c  d905681e8c00         fld dword ptr [0x8c1e68]
// 00555e72  d95804               fstp dword ptr [eax + 4]
// 00555e75  c20400               ret 4

struct GuiRoot
{
    void setSize(float* out);
};

extern float g_8c1e64;
extern float g_8c1e68;

void GuiRoot::setSize(float* out)
{
    out[0] = g_8c1e64;
    out[1] = g_8c1e68;
}
