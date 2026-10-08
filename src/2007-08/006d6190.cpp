// from server: 72% by colin
// roc 2007-08 006d6190  unit: CXTPReportGroupRow_Batch  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d6190
//
// 006d6190  8b442408             mov eax, dword ptr [esp + 8]
// 006d6194  56                   push esi
// 006d6195  8bf1                 mov esi, ecx
// 006d6197  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d619b  50                   push eax
// 006d619c  51                   push ecx
// 006d619d  8d563c               lea edx, [esi + 0x3c]
// 006d61a0  52                   push edx
// 006d61a1  ff1594ed7700         call dword ptr [0x77ed94]
// 006d61a7  85c0                 test eax, eax
// 006d61a9  741a                 je 0x6d61c5
// 006d61ab  57                   push edi
// 006d61ac  8b3e                 mov edi, dword ptr [esi]
// 006d61ae  8b4778               mov eax, dword ptr [edi + 0x78]
// 006d61b1  8bce                 mov ecx, esi
// 006d61b3  ffd0                 call eax
// 006d61b5  8b577c               mov edx, dword ptr [edi + 0x7c]
// 006d61b8  f7d8                 neg eax
// 006d61ba  1bc0                 sbb eax, eax
// 006d61bc  83c001               add eax, 1
// 006d61bf  50                   push eax
// 006d61c0  8bce                 mov ecx, esi
// 006d61c2  ffd2                 call edx
// 006d61c4  5f                   pop edi
// 006d61c5  5e                   pop esi
// 006d61c6  c20800               ret 8

extern "C" int __stdcall PtInRect(const void* rect, int x, int y);

struct CXTPReportGroupRow_Batch {
    int HitTest(int x, int y);
};

int CXTPReportGroupRow_Batch::HitTest(int x, int y)
{
    if (PtInRect((const char*)this + 0x3c, x, y)) {
        int (*fn1)(void*) = *(int (**)(void*))((*(int*)this) + 0x78);
        int (*fn2)(void*, int) = *(int (**)(void*, int))((*(int*)this) + 0x7c);
        int r = fn1(this);
        int v = (r == 0) ? 1 : 0;
        fn2(this, v);
    }
    return 0;
}
