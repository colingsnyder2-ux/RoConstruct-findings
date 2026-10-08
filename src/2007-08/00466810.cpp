// from server: 75% by colin
// roc 2007-08 00466810  unit: CWebToolbox  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00466810
//
// 00466810  8b442404             mov eax, dword ptr [esp + 4]
// 00466814  56                   push esi
// 00466815  50                   push eax
// 00466816  8bf1                 mov esi, ecx
// 00466818  e8e9a11c00           call 0x630a06
// 0046681d  8b8ef4000000         mov ecx, dword ptr [esi + 0xf4]
// 00466823  85c9                 test ecx, ecx
// 00466825  5e                   pop esi
// 00466826  7405                 je 0x46682d
// 00466828  e8d7971c00           call 0x630004
// 0046682d  c20400               ret 4

struct CWebToolbox {
    char pad[0xf4];
    void* fieldF4;
    void method(int arg);
};

extern void __cdecl sub_00630A06(int arg);
extern void __cdecl sub_00630004(void* p);

void CWebToolbox::method(int arg)
{
    sub_00630A06(arg);
    if (fieldF4 != 0)
        sub_00630004(fieldF4);
}
