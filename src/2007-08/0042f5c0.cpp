// from server: 77% by colin
// roc 2007-08 0042f5c0  unit: CPatchedControlComboBox  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f5c0
//
// 0042f5c0  51                   push ecx
// 0042f5c1  8b01                 mov eax, dword ptr [ecx]
// 0042f5c3  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0042f5c9  56                   push esi
// 0042f5ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042f5ce  56                   push esi
// 0042f5cf  c744240800000000     mov dword ptr [esp + 8], 0
// 0042f5d7  ffd2                 call edx
// 0042f5d9  8bc6                 mov eax, esi
// 0042f5db  5e                   pop esi
// 0042f5dc  59                   pop ecx
// 0042f5dd  c20400               ret 4

struct CPatchedControlComboBox {
    void* f(void* arg);
};

void* CPatchedControlComboBox::f(void* arg)
{
    void* result = arg;
    (*(void (__thiscall**)(void*, void*))(*(char**)this + 0x148))(this, arg);
    return result;
}
