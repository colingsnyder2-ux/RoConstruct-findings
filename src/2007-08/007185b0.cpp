// from server: 83% by colin
// roc 2007-08 007185b0  unit: seg_00710000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007185b0
//
// 007185b0  8b41fc               mov eax, dword ptr [ecx - 4]
// 007185b3  83ec10               sub esp, 0x10
// 007185b6  50                   push eax
// 007185b7  8d4c2404             lea ecx, [esp + 4]
// 007185bb  e87e79f1ff           call 0x62ff3e
// 007185c0  8b442404             mov eax, dword ptr [esp + 4]
// 007185c4  85c0                 test eax, eax
// 007185c6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007185ca  c70100000000         mov dword ptr [ecx], 0
// 007185d0  7406                 je 0x7185d8
// 007185d2  8b1424               mov edx, dword ptr [esp]
// 007185d5  895004               mov dword ptr [eax + 4], edx
// 007185d8  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007185dd  740c                 je 0x7185eb
// 007185df  8b442408             mov eax, dword ptr [esp + 8]
// 007185e3  50                   push eax
// 007185e4  6a00                 push 0
// 007185e6  e84d79f1ff           call 0x62ff38
// 007185eb  b801000000           mov eax, 1
// 007185f0  83c410               add esp, 0x10
// 007185f3  c21400               ret 0x14

extern "C" void __stdcall sub_62ff3e(void* dst, int src);
extern "C" void __stdcall sub_62ff38(void* p, int n);

struct CXTPControlGallery
{
    int sub_7185b0(int a2, int a3, int a4, int a5, int* a6);
};

int CXTPControlGallery::sub_7185b0(int a2, int a3, int a4, int a5, int* a6)
{
    int local[4];
    sub_62ff3e(local, *(int*)((char*)this - 4));
    int* p = (int*)local[0];
    *a6 = 0;
    if (p != 0)
    {
        p[1] = local[1];
    }
    if (local[3] != 0)
    {
        sub_62ff38((void*)local[2], 0);
    }
    return 1;
}
