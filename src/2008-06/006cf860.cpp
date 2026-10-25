// from server: 100% by atomic.potato
// roc 2008-06 006cf860  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf860
//
// 006cf860  83ec0c               sub esp, 0xc
// 006cf863  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cf867  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006cf86b  8b542418             mov edx, dword ptr [esp + 0x18]
// 006cf86f  890424               mov dword ptr [esp], eax
// 006cf872  894c2404             mov dword ptr [esp + 4], ecx
// 006cf876  8b0d74e19700         mov ecx, dword ptr [0x97e174]
// 006cf87c  8d0424               lea eax, [esp]
// 006cf87f  50                   push eax
// 006cf880  51                   push ecx
// 006cf881  b96ce19700           mov ecx, 0x97e16c
// 006cf886  89542410             mov dword ptr [esp + 0x10], edx
// 006cf88a  e851c0ffff           call 0x6cb8e0
// 006cf88f  83c40c               add esp, 0xc
// 006cf892  c3                   ret 

struct CArray {
    char pad[8];
    int size;
    void InsertAt(int index, const void* value);
};

extern CArray g_array;
extern int g_count;

void InsertRow(int a, int b, int c)
{
    int tmp[3];
    tmp[0] = a;
    tmp[1] = b;
    tmp[2] = c;
    g_array.InsertAt(g_count, tmp);
}
