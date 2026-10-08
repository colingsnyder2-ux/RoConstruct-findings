// from server: 81% by colin
// roc 2007-08 004450d0  unit: P8CRenderSettings::?$GetSetImpl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004450d0
//
// 004450d0  8b442404             mov eax, dword ptr [esp + 4]
// 004450d4  85c0                 test eax, eax
// 004450d6  56                   push esi
// 004450d7  57                   push edi
// 004450d8  8bf9                 mov edi, ecx
// 004450da  7405                 je 0x4450e1
// 004450dc  8d70fc               lea esi, [eax - 4]
// 004450df  eb02                 jmp 0x4450e3
// 004450e1  33f6                 xor esi, esi
// 004450e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 004450e7  d900                 fld dword ptr [eax]
// 004450e9  e872bc1e00           call 0x630d60
// 004450ee  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 004450f1  8b5710               mov edx, dword ptr [edi + 0x10]
// 004450f4  50                   push eax
// 004450f5  03ce                 add ecx, esi
// 004450f7  ffd2                 call edx
// 004450f9  5f                   pop edi
// 004450fa  5e                   pop esi
// 004450fb  c20800               ret 8

struct CRenderSettings;

struct GetSetImpl {
    void (__stdcall *get)(void*);
    void (__stdcall *set)(void*);
    void invoke(void* obj, float* value);
};

extern "C" void* __cdecl func_00630d60(float);

void GetSetImpl::invoke(void* obj, float* value)
{
    void* p;
    if (obj) {
        p = (char*)obj - 4;
    } else {
        p = 0;
    }
    float v = *value;
    void* r = func_00630d60(v);
    void (__stdcall *set)(void*) = this->set;
    void* base = (char*)p + (int)this->get;
    set(base);
}
