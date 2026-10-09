// roc 2007-03 00726c70  unit: seg_00720000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726c70
//
// 00726c70  56                   push esi
// 00726c71  8bf1                 mov esi, ecx
// 00726c73  8b06                 mov eax, dword ptr [esi]
// 00726c75  6aff                 push -1
// 00726c77  50                   push eax
// 00726c78  ff1574d27700         call dword ptr [0x77d274]
// 00726c7e  8b0e                 mov ecx, dword ptr [esi]
// 00726c80  51                   push ecx
// 00726c81  ff15fcd17700         call dword ptr [0x77d1fc]
// 00726c87  c6460800             mov byte ptr [esi + 8], 0
// 00726c8b  5e                   pop esi
// 00726c8c  c3                   ret 
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
