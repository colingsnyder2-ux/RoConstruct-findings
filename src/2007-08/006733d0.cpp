// from server: 65% by colin
// roc 2007-08 006733d0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006733d0

struct CXTPCustomizeSheet_CCustomizeEdit
{
    void SetEdit(void* pEdit);
};

extern "C" void __stdcall sub_73871e(void* p);
extern "C" void* __stdcall sub_6b3010();
extern "C" void* __stdcall sub_738718(void* p);

void CXTPCustomizeSheet_CCustomizeEdit::SetEdit(void* pEdit)
{
    sub_73871e(pEdit);
    void* p = sub_6b3010();
    void** vtable = *(void***)p;
    void* fn = vtable[6];
    void* arg = *(void**)((char*)sub_738718(pEdit) + 0xc);
    void* result = ((void* (__thiscall*)(void*, void*))fn)(p, arg);
    if (result != 0)
    {
        void* q = sub_738718(pEdit);
        *(void**)((char*)q + 0xc) = result;
        void* r = sub_738718(pEdit);
        *(unsigned int*)((char*)r + 4) |= 1;
    }
}
