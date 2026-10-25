// from server: 100% by tester
// roc 2008-06 005c8e50  unit: RBX::LaserTool  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8e50
//
// 005c8e50  56                   push esi
// 005c8e51  8bf1                 mov esi, ecx
// 005c8e53  8b06                 mov eax, dword ptr [esi]
// 005c8e55  8b5040               mov edx, dword ptr [eax + 0x40]
// 005c8e58  ffd2                 call edx
// 005c8e5a  dd8630010000         fld qword ptr [esi + 0x130]
// 005c8e60  5e                   pop esi
// 005c8e61  c3                   ret 

struct RBX_LaserTool {
    double getValue();
};

double RBX_LaserTool::getValue()
{
    (*(void (__thiscall **)(void *))(*(int *)this + 0x40))(this);
    return *(double *)((char *)this + 0x130);
}