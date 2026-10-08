// from server: 75% by colin
// roc 2007-08 0059c3f0  unit: RBX::UserInputBase  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059c3f0
//
// 0059c3f0  51                   push ecx
// 0059c3f1  56                   push esi
// 0059c3f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059c3f6  c70600000000         mov dword ptr [esi], 0
// 0059c3fc  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0059c3ff  50                   push eax
// 0059c400  8bce                 mov ecx, esi
// 0059c402  c744240800000000     mov dword ptr [esp + 8], 0
// 0059c40a  e8618bedff           call 0x474f70
// 0059c40f  8bc6                 mov eax, esi
// 0059c411  5e                   pop esi
// 0059c412  59                   pop ecx
// 0059c413  c20800               ret 8

struct UserInputBase {
    char pad[0x24];
    int m_value;
};

struct S {
    int f(UserInputBase* other, int unused);
};

extern "C" int __stdcall sub_474f70(void*, int);

int S::f(UserInputBase* other, int unused)
{
    *(int*)other = 0;
    int v = *(int*)((char*)this + 0x24);
    *(int*)((char*)this + 4) = 0;
    sub_474f70(other, v);
    return (int)other;
}
