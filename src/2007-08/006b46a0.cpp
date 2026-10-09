// from server: 97% by colin
// roc 2007-08 006b46a0  unit: CXTPControlGallery  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b46a0
//
// 006b46a0  56                   push esi
// 006b46a1  8bf1                 mov esi, ecx
// 006b46a3  e8e8eeffff           call 0x6b3590
// 006b46a8  85c0                 test eax, eax
// 006b46aa  7415                 je 0x6b46c1
// 006b46ac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b46b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b46b4  50                   push eax
// 006b46b5  51                   push ecx
// 006b46b6  8bce                 mov ecx, esi
// 006b46b8  e8e3c4fbff           call 0x670ba0
// 006b46bd  5e                   pop esi
// 006b46be  c20800               ret 8
// 006b46c1  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 006b46c7  8bb6c0000000         mov esi, dword ptr [esi + 0xc0]
// 006b46cd  8b542408             mov edx, dword ptr [esp + 8]
// 006b46d1  50                   push eax
// 006b46d2  8d4eff               lea ecx, [esi - 1]
// 006b46d5  51                   push ecx
// 006b46d6  50                   push eax
// 006b46d7  51                   push ecx
// 006b46d8  52                   push edx
// 006b46d9  ff1578ed7700         call dword ptr [0x77ed78]
// 006b46df  5e                   pop esi
// 006b46e0  c20800               ret 8

struct CXTPControlGallery
{
    int sub_6b3590();
    int sub_670ba0(int, int);

    int sub_6b46a0(int a, int b);
};

extern "C" int __stdcall SetRect(int, int, int, int, int);

int CXTPControlGallery::sub_6b46a0(int a, int b)
{
    if (sub_6b3590())
    {
        return sub_670ba0(a, b);
    }
    int v1 = *(int*)((char*)this + 0xc4);
    int v2 = *(int*)((char*)this + 0xc0);
    SetRect(a, v2 - 1, v1, v2 - 1, v1);
    return 0;
}
