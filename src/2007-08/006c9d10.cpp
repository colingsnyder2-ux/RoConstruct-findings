// from server: 52% by colin
// roc 2007-08 006c9d10  unit: VCRect::?$CArray  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c9d10
//
// 006c9d10  8b442404             mov eax, dword ptr [esp + 4]
// 006c9d14  8b4854               mov ecx, dword ptr [eax + 0x54]
// 006c9d17  8b11                 mov edx, dword ptr [ecx]
// 006c9d19  8b442408             mov eax, dword ptr [esp + 8]
// 006c9d1d  8b523c               mov edx, dword ptr [edx + 0x3c]
// 006c9d20  56                   push esi
// 006c9d21  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c9d25  56                   push esi
// 006c9d26  50                   push eax
// 006c9d27  ffd2                 call edx
// 006c9d29  3bc6                 cmp eax, esi
// 006c9d2b  5e                   pop esi
// 006c9d2c  740b                 je 0x6c9d39
// 006c9d2e  6a00                 push 0
// 006c9d30  6aff                 push -1
// 006c9d32  6a0e                 push 0xe
// 006c9d34  e8b9ee0600           call 0x738bf2
// 006c9d39  c3                   ret 

struct VCRectArray
{
    char pad[0x54];
    void* field_54;
};

extern "C" void __cdecl func_00738bf2(int, int, int);

void VCRectArray_call(void* arg1, int arg2, int arg3)
{
    VCRectArray* p = (VCRectArray*)arg1;
    void** vtbl = *(void***)p->field_54;
    typedef int (__thiscall *Fn)(void*, int, int);
    Fn fn = (Fn)vtbl[0x3c / 4];
    int result = fn(p->field_54, arg2, arg3);
    if (result != arg3)
    {
        func_00738bf2(0, -1, 0xe);
    }
}
