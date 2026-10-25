// from server: 100% by tester
// roc 2008-06 004ca5b0  unit: RBX::Network::RoundRobinPhysicsSender  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ca5b0
//
// 004ca5b0  8b442404             mov eax, dword ptr [esp + 4]
// 004ca5b4  8b08                 mov ecx, dword ptr [eax]
// 004ca5b6  8bc1                 mov eax, ecx
// 004ca5b8  c1e803               shr eax, 3
// 004ca5bb  03c1                 add eax, ecx
// 004ca5bd  c3                   ret 

int __cdecl sub_5122C0(unsigned int* p)
{
    unsigned int v = *p;
    return (v >> 3) + v;
}
