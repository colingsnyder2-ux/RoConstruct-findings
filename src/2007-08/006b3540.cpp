// from server: 63% by colin
// roc 2007-08 006b3540  unit: CXTPResourceManager  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3540
//
// 006b3540  51                   push ecx
// 006b3541  56                   push esi
// 006b3542  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b3546  83c12c               add ecx, 0x2c
// 006b3549  51                   push ecx
// 006b354a  8bce                 mov ecx, esi
// 006b354c  c744240800000000     mov dword ptr [esp + 8], 0
// 006b3554  ff1574dd7700         call dword ptr [0x77dd74]
// 006b355a  8bc6                 mov eax, esi
// 006b355c  5e                   pop esi
// 006b355d  59                   pop ecx
// 006b355e  c20400               ret 4

struct CXTPResourceManager {
    char pad[0x2c];
    void* field_2c;
    CXTPResourceManager* Init(void* param);
};

extern "C" void* __stdcall sub_77DD74(void*);

CXTPResourceManager* CXTPResourceManager::Init(void* param)
{
    field_2c = 0;
    sub_77DD74(&field_2c);
    return this;
}
