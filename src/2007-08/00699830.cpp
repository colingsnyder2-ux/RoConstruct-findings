// from server: 66% by colin
// roc 2007-08 00699830  unit: CXTPPropertyGridItem  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699830
//
// 00699830  56                   push esi
// 00699831  57                   push edi
// 00699832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00699836  33f6                 xor esi, esi
// 00699838  397728               cmp dword ptr [edi + 0x28], esi
// 0069983b  7e21                 jle 0x69985e
// 0069983d  53                   push ebx
// 0069983e  8d5920               lea ebx, [ecx + 0x20]
// 00699841  56                   push esi
// 00699842  8bcf                 mov ecx, edi
// 00699844  e8b7f7ffff           call 0x699000
// 00699849  50                   push eax
// 0069984a  8b4308               mov eax, dword ptr [ebx + 8]
// 0069984d  50                   push eax
// 0069984e  8bcb                 mov ecx, ebx
// 00699850  e8bb900300           call 0x6d2910
// 00699855  83c601               add esi, 1
// 00699858  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0069985b  7ce4                 jl 0x699841
// 0069985d  5b                   pop ebx
// 0069985e  5f                   pop edi
// 0069985f  5e                   pop esi
// 00699860  c20400               ret 4

struct CXTPPropertyGridItem
{
    char pad[0x20];
    int field_20;
    int field_24;
    int field_28;
    int field_2c;

    int sub_699000(int);
    int sub_6d2910(int, int);
    void sub_699830(int);
};

void CXTPPropertyGridItem::sub_699830(int arg)
{
    int i = 0;
    if (field_28 > 0)
    {
        do
        {
            int v = sub_699000(i);
            sub_6d2910(field_28, v);
            i++;
        } while (i < field_28);
    }
}
