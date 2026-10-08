// from server: 68% by colin
// roc 2007-08 00711630  unit: CXTColorSelectorCtrl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00711630
//
// 00711630  8b5104               mov edx, dword ptr [ecx + 4]
// 00711633  8b02                 mov eax, dword ptr [edx]
// 00711635  85c0                 test eax, eax
// 00711637  56                   push esi
// 00711638  8b7208               mov esi, dword ptr [edx + 8]
// 0071163b  894104               mov dword ptr [ecx + 4], eax
// 0071163e  7411                 je 0x711651
// 00711640  52                   push edx
// 00711641  c7400400000000       mov dword ptr [eax + 4], 0
// 00711648  e8d379d2ff           call 0x439020
// 0071164d  8bc6                 mov eax, esi
// 0071164f  5e                   pop esi
// 00711650  c3                   ret 
// 00711651  52                   push edx
// 00711652  c7410800000000       mov dword ptr [ecx + 8], 0
// 00711659  e8c279d2ff           call 0x439020
// 0071165e  8bc6                 mov eax, esi
// 00711660  5e                   pop esi
// 00711661  c3                   ret 

struct CXTColorSelectorCtrl
{
    void* field_0;
    void* field_4;
    void* field_8;
    void* RemoveHead();
};

extern "C" void __stdcall func_00439020(void*);

void* CXTColorSelectorCtrl::RemoveHead()
{
    void* old = field_4;
    void* next = *(void**)old;
    void* result = *(void**)((char*)old + 8);
    field_4 = next;
    if (next != 0)
    {
        *(void**)((char*)next + 4) = 0;
        func_00439020(old);
    }
    else
    {
        field_8 = 0;
        func_00439020(old);
    }
    return result;
}
