// from server: 74% by colin
// roc 2007-08 00593ee0  unit: RBX::VArrowTool::?$TToolVerb  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593ee0
//
// 00593ee0  8b442404             mov eax, dword ptr [esp + 4]
// 00593ee4  56                   push esi
// 00593ee5  50                   push eax
// 00593ee6  8bf1                 mov esi, ecx
// 00593ee8  e823fe0400           call 0x5e3d10
// 00593eed  d9ee                 fldz 
// 00593eef  33c0                 xor eax, eax
// 00593ef1  884620               mov byte ptr [esi + 0x20], al
// 00593ef4  c706a4047b00         mov dword ptr [esi], 0x7b04a4
// 00593efa  c7460488047b00       mov dword ptr [esi + 4], 0x7b0488
// 00593f01  894624               mov dword ptr [esi + 0x24], eax
// 00593f04  894628               mov dword ptr [esi + 0x28], eax
// 00593f07  88462c               mov byte ptr [esi + 0x2c], al
// 00593f0a  d95634               fst dword ptr [esi + 0x34]
// 00593f0d  d95638               fst dword ptr [esi + 0x38]
// 00593f10  d95e3c               fstp dword ptr [esi + 0x3c]
// 00593f13  66894640             mov word ptr [esi + 0x40], ax
// 00593f17  66894642             mov word ptr [esi + 0x42], ax
// 00593f1b  894644               mov dword ptr [esi + 0x44], eax
// 00593f1e  894648               mov dword ptr [esi + 0x48], eax
// 00593f21  8bc6                 mov eax, esi
// 00593f23  5e                   pop esi
// 00593f24  c20400               ret 4

struct Verb {
    void* vtable0;
    void* vtable1;
    char pad[0x18];
    char flag20;
    int field24;
    int field28;
    char flag2c;
    char pad2d[7];
    float f34;
    float f38;
    float f3c;
    short s40;
    short s42;
    int field44;
    int field48;
};

extern "C" void __stdcall sub_5e3d10(void*);

struct TToolVerb : Verb {
    void construct(void* arg);
};

void TToolVerb::construct(void* arg)
{
    sub_5e3d10(arg);
    flag20 = 0;
    vtable0 = (void*)0x7b04a4;
    vtable1 = (void*)0x7b0488;
    field24 = 0;
    field28 = 0;
    flag2c = 0;
    f34 = 0.0f;
    f38 = 0.0f;
    f3c = 0.0f;
    s40 = 0;
    s42 = 0;
    field44 = 0;
    field48 = 0;
}
