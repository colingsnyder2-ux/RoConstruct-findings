// from server: 68% by colin
// roc 2007-08 00709c90  unit: CXTColorPageStandard  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00709c90
//
// 00709c90  8b5104               mov edx, dword ptr [ecx + 4]
// 00709c93  8b02                 mov eax, dword ptr [edx]
// 00709c95  85c0                 test eax, eax
// 00709c97  56                   push esi
// 00709c98  8b7208               mov esi, dword ptr [edx + 8]
// 00709c9b  894104               mov dword ptr [ecx + 4], eax
// 00709c9e  7411                 je 0x709cb1
// 00709ca0  52                   push edx
// 00709ca1  c7400400000000       mov dword ptr [eax + 4], 0
// 00709ca8  e823e0fcff           call 0x6d7cd0
// 00709cad  8bc6                 mov eax, esi
// 00709caf  5e                   pop esi
// 00709cb0  c3                   ret 
// 00709cb1  52                   push edx
// 00709cb2  c7410800000000       mov dword ptr [ecx + 8], 0
// 00709cb9  e812e0fcff           call 0x6d7cd0
// 00709cbe  8bc6                 mov eax, esi
// 00709cc0  5e                   pop esi
// 00709cc1  c3                   ret 

struct CXTColorPageStandard {
    void* field0;
    void* field4;
    void* field8;
    void* removeNode();
};

extern "C" void __stdcall sub_6d7cd0(void* node);

void* CXTColorPageStandard::removeNode()
{
    void* cur = field4;
    void* next = *(void**)((char*)cur + 8);
    void* prev = *(void**)cur;
    field4 = prev;
    if (prev != 0) {
        *(void**)((char*)prev + 4) = 0;
        sub_6d7cd0(cur);
    } else {
        field8 = 0;
        sub_6d7cd0(cur);
    }
    return next;
}
