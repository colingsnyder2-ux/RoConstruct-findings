// from server: 47% by colin
// roc 2007-08 00696890  unit: CXTPToolTipContext::COffice2007ToolTip  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696890
//
// 00696890  83ec1c               sub esp, 0x1c
// 00696893  8b442428             mov eax, dword ptr [esp + 0x28]
// 00696897  8b542424             mov edx, dword ptr [esp + 0x24]
// 0069689b  56                   push esi
// 0069689c  8bf1                 mov esi, ecx
// 0069689e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006968a2  57                   push edi
// 006968a3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006968a7  894c2414             mov dword ptr [esp + 0x14], ecx
// 006968ab  89442410             mov dword ptr [esp + 0x10], eax
// 006968af  8b4720               mov eax, dword ptr [edi + 0x20]
// 006968b2  8d4c241c             lea ecx, [esp + 0x1c]
// 006968b6  51                   push ecx
// 006968b7  89542410             mov dword ptr [esp + 0x10], edx
// 006968bb  8944240c             mov dword ptr [esp + 0xc], eax
// 006968bf  ff1554ec7700         call dword ptr [0x77ec54]
// 006968c5  8d542408             lea edx, [esp + 8]
// 006968c9  52                   push edx
// 006968ca  57                   push edi
// 006968cb  8bce                 mov ecx, esi
// 006968cd  e82efbffff           call 0x696400
// 006968d2  5f                   pop edi
// 006968d3  5e                   pop esi
// 006968d4  83c41c               add esp, 0x1c
// 006968d7  c21000               ret 0x10

struct CXTPToolTipContext {
    struct COffice2007ToolTip {
        int sub_696400(int, int*, int*);
        int func(int, int, int, int);
    };
};

extern "C" int __stdcall GetCursorPos(void*);

int CXTPToolTipContext::COffice2007ToolTip::func(int a1, int a2, int a3, int a4)
{
    int pt[2];
    int v1;
    int v2;
    int v3;
    int v4;

    v1 = a4;
    v2 = a3;
    v3 = a2;
    v4 = *(int*)(a1 + 0x20);
    GetCursorPos(&pt);
    return sub_696400(a1, &pt[0], &pt[1]);
}
