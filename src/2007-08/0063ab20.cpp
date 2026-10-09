// from server: 61% by colin
// roc 2007-08 0063ab20  unit: CRobloxControlColorSelector  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063ab20
//
// 0063ab20  53                   push ebx
// 0063ab21  8bd9                 mov ebx, ecx
// 0063ab23  8b03                 mov eax, dword ptr [ebx]
// 0063ab25  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 0063ab2b  ffd2                 call edx
// 0063ab2d  85c0                 test eax, eax
// 0063ab2f  744f                 je 0x63ab80
// 0063ab31  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063ab35  56                   push esi
// 0063ab36  57                   push edi
// 0063ab37  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0063ab3b  50                   push eax
// 0063ab3c  57                   push edi
// 0063ab3d  8db3c0000000         lea esi, [ebx + 0xc0]
// 0063ab43  56                   push esi
// 0063ab44  ff1594ed7700         call dword ptr [0x77ed94]
// 0063ab4a  85c0                 test eax, eax
// 0063ab4c  7430                 je 0x63ab7e
// 0063ab4e  8bcf                 mov ecx, edi
// 0063ab50  2b0e                 sub ecx, dword ptr [esi]
// 0063ab52  83f902               cmp ecx, 2
// 0063ab55  7e0d                 jle 0x63ab64
// 0063ab57  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 0063ab5d  2bd7                 sub edx, edi
// 0063ab5f  83fa02               cmp edx, 2
// 0063ab62  7f1a                 jg 0x63ab7e
// 0063ab64  e8a7840700           call 0x6b3010
// 0063ab69  8b10                 mov edx, dword ptr [eax]
// 0063ab6b  8bc8                 mov ecx, eax
// 0063ab6d  8b4214               mov eax, dword ptr [edx + 0x14]
// 0063ab70  68f4260000           push 0x26f4
// 0063ab75  ffd0                 call eax
// 0063ab77  50                   push eax
// 0063ab78  ff1560ed7700         call dword ptr [0x77ed60]
// 0063ab7e  5f                   pop edi
// 0063ab7f  5e                   pop esi
// 0063ab80  5b                   pop ebx
// 0063ab81  c20800               ret 8

struct CRobloxControlColorSelector {
    virtual int vf_0x118();
    int field_0xc0;
    int field_0xc4;
    int field_0xc8;
    int method(int, int);
};

extern "C" int __stdcall PtInRect(const void*, int, int);
extern "C" int __stdcall SetCursor(int);

extern "C" void* __cdecl func_006b3010();

int CRobloxControlColorSelector::method(int a, int b)
{
    if (vf_0x118() == 0)
        return 0;
    if (PtInRect(&field_0xc0, a, b) == 0)
        return 0;
    int diff = a - field_0xc0;
    if (diff > 2)
    {
        int diff2 = field_0xc8 - a;
        if (diff2 > 2)
            return 0;
    }
    void* p = func_006b3010();
    int (*fp)(void*, int) = *(int (**)(void*, int))((*(int*)p) + 0x14);
    int r = fp(p, 0x26f4);
    SetCursor(r);
    return 0;
}
