// from server: 69% by colin
// roc 2007-08 0067f600  unit: CXTPControlSelector  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f600
//
// 0067f600  8b442404             mov eax, dword ptr [esp + 4]
// 0067f604  83c01c               add eax, 0x1c
// 0067f607  50                   push eax
// 0067f608  8d4c2408             lea ecx, [esp + 8]
// 0067f60c  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0067f612  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067f616  51                   push ecx
// 0067f617  8d4c2408             lea ecx, [esp + 8]
// 0067f61b  ff156cd57700         call dword ptr [0x77d56c]
// 0067f621  85c0                 test eax, eax
// 0067f623  8d4c2404             lea ecx, [esp + 4]
// 0067f627  750b                 jne 0x67f634
// 0067f629  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0067f62f  33c0                 xor eax, eax
// 0067f631  c21000               ret 0x10
// 0067f634  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0067f63a  b801000000           mov eax, 1
// 0067f63f  c21000               ret 0x10

extern "C" void __stdcall sub_77ddb8(void*);
extern "C" int __stdcall sub_77d56c(void*, void*);
extern "C" void __stdcall sub_77ddbc(void*);

struct CXTPControlSelector
{
    char pad[0x1c];
    void* field_1c;
};

int __stdcall func_0067f600(CXTPControlSelector* self, void* a, void* b, void* c)
{
    void* local;
    sub_77ddb8(&self->field_1c);
    sub_77d56c(&local, c);
    if (sub_77d56c(&local, c) == 0)
    {
        sub_77ddbc(&local);
        return 0;
    }
    sub_77ddbc(&local);
    return 1;
}
