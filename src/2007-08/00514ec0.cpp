// from server: 100% by colin
// roc 2007-08 00514ec0  unit: G3D::_internal::DialogTemplate  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514ec0
//
// 00514ec0  6a00                 push 0
// 00514ec2  6a00                 push 0
// 00514ec4  6a00                 push 0
// 00514ec6  e895822100           call 0x72d160
// 00514ecb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00514ecf  898110010000         mov dword ptr [ecx + 0x110], eax
// 00514ed5  c3                   ret 

struct DialogTemplate {
    char pad[0x110];
    int field110;
};

extern "C" int __stdcall sub_72D160(int, int, int);

void __cdecl DialogTemplate_init(DialogTemplate* self) {
    self->field110 = sub_72D160(0, 0, 0);
}
