// from server: 100% by colin
// roc 2007-08 0057ce80  unit: RBX::Workspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ce80
//
// 0057ce80  56                   push esi
// 0057ce81  8bf1                 mov esi, ecx
// 0057ce83  8b8e1c030000         mov ecx, dword ptr [esi + 0x31c]
// 0057ce89  85c9                 test ecx, ecx
// 0057ce8b  7409                 je 0x57ce96
// 0057ce8d  8b01                 mov eax, dword ptr [ecx]
// 0057ce8f  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0057ce92  6a01                 push 1
// 0057ce94  ffd2                 call edx
// 0057ce96  6a00                 push 0
// 0057ce98  8bce                 mov ecx, esi
// 0057ce9a  c7861c03000000000000 mov dword ptr [esi + 0x31c], 0
// 0057cea4  e837f5ffff           call 0x57c3e0
// 0057cea9  5e                   pop esi
// 0057ceaa  c3                   ret 

struct Workspace {
    char pad[0x31c];
    void* field_31c;
    void func_57c3e0(int);
    void func_57ce80();
};

void Workspace::func_57ce80()
{
    void* p = field_31c;
    if (p) {
        void** vtable = *(void***)p;
        void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vtable[0x2c / 4];
        fn(p, 1);
    }
    field_31c = 0;
    func_57c3e0(0);
}
