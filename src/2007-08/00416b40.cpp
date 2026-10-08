// from server: 41% by colin
// roc 2007-08 00416b40  unit: VCLuaFunction::?$CComObject  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416b40
//
// 00416b40  56                   push esi
// 00416b41  57                   push edi
// 00416b42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00416b46  83ec1c               sub esp, 0x1c
// 00416b49  8d7708               lea esi, [edi + 8]
// 00416b4c  8d4608               lea eax, [esi + 8]
// 00416b4f  8bcc                 mov ecx, esp
// 00416b51  89642428             mov dword ptr [esp + 0x28], esp
// 00416b55  50                   push eax
// 00416b56  ff159ce67700         call dword ptr [0x77e69c]
// 00416b5c  56                   push esi
// 00416b5d  8bcf                 mov ecx, edi
// 00416b5f  e87cefffff           call 0x415ae0
// 00416b64  5f                   pop edi
// 00416b65  5e                   pop esi
// 00416b66  c3                   ret 

struct VCLuaFunction {
    char pad[8];
    char field8[8];
    char field16[8];
    void sub_415AE0(const char*);

    void construct(const VCLuaFunction* other);
};

extern "C" void __stdcall copy_string(void*, const void*);

void VCLuaFunction::construct(const VCLuaFunction* other) {
    char buf[28];
    copy_string(buf, other->field16);
    sub_415AE0(other->field8);
}
