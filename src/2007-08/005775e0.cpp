// from server: 39% by colin
// roc 2007-08 005775e0  unit: RBX::Part::W4PartType::?$EnumDesc  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005775e0
//
// 005775e0  c70000000000         mov dword ptr [eax], 0
// 005775e6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005775ee  89642430             mov dword ptr [esp + 0x30], esp
// 005775f2  8911                 mov dword ptr [ecx], edx
// 005775f4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005775f8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005775fc  52                   push edx
// 005775fd  50                   push eax
// 005775fe  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00577603  e8f8faffff           call 0x577100
// 00577608  50                   push eax
// 00577609  8bce                 mov ecx, esi
// 0057760b  c644242000           mov byte ptr [esp + 0x20], 0
// 00577610  e8cb0af1ff           call 0x4880e0
// 00577615  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00577619  51                   push ecx
// 0057761a  e843860b00           call 0x62fc62
// 0057761f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577623  83c404               add esp, 4
// 00577626  c706ccac7a00         mov dword ptr [esi], 0x7aaccc
// 0057762c  8bc6                 mov eax, esi
// 0057762e  64890d00000000       mov dword ptr fs:[0], ecx
// 00577635  5e                   pop esi
// 00577636  83c40c               add esp, 0xc
// 00577639  c22400               ret 0x24

struct EnumDescriptor {
    void construct();
};

struct EnumDesc {
    char pad[8];
    EnumDesc();
};

extern "C" void __stdcall sub_62FC62(void*);
extern "C" void* __stdcall sub_577100(void*, void*);

void EnumDescriptor::construct()
{
}

EnumDesc::EnumDesc()
{
    *(int*)this = 0;
    *(int*)((char*)this + 0x14) = 0;
    *(void**)((char*)this + 0x30) = (void*)0;
    *(int*)((char*)this + 0x0) = 0;
    void* a = *(void**)((char*)this + 0x20);
    void* b = *(void**)((char*)this + 0x1c);
    *(unsigned char*)((char*)this + 0x1c) = 1;
    void* r = sub_577100(b, a);
    *(unsigned char*)((char*)this + 0x20) = 0;
    sub_62FC62(r);
    *(int*)((char*)this + 0x0) = 0x7aaccc;
}
