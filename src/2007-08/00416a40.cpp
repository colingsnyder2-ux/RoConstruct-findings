// from server: 69% by colin
// roc 2007-08 00416a40  unit: VCLuaFunction::?$CComObject  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416a40
//
// 00416a40  8b442404             mov eax, dword ptr [esp + 4]
// 00416a44  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00416a47  8b5010               mov edx, dword ptr [eax + 0x10]
// 00416a4a  51                   push ecx
// 00416a4b  8b4804               mov ecx, dword ptr [eax + 4]
// 00416a4e  034808               add ecx, dword ptr [eax + 8]
// 00416a51  8b00                 mov eax, dword ptr [eax]
// 00416a53  52                   push edx
// 00416a54  ffd0                 call eax
// 00416a56  c3                   ret 

struct VCLuaFunction {
    void* field0;
    int field4;
    int field8;
    int field10;
    int field14;
};

void CallHelper(VCLuaFunction* self)
{
    typedef void (__stdcall *Fn)(int, int);
    Fn fn = (Fn)self->field0;
    fn(self->field4 + self->field8, self->field10);
}
