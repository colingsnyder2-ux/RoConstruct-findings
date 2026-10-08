// from server: 100% by colin
// roc 2007-08 004c4b70  unit: RakPeer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4b70
//
// 004c4b70  dd442404             fld qword ptr [esp + 4]
// 004c4b74  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c4b78  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c4b7c  dd9990070000         fstp qword ptr [ecx + 0x790]
// 004c4b82  898198070000         mov dword ptr [ecx + 0x798], eax
// 004c4b88  89919c070000         mov dword ptr [ecx + 0x79c], edx
// 004c4b8e  c21000               ret 0x10

struct RakPeer
{
    void setLimit(double value, int a, int b);
};

void RakPeer::setLimit(double value, int a, int b)
{
    *(double*)((char*)this + 0x790) = value;
    *(int*)((char*)this + 0x798) = a;
    *(int*)((char*)this + 0x79c) = b;
}
