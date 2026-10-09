// from server: 93% by colin
// roc 2007-08 0056eb30  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056eb30
//
// 0056eb30  51                   push ecx
// 0056eb31  33c0                 xor eax, eax
// 0056eb33  56                   push esi
// 0056eb34  6689442404           mov word ptr [esp + 4], ax
// 0056eb39  6689442406           mov word ptr [esp + 6], ax
// 0056eb3e  8d442404             lea eax, [esp + 4]
// 0056eb42  8bf1                 mov esi, ecx
// 0056eb44  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056eb48  50                   push eax
// 0056eb49  51                   push ecx
// 0056eb4a  e8e1e30100           call 0x58cf30
// 0056eb4f  83c408               add esp, 8
// 0056eb52  84c0                 test al, al
// 0056eb54  741b                 je 0x56eb71
// 0056eb56  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056eb59  8b11                 mov edx, dword ptr [ecx]
// 0056eb5b  8b5208               mov edx, dword ptr [edx + 8]
// 0056eb5e  8d442404             lea eax, [esp + 4]
// 0056eb62  50                   push eax
// 0056eb63  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056eb67  50                   push eax
// 0056eb68  ffd2                 call edx
// 0056eb6a  b001                 mov al, 1
// 0056eb6c  5e                   pop esi
// 0056eb6d  59                   pop ecx
// 0056eb6e  c20800               ret 8
// 0056eb71  32c0                 xor al, al
// 0056eb73  5e                   pop esi
// 0056eb74  59                   pop ecx
// 0056eb75  c20800               ret 8

struct VVector2int16 { short x; short y; };

struct TypedPropertyDescriptor {
    char pad[0x18];
    void* getset;
    bool m(const VVector2int16* v, const VVector2int16* w);
};

extern "C" bool __cdecl sub_58cf30(const VVector2int16* a, const VVector2int16* b);

bool TypedPropertyDescriptor::m(const VVector2int16* v, const VVector2int16* w)
{
    VVector2int16 tmp;
    tmp.x = 0;
    tmp.y = 0;
    if (sub_58cf30(v, &tmp)) {
        void** p = (void**)getset;
        void* vt = *p;
        void (__thiscall *fn)(void*, const VVector2int16*) = *(void (__thiscall **)(void*, const VVector2int16*))((char*)vt + 8);
        fn(getset, &tmp);
        return true;
    }
    return false;
}
