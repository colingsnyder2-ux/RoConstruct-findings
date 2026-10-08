// from server: 76% by colin
// roc 2007-08 0064e9b0  unit: CXTPImageManager  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064e9b0
//
// 0064e9b0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064e9b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064e9b8  50                   push eax
// 0064e9b9  52                   push edx
// 0064e9ba  e8719dffff           call 0x648730
// 0064e9bf  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064e9c3  50                   push eax
// 0064e9c4  8b442418             mov eax, dword ptr [esp + 0x18]
// 0064e9c8  50                   push eax
// 0064e9c9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064e9cd  52                   push edx
// 0064e9ce  50                   push eax
// 0064e9cf  e8ccfdffff           call 0x64e7a0
// 0064e9d4  c21400               ret 0x14

struct CXTPImageManager {
    int method(int, int, int, int, int);
};

extern "C" int __stdcall sub_648730(int, int);
extern "C" int __stdcall sub_64e7a0(int, int, int, int);

int CXTPImageManager::method(int a1, int a2, int a3, int a4, int a5)
{
    int r = sub_648730(a4, a5);
    return sub_64e7a0(a1, a2, a3, r);
}
