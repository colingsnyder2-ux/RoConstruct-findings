// from server: 47% by colin
// roc 2007-08 0056eaf0  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056eaf0
//
// 0056eaf0  51                   push ecx
// 0056eaf1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0056eaf5  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056eaf8  8b01                 mov eax, dword ptr [ecx]
// 0056eafa  8b4004               mov eax, dword ptr [eax + 4]
// 0056eafd  56                   push esi
// 0056eafe  52                   push edx
// 0056eaff  8d542414             lea edx, [esp + 0x14]
// 0056eb03  52                   push edx
// 0056eb04  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0056eb0c  ffd0                 call eax
// 0056eb0e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056eb12  8d4c2410             lea ecx, [esp + 0x10]
// 0056eb16  51                   push ecx
// 0056eb17  56                   push esi
// 0056eb18  e863e30100           call 0x58ce80
// 0056eb1d  83c408               add esp, 8
// 0056eb20  8bc6                 mov eax, esi
// 0056eb22  5e                   pop esi
// 0056eb23  59                   pop ecx
// 0056eb24  c20800               ret 8

struct TypedPropertyDescriptor {
    char pad[0x18];
    void* getset;
    int getValue(int arg);
};

extern "C" int __stdcall sub_58CE80(void* a, void* b);

int TypedPropertyDescriptor::getValue(int arg)
{
    void* tmp = 0;
    void* p = this->getset;
    int (__thiscall *fn)(void*, void**, int) = *(int (__thiscall **)(void*, void**, int))(*((int*)p) + 4);
    fn(p, &tmp, arg);
    sub_58CE80(tmp, (void*)arg);
    return (int)tmp;
}
