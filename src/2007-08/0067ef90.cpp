// from server: 100% by colin
// roc 2007-08 0067ef90  unit: CXTPControlCheckBox  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067ef90
//
// 0067ef90  56                   push esi
// 0067ef91  57                   push edi
// 0067ef92  8bf9                 mov edi, ecx
// 0067ef94  e887ffffff           call 0x67ef20
// 0067ef99  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067ef9d  8bf0                 mov esi, eax
// 0067ef9f  8b06                 mov eax, dword ptr [esi]
// 0067efa1  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 0067efa7  51                   push ecx
// 0067efa8  57                   push edi
// 0067efa9  8bce                 mov ecx, esi
// 0067efab  ffd2                 call edx
// 0067efad  5f                   pop edi
// 0067efae  8bc6                 mov eax, esi
// 0067efb0  5e                   pop esi
// 0067efb1  c20400               ret 4

struct CXTPControlCheckBox {
    void* Create(int);
};

extern void* __fastcall sub_67EF20(CXTPControlCheckBox*);

void* __thiscall CXTPControlCheckBox::Create(int arg)
{
    CXTPControlCheckBox* p = (CXTPControlCheckBox*)sub_67EF20(this);
    void** vt = *(void***)p;
    void (__thiscall *fn)(void*, CXTPControlCheckBox*, int) = *(void (__thiscall **)(void*, CXTPControlCheckBox*, int))((char*)vt + 0xe0);
    fn(p, this, arg);
    return p;
}
