// from server: 100% by colin
// roc 2007-08 00596a10  unit: RBX::LaserTool  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596a10
//
// 00596a10  56                   push esi
// 00596a11  8bf1                 mov esi, ecx
// 00596a13  8b06                 mov eax, dword ptr [esi]
// 00596a15  8b5044               mov edx, dword ptr [eax + 0x44]
// 00596a18  ffd2                 call edx
// 00596a1a  dd86e8000000         fld qword ptr [esi + 0xe8]
// 00596a20  5e                   pop esi
// 00596a21  c3                   ret 

struct RBX_LaserTool {
    double getValue();
};

double RBX_LaserTool::getValue()
{
    (*(void (__thiscall **)(void *))(*(int *)this + 0x44))(this);
    return *(double *)((char *)this + 0xe8);
}
