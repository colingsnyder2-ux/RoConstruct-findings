// from server: 50% by colin
// roc 2007-08 005f19f0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f19f0
//
// 005f19f0  50                   push eax
// 005f19f1  e81a751300           call 0x728f10
// 005f19f6  8d8c249c000000       lea ecx, [esp + 0x9c]
// 005f19fd  51                   push ecx
// 005f19fe  e84d94e3ff           call 0x42ae50
// 005f1a03  83c440               add esp, 0x40
// 005f1a06  50                   push eax
// 005f1a07  8d4c2410             lea ecx, [esp + 0x10]
// 005f1a0b  e860701300           call 0x728a70
// 005f1a10  8d54240c             lea edx, [esp + 0xc]
// 005f1a14  52                   push edx
// 005f1a15  8d4c2448             lea ecx, [esp + 0x48]
// 005f1a19  e8f2741300           call 0x728f10
// 005f1a1e  8d442444             lea eax, [esp + 0x44]
// 005f1a22  50                   push eax
// 005f1a23  8bce                 mov ecx, esi
// 005f1a25  e846701300           call 0x728a70
// 005f1a2a  5f                   pop edi
// 005f1a2b  8bc6                 mov eax, esi
// 005f1a2d  5e                   pop esi
// 005f1a2e  83c474               add esp, 0x74
// 005f1a31  c24000               ret 0x40

struct S {
    void m(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void __stdcall f728f10(void*);
extern "C" void __stdcall f42ae50(void*);
extern "C" void __stdcall f728a70(void*);

void S::m(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
{
    char buf[0x74];
    f728f10(&buf[0x74]);
    f42ae50(&buf[0x9c]);
    f728a70(&buf[0x10]);
    f728f10(&buf[0x48]);
    f728a70(&buf[0x44]);
}
