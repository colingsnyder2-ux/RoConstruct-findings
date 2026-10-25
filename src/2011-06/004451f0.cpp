// from server: 53% by atomic.potato
// roc 2011-06 004451f0  unit: CPropGrid::UpdateItemsJob  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004451f0
//
// 004451f0  56                   push esi
// 004451f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004451f5  57                   push edi
// 004451f6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004451fa  3bf7                 cmp esi, edi
// 004451fc  7419                 je 0x445217
// 004451fe  8bff                 mov edi, edi
// 00445200  8b06                 mov eax, dword ptr [esi]
// 00445202  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00445206  50                   push eax
// 00445207  51                   push ecx
// 00445208  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044520c  ff542420             call dword ptr [esp + 0x20]
// 00445210  83c604               add esi, 4
// 00445213  3bf7                 cmp esi, edi
// 00445215  75e9                 jne 0x445200
// 00445217  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044521b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0044521f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00445223  8910                 mov dword ptr [eax], edx
// 00445225  8b542420             mov edx, dword ptr [esp + 0x20]
// 00445229  5f                   pop edi
// 0044522a  894804               mov dword ptr [eax + 4], ecx
// 0044522d  895008               mov dword ptr [eax + 8], edx
// 00445230  5e                   pop esi
// 00445231  c3                   ret 

struct CPropGrid_UpdateItemsJob {
    char pad[12];
    void* first;
    void* last;
    void* end;

    void __cdecl UpdateItemsJob(void* a, void* b, void* c, void* d);
};

void __stdcall helper(void*, void*);

void CPropGrid_UpdateItemsJob::UpdateItemsJob(void* a, void* b, void* c, void* d)
{
    void** p = (void**)this->first;
    void** q = (void**)this->last;
    while (p != q) {
        helper(d, *p);
        ++p;
    }
    this->first = a;
    this->last = b;
    this->end = c;
}
