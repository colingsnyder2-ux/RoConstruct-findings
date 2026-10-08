// from server: 64% by colin
// roc 2007-08 004a1880  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1880
//
// 004a1880  51                   push ecx
// 004a1881  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a1885  8d0424               lea eax, [esp]
// 004a1888  50                   push eax
// 004a1889  51                   push ecx
// 004a188a  c7442408c2000000     mov dword ptr [esp + 8], 0xc2
// 004a1892  e8d9f7ffff           call 0x4a1070
// 004a1897  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a189b  83c408               add esp, 8
// 004a189e  8d1424               lea edx, [esp]
// 004a18a1  52                   push edx
// 004a18a2  e8e9feffff           call 0x4a1790
// 004a18a7  59                   pop ecx
// 004a18a8  c3                   ret 

struct BoundFuncDesc {
    void construct();
};

extern "C" void __cdecl helper_4a1070(int* out, int value);
extern "C" void __cdecl helper_4a1790(int* value);

void BoundFuncDesc::construct()
{
    int local;
    local = 0xc2;
    helper_4a1070(&local, 0xc2);
    helper_4a1790(&local);
}
