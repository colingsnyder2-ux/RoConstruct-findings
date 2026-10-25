// from server: 100% by king_originala
// roc 2008-06 00633490  unit: RBX::N$1?sDoubleValue::V?$Value::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633490
//
// 00633490  8b442404             mov eax, dword ptr [esp + 4]
// 00633494  85c0                 test eax, eax
// 00633496  740a                 je 0x6334a2
// 00633498  8b4908               mov ecx, dword ptr [ecx + 8]
// 0063349b  dd4408ec             fld qword ptr [eax + ecx - 0x14]
// 0063349f  c20400               ret 4
// 006334a2  8b5108               mov edx, dword ptr [ecx + 8]
// 006334a5  33c0                 xor eax, eax
// 006334a7  dd0410               fld qword ptr [eax + edx]
// 006334aa  c20400               ret 4

struct S {
    unsigned char padding[8];
    unsigned int offset;
    double get(void* object);
};

double S::get(void* object)
{
    return *reinterpret_cast<double*>(
        (object ? static_cast<char*>(object) - 20 : 0) + offset);
}
