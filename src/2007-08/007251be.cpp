// from server: 66% by colin
// roc 2007-08 007251be  unit: CXTIconHandle  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007251be
//
// 007251be  8b4904               mov ecx, dword ptr [ecx + 4]
// 007251c1  8b01                 mov eax, dword ptr [ecx]
// 007251c3  ff6004               jmp dword ptr [eax + 4]

struct Child {
    virtual int f0();
    virtual int f1();
};

struct CXTIconHandle {
    int m_pad;
    Child* m_child;
    int method();
};

int CXTIconHandle::method()
{
    return m_child->f1();
}
