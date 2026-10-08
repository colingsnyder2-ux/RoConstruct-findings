// from server: 88% by colin
// roc 2007-08 00661820  unit: PAVCXTPReportRecord::?$CArray  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661820
//
// 00661820  56                   push esi
// 00661821  8b742408             mov esi, dword ptr [esp + 8]
// 00661825  57                   push edi
// 00661826  8bf9                 mov edi, ecx
// 00661828  e823240000           call 0x663c50
// 0066182d  3bf0                 cmp esi, eax
// 0066182f  7d19                 jge 0x66184a
// 00661831  56                   push esi
// 00661832  8bcf                 mov ecx, edi
// 00661834  e8c7feffff           call 0x661700
// 00661839  89704c               mov dword ptr [eax + 0x4c], esi
// 0066183c  8bcf                 mov ecx, edi
// 0066183e  83c601               add esi, 1
// 00661841  e80a240000           call 0x663c50
// 00661846  3bf0                 cmp esi, eax
// 00661848  7ce7                 jl 0x661831
// 0066184a  5f                   pop edi
// 0066184b  5e                   pop esi
// 0066184c  c20400               ret 4

struct S_func_00661820 {
    void f(int);
};

extern "C" int __fastcall sub_00663C50(S_func_00661820* self);
extern "C" void* __fastcall sub_00661700(S_func_00661820* self, int index);

void S_func_00661820::f(int idx)
{
    int i = idx;
    while (i < sub_00663C50(this)) {
        void* p = sub_00661700(this, i);
        *(int*)((char*)p + 0x4c) = i;
        i++;
    }
}
