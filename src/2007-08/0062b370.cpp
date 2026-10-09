// from server: 53% by colin
// roc 2007-08 0062b370  unit: RBX::GroupDragTool  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b370
//
// 0062b370  83ec30               sub esp, 0x30
// 0062b373  56                   push esi
// 0062b374  57                   push edi
// 0062b375  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0062b379  8bcf                 mov ecx, edi
// 0062b37b  e8008cf4ff           call 0x573f80
// 0062b380  8bf0                 mov esi, eax
// 0062b382  56                   push esi
// 0062b383  8d4c240c             lea ecx, [esp + 0xc]
// 0062b387  e844e2edff           call 0x5095d0
// 0062b38c  d94624               fld dword ptr [esi + 0x24]
// 0062b38f  d95c242c             fstp dword ptr [esp + 0x2c]
// 0062b393  8d442408             lea eax, [esp + 8]
// 0062b397  d94628               fld dword ptr [esi + 0x28]
// 0062b39a  6a01                 push 1
// 0062b39c  d95c2434             fstp dword ptr [esp + 0x34]
// 0062b3a0  50                   push eax
// 0062b3a1  d9462c               fld dword ptr [esi + 0x2c]
// 0062b3a4  d95c243c             fstp dword ptr [esp + 0x3c]
// 0062b3a8  e8e304f8ff           call 0x5ab890
// 0062b3ad  83c408               add esp, 8
// 0062b3b0  8d4c2408             lea ecx, [esp + 8]
// 0062b3b4  51                   push ecx
// 0062b3b5  8bcf                 mov ecx, edi
// 0062b3b7  e824caf4ff           call 0x577de0
// 0062b3bc  5f                   pop edi
// 0062b3bd  5e                   pop esi
// 0062b3be  83c430               add esp, 0x30
// 0062b3c1  c3                   ret 

struct Vector3 {
    float x, y, z;
};

struct MouseCommand {
    void* vtable;
};

struct GroupDragTool {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
};

struct MegaDragger {
    char pad[0x24];
    float f24;
    float f28;
    float f2c;
};

extern "C" void* __stdcall sub_573F80(void* p);
extern "C" void __stdcall sub_5095D0(void* p, void* q);
extern "C" void __stdcall sub_5AB890(void* p, int a, int b);
extern "C" void __stdcall sub_577DE0(void* p, void* q);

void GroupDragTool_method(GroupDragTool* self)
{
    void* p = sub_573F80(self);
    MegaDragger* md = (MegaDragger*)p;
    char buf[0x30];
    sub_5095D0(buf, md);
    Vector3 v;
    v.x = md->f24;
    v.y = md->f28;
    v.z = md->f2c;
    sub_5AB890(&v, 1, 0);
    sub_577DE0(self, &v);
}
