// from server: 80% by colin
// roc 2008-06 004453e0  unit: P8CRenderSettings::?$GetSetImpl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004453e0
//
// 004453e0  8b442404             mov eax, dword ptr [esp + 4]
// 004453e4  56                   push esi
// 004453e5  57                   push edi
// 004453e6  8bf9                 mov edi, ecx
// 004453e8  85c0                 test eax, eax
// 004453ea  7405                 je 0x4453f1
// 004453ec  8d70ec               lea esi, [eax - 0x14]
// 004453ef  eb02                 jmp 0x4453f3
// 004453f1  33f6                 xor esi, esi
// 004453f3  8b442410             mov eax, dword ptr [esp + 0x10]
// 004453f7  d900                 fld dword ptr [eax]
// 004453f9  e8f2c32500           call 0x6a17f0
// 004453fe  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00445401  8b5710               mov edx, dword ptr [edi + 0x10]
// 00445404  50                   push eax
// 00445405  03ce                 add ecx, esi
// 00445407  ffd2                 call edx
// 00445409  5f                   pop edi
// 0044540a  5e                   pop esi
// 0044540b  c20800               ret 8

struct GetSetImpl
{
    void invoke(void* obj, float* value);
};

extern "C" int __cdecl func_006a17f0(float);

void GetSetImpl::invoke(void* obj, float* value)
{
    char* base = 0;
    if (obj != 0)
        base = (char*)obj - 0x14;

    int r = func_006a17f0(*value);

    typedef void (__thiscall *SetFn)(void*, int);
    SetFn set = *(SetFn*)((char*)this + 0x10);
    void* target = (void*)(*(int*)((char*)this + 0x14) + (int)base);
    set(target, r);
}
