// from server: 66% by colin
// roc 2007-08 006dfe10  unit: CXTPDockingPaneMiniWnd  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dfe10
//
// 006dfe10  8b442404             mov eax, dword ptr [esp + 4]
// 006dfe14  394118               cmp dword ptr [ecx + 0x18], eax
// 006dfe17  7519                 jne 0x6dfe32
// 006dfe19  8d811cffffff         lea eax, [ecx - 0xe4]
// 006dfe1f  f7d8                 neg eax
// 006dfe21  1bc0                 sbb eax, eax
// 006dfe23  23c1                 and eax, ecx
// 006dfe25  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006dfe29  50                   push eax
// 006dfe2a  e841490000           call 0x6e4770
// 006dfe2f  c20800               ret 8
// 006dfe32  83793800             cmp dword ptr [ecx + 0x38], 0
// 006dfe36  7416                 je 0x6dfe4e
// 006dfe38  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 006dfe3b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006dfe3e  56                   push esi
// 006dfe3f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006dfe43  83c120               add ecx, 0x20
// 006dfe46  56                   push esi
// 006dfe47  50                   push eax
// 006dfe48  8b420c               mov eax, dword ptr [edx + 0xc]
// 006dfe4b  ffd0                 call eax
// 006dfe4d  5e                   pop esi
// 006dfe4e  c20800               ret 8

struct CXTPDockingPaneMiniWnd
{
    char pad_0000[0x18];
    int field_18;
    char pad_001c[0x1c];
    void* field_38;
    void Method(int a, int b);
};

extern "C" void __stdcall sub_006e4770(void* p);

void CXTPDockingPaneMiniWnd::Method(int a, int b)
{
    if (field_18 == a)
    {
        void* p = (char*)this - 0xe4;
        p = (p != 0) ? this : 0;
        sub_006e4770(p);
        return;
    }
    if (field_38 != 0)
    {
        void* v = field_38;
        int* vtbl = *(int**)v;
        void (__stdcall *fn)(void*, int, int) = (void (__stdcall *)(void*, int, int))vtbl[3];
        fn((char*)v + 0x20, a, b);
    }
}
