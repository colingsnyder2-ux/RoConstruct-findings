// from server: 74% by colin
// roc 2007-08 005c4460  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4460
//
// 005c4460  56                   push esi
// 005c4461  8bf1                 mov esi, ecx
// 005c4463  8b4e04               mov ecx, dword ptr [esi + 4]
// 005c4466  e8e53e1600           call 0x728350
// 005c446b  8b7624               mov esi, dword ptr [esi + 0x24]
// 005c446e  85f6                 test esi, esi
// 005c4470  7434                 je 0x5c44a6
// 005c4472  57                   push edi
// 005c4473  56                   push esi
// 005c4474  e80791ffff           call 0x5bd580
// 005c4479  8bf8                 mov edi, eax
// 005c447b  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c447f  50                   push eax
// 005c4480  56                   push esi
// 005c4481  e89af9ffff           call 0x5c3e20
// 005c4486  83c40c               add esp, 0xc
// 005c4489  50                   push eax
// 005c448a  56                   push esi
// 005c448b  56                   push esi
// 005c448c  e85ffbf6ff           call 0x533ff0
// 005c4491  83c404               add esp, 4
// 005c4494  8bc8                 mov ecx, eax
// 005c4496  e82566f7ff           call 0x53aac0
// 005c449b  57                   push edi
// 005c449c  56                   push esi
// 005c449d  e8ee90ffff           call 0x5bd590
// 005c44a2  83c408               add esp, 8
// 005c44a5  5f                   pop edi
// 005c44a6  5e                   pop esi
// 005c44a7  c20400               ret 4

struct VWaitScriptSlot {
    char pad0[4];
    int field4;
    char pad8[0x24 - 8];
    int field24;
    void method(int);
};

extern "C" int __stdcall sub_728350(int);
extern "C" int __cdecl sub_5bd580(int);
extern "C" int __cdecl sub_5bd590(int, int);
extern "C" int __cdecl sub_5c3e20(int, int);
extern "C" int __cdecl sub_533ff0(int, int, int);
extern "C" int __cdecl sub_53aac0(int);

void VWaitScriptSlot::method(int arg)
{
    sub_728350(field4);
    int s = field24;
    if (s != 0) {
        int e = sub_5bd580(s);
        int a = sub_5c3e20(s, arg);
        int b = sub_533ff0(s, s, a);
        sub_53aac0(b);
        sub_5bd590(s, e);
    }
}
