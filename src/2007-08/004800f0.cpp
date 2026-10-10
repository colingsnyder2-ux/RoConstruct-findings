// from server: 78% by colin
extern "C" __declspec(dllimport) void __stdcall glLoadMatrixf(const float*);

extern "C" void __cdecl sub_480090(void*, float*);

struct G3D_Win32Window {
    char pad[0x24];
    void __cdecl loadMatrix();
};

void __cdecl G3D_Win32Window::loadMatrix()
{
    float m[16];
    sub_480090((char*)this + 0x24, m);
    glLoadMatrixf(m);
}
