// from server: 87% by atomic.potato
// roc 2011-06 0065e100  unit: RBX::VLuaSettings::?$BoundPropGetSet  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065e100
//
// 0065e100  8b442404             mov eax, dword ptr [esp + 4]
// 0065e104  85c0                 test eax, eax
// 0065e106  740a                 je 0x65e112
// 0065e108  8b4908               mov ecx, dword ptr [ecx + 8]
// 0065e10b  dd4408e4             fld qword ptr [eax + ecx - 0x1c]
// 0065e10f  c20400               ret 4
// 0065e112  8b5108               mov edx, dword ptr [ecx + 8]
// 0065e115  33c0                 xor eax, eax
// 0065e117  dd0410               fld qword ptr [eax + edx]
// 0065e11a  c20400               ret 4

struct S
{
    int unused;
    int unused2;
    int offset;
    double get(double *value);
};

double S::get(double *value)
{
    if (value)
        return *(double *)((char *)value + offset - 28);
    return *(double *)((char *)0 + offset);
}
