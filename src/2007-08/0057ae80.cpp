// from server: 70% by colin
// roc 2007-08 0057ae80  unit: RBX::Workspace  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ae80
//
// 0057ae80  56                   push esi
// 0057ae81  8bf1                 mov esi, ecx
// 0057ae83  8b86c0010000         mov eax, dword ptr [esi + 0x1c0]
// 0057ae89  8d4804               lea ecx, [eax + 4]
// 0057ae8c  8b01                 mov eax, dword ptr [ecx]
// 0057ae8e  8b5008               mov edx, dword ptr [eax + 8]
// 0057ae91  57                   push edi
// 0057ae92  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057ae96  57                   push edi
// 0057ae97  ffd2                 call edx
// 0057ae99  57                   push edi
// 0057ae9a  8d8e40010000         lea ecx, [esi + 0x140]
// 0057aea0  e82b230400           call 0x5bd1d0
// 0057aea5  5f                   pop edi
// 0057aea6  5e                   pop esi
// 0057aea7  c20400               ret 4

struct Workspace {
    char pad[0x140];
    char pad2[0x80];
    void* field_1c0;
    void func(int arg);
};

extern "C" void __stdcall sub_5bd1d0(void* arg);

void Workspace::func(int arg) {
    char* p = (char*)field_1c0;
    void** vtable = *(void***)(p + 4);
    void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vtable[2];
    fn(p + 4, arg);
    sub_5bd1d0((char*)this + 0x140);
}
