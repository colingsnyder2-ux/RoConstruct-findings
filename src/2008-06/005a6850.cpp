// roc 2008-06 005a6850  unit: RBX::Workspace  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6850
//
// 005a6850  56                   push esi
// 005a6851  8bf1                 mov esi, ecx
// 005a6853  8b06                 mov eax, dword ptr [esi]
// 005a6855  6aff                 push -1
// 005a6857  50                   push eax
// 005a6858  ff1588228000         call dword ptr [0x802288]
// 005a685e  8b0e                 mov ecx, dword ptr [esi]
// 005a6860  51                   push ecx
// 005a6861  ff1534228000         call dword ptr [0x802234]
// 005a6867  c6460800             mov byte ptr [esi + 8], 0
// 005a686b  5e                   pop esi
// 005a686c  c3                   ret 
// copied from an identical function in another client (function ?destroy@ThreadData@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
extern "C" unsigned long (__stdcall *WaitForSingleObject)(void* handle, unsigned long ms);
extern "C" int (__stdcall *CloseHandle)(void* handle);

struct ThreadData {
    void* handle;
    int pad;
    unsigned char flag;
    void destroy();
};

void ThreadData::destroy()
{
    WaitForSingleObject(handle, 0xFFFFFFFF);
    CloseHandle(handle);
    flag = 0;
}
}
