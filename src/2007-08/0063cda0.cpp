// from server: 72% by colin
// roc 2007-08 0063cda0  unit: CRobloxControlColorSelector  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cda0
//
// 0063cda0  57                   push edi
// 0063cda1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0063cda5  85ff                 test edi, edi
// 0063cda7  7e25                 jle 0x63cdce
// 0063cda9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063cdad  53                   push ebx
// 0063cdae  56                   push esi
// 0063cdaf  8b742418             mov esi, dword ptr [esp + 0x18]
// 0063cdb3  2bf0                 sub esi, eax
// 0063cdb5  8b10                 mov edx, dword ptr [eax]
// 0063cdb7  8b1c06               mov ebx, dword ptr [esi + eax]
// 0063cdba  8d1452               lea edx, [edx + edx*2]
// 0063cdbd  83c004               add eax, 4
// 0063cdc0  83ef01               sub edi, 1
// 0063cdc3  899c9148010000       mov dword ptr [ecx + edx*4 + 0x148], ebx
// 0063cdca  75e9                 jne 0x63cdb5
// 0063cdcc  5e                   pop esi
// 0063cdcd  5b                   pop ebx
// 0063cdce  5f                   pop edi
// 0063cdcf  c20c00               ret 0xc

struct CRobloxControlColorSelector
{
    void func_0063cda0(int count, int* src, int* dst);
};

void CRobloxControlColorSelector::func_0063cda0(int count, int* src, int* dst)
{
    if (count > 0)
    {
        int* p = src;
        int offset = (char*)dst - (char*)src;
        do
        {
            int idx = *p;
            int val = *(int*)((char*)p + offset);
            p++;
            count--;
            *(int*)((char*)this + idx * 12 + 0x148) = val;
        } while (count != 0);
    }
}
