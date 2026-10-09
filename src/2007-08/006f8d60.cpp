// from server: 52% by colin
// roc 2007-08 006f8d60  unit: CXTPPropertyGridPaintManager  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8d60
//
// 006f8d60  56                   push esi
// 006f8d61  8bf1                 mov esi, ecx
// 006f8d63  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f8d67  85c9                 test ecx, ecx
// 006f8d69  750e                 jne 0x6f8d79
// 006f8d6b  8b4634               mov eax, dword ptr [esi + 0x34]
// 006f8d6e  8b4878               mov ecx, dword ptr [eax + 0x78]
// 006f8d71  83c070               add eax, 0x70
// 006f8d74  83f9ff               cmp ecx, -1
// 006f8d77  eb36                 jmp 0x6f8daf
// 006f8d79  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006f8d7d  6a00                 push 0
// 006f8d7f  50                   push eax
// 006f8d80  e8fbf5f9ff           call 0x698380
// 006f8d85  83caff               or edx, 0xffffffff
// 006f8d88  85c0                 test eax, eax
// 006f8d8a  7418                 je 0x6f8da4
// 006f8d8c  395078               cmp dword ptr [eax + 0x78], edx
// 006f8d8f  7505                 jne 0x6f8d96
// 006f8d91  395074               cmp dword ptr [eax + 0x74], edx
// 006f8d94  740e                 je 0x6f8da4
// 006f8d96  8b4878               mov ecx, dword ptr [eax + 0x78]
// 006f8d99  3bca                 cmp ecx, edx
// 006f8d9b  751b                 jne 0x6f8db8
// 006f8d9d  8b4074               mov eax, dword ptr [eax + 0x74]
// 006f8da0  5e                   pop esi
// 006f8da1  c20800               ret 8
// 006f8da4  8b4634               mov eax, dword ptr [esi + 0x34]
// 006f8da7  8b4878               mov ecx, dword ptr [eax + 0x78]
// 006f8daa  83c070               add eax, 0x70
// 006f8dad  3bca                 cmp ecx, edx
// 006f8daf  7507                 jne 0x6f8db8
// 006f8db1  8b4004               mov eax, dword ptr [eax + 4]
// 006f8db4  5e                   pop esi
// 006f8db5  c20800               ret 8
// 006f8db8  8bc1                 mov eax, ecx
// 006f8dba  5e                   pop esi
// 006f8dbb  c20800               ret 8

struct CXTPPropertyGridPaintManager
{
    char pad[0x34];
    void* field34;
    int GetColor(int a, int b);
};

extern "C" void* __stdcall sub_698380(int a, int b);

int CXTPPropertyGridPaintManager::GetColor(int a, int b)
{
    if (a == 0)
    {
        int* p = (int*)field34;
        int ecx = *(int*)((char*)p + 0x78);
        p = (int*)((char*)p + 0x70);
        if (ecx == -1)
            return p[1];
        return ecx;
    }

    int* eax = (int*)sub_698380(b, 0);
    int edx = -1;
    if (eax == 0)
    {
        int* p = (int*)field34;
        int ecx = *(int*)((char*)p + 0x78);
        p = (int*)((char*)p + 0x70);
        if (ecx == edx)
            return p[1];
        return ecx;
    }
    if (*(int*)((char*)eax + 0x78) == edx && *(int*)((char*)eax + 0x74) == edx)
    {
        int* p = (int*)field34;
        int ecx = *(int*)((char*)p + 0x78);
        p = (int*)((char*)p + 0x70);
        if (ecx == edx)
            return p[1];
        return ecx;
    }
    int ecx = *(int*)((char*)eax + 0x78);
    if (ecx == edx)
        return *(int*)((char*)eax + 0x74);
    return ecx;
}
