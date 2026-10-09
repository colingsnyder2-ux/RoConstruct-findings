// from server: 85% by colin
// roc 2007-08 006a8290  unit: CXTPRibbonBar  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8290
//
// 006a8290  83ec08               sub esp, 8
// 006a8293  56                   push esi
// 006a8294  8bf1                 mov esi, ecx
// 006a8296  e8e5b6f9ff           call 0x643980
// 006a829b  83be0801000000       cmp dword ptr [esi + 0x108], 0
// 006a82a2  8d8e08010000         lea ecx, [esi + 0x108]
// 006a82a8  7527                 jne 0x6a82d1
// 006a82aa  83790400             cmp dword ptr [ecx + 4], 0
// 006a82ae  7521                 jne 0x6a82d1
// 006a82b0  8b4074               mov eax, dword ptr [eax + 0x74]
// 006a82b3  83c064               add eax, 0x64
// 006a82b6  833800               cmp dword ptr [eax], 0
// 006a82b9  7514                 jne 0x6a82cf
// 006a82bb  83780400             cmp dword ptr [eax + 4], 0
// 006a82bf  750e                 jne 0x6a82cf
// 006a82c1  6a00                 push 0
// 006a82c3  8d442408             lea eax, [esp + 8]
// 006a82c7  50                   push eax
// 006a82c8  8bce                 mov ecx, esi
// 006a82ca  e8016dfaff           call 0x64efd0
// 006a82cf  8bc8                 mov ecx, eax
// 006a82d1  8b11                 mov edx, dword ptr [ecx]
// 006a82d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a82d7  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a82da  8910                 mov dword ptr [eax], edx
// 006a82dc  894804               mov dword ptr [eax + 4], ecx
// 006a82df  5e                   pop esi
// 006a82e0  83c408               add esp, 8
// 006a82e3  c20400               ret 4

struct CXTPRibbonBar {
    void sub_643980();
    void sub_64efd0(int, void*);
    void getRect(void* out);
};

void CXTPRibbonBar::getRect(void* out)
{
    sub_643980();
    int* p = (int*)((char*)this + 0x108);
    if (p[0] == 0 && p[1] == 0) {
        int* q = (int*)((char*)*(int*)((char*)this + 0x74) + 0x64);
        if (q[0] == 0 && q[1] == 0) {
            int tmp[2];
            sub_64efd0(0, tmp);
            p = tmp;
        }
    }
    *(int*)out = p[0];
    *(int*)((char*)out + 4) = p[1];
}
