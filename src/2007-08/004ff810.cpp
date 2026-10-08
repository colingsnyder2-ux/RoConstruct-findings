// from server: 76% by colin
// roc 2007-08 004ff810  unit: G3D::Shader  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ff810
//
// 004ff810  8b442404             mov eax, dword ptr [esp + 4]
// 004ff814  85c0                 test eax, eax
// 004ff816  740c                 je 0x4ff824
// 004ff818  8b40fc               mov eax, dword ptr [eax - 4]
// 004ff81b  89442404             mov dword ptr [esp + 4], eax
// 004ff81f  e9ccffffff           jmp 0x4ff7f0
// 004ff824  c3                   ret 

struct Shader {
    void release();
    void addRef();
};

void Shader::release()
{
    Shader* p = *(Shader**)((char*)this + 4);
    if (p) {
        p = *(Shader**)((char*)p - 4);
        *(Shader**)((char*)this + 4) = p;
        p->addRef();
    }
}
