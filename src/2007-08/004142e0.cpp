// from server: 100% by colin
// roc 2007-08 004142e0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004142e0
//
// 004142e0  8b442404             mov eax, dword ptr [esp + 4]
// 004142e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004142e8  8b10                 mov edx, dword ptr [eax]
// 004142ea  ffe2                 jmp edx

typedef void (__thiscall *Fn)(void*);

void func_004142e0(void* a, void* b)
{
    (*(Fn*)a)(b);
}
