// from server: 100% by tester
// roc 2011-06 0052d990  unit: RBX::Network::ProfiledRakPeer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052d990
//
// 0052d990  8b442404             mov eax, dword ptr [esp + 4]
// 0052d994  8b08                 mov ecx, dword ptr [eax]
// 0052d996  8bc1                 mov eax, ecx
// 0052d998  c1e803               shr eax, 3
// 0052d99b  03c1                 add eax, ecx
// 0052d99d  c3                   ret 

int __cdecl sub_5122C0(unsigned int* p)
{
    unsigned int v = *p;
    return (v >> 3) + v;
}
