// from server: 84% by colin
// roc 2007-08 005e5c80  unit: RBX::NewNullTool  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5c80
//
// 005e5c80  8b442404             mov eax, dword ptr [esp + 4]
// 005e5c84  56                   push esi
// 005e5c85  57                   push edi
// 005e5c86  8bf1                 mov esi, ecx
// 005e5c88  8d7e40               lea edi, [esi + 0x40]
// 005e5c8b  57                   push edi
// 005e5c8c  50                   push eax
// 005e5c8d  e87ee2ffff           call 0x5e3f10
// 005e5c92  85c0                 test eax, eax
// 005e5c94  741f                 je 0x5e5cb5
// 005e5c96  57                   push edi
// 005e5c97  8bce                 mov ecx, esi
// 005e5c99  e892dbffff           call 0x5e3830
// 005e5c9e  84c0                 test al, al
// 005e5ca0  7413                 je 0x5e5cb5
// 005e5ca2  6838cf7a00           push 0x7acf38
// 005e5ca7  8d4e20               lea ecx, [esi + 0x20]
// 005e5caa  ff152ce67700         call dword ptr [0x77e62c]
// 005e5cb0  5f                   pop edi
// 005e5cb1  5e                   pop esi
// 005e5cb2  c20400               ret 4
// 005e5cb5  6860d27b00           push 0x7bd260
// 005e5cba  8d4e20               lea ecx, [esi + 0x20]
// 005e5cbd  ff152ce67700         call dword ptr [0x77e62c]
// 005e5cc3  5f                   pop edi
// 005e5cc4  5e                   pop esi
// 005e5cc5  c20400               ret 4

struct S_func_005e5c80
{
    char pad0[0x20];
    char field20[0x20];
    char field40[0x20];
    void func_005e5c80(int arg);
};

extern "C" int __stdcall sub_005e3f10(int a, void* b);
extern "C" char __stdcall sub_005e3830(void* a);
extern "C" void* __stdcall sub_0077e62c(void* a, const char* b);

void S_func_005e5c80::func_005e5c80(int arg)
{
    if (sub_005e3f10(arg, field40) != 0)
    {
        if (sub_005e3830(field40) != 0)
        {
            sub_0077e62c(field20, (const char*)0x7acf38);
            return;
        }
    }
    sub_0077e62c(field20, (const char*)0x7bd260);
}
