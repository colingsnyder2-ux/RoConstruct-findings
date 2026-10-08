// from server: 100% by colin
// roc 2007-08 0057cb50  unit: RBX::Workspace  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057cb50
//
// 0057cb50  8b81d8fdffff         mov eax, dword ptr [ecx - 0x228]
// 0057cb56  8b5058               mov edx, dword ptr [eax + 0x58]
// 0057cb59  56                   push esi
// 0057cb5a  8b742408             mov esi, dword ptr [esp + 8]
// 0057cb5e  81c1d8fdffff         add ecx, 0xfffffdd8
// 0057cb64  56                   push esi
// 0057cb65  ffd2                 call edx
// 0057cb67  8bc6                 mov eax, esi
// 0057cb69  5e                   pop esi
// 0057cb6a  c20400               ret 4

struct Workspace {
    char pad[0x228];
    void* field_0x228;
    void* method_0x58;
    void* func(void* arg);
};

void* Workspace::func(void* arg)
{
    void* obj = *(void**)((char*)this - 0x228);
    void* fn = *(void**)((char*)obj + 0x58);
    void* self = (char*)this - 0x228;
    ((void (__thiscall*)(void*, void*))fn)(self, arg);
    return arg;
}
