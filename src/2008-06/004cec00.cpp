// from server: 100% by atomic.potato
// roc 2008-06 004cec00  unit: RBX::Network::PhysicsSender  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cec00
//
// 004cec00  dd442404             fld qword ptr [esp + 4]
// 004cec04  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cec08  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cec0c  dd99a0070000         fstp qword ptr [ecx + 0x7a0]
// 004cec12  8981a8070000         mov dword ptr [ecx + 0x7a8], eax
// 004cec18  8991ac070000         mov dword ptr [ecx + 0x7ac], edx
// 004cec1e  c21000               ret 0x10

struct PhysicsSender
{
    void f(double value, int first, int second);
};

void PhysicsSender::f(double value, int first, int second)
{
    *(double*)((char*)this + 0x7a0) = value;
    *(int*)((char*)this + 0x7a8) = first;
    *(int*)((char*)this + 0x7ac) = second;
}
